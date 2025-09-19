#pragma once

#include <string>
#include <vector>

namespace ui::buttons {

// Specialized Button Functions
// These functions handle specialized button and dialog operations

// Dialog initialization functions
bool CCloseDesignDlg__OnInitDialog();
bool CSPAutoSaveDlg__OnInitDialog();

// Status bar button functions
bool OnStatusBarAutoMergeButton_2();

// Color button functions
int CBCGPColorButton(unsigned long param_1, unsigned long* param_2);

// Action edit attributes functions
void ActionEditAttributes_SetActivePanel_2(short param_1);

// Panel construction functions
void ConstructPanel_2(void* ribbonPanel, void* xPanel);

// Panel button functions
int IsDefaultPanelButton_2();

// 360 publish dialog functions
void Show360PublishDialog_4();
void ShowOrCreate360PublishDialog_3();

// Concrete Button Mapping Functions
int AccGetButtonsCount_2();
void ActionEditAttributes_SetVisibleButtons_2();
void AdjustButtonRect_2();
bool AlwaysDisplayButton_2();
int CalcMaxButtonHeight_2();
void CheckDlgButton_2();
void CheckRadioButton_2();
bool CheckForButtonImages_2();
void CBCGPColorMenuButton_Constructor_or_Destructor();
void CBCGPRibbonButton_Constructor_or_Destructor_2();
void CBCGPRibbonDesignUndoButton_2();
void CBCGPRibbonDesignUndoButton_3();
void CBCGPRibbonMinimizeButton_Constructor_or_Destructor_2();
void CCustomRibbonButton_2();
void CLoginRibbonButton_2();
void CSkinButton_2();
void CSkinButtonArrows_2();
void CUndoButton_2();
bool CanShowFewerPageButtons_2();
bool CanShowMorePageButtons_2();
void ConstructRibbonBar_2();
void ConstructStatusBar_3();
void ActionEditAttributes_SetVisibleButtons_3();
bool WebBrowser__OnInitDialog();
void ShowUI_2();
void HideUI_2();

}  // namespace ui::buttons