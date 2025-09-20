#pragma once

#include <string>
#include <vector>

namespace ui::interaction {

// Control & Interaction Functions
// These functions handle user interaction, grid controls, and window management

// Grid interaction functions
bool OnGridWindowProc();
bool OnGridInitialUpdate();
bool OnInitCurrentCell();

// Window management functions
bool OnPlaceGenericWindow();
bool OnScrollWindow();

// Quick access and customization functions
bool IsQuickAccessCustomizeButton();
bool SetQuickAccessIconsStyle();

// Acceleration and tooltips functions
bool RebuildAccelerationKeys();
bool RebuildToolTips();

// Ribbon customization functions
bool OnCheckCustomRibbonEnable();
bool RegisterCustomRibbonSubButton2();

}  // namespace ui::interaction