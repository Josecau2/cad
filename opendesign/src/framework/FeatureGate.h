#pragma once

#include <string>
#include <vector>

namespace framework::features {

// Registers a feature flag with a default state and optional description.
// Returns true if the feature was newly declared.
bool DeclareFeature(const std::string& name, bool default_enabled,
                    std::string description = {});

// Enables the specified feature. Returns true if the state changed.
bool EnableFeature(const std::string& name);

// Disables the specified feature. Returns true if the state changed.
bool DisableFeature(const std::string& name);

// Reports whether the feature is currently enabled.
bool IsFeatureEnabled(const std::string& name);

// Returns the sorted list of enabled features.
std::vector<std::string> EnabledFeatures();

// Resets the feature gate runtime. When clear_settings is true, any persisted
// settings are removed as well. Intended for tests.
void ResetFeatureGateForTesting(bool clear_settings = true);

}  // namespace framework::features
