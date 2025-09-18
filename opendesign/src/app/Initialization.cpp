#include "app/Initialization.h"

#include <mutex>
#include <string>
#include <utility>
#include <vector>

#include "compat/win/Menu.h"
#include "framework/CommandBus.h"
#include "framework/FeatureGate.h"
#include "framework/FunctionRegistry.h"
#include "io/Settings.h"

namespace app::init {
namespace {

struct InitState {
    std::mutex mutex;
    bool init_application = false;
    bool my_init_instance = false;
    bool afx_ole_init = false;
    bool init_2020_registry = false;
    bool initialize_settings = false;
    bool init_font = false;
    bool init_auto_colors = false;
    bool init_menu_bar = false;
    bool init_header = false;
    bool init_navigation_control = false;
    bool init_zoom = false;
    std::string font_family;
    std::string color_scheme;
    int zoom_percent = 0;
    compat::win::MenuHandle menu;
    std::vector<std::string> call_order;
};

InitState& mutableState() {
    static InitState state;
    return state;
}

template <typename Fn>
bool recordCall(const char* name, bool& flag, Fn&& fn) {
    auto& state = mutableState();
    std::lock_guard<std::mutex> lock(state.mutex);
    if (flag) {
        return false;
    }
    flag = true;
    state.call_order.emplace_back(name);
    std::forward<Fn>(fn)(state);
    return true;
}

bool recordCall(const char* name, bool& flag) {
    return recordCall(name, flag, [](InitState&) {});
}

const framework::FunctionRegistration init_application_registration{
    "app::init::InitApplication", []() { InitApplication(); }};

const framework::FunctionRegistration my_init_instance_registration{
    "app::init::MyInitInstance", []() { MyInitInstance(); }};

const framework::FunctionRegistration afx_ole_init_registration{
    "app::init::AfxOleInit", []() { AfxOleInit(); }};

const framework::FunctionRegistration init_2020_registry_registration{
    "app::init::Init2020Registry", []() { Init2020Registry(); }};

const framework::FunctionRegistration initialize_settings_registration{
    "app::init::InitializeSettings", []() { InitializeSettings(); }};

const framework::FunctionRegistration init_font_registration{
    "app::init::InitFont", []() { InitFont(); }};

const framework::FunctionRegistration init_auto_colors_registration{
    "app::init::InitAutoColors", []() { InitAutoColors(); }};

const framework::FunctionRegistration init_menu_bar_registration{
    "app::init::InitMenuBar", []() { InitMenuBar(); }};

const framework::FunctionRegistration init_header_registration{
    "app::init::InitHeader", []() { InitHeader(); }};

const framework::FunctionRegistration init_navigation_control_registration{
    "app::init::InitNavigationControl", []() { InitNavigationControl(); }};

const framework::FunctionRegistration init_zoom_registration{
    "app::init::InitZoom", []() { InitZoom(); }};

}  // namespace

bool InitApplication() {
    return recordCall("InitApplication", mutableState().init_application,
                      [](InitState&) {
                          io::settings::SaveSetting("app.initialized", "true");
                          framework::features::DeclareFeature(
                              "360_publish", false,
                              "Allow publishing designs to the cloud");
                          framework::features::DeclareFeature(
                              "custom_ribbon", true,
                              "Enable ribbon customization options");
                          framework::features::DeclareFeature(
                              "high_quality_preview", false,
                              "Access high quality rendering previews");
                          framework::features::DeclareFeature(
                              "quick_pricing", false,
                              "Unlock quick pricing workflow panels");
                      });
}

bool MyInitInstance() {
    InitApplication();
    return recordCall("MyInitInstance", mutableState().my_init_instance,
                      [](InitState&) {
                          io::settings::SaveSetting("app.instance", "primary");
                      });
}

bool AfxOleInit() {
    MyInitInstance();
    return recordCall("AfxOleInit", mutableState().afx_ole_init,
                      [](InitState&) {
                          io::settings::SaveSetting("app.ole", "initialized");
                      });
}

bool Init2020Registry() {
    AfxOleInit();
    return recordCall("Init2020Registry", mutableState().init_2020_registry,
                      [](InitState&) {
                          io::settings::SaveSetting("registry.version", "2020");
                      });
}

bool InitializeSettings() {
    Init2020Registry();
    return recordCall("InitializeSettings", mutableState().initialize_settings,
                      [](InitState&) {
                          if (!io::settings::LoadSetting("ui.theme")) {
                              io::settings::SaveSetting("ui.theme", "Iris Light");
                          }
                      });
}

bool InitFont() {
    InitializeSettings();
    return recordCall("InitFont", mutableState().init_font, [](InitState& state) {
        state.font_family = "Iris UI";
        io::settings::SaveSetting("ui.font.family", state.font_family);
    });
}

bool InitAutoColors() {
    InitFont();
    return recordCall("InitAutoColors", mutableState().init_auto_colors,
                      [](InitState& state) {
                          state.color_scheme = "Iris";
                          io::settings::SaveSetting("ui.accent.color", state.color_scheme);
                      });
}

bool InitMenuBar() {
    InitAutoColors();
    return recordCall("InitMenuBar", mutableState().init_menu_bar,
                      [](InitState& state) {
                          state.menu = compat::win::CreateMenu();
                          if (!state.menu) {
                              return;
                          }
                          if (!framework::commands::HasCommand("app.init.menu.file.new")) {
                              framework::commands::RegisterCommand(
                                  "app.init.menu.file.new", []() {});
                          }
                          compat::win::MenuItem new_item{"menu.file.new", "New Project", true,
                                                           []() {
                                                               framework::commands::ExecuteCommand(
                                                                   "app.init.menu.file.new");
                                                           }};
                          state.menu->addItem(std::move(new_item));
                          if (!framework::commands::HasCommand("app.init.menu.file.open")) {
                              framework::commands::RegisterCommand(
                                  "app.init.menu.file.open", []() {});
                          }
                          compat::win::MenuItem open_item{"menu.file.open", "Open Project", true,
                                                            []() {
                                                                framework::commands::ExecuteCommand(
                                                                    "app.init.menu.file.open");
                                                            }};
                          state.menu->addItem(std::move(open_item));
                      });
}

bool InitHeader() {
    InitMenuBar();
    return recordCall("InitHeader", mutableState().init_header, [](InitState&) {});
}

bool InitNavigationControl() {
    InitHeader();
    return recordCall("InitNavigationControl", mutableState().init_navigation_control,
                      [](InitState&) {
                          if (!framework::commands::HasCommand("app.init.navigate.home")) {
                              framework::commands::RegisterCommand(
                                  "app.init.navigate.home", []() {});
                          }
                      });
}

bool InitZoom() {
    InitNavigationControl();
    return recordCall("InitZoom", mutableState().init_zoom, [](InitState& state) {
        state.zoom_percent = 100;
        framework::commands::RegisterCommand("app.init.zoom.reset", []() {});
        framework::commands::RegisterCommand("app.init.zoom.in", []() {});
        framework::commands::RegisterCommand("app.init.zoom.out", []() {});
        io::settings::SaveSetting("view.zoom.percent", std::to_string(state.zoom_percent));
    });
}

std::vector<std::string> CallOrder() {
    auto& state = mutableState();
    std::lock_guard<std::mutex> lock(state.mutex);
    return state.call_order;
}

std::string ActiveFont() {
    auto& state = mutableState();
    std::lock_guard<std::mutex> lock(state.mutex);
    return state.font_family;
}

std::string ActiveColorScheme() {
    auto& state = mutableState();
    std::lock_guard<std::mutex> lock(state.mutex);
    return state.color_scheme;
}

int ActiveZoomPercent() {
    auto& state = mutableState();
    std::lock_guard<std::mutex> lock(state.mutex);
    return state.zoom_percent;
}

bool HasMenuItem(const std::string& id) {
    auto& state = mutableState();
    std::lock_guard<std::mutex> lock(state.mutex);
    if (!state.menu) {
        return false;
    }
    for (const auto& item : state.menu->items()) {
        if (item.id == id) {
            return true;
        }
    }
    return false;
}

void ResetForTesting() {
    auto& state = mutableState();
    std::lock_guard<std::mutex> lock(state.mutex);
    state.init_application = false;
    state.my_init_instance = false;
    state.afx_ole_init = false;
    state.init_2020_registry = false;
    state.initialize_settings = false;
    state.init_font = false;
    state.init_auto_colors = false;
    state.init_menu_bar = false;
    state.init_header = false;
    state.init_navigation_control = false;
    state.init_zoom = false;
    state.font_family.clear();
    state.color_scheme.clear();
    state.zoom_percent = 0;
    state.menu.reset();
    state.call_order.clear();
}

}  // namespace app::init
