#pragma once

#include <string>
#include <vector>

namespace ui::status {

// Status Bar & Panel Functions
// These functions handle status bar, panels, and related UI components

// Status bar construction and management
bool ConstructStatusBar();
bool OnStatusBarAutoMergeButton();

// Panel management functions
bool ActionEditAttributes_SetActivePanel();
bool ActionEditAttributes_SetDisplayPanel();
bool ConstructPanel();
bool CreatePanel();
bool GetParentPanel();
bool IsDefaultPanelButton();
bool CanBePlacedOnNonCollapsiblePanel();
bool CanBePlacedOnNonCollapsiblePanel_2();

// Panel event handlers
bool OnBeforeShowMainPanel();
bool NotifySharePanel();
bool AssignKeyToPanelCustomCopy();

// Panel template functions
bool OnLoadPanelrunTemplate();
bool OnPanelRunViewElevation();
bool OnPanelrunApplyToAllSameName();
bool OnPanelrunApplyToSeleted();
bool OnPanelrunResetNameToNone();
bool OnSavePanelrunTemplate();

}  // namespace ui::status