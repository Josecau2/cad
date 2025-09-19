#include "ui/ribbon/RibbonBar.h"

#include <algorithm>
#include <utility>

#include "framework/FunctionRegistry.h"

namespace ui::ribbon {
namespace {
const framework::FunctionRegistration construct_registration{
    "ui::ribbon::ConstructRibbonBar", []() {
        RibbonBar bar;
        RibbonSpec spec;
        spec.categories.push_back({"Home", {{"new", "New"}}});
        ConstructRibbonBar(bar, spec);
    }};

const framework::FunctionRegistration simplified_registration{
    "ui::ribbon::SetRibbonSimplifiedMode", []() {
        RibbonBar bar;
        RibbonSpec spec;
        spec.categories.push_back({"Home", {{"new", "New"}}});
        ConstructRibbonBar(bar, spec);
        SetRibbonSimplifiedMode(bar, true);
        SetRibbonSimplifiedMode(bar, false);
    }};
}  // namespace

void RibbonBar::addCategory(RibbonCategory category) {
    categories_.push_back(std::move(category));
}

const std::vector<RibbonCategory>& RibbonBar::categories() const {
    return categories_;
}

bool RibbonBar::simplified() const {
    return simplified_;
}

void RibbonBar::setSimplified(bool simplified) {
    simplified_ = simplified;
}

std::size_t RibbonBar::actionCount() const {
    std::size_t total = 0;
    for (const auto& category : categories_) {
        total += category.actions.size();
    }
    return total;
}

void ConstructRibbonBar(RibbonBar& bar, const RibbonSpec& spec) {
    bar = RibbonBar{};
    for (const auto& category : spec.categories) {
        bar.addCategory(category);
    }
    bar.setSimplified(false);
}

void SetRibbonSimplifiedMode(RibbonBar& bar, bool simplified) {
    bar.setSimplified(simplified);
}

}  // namespace ui::ribbon
