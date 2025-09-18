#pragma once

#include "ui/ribbon/RibbonBar.h"

namespace compat::mfc {

ui::ribbon::RibbonBar& ConstructRibbonBar();

void SetRibbonSimplifiedMode(bool simplified);

bool IsRibbonSimplified();

}  // namespace compat::mfc
