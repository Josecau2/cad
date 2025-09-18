#include "catch2.hpp"

#include <cmath>
#include <chrono>
#include <condition_variable>
#include <mutex>
#include <vector>

#include "framework/CommandBus.h"
#include "io/Settings.h"
#include "ui/grid/Grid.h"
#include "ui/printpreview/PrintPreview.h"
#include "ui/ribbon/RibbonCommands.h"
#include "ui/statusbar/StatusBar.h"

TEST_CASE("Ribbon edit commands dispatch command contexts", "[ui][ribbon]") {
    framework::commands::ClearHandlersForTesting();
    ui::ribbon::ResetRibbonStateForTesting();

    int center_calls = 0;
    framework::commands::CommandContext last_center;
    framework::commands::RegisterHandler(framework::commands::CommandId::Center,
                                         [&](const auto& context) {
                                             ++center_calls;
                                             last_center = context;
                                         });

    int move_calls = 0;
    framework::commands::CommandContext last_move;
    framework::commands::RegisterHandler(framework::commands::CommandId::Move,
                                         [&](const auto& context) {
                                             ++move_calls;
                                             last_move = context;
                                         });

    int rotate_calls = 0;
    framework::commands::RegisterHandler(framework::commands::CommandId::Rotate,
                                         [&](const auto&) { ++rotate_calls; });

    int mirror_calls = 0;
    framework::commands::RegisterHandler(framework::commands::CommandId::Mirror,
                                         [&](const auto&) { ++mirror_calls; });

    ui::ribbon::ConfigureSelection(0, false, false);
    REQUIRE(!ui::ribbon::OnCommandRibbonHomeEditCenter());
    REQUIRE(!ui::ribbon::OnCommandRibbonHomeEditMove());
    REQUIRE(!ui::ribbon::OnUpdateUiRibbonHomeEditCenter());
    REQUIRE(!ui::ribbon::OnUpdateUiRibbonHomeEditMove());

    ui::ribbon::SelectionState selection;
    selection.selected = 1;
    selection.cursor_x = 120.0;
    selection.cursor_y = 48.0;
    selection.view = "plan";
    selection.work_box = "primary";
    selection.work_box_type = "edit";
    ui::ribbon::ConfigureSelection(selection);

    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditCenter());
    REQUIRE(center_calls == 1);
    REQUIRE(last_center.selection_count == 1);
    REQUIRE(std::abs(last_center.cursor_x - 120.0) < 1e-6);
    REQUIRE(last_center.view == "plan");
    REQUIRE(ui::ribbon::LastExecutedCommand() == "center");

    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditMove());
    REQUIRE(move_calls == 1);
    REQUIRE(std::abs(last_move.cursor_y - 48.0) < 1e-6);
    REQUIRE(last_move.selection_grouped == false);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "move");

    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditRotate());
    REQUIRE(rotate_calls == 1);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "rotate");

    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditMirror());
    REQUIRE(mirror_calls == 1);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "mirror");
}

TEST_CASE("Grouping toggles enablement", "[ui][ribbon]") {
    framework::commands::ClearHandlersForTesting();
    ui::ribbon::ResetRibbonStateForTesting();

    int group_calls = 0;
    framework::commands::CommandContext last_group;
    framework::commands::RegisterHandler(framework::commands::CommandId::Group,
                                         [&](const auto& context) {
                                             ++group_calls;
                                             last_group = context;
                                         });

    int ungroup_calls = 0;
    framework::commands::CommandContext last_ungroup;
    framework::commands::RegisterHandler(framework::commands::CommandId::Ungroup,
                                         [&](const auto& context) {
                                             ++ungroup_calls;
                                             last_ungroup = context;
                                         });

    ui::ribbon::ConfigureSelection(1, false, false);
    REQUIRE(!ui::ribbon::OnUpdateUiRibbonHomeEditGroup());

    ui::ribbon::ConfigureSelection(2, false, false);
    REQUIRE(ui::ribbon::OnUpdateUiRibbonHomeEditGroup());
    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditGroup());
    REQUIRE(group_calls == 1);
    REQUIRE(last_group.selection_grouped);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "group");

    REQUIRE(!ui::ribbon::OnUpdateUiRibbonHomeEditGroup());
    REQUIRE(ui::ribbon::OnUpdateUiRibbonHomeEditUngroup());
    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditUngroup());
    REQUIRE(ungroup_calls == 1);
    REQUIRE(!last_ungroup.selection_grouped);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "ungroup");
}

TEST_CASE("Light and edit shape commands require appropriate selection", "[ui][ribbon]") {
    framework::commands::ClearHandlersForTesting();
    ui::ribbon::ResetRibbonStateForTesting();

    int light_calls = 0;
    framework::commands::RegisterHandler(framework::commands::CommandId::LightProps,
                                         [&](const auto&) { ++light_calls; });

    int edit_calls = 0;
    framework::commands::RegisterHandler(framework::commands::CommandId::EditShape,
                                         [&](const auto&) { ++edit_calls; });

    ui::ribbon::ConfigureSelection(1, false, false);
    REQUIRE(!ui::ribbon::OnCommandRibbonHomeEditLightProps());
    REQUIRE(!ui::ribbon::OnCommandRibbonHomeEditEditShape());

    ui::ribbon::ConfigureSelection(1, false, true);
    REQUIRE(ui::ribbon::OnUpdateUiRibbonHomeEditLightProps());
    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditLightProps());
    REQUIRE(light_calls == 1);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "light_props");

    ui::ribbon::ConfigureSelection(2, false, true);
    REQUIRE(!ui::ribbon::OnCommandRibbonHomeEditEditShape());

    ui::ribbon::ConfigureSelection(1, false, true);
    REQUIRE(ui::ribbon::OnUpdateUiRibbonHomeEditEditShape());
    REQUIRE(ui::ribbon::OnCommandRibbonHomeEditEditShape());
    REQUIRE(edit_calls == 1);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "edit_shape");
}

TEST_CASE("Construction mode commands update active mode", "[ui][ribbon]") {
    ui::ribbon::ResetRibbonStateForTesting();

    REQUIRE(ui::ribbon::OnCommandRibbonSingleSidedWall());
    REQUIRE(ui::ribbon::ActiveConstructionMode() == "wall.single");
    REQUIRE(ui::ribbon::OnCommandRibbonDoubleSidedWall());
    REQUIRE(ui::ribbon::ActiveConstructionMode() == "wall.double");
    REQUIRE(ui::ribbon::OnCommandRibbonSingleSidedConstLine());
    REQUIRE(ui::ribbon::ActiveConstructionMode() == "construction.single");
    REQUIRE(ui::ribbon::OnCommandRibbonDoubleSidedConstLine());
    REQUIRE(ui::ribbon::ActiveConstructionMode() == "construction.double");
}

TEST_CASE("Status bar auto merge persists to settings", "[ui][statusbar]") {
    io::settings::ResetSettings();
    ui::statusbar::ResetStatusBarStateForTesting();
    ui::statusbar::InitializeStatusBarCommands();

    REQUIRE(!ui::statusbar::AutoMergeEnabled());
    REQUIRE(ui::statusbar::RefreshCount() == 0);

    REQUIRE(ui::statusbar::OnStatusBarAutoMergeButton());
    REQUIRE(ui::statusbar::AutoMergeEnabled());
    REQUIRE(ui::statusbar::RefreshCount() == 1);
    auto stored = io::settings::LoadSetting("ui.status.auto_merge");
    REQUIRE(stored.has_value());
    REQUIRE(*stored == "true");

    REQUIRE(!ui::statusbar::OnStatusBarAutoMergeButton());
    REQUIRE(!ui::statusbar::AutoMergeEnabled());
    REQUIRE(ui::statusbar::RefreshCount() == 2);
    stored = io::settings::LoadSetting("ui.status.auto_merge");
    REQUIRE(stored.has_value());
    REQUIRE(*stored == "false");

    ui::statusbar::ResetStatusBarStateForTesting();
    io::settings::SaveSetting("ui.status.auto_merge", "true");
    ui::statusbar::InitializeStatusBarCommands();
    REQUIRE(ui::statusbar::AutoMergeEnabled());
}

TEST_CASE("Grid commands persist spacing and snap state", "[ui][grid]") {
    io::settings::ResetSettings();
    ui::grid::ResetGridStateForTesting();
    ui::grid::InitializeGridCommands();

    constexpr double kTolerance = 1e-6;
    auto state = ui::grid::CurrentState();
    REQUIRE(state.snap_enabled);
    REQUIRE(std::abs(state.spacing - 10.0) < kTolerance);
    REQUIRE(std::abs(state.major_spacing - 50.0) < kTolerance);

    REQUIRE(!ui::grid::ToggleSnap());
    state = ui::grid::CurrentState();
    REQUIRE(!state.snap_enabled);
    auto snap_setting = io::settings::LoadSetting("ui.grid.snap");
    REQUIRE(snap_setting.has_value());
    REQUIRE(*snap_setting == "false");

    ui::grid::SetSpacing(12.0);
    state = ui::grid::CurrentState();
    REQUIRE(std::abs(state.spacing - 12.0) < kTolerance);
    REQUIRE(std::abs(state.major_spacing - 50.0) < kTolerance);

    ui::grid::SetMajorSpacing(40.0);
    state = ui::grid::CurrentState();
    REQUIRE(std::abs(state.major_spacing - 40.0) < kTolerance);

    ui::grid::SetMajorSpacing(10.0);
    state = ui::grid::CurrentState();
    REQUIRE(std::abs(state.major_spacing - 12.0) < kTolerance);

    REQUIRE(framework::commands::ExecuteCommand("grid.spacing.increase"));
    state = ui::grid::CurrentState();
    REQUIRE(std::abs(state.spacing - 17.0) < kTolerance);
    REQUIRE(std::abs(state.major_spacing - 17.0) < kTolerance);

    REQUIRE(framework::commands::ExecuteCommand("grid.spacing.decrease"));
    state = ui::grid::CurrentState();
    REQUIRE(std::abs(state.spacing - 12.0) < kTolerance);
    REQUIRE(std::abs(state.major_spacing - 17.0) < kTolerance);

    REQUIRE(framework::commands::ExecuteCommand("grid.snap.toggle"));
    state = ui::grid::CurrentState();
    REQUIRE(state.snap_enabled);

    ui::grid::SetSpacing(-5.0);
    state = ui::grid::CurrentState();
    REQUIRE(std::abs(state.spacing - 0.1) < kTolerance);
    REQUIRE(std::abs(state.major_spacing - 17.0) < kTolerance);

    auto spacing_setting = io::settings::LoadSetting("ui.grid.spacing");
    REQUIRE(spacing_setting.has_value());
    REQUIRE(std::abs(std::stod(*spacing_setting) - state.spacing) < 1e-6);

    ui::grid::ResetGridStateForTesting();
    io::settings::SaveSetting("ui.grid.snap", "false");
    io::settings::SaveSetting("ui.grid.spacing", "32.5");
    io::settings::SaveSetting("ui.grid.spacing.major", "48.0");
    ui::grid::InitializeGridCommands();
    state = ui::grid::CurrentState();
    REQUIRE(!state.snap_enabled);
    REQUIRE(std::abs(state.spacing - 32.5) < kTolerance);
    REQUIRE(std::abs(state.major_spacing - 48.0) < kTolerance);
}

TEST_CASE("Print preview navigation respects bounds", "[ui][printpreview]") {
    ui::printpreview::ResetPreviewStateForTesting();
    ui::printpreview::ConfigurePreview(3);
    REQUIRE(ui::printpreview::OnUpdateUiPrintPreviewNextPage());
    REQUIRE(ui::printpreview::OnCommandPrintPreviewNextPage());
    REQUIRE(ui::printpreview::CurrentPage() == 1);
    REQUIRE(ui::printpreview::OnUpdateUiPrintPreviewPreviousPage());
    REQUIRE(ui::printpreview::OnCommandPrintPreviewPreviousPage());
    REQUIRE(ui::printpreview::CurrentPage() == 0);
    REQUIRE(!ui::printpreview::OnCommandPrintPreviewPreviousPage());
    REQUIRE(ui::printpreview::OnCommandPrintPreviewRatio1());
    REQUIRE(std::abs(ui::printpreview::CurrentRatio() - 1.0) < 1e-6);
    REQUIRE(ui::printpreview::OnCommandPrintPreviewRatio2());
    REQUIRE(std::abs(ui::printpreview::CurrentRatio() - 2.0) < 1e-6);
}

TEST_CASE("Command bus routes ribbon and preview commands", "[ui][framework]") {
    framework::commands::ClearHandlersForTesting();

    int move_calls = 0;
    framework::commands::RegisterHandler(framework::commands::CommandId::Move,
                                         [&](const auto&) { ++move_calls; });

    ui::ribbon::ResetRibbonStateForTesting();
    ui::ribbon::ConfigureSelection(1, false, false);
    REQUIRE(framework::commands::ExecuteCommand("ribbon.home.edit.move"));
    REQUIRE(move_calls == 1);
    REQUIRE(ui::ribbon::LastExecutedCommand() == "move");

    ui::printpreview::ResetPreviewStateForTesting();
    ui::printpreview::ConfigurePreview(2);
    REQUIRE(framework::commands::ExecuteCommand("print.preview.next"));
    REQUIRE(ui::printpreview::CurrentPage() == 1);

    ui::statusbar::ResetStatusBarStateForTesting();
    ui::statusbar::InitializeStatusBarCommands();
    REQUIRE(framework::commands::ExecuteCommand("statusbar.auto_merge.toggle"));
    REQUIRE(ui::statusbar::AutoMergeEnabled());
}

TEST_CASE("Typed command bus dispatches synchronously and asynchronously",
          "[framework]") {
    using namespace std::chrono_literals;

    framework::commands::ClearHandlersForTesting();
    std::mutex mutex;
    std::condition_variable cv;
    std::vector<double> recorded;

    framework::commands::RegisterHandler(framework::commands::CommandId::Move,
                                         [&](const auto& context) {
                                             {
                                                 std::lock_guard<std::mutex> lock(
                                                     mutex);
                                                 recorded.push_back(context.cursor_x);
                                             }
                                             cv.notify_all();
                                         });

    framework::commands::CommandContext dispatch_context;
    dispatch_context.cursor_x = 1.0;
    framework::commands::Dispatch(framework::commands::CommandId::Move,
                                  dispatch_context);
    {
        std::unique_lock<std::mutex> lock(mutex);
        REQUIRE(cv.wait_for(lock, 100ms,
                            [&] { return recorded.size() >= 1; }));
    }
    REQUIRE(std::abs(recorded.front() - 1.0) < 1e-6);

    framework::commands::CommandContext post_context;
    post_context.cursor_x = 2.0;
    framework::commands::Post(framework::commands::CommandId::Move, post_context);
    {
        std::unique_lock<std::mutex> lock(mutex);
        REQUIRE(cv.wait_for(lock, 100ms,
                            [&] { return recorded.size() >= 2; }));
    }
    REQUIRE(std::abs(recorded.back() - 2.0) < 1e-6);
}
