#include "ui/ribbon/RibbonCommands.h"

#include <algorithm>
#include <mutex>
#include <string>
#include <utility>

#include "framework/CommandBus.h"
#include "framework/FunctionRegistry.h"

namespace ui::ribbon {
namespace {
struct RuntimeState {
    SelectionState selection{};
    std::string construction_mode;
    std::string last_action;
};

RuntimeState& runtime() {
    static RuntimeState state;
    return state;
}

std::mutex& runtime_mutex() {
    static std::mutex mutex;
    return mutex;
}

framework::commands::CommandContext makeContext(const RuntimeState& state) {
    framework::commands::CommandContext context;
    const SelectionState& selection = state.selection;
    context.view = selection.view.empty() ? "design" : selection.view;
    context.work_box = selection.work_box.empty() ? "primary" : selection.work_box;
    context.work_box_type =
        selection.work_box_type.empty() ? "edit" : selection.work_box_type;
    context.cursor_x = selection.cursor_x;
    context.cursor_y = selection.cursor_y;
    context.selection_count = selection.selected;
    context.selection_grouped = selection.grouped;
    context.selection_has_light = selection.has_light;
    return context;
}
}  // namespace

void ensureCommandsRegistered();

void ResetRibbonStateForTesting() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(runtime_mutex());
    RuntimeState& state = runtime();
    state.selection = SelectionState{};
    state.construction_mode.clear();
    state.last_action.clear();
}

void ConfigureSelection(const SelectionState& selection) {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(runtime_mutex());
    RuntimeState& state = runtime();
    state.selection = selection;
    state.selection.selected = std::max(0, state.selection.selected);
    if (state.selection.view.empty()) {
        state.selection.view = "design";
    }
    if (state.selection.work_box.empty()) {
        state.selection.work_box = "primary";
    }
    if (state.selection.work_box_type.empty()) {
        state.selection.work_box_type = "edit";
    }
}

SelectionState CurrentSelection() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().selection;
}

namespace {
class ActionRecorder {
public:
    explicit ActionRecorder(RuntimeState& state) : state_(state) {}

    void record(std::string action) { state_.last_action = std::move(action); }

private:
    RuntimeState& state_;
};
}  // namespace

bool OnCommandRibbonHomeEditCenter() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (state.selection.selected == 0) {
            return false;
        }
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("center");
    }
    framework::commands::Dispatch(framework::commands::CommandId::Center, context);
    return true;
}

bool OnCommandRibbonHomeEditMove() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (state.selection.selected == 0) {
            return false;
        }
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("move");
    }
    framework::commands::Dispatch(framework::commands::CommandId::Move, context);
    return true;
}

bool OnCommandRibbonHomeEditRotate() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (state.selection.selected == 0) {
            return false;
        }
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("rotate");
    }
    framework::commands::Dispatch(framework::commands::CommandId::Rotate, context);
    return true;
}

bool OnCommandRibbonHomeEditMirror() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (state.selection.selected == 0) {
            return false;
        }
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("mirror");
    }
    framework::commands::Dispatch(framework::commands::CommandId::Mirror, context);
    return true;
}

bool OnCommandRibbonHomeEditGroup() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (state.selection.selected < 2 || state.selection.grouped) {
            return false;
        }
        state.selection.grouped = true;
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("group");
    }
    framework::commands::Dispatch(framework::commands::CommandId::Group, context);
    return true;
}

bool OnCommandRibbonHomeEditUngroup() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (!state.selection.grouped) {
            return false;
        }
        state.selection.grouped = false;
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("ungroup");
    }
    framework::commands::Dispatch(framework::commands::CommandId::Ungroup, context);
    return true;
}

bool OnCommandRibbonHomeEditLightProps() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (!state.selection.has_light) {
            return false;
        }
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("light_props");
    }
    framework::commands::Dispatch(framework::commands::CommandId::LightProps, context);
    return true;
}

bool OnCommandRibbonHomeEditEditShape() {
    ensureCommandsRegistered();
    framework::commands::CommandContext context;
    {
        std::lock_guard<std::mutex> lock(runtime_mutex());
        RuntimeState& state = runtime();
        if (state.selection.selected != 1 || !state.selection.has_light) {
            return false;
        }
        context = makeContext(state);
        ActionRecorder recorder(state);
        recorder.record("edit_shape");
    }
    framework::commands::Dispatch(framework::commands::CommandId::EditShape, context);
    return true;
}

bool OnUpdateUiRibbonHomeEditCenter() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().selection.selected > 0;
}

bool OnUpdateUiRibbonHomeEditMove() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().selection.selected > 0;
}

bool OnUpdateUiRibbonHomeEditRotate() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().selection.selected > 0;
}

bool OnUpdateUiRibbonHomeEditMirror() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().selection.selected > 0;
}

bool OnUpdateUiRibbonHomeEditGroup() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    const RuntimeState& state = runtime();
    return state.selection.selected >= 2 && !state.selection.grouped;
}

bool OnUpdateUiRibbonHomeEditUngroup() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().selection.grouped;
}

bool OnUpdateUiRibbonHomeEditLightProps() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().selection.has_light;
}

bool OnUpdateUiRibbonHomeEditEditShape() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    const auto& selection = runtime().selection;
    return selection.selected == 1 && selection.has_light;
}

bool OnCommandRibbonSingleSidedWall() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(runtime_mutex());
    RuntimeState& state = runtime();
    state.construction_mode = "wall.single";
    ActionRecorder recorder(state);
    recorder.record("wall.single");
    return true;
}

bool OnCommandRibbonDoubleSidedWall() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(runtime_mutex());
    RuntimeState& state = runtime();
    state.construction_mode = "wall.double";
    ActionRecorder recorder(state);
    recorder.record("wall.double");
    return true;
}

bool OnCommandRibbonSingleSidedConstLine() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(runtime_mutex());
    RuntimeState& state = runtime();
    state.construction_mode = "construction.single";
    ActionRecorder recorder(state);
    recorder.record("construction.single");
    return true;
}

bool OnCommandRibbonDoubleSidedConstLine() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(runtime_mutex());
    RuntimeState& state = runtime();
    state.construction_mode = "construction.double";
    ActionRecorder recorder(state);
    recorder.record("construction.double");
    return true;
}

std::string ActiveConstructionMode() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().construction_mode;
}

std::string LastExecutedCommand() {
    std::lock_guard<std::mutex> lock(runtime_mutex());
    return runtime().last_action;
}

void InitializeRibbonCommandRoutes() { ensureCommandsRegistered(); }

void ensureCommandsRegistered() {
    static std::once_flag flag;
    std::call_once(flag, []() {
        framework::commands::RegisterCommand("ribbon.home.edit.center", []() {
            OnCommandRibbonHomeEditCenter();
        });
        framework::commands::RegisterCommand("ribbon.home.edit.move", []() {
            OnCommandRibbonHomeEditMove();
        });
        framework::commands::RegisterCommand("ribbon.home.edit.rotate", []() {
            OnCommandRibbonHomeEditRotate();
        });
        framework::commands::RegisterCommand("ribbon.home.edit.mirror", []() {
            OnCommandRibbonHomeEditMirror();
        });
        framework::commands::RegisterCommand("ribbon.home.edit.group", []() {
            OnCommandRibbonHomeEditGroup();
        });
        framework::commands::RegisterCommand("ribbon.home.edit.ungroup", []() {
            OnCommandRibbonHomeEditUngroup();
        });
        framework::commands::RegisterCommand("ribbon.home.edit.light_props", []() {
            OnCommandRibbonHomeEditLightProps();
        });
        framework::commands::RegisterCommand("ribbon.home.edit.edit_shape", []() {
            OnCommandRibbonHomeEditEditShape();
        });
        framework::commands::RegisterCommand("ribbon.home.draw.wall.single", []() {
            OnCommandRibbonSingleSidedWall();
        });
        framework::commands::RegisterCommand("ribbon.home.draw.wall.double", []() {
            OnCommandRibbonDoubleSidedWall();
        });
        framework::commands::RegisterCommand("ribbon.home.draw.const.single", []() {
            OnCommandRibbonSingleSidedConstLine();
        });
        framework::commands::RegisterCommand("ribbon.home.draw.const.double", []() {
            OnCommandRibbonDoubleSidedConstLine();
        });
    });
}

}  // namespace ui::ribbon

namespace {
const framework::FunctionRegistration on_command_center_registration{
    "ui::ribbon::OnCommandRibbonHomeEditCenter", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnCommandRibbonHomeEditCenter();
    }};

const framework::FunctionRegistration on_command_move_registration{
    "ui::ribbon::OnCommandRibbonHomeEditMove", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnCommandRibbonHomeEditMove();
    }};

const framework::FunctionRegistration on_command_rotate_registration{
    "ui::ribbon::OnCommandRibbonHomeEditRotate", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnCommandRibbonHomeEditRotate();
    }};

const framework::FunctionRegistration on_command_mirror_registration{
    "ui::ribbon::OnCommandRibbonHomeEditMirror", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnCommandRibbonHomeEditMirror();
    }};

const framework::FunctionRegistration on_command_group_registration{
    "ui::ribbon::OnCommandRibbonHomeEditGroup", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(2, false, false);
        ui::ribbon::OnCommandRibbonHomeEditGroup();
    }};

const framework::FunctionRegistration on_command_ungroup_registration{
    "ui::ribbon::OnCommandRibbonHomeEditUngroup", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(2, true, false);
        ui::ribbon::OnCommandRibbonHomeEditUngroup();
    }};

const framework::FunctionRegistration on_command_light_props_registration{
    "ui::ribbon::OnCommandRibbonHomeEditLightProps", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, true);
        ui::ribbon::OnCommandRibbonHomeEditLightProps();
    }};

const framework::FunctionRegistration on_command_edit_shape_registration{
    "ui::ribbon::OnCommandRibbonHomeEditEditShape", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnCommandRibbonHomeEditEditShape();
    }};

const framework::FunctionRegistration on_update_center_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditCenter", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnUpdateUiRibbonHomeEditCenter();
    }};

const framework::FunctionRegistration on_update_move_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditMove", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnUpdateUiRibbonHomeEditMove();
    }};

const framework::FunctionRegistration on_update_rotate_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditRotate", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnUpdateUiRibbonHomeEditRotate();
    }};

const framework::FunctionRegistration on_update_mirror_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditMirror", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnUpdateUiRibbonHomeEditMirror();
    }};

const framework::FunctionRegistration on_update_group_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditGroup", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(2, false, false);
        ui::ribbon::OnUpdateUiRibbonHomeEditGroup();
    }};

const framework::FunctionRegistration on_update_ungroup_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditUngroup", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(2, true, false);
        ui::ribbon::OnUpdateUiRibbonHomeEditUngroup();
    }};

const framework::FunctionRegistration on_update_light_props_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditLightProps", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, true);
        ui::ribbon::OnUpdateUiRibbonHomeEditLightProps();
    }};

const framework::FunctionRegistration on_update_edit_shape_registration{
    "ui::ribbon::OnUpdateUiRibbonHomeEditEditShape", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::ConfigureSelection(1, false, false);
        ui::ribbon::OnUpdateUiRibbonHomeEditEditShape();
    }};

const framework::FunctionRegistration on_command_single_wall_registration{
    "ui::ribbon::OnCommandRibbonSingleSidedWall", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::OnCommandRibbonSingleSidedWall();
    }};

const framework::FunctionRegistration on_command_double_wall_registration{
    "ui::ribbon::OnCommandRibbonDoubleSidedWall", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::OnCommandRibbonDoubleSidedWall();
    }};

const framework::FunctionRegistration on_command_single_const_registration{
    "ui::ribbon::OnCommandRibbonSingleSidedConstLine", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::OnCommandRibbonSingleSidedConstLine();
    }};

const framework::FunctionRegistration on_command_double_const_registration{
    "ui::ribbon::OnCommandRibbonDoubleSidedConstLine", []() {
        ui::ribbon::ResetRibbonStateForTesting();
        ui::ribbon::OnCommandRibbonDoubleSidedConstLine();
    }};
}  // namespace
