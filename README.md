# OpenDesign CAD

This repository contains a clean-room implementation of a cross-platform CAD desktop application. The focus is on recreating the user experience and extensibility patterns found in a legacy MFC/BCGSoft code base using a modern, open-source stack.

## Project layout

The `opendesign/` directory holds the source code, documentation, and supporting assets:

```
opendesign/
├─ CMakeLists.txt          # Build definition for the static library, app, and tests
├─ cmake/                  # Reserved for custom CMake modules
├─ docs/                   # Function coverage manifest and UI specifications
├─ data/                   # Icons, cursors, sounds, and UI layout assets (placeholders)
├─ scripts/                # Tooling hooks (stubbed)
├─ src/                    # Application, framework, UI, CAD, rendering, IO, and compat layers
└─ tests/                  # Minimal Catch-style harness and unit tests
```

The implementation emphasises a coverage-driven approach. Every legacy function documented in `docs/function_coverage.yaml` is mapped to a concrete symbol that registers itself with the runtime `FunctionRegistry`. The accompanying unit test verifies that all documented symbols are present and invocable.

## Building

```
cmake -S opendesign -B build
cmake --build build
```

## Testing

```
cmake --build build --target opendesign_tests
ctest --test-dir build
```

These commands exercise the compatibility shims, command bus, settings store, document management, and coverage validation.

## Data layer

The `opendesign/src/db` module provides a deterministic, in-memory representation of the production database schema described in
`instructions.txt`. It supports configuration via connection metadata, applies ordered SQL migrations while tracking tables,
indexes, and pragmas, and exposes helpers for creating catalogs, materials, projects, designs, price lists, pricing records,
import jobs, and audit log entries. The accompanying unit tests validate referential integrity, uniqueness constraints, and job
state transitions without requiring external services.
