#pragma once

#include <string>
#include <vector>

namespace ui::dialogs {

// Dialog & Form Functions
// These functions manage dialog boxes, forms, and user interface dialogs

// Dialog initialization functions
bool OnInitDialog();
bool OnInitDialog_2();
bool OnInitDialog_3();
bool OnInitDialog_4();
bool OnInitDialog_5();
bool OnInitDialog_6();
bool OnInitDialog_7();
bool OnInitDialog_8();
bool OnInitDialog_9();
bool OnInitDialog_10();

// Pre-dialog initialization functions
bool PreInitDialog();
bool PreInitDialog_2();

// Dialog termination functions
bool EndDialog();

// Common dialog classes
bool CFileDialog();
bool CPrintDialog();
bool CPageSetupDialog();
bool CDialogBar();

// Color dialog functions
bool OpenColorDialog();

// 360 Publish dialog functions
bool Show360PublishDialog();
bool Show360PublishDialog_2();
bool ShowOrCreate360PublishDialog();
bool ShowOrCreate360PublishDialog_2();

// Find/Replace dialog functions
bool CreateFindDialog();
bool OnShowFindReplaceDialog();

// Shell dialog functions
bool UpdateOFNFromShellDialog();

// Window dialog size functions
bool WTGetWindowDialogSize();
bool WTSetWindowDialogSize();

// Dialog data exchange functions
bool DoDataExchange();
bool DoDataExchange_2();
bool DoDataExchange_3();
bool DoDataExchange_4();

// Dialog message handling functions
bool PreTranslateMessage();
bool PreTranslateMessage_2();
bool PreTranslateMessage_3();

// Dialog creation and destruction functions
bool Create();
bool Create_2();
bool Create_3();
bool Create_4();
bool Create_5();

// Dialog display functions
bool ShowDialog();
bool ShowDialog_2();
bool ShowDialog_3();

// Dialog control functions
bool EnableControl();
bool EnableControl_2();
bool EnableControl_3();

// Dialog validation functions
bool ValidateDialog();
bool ValidateDialog_2();

// Dialog update functions
bool UpdateDialog();
bool UpdateDialog_2();
bool UpdateDialog_3();

// Dialog size and position functions
bool SetDialogSize();
bool SetDialogSize_2();
bool GetDialogSize();

// Dialog focus functions
bool SetDialogFocus();
bool SetDialogFocus_2();

// Dialog button functions
bool OnOK();
bool OnOK_2();
bool OnCancel();
bool OnCancel_2();

// Dialog help functions
bool OnHelp();
bool OnHelp_2();

// Dialog context menu functions
bool OnContextMenu();
bool OnContextMenu_2();

// Dialog system menu functions
bool OnSysCommand();
bool OnSysCommand_2();

// Dialog window procedure functions
bool DialogProc();
bool DialogProc_2();

// Dialog timer functions
bool OnTimer();
bool OnTimer_2();

// Dialog clipboard functions
bool OnCopy();
bool OnCut();
bool OnPaste();

// Dialog undo/redo functions
bool OnUndo();
bool OnRedo();

// Dialog find/replace functions
bool OnFind();
bool OnReplace();

// Dialog print functions
bool OnPrint();
bool OnPrint_2();

// Dialog page setup functions
bool OnPageSetup();
bool OnPageSetup_2();

// Dialog print preview functions
bool OnPrintPreview();
bool OnPrintPreview_2();

// Dialog font functions
bool OnChooseFont();
bool OnChooseFont_2();

// Dialog color functions
bool OnChooseColor();
bool OnChooseColor_2();

// Dialog file functions
bool OnFileOpen();
bool OnFileSave();
bool OnFileSaveAs();

// Dialog window functions
bool WTSetWindowDialogSize();

}  // namespace ui::dialogs