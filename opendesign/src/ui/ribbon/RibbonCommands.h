#pragma once

#include <string>

namespace ui::ribbon {

struct SelectionState {
    int selected = 0;
    bool grouped = false;
    bool has_light = false;
    double cursor_x = 0.0;
    double cursor_y = 0.0;
    std::string view = "design";
    std::string work_box = "primary";
    std::string work_box_type = "edit";
};

void ResetRibbonStateForTesting();

void ConfigureSelection(const SelectionState& selection);

inline void ConfigureSelection(int selected, bool grouped, bool has_light) {
    SelectionState state;
    state.selected = selected;
    state.grouped = grouped;
    state.has_light = has_light;
    ConfigureSelection(state);
}

SelectionState CurrentSelection();

bool OnCommandRibbonHomeEditCenter();

bool OnCommandRibbonHomeEditMove();

bool OnCommandRibbonHomeEditRotate();

bool OnCommandRibbonHomeEditMirror();

bool OnCommandRibbonHomeEditGroup();

bool OnCommandRibbonHomeEditUngroup();

bool OnCommandRibbonHomeEditLightProps();

bool OnCommandRibbonHomeEditEditShape();

bool OnUpdateUiRibbonHomeEditCenter();

bool OnUpdateUiRibbonHomeEditMove();

bool OnUpdateUiRibbonHomeEditRotate();

bool OnUpdateUiRibbonHomeEditMirror();

bool OnUpdateUiRibbonHomeEditGroup();

bool OnUpdateUiRibbonHomeEditUngroup();

bool OnUpdateUiRibbonHomeEditLightProps();

bool OnUpdateUiRibbonHomeEditEditShape();

bool OnCommandRibbonSingleSidedWall();

bool OnCommandRibbonDoubleSidedWall();

bool OnCommandRibbonSingleSidedConstLine();

bool OnCommandRibbonDoubleSidedConstLine();

std::string ActiveConstructionMode();

std::string LastExecutedCommand();

void InitializeRibbonCommandRoutes();

}  // namespace ui::ribbon
