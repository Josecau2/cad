#include "framework/FeatureGate.h"

#include <algorithm>
#include <mutex>
#include <sstream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "framework/FunctionRegistry.h"
#include "io/Settings.h"

namespace framework::features {
namespace {
constexpr const char* kSettingsKey = "features.enabled";

struct FeatureState {
    bool enabled = false;
    bool default_enabled = false;
    bool declared = false;
    bool from_settings = false;
    std::string description;
};

std::string trim(const std::string& value) {
    const auto start = value.find_first_not_of(" \t\r\n");
    if (start == std::string::npos) {
        return {};
    }
    const auto end = value.find_last_not_of(" \t\r\n");
    if (end == std::string::npos || end < start) {
        return {};
    }
    return value.substr(start, end - start + 1);
}

class FeatureGate {
public:
    bool declare(const std::string& name, bool default_enabled,
                 std::string description);

    bool enable(const std::string& name);

    bool disable(const std::string& name);

    bool isEnabled(const std::string& name);

    std::vector<std::string> enabledFeatures();

    void reset(bool clear_settings);

private:
    FeatureState& stateFor(const std::string& name);

    void ensureLoadedLocked();

    void persistLocked();

    static void updateOverride(FeatureState& state);

    mutable std::mutex mutex_;
    bool loaded_ = false;
    std::unordered_map<std::string, FeatureState> states_;
};

FeatureGate& gate() {
    static FeatureGate instance;
    return instance;
}

const framework::FunctionRegistration declare_registration{
    "framework::features::DeclareFeature", []() {
        ResetFeatureGateForTesting(true);
        DeclareFeature("coverage.feature", false, "coverage");
    }};

const framework::FunctionRegistration enable_registration{
    "framework::features::EnableFeature", []() {
        ResetFeatureGateForTesting(true);
        DeclareFeature("coverage.feature", false, "coverage");
        EnableFeature("coverage.feature");
    }};

const framework::FunctionRegistration disable_registration{
    "framework::features::DisableFeature", []() {
        ResetFeatureGateForTesting(true);
        DeclareFeature("coverage.feature", true, "coverage");
        DisableFeature("coverage.feature");
    }};

const framework::FunctionRegistration is_enabled_registration{
    "framework::features::IsFeatureEnabled", []() {
        ResetFeatureGateForTesting(true);
        DeclareFeature("coverage.feature", true, "coverage");
        IsFeatureEnabled("coverage.feature");
    }};

}  // namespace

bool FeatureGate::declare(const std::string& name, bool default_enabled,
                          std::string description) {
    std::lock_guard<std::mutex> lock(mutex_);
    ensureLoadedLocked();

    FeatureState& state = stateFor(name);
    const bool was_declared = state.declared;
    state.declared = true;
    state.default_enabled = default_enabled;
    if (!description.empty()) {
        state.description = std::move(description);
    }
    if (!state.from_settings) {
        state.enabled = default_enabled;
    }
    updateOverride(state);
    return !was_declared;
}

bool FeatureGate::enable(const std::string& name) {
    std::lock_guard<std::mutex> lock(mutex_);
    ensureLoadedLocked();

    FeatureState& state = stateFor(name);
    const bool changed = !state.enabled;
    state.enabled = true;
    state.declared = true;
    updateOverride(state);
    persistLocked();
    return changed;
}

bool FeatureGate::disable(const std::string& name) {
    std::lock_guard<std::mutex> lock(mutex_);
    ensureLoadedLocked();

    FeatureState& state = stateFor(name);
    const bool changed = state.enabled;
    state.enabled = false;
    state.declared = true;
    updateOverride(state);
    persistLocked();
    return changed;
}

bool FeatureGate::isEnabled(const std::string& name) {
    std::lock_guard<std::mutex> lock(mutex_);
    ensureLoadedLocked();
    const auto it = states_.find(name);
    if (it == states_.end()) {
        return false;
    }
    return it->second.enabled;
}

std::vector<std::string> FeatureGate::enabledFeatures() {
    std::lock_guard<std::mutex> lock(mutex_);
    ensureLoadedLocked();
    std::vector<std::string> enabled;
    enabled.reserve(states_.size());
    for (const auto& [name, state] : states_) {
        if (state.enabled) {
            enabled.push_back(name);
        }
    }
    std::sort(enabled.begin(), enabled.end());
    return enabled;
}

void FeatureGate::reset(bool clear_settings) {
    std::lock_guard<std::mutex> lock(mutex_);
    states_.clear();
    loaded_ = false;
    if (clear_settings) {
        io::settings::EraseSetting(kSettingsKey);
    }
}

FeatureState& FeatureGate::stateFor(const std::string& name) {
    return states_[name];
}

void FeatureGate::ensureLoadedLocked() {
    if (loaded_) {
        return;
    }
    loaded_ = true;

    const auto stored = io::settings::LoadSetting(kSettingsKey);
    if (!stored.has_value()) {
        return;
    }

    const bool has_assignment = stored->find('=') != std::string::npos;
    const char delimiter = has_assignment ? ';' : ',';
    std::stringstream stream(*stored);
    std::string token;
    while (std::getline(stream, token, delimiter)) {
        auto entry = trim(token);
        if (entry.empty()) {
            continue;
        }
        if (has_assignment) {
            const auto sep = entry.find('=');
            auto name = trim(entry.substr(0, sep));
            if (name.empty()) {
                continue;
            }
            bool enabled = true;
            if (sep != std::string::npos) {
                auto value = trim(entry.substr(sep + 1));
                if (value == "0" || value == "false" || value == "FALSE" ||
                    value == "False") {
                    enabled = false;
                }
            }
            FeatureState& state = states_[name];
            state.enabled = enabled;
            state.declared = true;
            state.from_settings = true;
        } else {
            FeatureState& state = states_[entry];
            state.enabled = true;
            state.declared = true;
            state.from_settings = true;
        }
    }
}

void FeatureGate::persistLocked() {
    std::vector<std::string> entries;
    entries.reserve(states_.size());
    for (const auto& [name, state] : states_) {
        if ((!state.declared && !state.from_settings) || name.empty()) {
            continue;
        }
        entries.push_back(name + "=" + (state.enabled ? "1" : "0"));
    }
    if (entries.empty()) {
        io::settings::EraseSetting(kSettingsKey);
        return;
    }
    std::sort(entries.begin(), entries.end());
    std::string combined;
    for (std::size_t i = 0; i < entries.size(); ++i) {
        if (i > 0) {
            combined.push_back(';');
        }
        combined += entries[i];
    }
    io::settings::SaveSetting(kSettingsKey, combined);
}

void FeatureGate::updateOverride(FeatureState& state) {
    state.from_settings = state.enabled != state.default_enabled;
}

bool DeclareFeature(const std::string& name, bool default_enabled,
                    std::string description) {
    return gate().declare(name, default_enabled, std::move(description));
}

bool EnableFeature(const std::string& name) { return gate().enable(name); }

bool DisableFeature(const std::string& name) { return gate().disable(name); }

bool IsFeatureEnabled(const std::string& name) {
    return gate().isEnabled(name);
}

std::vector<std::string> EnabledFeatures() {
    return gate().enabledFeatures();
}

void ResetFeatureGateForTesting(bool clear_settings) {
    gate().reset(clear_settings);
}

}  // namespace framework::features
