# Analysis Toolkit

This folder contains tools to analyze decompiled artifacts and keep the docs in sync.

## Artifacts
- Input:
  - `opendesign/docs/missing_functions.txt` — Sorted list of `FUN_...` symbols present in codex but missing in the app.
  - `opendesign/docs/function_coverage.yaml` — Canonical mapping of known functions with addresses and categories.
  - `opendesign/docs/decompiled_map.csv` — Curated CSV mapping (`id,address,original_name,target_symbol`). Optional but highly effective.
  - `ghidradecompile.txt` — UI-oriented Ghidra export with categories and addresses in tables.
  - `opendesign/docs/design.exe.md` and `opendesign/docs/design.exe (2).md` — Full decompilation markdown files used for per-function keyword inference.
- Output:
  - `opendesign/docs/missing_functions_categorized.yaml` — Grouped YAML (counts, metadata, categories → functions).
  - `opendesign/docs/missing_functions_categorized.csv` — Per-function flat view with inferred category and source.
  - `opendesign/docs/missing_functions_hotspots.md` — Top address-prefix clusters to target with manual mapping.

## Usage
```bash
python3 opendesign/scripts/analysis/generate_missing_functions_categorized.py
```

## Extending category inference
- Add curated entries to `opendesign/docs/decompiled_map.csv` (even a few dozen yield big gains).
- Expand keyword rules in the script (look for `cat_keywords`) to capture common UI frameworks/classes (e.g., more BCG/MFC helpers).
- If your address clusters are too broad, increase the prefix length from `6` to `7` or `8` in the script.

## Notes
- Source weighting: Coverage (3) > CSV (2) > Ghidra table (1). Per-function body inference overrides prefix mapping when available.
- All outputs are deterministic given the inputs; re-run the script whenever you update the inputs.
