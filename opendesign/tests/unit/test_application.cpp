#define CATCH_CONFIG_MAIN
#include "catch2.hpp"

#include <atomic>
#include <chrono>
#include <string>
#include <thread>

#include "app/Application.h"
#include "cad/Document.h"
#include "compat/mfc/Dialogs.h"
#include "compat/win/Window.h"
#include "io/Settings.h"
#include "render/Viewport.h"
#include "ui/html/HtmlUI.h"

TEST_CASE("Application lifecycle", "[app]") {
    app::Application application;
    REQUIRE(application.commandCount() >= 3);

    application.initialize();
    REQUIRE(!application.ribbonSimplified());

    application.run();
    REQUIRE(application.isRunning());
    REQUIRE(ui::html::IsVisible());

    application.shutdown();
    REQUIRE(!application.isRunning());
}

TEST_CASE("Document creation and closing", "[cad]") {
    auto& doc = cad::document::NewDocument("Test");
    REQUIRE(doc.open);
    REQUIRE(cad::document::CloseDocument(doc.id));
}

TEST_CASE("Window creation shim", "[compat]") {
    compat::win::Rect rect{10, 10, 200, 120};
    auto handle = compat::win::CreateWindowEx("Widget", "Unit Test", rect);
    REQUIRE(handle);
    REQUIRE(handle->geometry.width == 200);
    compat::win::ShowWindow(handle, true);
    REQUIRE(handle->visible);
}

TEST_CASE("Dialog lifecycle shim", "[compat]") {
    compat::mfc::Dialog dialog{"Settings"};
    REQUIRE(compat::mfc::OnInitDialog(dialog));
    compat::mfc::EndDialog(dialog, 1);
    REQUIRE(!dialog.initialized);
    REQUIRE(dialog.result == 1);
}

TEST_CASE("Settings round trip", "[io]") {
    io::settings::SaveSetting("app.theme", "light");
    auto value = io::settings::LoadSetting("app.theme");
    REQUIRE(value.has_value());
    REQUIRE(*value == "light");
}

TEST_CASE("Command bus guards reads while registering", "[framework]") {
    using namespace std::chrono_literals;
    std::atomic<bool> stop{false};
    std::thread worker([&]() {
        int counter = 0;
        while (!stop.load(std::memory_order_relaxed)) {
            const std::string name = "stress.command." + std::to_string(counter++);
            framework::commands::RegisterCommand(name, []() {});
        }
    });

    std::size_t last_count = framework::commands::CommandCount();
    for (int i = 0; i < 100; ++i) {
        const auto count = framework::commands::CommandCount();
        REQUIRE(count >= last_count);
        last_count = count;
        std::this_thread::sleep_for(1ms);
    }

    stop.store(true, std::memory_order_relaxed);
    worker.join();
}

TEST_CASE("Viewport projection stores owned copy", "[render]") {
    render::Viewport viewport;
    const char* initial = viewport.projection();
    REQUIRE(initial != nullptr);

    viewport.setProjection(std::string{"orthographic"}.c_str());
    const char* stored = viewport.projection();
    REQUIRE(stored != nullptr);
    REQUIRE(std::string{stored} == "orthographic");
}
