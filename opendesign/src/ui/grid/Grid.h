#pragma once

#include <cstddef>

namespace ui::grid {

struct GridState {
    bool snap_enabled = true;
    double spacing = 10.0;
    double major_spacing = 50.0;
};

// Resets the grid state to defaults and clears persisted settings. Intended for tests.
void ResetGridStateForTesting();

// Returns a snapshot of the current grid configuration.
GridState CurrentState();

// Toggles snap-to-grid and persists the new state. Returns the updated value.
bool ToggleSnap();

// Sets the base grid spacing, clamping it to a sensible range and ensuring the
// major spacing is never smaller than the base spacing.
void SetSpacing(double spacing);

// Sets the major grid spacing. Values smaller than the base spacing are
// promoted to match the base spacing.
void SetMajorSpacing(double spacing);

// Registers command bus hooks and loads persisted grid state.
void InitializeGridCommands();

}  // namespace ui::grid
