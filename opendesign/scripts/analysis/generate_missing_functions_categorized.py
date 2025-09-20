#!/usr/bin/env python3
"""
Generate an enriched categorized YAML of missing functions by leveraging:
- opendesign/docs/missing_functions.txt (list of FUN_ symbols missing in app)
- ghidradecompile.txt (address→name/category hints)
- opendesign/docs/function_coverage.yaml (address→category ground truth for implemented functions)
- opendesign/docs/decompiled_map.csv (curated address→target_symbol mappings)

Output: opendesign/docs/missing_functions_categorized.yaml

Approach:
1) Build an address-prefix→category map from coverage YAML (strong signal) and CSV/Ghidra (auxiliary).
   We use hex address prefixes of length PFX=6 (e.g., 0x1400d7...) to cluster nearby functions into the same UI subsystem.
2) Parse Ghidra lines to extract pairs (address,name,category_guess) when available; contributes to prefix votes.
3) For each missing FUN_XXXX address, infer its 0x-prefixed address and map category by majority vote of prefix.
4) Emit stable YAML with summary, counts, metadata, and categories blocks.

Assumptions:
- FUN_XXXXXXXX addresses are 64-bit RVA-like absolute labels and can be converted to 0xXXXXXXXX format (prefix 0x).
- Category labels in coverage YAML are the canonical taxonomy; we keep unknowns as 'Uncategorized'.

Usage:
  python3 opendesign/scripts/analysis/generate_missing_functions_categorized.py
"""
from __future__ import annotations

import re
import sys
import csv
import time
from collections import defaultdict, Counter
from pathlib import Path

try:
    import yaml  # type: ignore
except Exception:
    yaml = None


ROOT = Path(__file__).resolve().parents[3]
DOCS = ROOT / "opendesign" / "docs"
GHIDRA_FILE = ROOT / "ghidradecompile.txt"
MISSING_TXT = DOCS / "missing_functions.txt"
COVERAGE_YAML = DOCS / "function_coverage.yaml"
CSV_MAP = DOCS / "decompiled_map.csv"
OUT_YAML = DOCS / "missing_functions_categorized.yaml"


ADDR_RE = re.compile(r"0x([0-9a-fA-F]+)")
FUN_RE = re.compile(r"^FUN_([0-9a-fA-F]{8,})$")


def read_missing() -> list[str]:
    if not MISSING_TXT.exists():
        sys.exit(f"Missing list not found: {MISSING_TXT}")
    return [ln.strip() for ln in MISSING_TXT.read_text().splitlines() if ln.strip()]


def hex_from_fun(fun: str) -> str | None:
    m = FUN_RE.match(fun)
    if not m:
        return None
    return "0x" + m.group(1).lower()


def prefix(addr: str, pfx_len: int = 6) -> str:
    # addr like 0x1400d7410 -> take first 6 hex chars after 0x: 1400d7
    h = addr[2:].lower()
    return h[:pfx_len]


def safe_yaml_load(p: Path) -> dict:
    if yaml is None:
        sys.exit("PyYAML not installed. Please install with: pip install pyyaml")
    return yaml.safe_load(p.read_text())


def build_prefix_votes_from_coverage(pfx_len: int = 6) -> Counter[tuple[str, str]]:
    votes: Counter[tuple[str, str]] = Counter()
    if not COVERAGE_YAML.exists():
        return votes
    data = safe_yaml_load(COVERAGE_YAML)
    for entry in data.get("functions", []):
        addr = entry.get("address")
        cat = entry.get("category")
        if not addr or not cat:
            continue
        m = ADDR_RE.match(str(addr))
        if not m:
            continue
        p = prefix(m.group(0), pfx_len)
        votes[(p, cat)] += 1
    return votes


def build_prefix_votes_from_csv(pfx_len: int = 6) -> Counter[tuple[str, str]]:
    votes: Counter[tuple[str, str]] = Counter()
    if not CSV_MAP.exists():
        return votes
    with CSV_MAP.open(newline="", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        for row in reader:
            addr = row.get("address")
            if not addr:
                continue
            m = ADDR_RE.match(addr)
            if not m:
                continue
            # Infer category from target_symbol path if present (e.g., ui::ribbon::... -> "Ribbon Interface")
            target = (row.get("target_symbol") or "").strip()
            cat = None
            if target.startswith("ui::ribbon::"):
                cat = "Ribbon Interface"
            elif target.startswith("ui::statusbar::"):
                cat = "Status Bar & Panel"
            elif target.startswith("ui::printpreview::"):
                cat = "Advanced UI"
            elif target.startswith("compat::win::"):
                cat = "Window Management"
            elif target.startswith("compat::mfc::"):
                cat = "Dialog & Form"
            elif target.startswith("framework::"):
                cat = "Framework"
            elif target.startswith("io::settings::"):
                cat = "Settings"
            elif target.startswith("cad::document::"):
                cat = "CAD Document"
            # Fallback: if original_name hints
            if not cat:
                orig = (row.get("original_name") or "").lower()
                if "ribbon" in orig:
                    cat = "Ribbon Interface"
                elif "dialog" in orig or "form" in orig:
                    cat = "Dialog & Form"
                elif orig.startswith("oncommand") or orig.startswith("onupdateui"):
                    cat = "Command handlers"
                elif "window" in orig:
                    cat = "Window Management"
            if not cat:
                continue
            p = prefix(m.group(0), pfx_len)
            votes[(p, cat)] += 1
    return votes


def build_prefix_votes_from_ghidra(pfx_len: int = 6) -> Counter[tuple[str, str]]:
    votes: Counter[tuple[str, str]] = Counter()
    if not GHIDRA_FILE.exists():
        return votes
    text = GHIDRA_FILE.read_text(encoding="utf-8", errors="ignore")
    # Simple heuristic: lines like | `HideUI` | 1401f1911 | ... | and nearby section headings imply categories
    # We'll scan for section headings and remember current category context.
    current_cat = None
    for line in text.splitlines():
        s = line.strip()
        if not s:
            continue
        # Detect category section titles
        if s.startswith("| Function | Address"):
            # header line, ignore
            continue
        # Known category anchors used in ghidradecompile.txt
        if s.startswith("UI Management & Control Functions"):
            current_cat = "UI Management & Control"
            continue
        if s.startswith("BCGSoft Professional UI Framework Functions"):
            current_cat = "Advanced UI"
            continue
        if s.startswith("Window Management Functions"):
            current_cat = "Window Management"
            continue
        if s.startswith("Dialog & Form Functions"):
            current_cat = "Dialog & Form"
            continue
        if s.startswith("Initialization Functions"):
            current_cat = "Initialization"
            continue
        if s.startswith("Ribbon Interface Functions"):
            current_cat = "Ribbon Interface"
            continue
        if s.startswith("Menu & Context Menu Functions"):
            current_cat = "Menu & Context Menu"
            continue
        if s.startswith("Command Handler Functions"):
            current_cat = "Command handlers"
            continue
        if s.startswith("Status Bar & Panel Functions"):
            current_cat = "Status Bar & Panel"
            continue
        if s.startswith("Toolbar Functions"):
            current_cat = "Toolbar"
            continue
        # Parse rows with backticked name and address
        if "|" in s and current_cat:
            # Split table row: | `Name` | 1401f1911 | ... |
            parts = [p.strip() for p in s.strip("|").split("|")]
            if len(parts) >= 2:
                addr_field = parts[1]
                # address can be bare hex without 0x
                m = re.search(r"([0-9a-fA-F]{7,16})", addr_field)
                if m:
                    addr = "0x" + m.group(1).lower()
                    p = prefix(addr, pfx_len)
                    votes[(p, current_cat)] += 1
    return votes


def derive_prefix_category(votes: Counter[tuple[str, str]]) -> dict[str, str]:
    by_prefix: dict[str, Counter[str]] = defaultdict(Counter)
    for (pfx, cat), c in votes.items():
        by_prefix[pfx][cat] += c
    mapping: dict[str, str] = {}
    for pfx, cnts in by_prefix.items():
        # majority vote; tie-breaker by deterministic sort
        best = sorted(cnts.items(), key=lambda x: (-x[1], x[0]))[0][0]
        mapping[pfx] = best
    return mapping


def categorize_missing(missing: list[str], pfx_map: dict[str, str], pfx_len: int = 6) -> dict[str, list[str]]:
    cats: dict[str, list[str]] = defaultdict(list)
    for fun in missing:
        addr = hex_from_fun(fun)
        if not addr:
            cats["Uncategorized"].append(fun)
            continue
        p = prefix(addr, pfx_len)
        cat = pfx_map.get(p)
        if not cat:
            cat = "Uncategorized"
        cats[cat].append(fun)
    # sort members within each category
    for k in list(cats.keys()):
        cats[k] = sorted(set(cats[k]))
    return dict(sorted(cats.items(), key=lambda x: (x[0] != "Uncategorized", x[0])))


def emit_yaml(categories: dict[str, list[str]], total: int) -> str:
    generated_on = time.strftime("%Y-%m-%d %H:%M:%S %Z", time.localtime())
    header = {
        "missing_functions_categorized": {
            "generated_on": generated_on,
            "source_files": {
                "missing_functions": str(MISSING_TXT.relative_to(ROOT)),
                "ghidra": str(GHIDRA_FILE.relative_to(ROOT)) if GHIDRA_FILE.exists() else None,
                "coverage_yaml": str(COVERAGE_YAML.relative_to(ROOT)) if COVERAGE_YAML.exists() else None,
                "decompiled_map_csv": str(CSV_MAP.relative_to(ROOT)) if CSV_MAP.exists() else None,
            },
            "total_missing": total,
            "categories_count": len(categories),
            "category_counts": {k: len(v) for k, v in categories.items()},
            "categories": categories,
        }
    }
    if yaml is None:
        # minimal manual YAML if PyYAML missing
        lines = ["missing_functions_categorized:"]
        lines.append(f"  generated_on: {generated_on}")
        lines.append(f"  total_missing: {total}")
        lines.append(f"  categories_count: {len(categories)}")
        lines.append("  category_counts:")
        for k, v in categories.items():
            lines.append(f"    {k}: {len(v)}")
        lines.append("  categories:")
        for k, v in categories.items():
            lines.append(f"    {k}:")
            for fun in v:
                lines.append(f"      - {fun}")
        return "\n".join(lines) + "\n"
    return yaml.safe_dump(header, sort_keys=False, width=100000)


def main() -> int:
    missing = read_missing()
    # Build votes from multiple sources
    votes = Counter()
    votes += build_prefix_votes_from_coverage()
    votes += build_prefix_votes_from_csv()
    votes += build_prefix_votes_from_ghidra()
    pfx_map = derive_prefix_category(votes)

    categories = categorize_missing(missing, pfx_map)
    out = emit_yaml(categories, total=len(missing))
    OUT_YAML.write_text(out, encoding="utf-8")
    print(f"Wrote {OUT_YAML} with {len(missing)} items across {len(categories)} categories.")
    # Simple report to stdout: show top-10 prefixes mapping
    top_prefixes = sorted(
        ((p, c) for (p, _), c in votes.items()), key=lambda x: -x[1]
    )[:10]
    if top_prefixes:
        print("Top prefix votes:")
        for p, _ in top_prefixes:
            cats = {cat: cnt for (pp, cat), cnt in votes.items() if pp == p}
            best = max(cats.items(), key=lambda x: x[1])
            print(f"  {p}: {best[0]} ({best[1]} votes) -> {cats}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
