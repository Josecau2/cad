#include "compat/mfc/Ribbon.h"

namespace compat::mfc {
namespace {
ui::ribbon::RibbonBar& ribbon() {
    static ui::ribbon::RibbonBar bar;
    static bool initialized = false;
    if (!initialized) {
        ui::ribbon::RibbonSpec spec;
        spec.categories.push_back({"Home", {{"select", "Select"}}});
        ui::ribbon::ConstructRibbonBar(bar, spec);
        initialized = true;
    }
    return bar;
}
}  // namespace

ui::ribbon::RibbonBar& ConstructRibbonBar() {
    return ribbon();
}

void SetRibbonSimplifiedMode(bool simplified) {
    ui::ribbon::SetRibbonSimplifiedMode(ribbon(), simplified);
}

bool IsRibbonSimplified() {
    return ribbon().simplified();
}

}  // namespace compat::mfc
