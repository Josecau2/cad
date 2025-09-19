#include "catch2.hpp"

#include <string>
#include <vector>

#include "app/Initialization.h"
#include "framework/CommandBus.h"
#include "io/Settings.h"

TEST_CASE("Initialization sequence runs in documented order", "[app][init]") {
    app::init::ResetForTesting();
    io::settings::ResetSettings();

    REQUIRE(app::init::InitApplication());
    REQUIRE(app::init::MyInitInstance());
    REQUIRE(app::init::AfxOleInit());
    REQUIRE(app::init::Init2020Registry());
    REQUIRE(app::init::InitializeSettings());
    REQUIRE(app::init::InitFont());
    REQUIRE(app::init::InitAutoColors());
    REQUIRE(app::init::InitMenuBar());
    REQUIRE(app::init::InitHeader());
    REQUIRE(app::init::InitNavigationControl());
    REQUIRE(app::init::InitZoom());

    const std::vector<std::string> expected{
        "InitApplication",       "MyInitInstance",        "AfxOleInit",
        "Init2020Registry",      "InitializeSettings",    "InitFont",
        "InitAutoColors",        "InitMenuBar",           "InitHeader",
        "InitNavigationControl", "InitZoom",
    };
    REQUIRE(app::init::CallOrder() == expected);

    REQUIRE(!app::init::InitApplication());
    REQUIRE(!app::init::MyInitInstance());
    REQUIRE(!app::init::AfxOleInit());
    REQUIRE(!app::init::Init2020Registry());
    REQUIRE(!app::init::InitializeSettings());
    REQUIRE(!app::init::InitFont());
    REQUIRE(!app::init::InitAutoColors());
    REQUIRE(!app::init::InitMenuBar());
    REQUIRE(!app::init::InitHeader());
    REQUIRE(!app::init::InitNavigationControl());
    REQUIRE(!app::init::InitZoom());

    REQUIRE(app::init::CallOrder() == expected);

    REQUIRE(app::init::ActiveFont() == "Iris UI");
    REQUIRE(app::init::ActiveColorScheme() == "Iris");
    REQUIRE(app::init::ActiveZoomPercent() == 100);
    REQUIRE(app::init::HasMenuItem("menu.file.new"));
    REQUIRE(app::init::HasMenuItem("menu.file.open"));
    REQUIRE(framework::commands::HasCommand("app.init.menu.file.new"));
    REQUIRE(framework::commands::HasCommand("app.init.menu.file.open"));
    REQUIRE(framework::commands::HasCommand("app.init.navigate.home"));
    REQUIRE(framework::commands::HasCommand("app.init.zoom.reset"));

    auto theme = io::settings::LoadSetting("ui.theme");
    REQUIRE(theme.has_value());
    REQUIRE(*theme == "Iris Light");
}
