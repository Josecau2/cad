#include "ui/grid/Grid.h"

#include <algorithm>
#include <cctype>
#include <mutex>
#include <optional>
#include <sstream>
#include <string>

#include "framework/CommandBus.h"
#include "framework/FunctionRegistry.h"
#include "io/Settings.h"

namespace ui::grid {
namespace {
struct GridRuntimeState {
    bool snap_enabled = true;
    double spacing = 10.0;
    double major_spacing = 50.0;
};

GridRuntimeState& state() {
    static GridRuntimeState runtime;
    return runtime;
}

std::mutex& state_mutex() {
    static std::mutex mutex;
    return mutex;
}

constexpr bool kDefaultSnap = true;
constexpr double kDefaultSpacing = 10.0;
constexpr double kDefaultMajorSpacing = 50.0;
constexpr double kMinSpacing = 0.1;
constexpr double kMaxSpacing = 1000.0;

constexpr const char* kSnapSettingKey = "ui.grid.snap";
constexpr const char* kSpacingSettingKey = "ui.grid.spacing";
constexpr const char* kMajorSpacingSettingKey = "ui.grid.spacing.major";

std::string formatDouble(double value) {
    std::ostringstream stream;
    stream.setf(std::ios::fixed);
    stream.precision(3);
    stream << value;
    std::string text = stream.str();
    while (!text.empty() && text.back() == '0') {
        text.pop_back();
    }
    if (!text.empty() && text.back() == '.') {
        text.pop_back();
    }
    if (text.empty()) {
        return "0";
    }
    return text;
}

double clampSpacing(double spacing) {
    return std::clamp(spacing, kMinSpacing, kMaxSpacing);
}

std::optional<double> parseDouble(const std::optional<std::string>& value) {
    if (!value.has_value()) {
        return std::nullopt;
    }
    try {
        size_t processed = 0;
        double parsed = std::stod(*value, &processed);
        if (processed == 0) {
            return std::nullopt;
        }
        return parsed;
    } catch (const std::exception&) {
        return std::nullopt;
    }
}

bool parseBool(const std::optional<std::string>& value, bool default_value) {
    if (!value.has_value()) {
        return default_value;
    }
    std::string lowered;
    lowered.reserve(value->size());
    for (char ch : *value) {
        lowered.push_back(static_cast<char>(std::tolower(static_cast<unsigned char>(ch))));
    }
    if (lowered == "true" || lowered == "1" || lowered == "on" || lowered == "yes" ||
        lowered == "enabled") {
        return true;
    }
    if (lowered == "false" || lowered == "0" || lowered == "off" || lowered == "no" ||
        lowered == "disabled") {
        return false;
    }
    return default_value;
}

void storeSnapSetting(bool enabled) {
    io::settings::SaveSetting(kSnapSettingKey, enabled ? "true" : "false");
}

void storeSpacingSettings(double spacing, double major_spacing) {
    io::settings::SaveSetting(kSpacingSettingKey, formatDouble(spacing));
    io::settings::SaveSetting(kMajorSpacingSettingKey, formatDouble(major_spacing));
}

void adjustSpacing(double delta) {
    double spacing = 0.0;
    double major = 0.0;
    {
        std::lock_guard<std::mutex> lock(state_mutex());
        GridRuntimeState& data = state();
        data.spacing = clampSpacing(data.spacing + delta);
        if (data.major_spacing < data.spacing) {
            data.major_spacing = data.spacing;
        }
        spacing = data.spacing;
        major = data.major_spacing;
    }
    storeSpacingSettings(spacing, major);
}

}  // namespace

void ensureCommandsRegistered();

void ResetGridStateForTesting() {
    std::lock_guard<std::mutex> lock(state_mutex());
    GridRuntimeState& data = state();
    data.snap_enabled = kDefaultSnap;
    data.spacing = kDefaultSpacing;
    data.major_spacing = kDefaultMajorSpacing;
    io::settings::EraseSetting(kSnapSettingKey);
    io::settings::EraseSetting(kSpacingSettingKey);
    io::settings::EraseSetting(kMajorSpacingSettingKey);
}

GridState CurrentState() {
    std::lock_guard<std::mutex> lock(state_mutex());
    const GridRuntimeState& data = state();
    return GridState{data.snap_enabled, data.spacing, data.major_spacing};
}

bool ToggleSnap() {
    ensureCommandsRegistered();
    bool enabled = false;
    {
        std::lock_guard<std::mutex> lock(state_mutex());
        GridRuntimeState& data = state();
        data.snap_enabled = !data.snap_enabled;
        enabled = data.snap_enabled;
    }
    storeSnapSetting(enabled);
    return enabled;
}

void SetSpacing(double spacing) {
    ensureCommandsRegistered();
    double snapped_spacing = clampSpacing(spacing);
    double major = 0.0;
    {
        std::lock_guard<std::mutex> lock(state_mutex());
        GridRuntimeState& data = state();
        data.spacing = snapped_spacing;
        if (data.major_spacing < data.spacing) {
            data.major_spacing = data.spacing;
        }
        major = data.major_spacing;
    }
    storeSpacingSettings(snapped_spacing, major);
}

void SetMajorSpacing(double spacing) {
    ensureCommandsRegistered();
    double major_spacing = clampSpacing(spacing);
    double base_spacing = 0.0;
    {
        std::lock_guard<std::mutex> lock(state_mutex());
        GridRuntimeState& data = state();
        if (major_spacing < data.spacing) {
            major_spacing = data.spacing;
        }
        data.major_spacing = major_spacing;
        base_spacing = data.spacing;
    }
    storeSpacingSettings(base_spacing, major_spacing);
}

void InitializeGridCommands() {
    ensureCommandsRegistered();

    const bool snap = parseBool(io::settings::LoadSetting(kSnapSettingKey), kDefaultSnap);
    const double spacing = clampSpacing(
        parseDouble(io::settings::LoadSetting(kSpacingSettingKey)).value_or(kDefaultSpacing));
    const double major_spacing = clampSpacing(
        parseDouble(io::settings::LoadSetting(kMajorSpacingSettingKey))
            .value_or(kDefaultMajorSpacing));

    std::lock_guard<std::mutex> lock(state_mutex());
    GridRuntimeState& data = state();
    data.snap_enabled = snap;
    data.spacing = spacing;
    data.major_spacing = std::max(spacing, major_spacing);
}

void ensureCommandsRegistered() {
    static std::once_flag flag;
    std::call_once(flag, []() {
        framework::commands::RegisterCommand("grid.snap.toggle", []() { ToggleSnap(); });
        framework::commands::RegisterCommand("grid.spacing.increase", []() {
            adjustSpacing(5.0);
        });
        framework::commands::RegisterCommand("grid.spacing.decrease", []() {
            adjustSpacing(-5.0);
        });
    });
}

}  // namespace ui::grid

namespace {
const framework::FunctionRegistration toggle_snap_registration{
    "ui::grid::ToggleSnap", []() {
        ui::grid::ResetGridStateForTesting();
        ui::grid::ToggleSnap();
    }};

const framework::FunctionRegistration set_spacing_registration{
    "ui::grid::SetSpacing", []() {
        ui::grid::ResetGridStateForTesting();
        ui::grid::SetSpacing(25.0);
    }};

const framework::FunctionRegistration set_major_spacing_registration{
    "ui::grid::SetMajorSpacing", []() {
        ui::grid::ResetGridStateForTesting();
        ui::grid::SetSpacing(20.0);
        ui::grid::SetMajorSpacing(60.0);
    }};

const framework::FunctionRegistration initialize_commands_registration{
    "ui::grid::InitializeGridCommands", []() {
        ui::grid::ResetGridStateForTesting();
        ui::grid::InitializeGridCommands();
    }};
}  // namespace
