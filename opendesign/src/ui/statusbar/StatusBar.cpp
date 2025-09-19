#include "ui/statusbar/StatusBar.h"

#include <mutex>
#include <string>

#include "framework/CommandBus.h"
#include "framework/FunctionRegistry.h"
#include "io/Settings.h"

namespace ui::statusbar {
namespace {
struct StatusBarState {
    bool auto_merge = false;
    int refresh_count = 0;
};

StatusBarState& state() {
    static StatusBarState status;
    return status;
}

std::mutex& state_mutex() {
    static std::mutex mutex;
    return mutex;
}

constexpr const char* kAutoMergeSettingKey = "ui.status.auto_merge";
}  // namespace

void ensureCommandsRegistered();

void ResetStatusBarStateForTesting() {
    ensureCommandsRegistered();
    std::lock_guard<std::mutex> lock(state_mutex());
    state().auto_merge = false;
    state().refresh_count = 0;
    io::settings::EraseSetting(kAutoMergeSettingKey);
}

bool OnStatusBarAutoMergeButton() {
    ensureCommandsRegistered();
    bool enabled = false;
    {
        std::lock_guard<std::mutex> lock(state_mutex());
        StatusBarState& current = state();
        current.auto_merge = !current.auto_merge;
        ++current.refresh_count;
        enabled = current.auto_merge;
    }
    io::settings::SaveSetting(kAutoMergeSettingKey, enabled ? "true" : "false");
    return enabled;
}

bool AutoMergeEnabled() {
    std::lock_guard<std::mutex> lock(state_mutex());
    return state().auto_merge;
}

int RefreshCount() {
    std::lock_guard<std::mutex> lock(state_mutex());
    return state().refresh_count;
}

void InitializeStatusBarCommands() {
    ensureCommandsRegistered();
    const auto stored = io::settings::LoadSetting(kAutoMergeSettingKey);
    if (stored.has_value()) {
        const bool enabled = *stored == "true" || *stored == "1" || *stored == "on";
        std::lock_guard<std::mutex> lock(state_mutex());
        state().auto_merge = enabled;
    }
}

void ensureCommandsRegistered() {
    static std::once_flag flag;
    std::call_once(flag, []() {
        framework::commands::RegisterCommand("statusbar.auto_merge.toggle", []() {
            OnStatusBarAutoMergeButton();
        });
    });
}

}  // namespace ui::statusbar

namespace {
const framework::FunctionRegistration auto_merge_registration{
    "ui::statusbar::OnStatusBarAutoMergeButton", []() {
        ui::statusbar::ResetStatusBarStateForTesting();
        ui::statusbar::OnStatusBarAutoMergeButton();
    }};
}  // namespace
