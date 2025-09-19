#pragma once

#include <string>
#include <unordered_map>
#include <vector>

namespace ui::ribbon {

struct RibbonAction {
    std::string id;
    std::string caption;
};

struct RibbonCategory {
    std::string name;
    std::vector<RibbonAction> actions;
};

struct RibbonSpec {
    std::vector<RibbonCategory> categories;
};

class RibbonBar {
public:
    void addCategory(RibbonCategory category);

    const std::vector<RibbonCategory>& categories() const;

    bool simplified() const;

    void setSimplified(bool simplified);

    std::size_t actionCount() const;

private:
    std::vector<RibbonCategory> categories_;
    bool simplified_ = false;
};

void ConstructRibbonBar(RibbonBar& bar, const RibbonSpec& spec);

void SetRibbonSimplifiedMode(RibbonBar& bar, bool simplified);

}  // namespace ui::ribbon
