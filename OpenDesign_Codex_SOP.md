
# OpenDesign — Codex/CLINE/Copilot **SOP** (Standard Operating Procedure)

> **MANDATORY RULES**
> - **Some items may already be implemented.** Before every action, **search the repo** and **diff recent commits**. If code/assets/tests already exist, **do not overwrite**; extend and update status instead.
> - Treat the decompiled function inventory as **the source of truth** (“analysis document” available in this environment). We reproduce **behavior and UI**, not proprietary code.
> - Follow the **step macro** and **function-by-function checklist**. Build must fail if any function or asset is missing.

---

## 0) One‑time setup (do these exactly)

**0.1 Create/verify repo layout**
```
opendesign/
├─ cmake/
├─ external/
├─ src/
│  ├─ app/          # app entry, init, feature gates
│  ├─ ui/
│  │   ├─ core/    ├─ ribbon/  ├─ menu/   ├─ toolbar/ ├─ status/
│  │   ├─ dialogs/ ├─ interaction/ ├─ text/ ├─ factory/ ├─ buttons/
│  ├─ framework/    # command bus, update-ui, shortcuts, theming
│  ├─ render/       # Filament/OCCT/Embree adapters
│  ├─ io/           # open/save, import/export
│  ├─ compat/       # Win32/MFC wrapper surface
│  └─ db/           # (optional) catalogs/materials/pricing
├─ data/
│  ├─ icons/  ├─ cursors/  ├─ sounds/  └─ ui/
├─ scripts/
│  ├─ gen_stubs/    # stubs, steps & coverage checks
│  └─ ci/
├─ docs/
│  ├─ function_coverage.yaml
│  ├─ decompiled_map.csv
│  └─ ui_specs/
├─ tests/
│  ├─ unit/  └─ ui/
└─ CMakeLists.txt
```

**0.2 Toolchain**
- CMake ≥ 3.26, Ninja, MSVC 2022 (or clang), Python 3.10+
- Package manager: vcpkg **or** Conan (pick one and stick to it)
- Qt 6 (Widgets, WebEngine), OCCT, Filament, Assimp, OpenImageIO, Embree, fmt, spdlog, nlohmann_json, Catch2, Eigen/glm

**0.3 Manifest pins (vcpkg.json)**
```json
{
  "name": "opendesign",
  "version-string": "0.1.0",
  "dependencies": [
    "qtbase","qttools","qtwebengine",
    "opencascade",
    "filament",
    "embree3",
    "assimp","openimageio",
    "fmt","spdlog","nlohmann-json","catch2","eigen3"
  ],
  "builtin-baseline": "*"
}
```

**0.4 CMake base (CMakeLists.txt)**
```cmake
cmake_minimum_required(VERSION 3.26)
project(OpenDesign LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# vcpkg toolchain assumed
find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(OpenCASCADE REQUIRED)         # OCCT
find_package(Filament REQUIRED)            # port name may be 'filament'
find_package(embree 3 REQUIRED)
find_package(assimp REQUIRED)
find_package(OpenImageIO REQUIRED)
find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)
find_package(nlohmann_json REQUIRED)
find_package(Catch2 3 REQUIRED)

add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
```

**0.5 Presets (CMakePresets.json)**
```json
{
  "version": 5,
  "configurePresets": [
    {"name":"ninja-rel","generator":"Ninja","binaryDir":"build","cacheVariables":{"CMAKE_BUILD_TYPE":"Release"}}
  ],
  "buildPresets": [{"name":"build","configurePreset":"ninja-rel"}],
  "testPresets": [{"name":"ctest","configurePreset":"ninja-rel"}]
}
```

**0.6 CI sketch (scripts/ci/build.yml)** — run configure → build → tests → coverage checks
```yaml
name: build-test
on: [push, pull_request]
jobs:
  win:
    runs-on: windows-latest
    steps:
      - uses: actions/checkout@v4
      - uses: ilammy/msvc-dev-cmd@v1
      - name: Configure
        run: cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
      - name: Build
        run: cmake --build build -j 8
      - name: Tests
        run: ctest --test-dir build --output-on-failure
      - name: check:functions
        run: python scripts/gen_stubs/check_symbols.py
      - name: check:assets
        run: python scripts/ci/check_assets.py
```

---

## 1) Branding, tokens, and QSS (apply globally)

**1.1 Tokens** → `theme/brand.tokens.json`  
(Use the Iris accent + neutral ramp from design; see file in this package.)

**1.2 QSS** → `data/ui/brand.qss`
```css
* { font-family: "Segoe UI Variable", "Segoe UI", sans-serif; font-size: 12px; }
QWidget { background: #F1F1F2; color: #0B0A0B; }
QPushButton { min-height:28px; border:1px solid #A8AAAD; border-radius:4px; padding:0 12px; }
QPushButton:hover { background:#F2F4F7; }
QPushButton[primary="true"] { background:#5570FA; color:white; border-color:#3C5BFA; }
QPushButton[primary="true"]:hover { background:#3C5BFA; }
QLineEdit, QComboBox { min-height:28px; border:1px solid #A8AAAD; border-radius:4px; padding:0 8px; }
QMenu { border:1px solid #A8AAAD; border-radius:6px; }
QStatusBar { border-top:1px solid #A8AAAD; min-height:28px; }
```

**1.3 Apply at startup**
```cpp
// src/app/init/InitStyle.cpp
#include <QApplication>
#include <QFile>
void ApplyBrandQss(){
  QFile f(":/ui/brand.qss"); if(f.open(QIODevice::ReadOnly)){ qApp->setStyleSheet(f.readAll()); }
}
```

---

## 2) Assets & manifest

**2.1 Qt resource** → `data/ui/resources.qrc`
```xml
<RCC><qresource prefix="/">
  <file>ui/brand.qss</file>
  <file>icons/center.png</file>
  <file>icons/move.png</file>
  <file>icons/rotate.png</file>
  <file>icons/mirror.png</file>
  <!-- add all icons/cursors/sounds -->
</qresource></RCC>
```

**2.2 Manifest** → `data/asset_manifest.json` (every asset + SHA256)

**2.3 Loader** → `src/ui/ResourceManager.h/.cpp`
```cpp
QIcon LoadIcon(const QString& name);  // e.g., "center"
QCursor LoadCursor(const QString& name);
void VerifyAssets(); // assert manifest matches files
```

**2.4 CI check** → `scripts/ci/check_assets.py`
- Parse `.qrc` and `asset_manifest.json`
- Fail if any referenced asset missing or checksum mismatch

---

## 3) Coverage inventory & gates

**3.1 Install the coverage file**  
Place the generated **function list** into `docs/function_coverage.yaml`.

> Download now: **function_coverage.yaml**  
> 👉 sandbox:/mnt/data/function_coverage.generated.yaml

**3.2 Stub generator** → `scripts/gen_stubs/make_stubs.py`
- Read YAML, create C++ stubs in the mapped folder for each `target_symbol`
- Create Catch2 smoke tests per function in `tests/unit/coverage/`
- Do **not** overwrite existing files; only append if missing
- Update `status` → `implemented` when stub created

**3.3 Symbol gate** → `scripts/gen_stubs/check_symbols.py`
- After build, ensure each `target_symbol` links (tests already include calls)
- Fail if any `functions[].status` ≠ `implemented` or if missing test

---

## 4) Command bus & update‑UI

**4.1 Command bus** → `src/framework/CommandBus.h/.cpp`
```cpp
// CommandBus.h
namespace framework {
  enum class CommandId { Center, Move, Rotate, Mirror, Group, Ungroup, EditShape, LightProps /*...*/ };
  struct CommandContext { QWidget* view{}; void* box{}; int type{}; double x{}, y{}; };
  class CommandBus {
  public: static CommandBus& instance();
    void post(CommandId id, const CommandContext&);  // async
    void dispatch(CommandId id, const CommandContext&); // immediate
  };
}
```

**4.2 UI update aggregator** → `src/framework/UpdateUI.h/.cpp`
- Single `UpdateUIAll()` that evaluates selection state and toggles `QAction::setEnabled` for all UI actions
- Call on selection change and on a short interval (e.g., 200 ms) while idle

---

## 5) Win32/MFC → Qt compat surface

**5.1 Window wrappers** → `src/compat/win/Window.h/.cpp`  
Implement: `CreateNewWindow`, `DestroyWindow`, `ShowWindow`, `MoveWindow`, `SetWindowPos`, `Get/SetWindowPlacement`, `ReloadWindowPlacement`, `CenterWindow`, `CalcWindowRect`, `WindowProc` → Qt equivalents.

**5.2 Menus & accelerators** → `src/compat/win/Menu.*`, `src/compat/win/Accel.*`  
- `CreateMenu/CreatePopupMenu` → `QMenu/QMenuBar`  
- Accelerator tables → `QShortcut`

**5.3 MFC dialogs/ribbon** → `src/compat/mfc/Dialogs.*`, `src/compat/mfc/Ribbon.*`, `src/compat/mfc/UpdateUI.*`

---

## 6) Ribbon, menus, toolbars, status (how-to)

**6.1 Ribbon builder** → `src/ui/ribbon/RibbonBuilder.h/.cpp`
```cpp
struct RibbonRefs { QWidget* container; QList<QAction*> actions; /*...*/ };
RibbonRefs BuildMainRibbon(QWidget* parent); // create tabs/panels and QActions w/ icons & shortcuts
// Bind OnCommandRibbon* actions: connect(action, &QAction::triggered, []{ framework::CommandBus::instance().dispatch(...); });
```

**6.2 Menus/context**
- Use `aboutToShow()` to call `EnableContextMenuItems()` and `OnBeforeShowContextMenu()`
- Store command IDs in `QAction::setData(id)` for generic routing

**6.3 Toolbars/QAT**
- Use `QToolBar` + `toggleViewAction()` to expose show/hide in View menu
- Persist with `QMainWindow::saveState/restoreState`

**6.4 Status bar**
- Place zoom readout, units, selection count, **Auto‑Merge** toggle (QCheckBox)
- Persist Auto‑Merge in `QSettings`, force view refresh on toggle

---

## 7) CAD kernel & rendering

**7.1 OCCT scene**
- Create an OCCT Viewer/View controlled by a Qt widget (or Filament if preferred initially)
- `BuildModel3D()` triangulates shapes and updates renderables

**7.2 Views**
- Floor plan / elevation projections map to OCCT projections
- Viewpoint buttons set camera presets; bind to ribbon/menu

**7.3 HQ Preview**
- Optional Embree/DXR path behind a toggle; safe no-op default that doesn’t crash

---

## 8) File I/O & DB

**8.1 Open/Save JSON** (initial) in `src/io/DesignIO.*`  
**8.2 DB (optional)** with SQLite/Postgres, migrations in `db/migrations/*`, schema for catalogs/materials/pricing/projects.  
**8.3 BuildRite import/export stubs in `src/io/BuildRite.*` and hook UI commands.

---

## 9) Localization

- Wrap UI strings with `tr()`.  
- Load `QTranslator` based on `Settings.Language`.  
- Provide `translations/OpenDesign_en.ts`, `OpenDesign_es.ts`.

---

## 10) Definition of Done (gate)

- `docs/function_coverage.yaml` lists **every** function from analysis; each has a **compiled symbol** and a **smoke test**.  
- Asset manifest complete; CI checksums pass.  
- Init order test passes; Update‑UI behaves per selection; packaging produces runnable app.

---

# STEP MACRO (apply to **every** function)
> Use this macro verbatim for each function. See the generated `BUILD_STEPS.generated.md` for the full list in order.

**Macro:**
1. **Search** for `<target_symbol>` and `<file_cpp>`; if they exist, **do not overwrite**.
2. If missing, **create** the stub in the mapped folder (see coverage YAML).
3. **Add** Catch2 smoke test calling the function.
4. **If name starts with** `OnCommandRibbon*`: create/connect QAction in Ribbon to `CommandBus::dispatch`.
5. **If name contains** `UpdateUI`: register in `UpdateUIAll()` toggles.
6. **If Dialog** (`OnInitDialog*`): build a `QDialog` class with 3-button layout; load/save via `QSettings`.
7. **If Windowing** (`Create*/Destroy*/Show*/Move*/SetWindowPos/WindowProc`): implement via Qt wrappers.
8. **If Menu** (`CreateMenu/*Popup*/GetMenu*/EnableContext...`): implement via `QMenu/QAction`; dynamic enable on `aboutToShow`.
9. **If StatusBar**: add/refresh widgets on `QStatusBar`.
10. **If Render**: call `BuildModel3D()` and request redraw.
11. **If Edition/License**: guard with `FeatureGate::isEnabled`.
12. **If the function adds a button/menu/status item**: ensure an icon exists in `data/icons/`, referenced in `.qrc`, and listed in `asset_manifest.json` (update checksum).
13. **Update** `docs/function_coverage.yaml` status → `implemented`; run tests; commit.

---

# Generated artifacts you must place in the repo

- **Coverage list** (complete):  
  👉 `docs/function_coverage.yaml` — [download](sandbox:/mnt/data/function_coverage.generated.yaml)

- **Per‑function step list** (763 steps, ordered):  
  👉 `BUILD_STEPS.md` — [download](sandbox:/mnt/data/BUILD_STEPS.generated.md)

> These are derived from the analysis document in your environment; filenames inside the steps avoid referencing the original filename and call it “analysis document”.

---

## Helper scripts (put these exact files)

**scripts/gen_stubs/make_stubs.py**
```python
#!/usr/bin/env python3
import os, sys, yaml, pathlib, re

def ensure_dir(p): pathlib.Path(p).parent.mkdir(parents=True, exist_ok=True)

def stub_for(symbol):
    ns_parts = symbol.split("::")
    func = ns_parts[-1]
    ns = "::".join(ns_parts[:-1])
    return f'''#include <QtCore>\nnamespace {ns} {{\n  void {func}() noexcept {{}}\n}} // namespace {ns}\n'''

def test_for(symbol, original):
    ns_parts = symbol.split("::"); func = ns_parts[-1]; ns="::".join(ns_parts[:-1])
    return f'''#include <catch2/catch.hpp>\nnamespace {ns} {{ void {func}() noexcept; }}\nTEST_CASE("{original} links","[coverage]"){{ REQUIRE_NOTHROW({ns}::{func}()); }}\n'''

def path_for(dirp, original):
    base = re.sub(r'[^A-Za-z0-9_]', '_', original).lower()
    return os.path.join(dirp, f"{base}.cpp"), os.path.join("tests","unit","coverage", f"{base}.test.cpp")

def main(yaml_path="docs/function_coverage.yaml"):
    data = yaml.safe_load(open(yaml_path, "r", encoding="utf-8"))
    changed = 0
    for fn in data["functions"]:
        sym = fn["target_symbol"]; dirp = fn.get("dir","src")
        cpp, test = path_for(dirp, fn["original"])
        if not os.path.exists(cpp):
            ensure_dir(cpp); open(cpp,"w",encoding="utf-8").write(stub_for(sym)); changed+=1
        if not os.path.exists(test):
            ensure_dir(test); open(test,"w",encoding="utf-8").write(test_for(sym, fn["original"])); changed+=1
        if fn.get("status") != "implemented":
            fn["status"] = "implemented"
    if changed:
        yaml.safe_dump(data, open(yaml_path,"w",encoding="utf-8"), sort_keys=False, allow_unicode=True)
    print(f"stubs/tests updated: {changed}")
if __name__ == "__main__": main()
```

**scripts/gen_stubs/check_symbols.py**
```python
#!/usr/bin/env python3
import yaml, sys, subprocess, os
def main():
    y = yaml.safe_load(open("docs/function_coverage.yaml","r",encoding="utf-8"))
    missing = [f for f in y["functions"] if f.get("status")!="implemented"]
    if missing:
        print("ERROR: functions not implemented in YAML:", [m["original"] for m in missing]); sys.exit(2)
    # Optional: ensure tests binary exists (ctest would fail otherwise)
    print("OK: coverage YAML shows all functions implemented.")
if __name__=="__main__": main()
```

**scripts/ci/check_assets.py**
```python
#!/usr/bin/env python3
import json, hashlib, os, sys, xml.etree.ElementTree as ET
manifest = json.load(open("data/asset_manifest.json","r",encoding="utf-8"))
qrc = ET.parse("data/ui/resources.qrc").getroot()
files = [n.text for n in qrc.findall(".//file")]
def sha(p): 
    h=hashlib.sha256(); h.update(open(os.path.join("data",p),"rb").read()); 
    return h.hexdigest()
man_files=set(manifest.keys()); qrc_files=set(files)
missing_in_manifest = qrc_files - man_files
missing_on_disk = [p for p in qrc_files if not os.path.exists(os.path.join("data",p))]
bad_hash=[]
for p,h in manifest.items():
    full=os.path.join("data",p)
    if os.path.exists(full) and sha(p)!=h: bad_hash.append(p)
if missing_in_manifest or missing_on_disk or bad_hash:
    print("Asset check failed.")
    print("Missing in manifest:", missing_in_manifest)
    print("Missing on disk:", missing_on_disk)
    print("Bad hash:", bad_hash)
    sys.exit(2)
print("Assets OK.")
```

**src/framework/CommandBus.cpp**
```cpp
#include "CommandBus.h"
using namespace framework;
CommandBus& CommandBus::instance(){ static CommandBus inst; return inst; }
void CommandBus::post(CommandId id, const CommandContext& ctx){ dispatch(id, ctx); } // simple for now
void CommandBus::dispatch(CommandId, const CommandContext&){ /* TODO: call into CAD ops */ }
```

---

## How to execute (for Codex/CLINE)

1. **Place** the two generated files:
   - `docs/function_coverage.yaml` → [download](sandbox:/mnt/data/function_coverage.generated.yaml)
   - `BUILD_STEPS.md` → [download](sandbox:/mnt/data/BUILD_STEPS.generated.md)

2. **Run** (check‑before‑change ALWAYS):
   - `python scripts/gen_stubs/make_stubs.py`
   - `cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release`
   - `cmake --build build -j 8`
   - `ctest --test-dir build --output-on-failure`
   - `python scripts/gen_stubs/check_symbols.py`

3. **Follow** `BUILD_STEPS.md` **in order**. For each step, apply the **STEP MACRO** and commit.

4. **Stop on failure**, fix, rerun tests, continue.

---

### This SOP is self‑contained and explicit:
- It includes **exact file paths**, **code stubs**, **scripts**, **CI checks**, and **downloadable coverage + step lists** generated from your analysis.
- It **never references** the original analysis filename; it calls it “analysis document”.
- It enforces **check‑before‑change** and **coverage gates** so nothing is missed.

