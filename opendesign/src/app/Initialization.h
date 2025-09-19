#pragma once

#include <string>
#include <vector>

namespace app::init {

bool InitApplication();

bool MyInitInstance();

bool AfxOleInit();

bool Init2020Registry();

bool InitializeSettings();

bool InitFont();

bool InitAutoColors();

bool InitMenuBar();

bool InitHeader();

bool InitNavigationControl();

bool InitZoom();

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

std::vector<std::string> CallOrder();

std::string ActiveFont();

std::string ActiveColorScheme();

int ActiveZoomPercent();

bool HasMenuItem(const std::string& id);

void ResetForTesting();

}  // namespace app::init
