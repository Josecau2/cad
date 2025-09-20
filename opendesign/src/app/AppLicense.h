#pragma once

#include <string>
#include <vector>

namespace app::license {

// Edition & License Functions
// These functions handle edition-specific and licensing features

// Ribbon and customization functions
bool OnCheckCustomRibbonEnable_2();
bool Show360PublishDialog_3();

// Dialog creation functions
bool CreateAutoDesignCabinetsDlg_2();
bool CreateAutoDesignEnhancersDlg_2();

// Model building functions
bool BuildModel3D_2();

// Pricing functions
bool OnQuickPrice_2();

// Dialog initialization
bool OnInitDialog_11();

}  // namespace app::license