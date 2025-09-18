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

std::vector<std::string> CallOrder();

std::string ActiveFont();

std::string ActiveColorScheme();

int ActiveZoomPercent();

bool HasMenuItem(const std::string& id);

void ResetForTesting();

}  // namespace app::init
