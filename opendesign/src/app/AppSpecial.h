#pragma once

#include <string>
#include <vector>

namespace app::special {

// Specialized Application Functions
// These functions handle specialized CAD application features

// Wall UI update functions
bool OnWallContinueUpdateUI();
bool OnWallLUpdateUI();
bool OnWallModeConstructionLineUpdateUI();
bool OnWallModeWallUpdateUI();
bool OnWallSquareUpdateUI();
bool OnWallUUpdateUI();

// BuildRite XML functions
bool OnXMLExportToBuildRite();
bool OnXMLImportFromBuildRitePost();

// File operations
bool OnFileIncrementalSaveUI();

// Pricing functions
bool OnQuickPrice();
bool OnUpdateQuickPrice();

}  // namespace app::special