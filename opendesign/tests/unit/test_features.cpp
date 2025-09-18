#include "catch2.hpp"

#include <algorithm>
#include <vector>

#include "app/Initialization.h"
#include "framework/FeatureGate.h"
#include "io/Settings.h"

TEST_CASE("Feature gate toggles persist through settings", "[framework][features]") {
    io::settings::ResetSettings();
    framework::features::ResetFeatureGateForTesting(true);

    REQUIRE(framework::features::DeclareFeature("360_publish", false,
                                                "Publish designs to the cloud"));
    REQUIRE(framework::features::DeclareFeature("custom_ribbon", true,
                                                "Customize the ribbon"));
    REQUIRE(!framework::features::DeclareFeature("custom_ribbon", true));

    REQUIRE(!framework::features::IsFeatureEnabled("360_publish"));
    REQUIRE(framework::features::IsFeatureEnabled("custom_ribbon"));

    REQUIRE(framework::features::EnableFeature("360_publish"));
    REQUIRE(!framework::features::EnableFeature("360_publish"));

    auto enabled = framework::features::EnabledFeatures();
    const std::vector<std::string> expected_enabled{"360_publish", "custom_ribbon"};
    REQUIRE(enabled == expected_enabled);

    auto stored = io::settings::LoadSetting("features.enabled");
    REQUIRE(stored.has_value());
    REQUIRE(*stored == "360_publish=1;custom_ribbon=1");

    REQUIRE(framework::features::DisableFeature("custom_ribbon"));
    REQUIRE(!framework::features::DisableFeature("custom_ribbon"));
    REQUIRE(!framework::features::IsFeatureEnabled("custom_ribbon"));

    stored = io::settings::LoadSetting("features.enabled");
    REQUIRE(stored.has_value());
    REQUIRE(*stored == "360_publish=1;custom_ribbon=0");

    framework::features::ResetFeatureGateForTesting(false);
    framework::features::DeclareFeature("360_publish", false,
                                        "Publish designs to the cloud");
    framework::features::DeclareFeature("custom_ribbon", true,
                                        "Customize the ribbon");

    REQUIRE(framework::features::IsFeatureEnabled("360_publish"));
    REQUIRE(!framework::features::IsFeatureEnabled("custom_ribbon"));

    auto enabled_after_reload = framework::features::EnabledFeatures();
    const std::vector<std::string> expected_after_reload{"360_publish"};
    REQUIRE(enabled_after_reload == expected_after_reload);

    framework::features::ResetFeatureGateForTesting(true);
    REQUIRE(!io::settings::LoadSetting("features.enabled").has_value());
}

TEST_CASE("Initialization declares baseline feature flags", "[app][init][features]") {
    app::init::ResetForTesting();
    io::settings::ResetSettings();
    framework::features::ResetFeatureGateForTesting(true);

    REQUIRE(app::init::InitApplication());

    auto enabled = framework::features::EnabledFeatures();
    REQUIRE(std::find(enabled.begin(), enabled.end(), "custom_ribbon") != enabled.end());
    REQUIRE(framework::features::IsFeatureEnabled("custom_ribbon"));
    REQUIRE(!framework::features::IsFeatureEnabled("360_publish"));
    REQUIRE(!framework::features::IsFeatureEnabled("high_quality_preview"));
    REQUIRE(!framework::features::IsFeatureEnabled("quick_pricing"));

    framework::features::ResetFeatureGateForTesting(true);
}
