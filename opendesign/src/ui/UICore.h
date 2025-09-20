#pragma once

#include <string>
#include <vector>

namespace ui::core {

// UI Management & Control Functions
// These functions manage the overall user interface state and behavior

// Basic UI visibility and state management
bool HideUI();
bool ShowUI();
bool UpdateUI();

// UI activation and deactivation
bool OnActivateUI();
bool OnDeactivateUI();
bool OnDeactivateUI_2();

// Command UI update functions
bool OnInitialUpdateCmdUI();
bool OnUpdateCmdUI();
bool OnUpdateCmdUI_2();
bool OnUpdateCmdUI_3();
bool OnUpdateCmdUI_4();
bool OnUpdateCmdUI_5();

// Menu image functions (already implemented)
bool OnDrawMenuImage();
bool OnDrawMenuImage_2();
bool OnDrawMenuImage_3();
bool GetCurrentMenuImageSize();
bool GetPopupMenuImageSize();

// BCG (Business Component Gallery) functions
bool BCGPMessageBox();
bool BCGPModifyStyle();
bool BCGPModifyStyle_2();
bool OnBCGPIdle();
bool GetBCGStyle();
bool SetBCGStyle();

// CBCGPDialogBar functions
bool CBCGPDialogBar_Create();
bool CBCGPDialogBar_EnableScrolling();
bool CBCGPDialogBar_EnableVisualManagerStyle();
bool CBCGPDialogBar_GetThisClass();
bool CBCGPDialogBar_OnSize();

// CBCGPControlBar functions
bool CBCGPControlBar_SetMinSize();

// Constructor/Destructor
bool CBCGPToolbarCustomize_Constructor_or_Destructor();

}  // namespace ui::core