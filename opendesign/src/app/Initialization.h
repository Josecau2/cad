#pragma once

#include <string>
#include <vector>

namespace app::init {

// Application initialization functions
bool InitApplication();
bool MyInitInstance();

// Framework initialization functions
bool AfxClassInit();
bool AfxOleInit();
bool AfxInitRichEdit();

// Library and registry initialization functions
bool InitLibId();
bool Init2020Registry();

// Generic initialization functions
bool Init();
bool Init_2();
bool Init_3();

// Color and font initialization functions
bool InitAutoColors();
bool InitColors();
bool InitFont();

// UI component initialization functions
bool InitConstructor();
bool InitStateIcons();
bool InitViewPointButtons();
bool InitZoom();
bool InitMenuBar();
bool InitHeader();
bool InitNavigationControl();
bool InitItemData();

// Frame and view initialization functions
bool InitialUpdateFrame();

// Handle list initialization functions
bool InitHandleList();
bool InitHandleList_2();
bool InitHandleList_3();
bool InitHandleList_4();
bool InitHandleList_5();
bool InitHandleList_6();
bool InitHandleList_7();
bool InitHandleList_8();
bool InitHandleList_9();
bool InitHandleList_10();
bool InitHandleList_11();
bool InitHandleList_12();
bool InitHandleList_13();
bool InitHandleList_14();
bool InitHandleList_15();

// COM object initialization functions
bool InitComObj();
bool InitComObj_2();

// Settings and synchronization initialization functions
bool InitializeSettings();
bool InitializeCriticalSectionEx();

// Additional initialization functions from branch_map.yaml
bool FUN_1400010b0();
bool FUN_140001120();
bool FUN_140001190();
bool FUN_140001200();
bool FUN_140001280();
bool FUN_140001380();
bool FUN_1400014a0();
bool FUN_140001530();
bool FUN_1400015c0();
bool FUN_140001670();
bool FUN_140001700();
bool FUN_140001750();
bool FUN_1400017a0();
bool FUN_1400017f0();
bool FUN_140001840();
bool FUN_140001890();
bool FUN_140001a80();
bool FUN_140001cd0();
bool FUN_140001e30();
bool FUN_140001eb0();
bool FUN_140001f50();
bool FUN_140001fe0();
bool FUN_140002070();

// State query functions
std::vector<std::string> CallOrder();
std::string ActiveFont();
std::string ActiveColorScheme();
int ActiveZoomPercent();
bool HasMenuItem(const std::string& id);
void ResetForTesting();

}  // namespace app::init
