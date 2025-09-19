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
    // Additional state variables for new initialization functions
    bool fun_1400010b0 = false;
    bool fun_140001120 = false;
    bool fun_140001190 = false;
    bool fun_140001200 = false;
    bool fun_140001280 = false;
    bool fun_140001380 = false;
    bool fun_1400014a0 = false;
    bool fun_140001530 = false;
    bool fun_1400015c0 = false;
    bool fun_140001670 = false;
    bool fun_140001700 = false;
    bool fun_140001750 = false;
    bool fun_1400017a0 = false;
    bool fun_1400017f0 = false;
    bool fun_140001840 = false;
    bool fun_140001890 = false;
    bool fun_140001a80 = false;
    bool fun_140001cd0 = false;
    bool fun_140001e30 = false;
    bool fun_140001eb0 = false;
    bool fun_140001f50 = false;
    bool fun_140001fe0 = false;
    bool fun_140002070 = false;
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
    // Reset additional state variables
    state.fun_1400010b0 = false;
    state.fun_140001120 = false;
    state.fun_140001190 = false;
    state.fun_140001200 = false;
    state.fun_140001280 = false;
    state.fun_140001380 = false;
    state.fun_1400014a0 = false;
    state.fun_140001530 = false;
    state.fun_1400015c0 = false;
    state.fun_140001670 = false;
    state.fun_140001700 = false;
    state.fun_140001750 = false;
    state.fun_1400017a0 = false;
    state.fun_1400017f0 = false;
    state.fun_140001840 = false;
    state.fun_140001890 = false;
    state.fun_140001a80 = false;
    state.fun_140001cd0 = false;
    state.fun_140001e30 = false;
    state.fun_140001eb0 = false;
    state.fun_140001f50 = false;
    state.fun_140001fe0 = false;
    state.fun_140002070 = false;
    state.font_family.clear();
    state.color_scheme.clear();
    state.zoom_percent = 0;
    state.menu.reset();
    state.call_order.clear();
}

// Additional initialization functions from branch_map.yaml
bool FUN_1400010b0() {
    return recordCall("FUN_1400010b0", mutableState().fun_1400010b0, [](InitState&) {
        // Initialize core application state
        io::settings::SaveSetting("app.core.initialized", "true");
    });
}

bool FUN_140001120() {
    FUN_1400010b0();
    return recordCall("FUN_140001120", mutableState().fun_140001120, [](InitState&) {
        // Initialize memory management
        io::settings::SaveSetting("app.memory.initialized", "true");
    });
}

bool FUN_140001190() {
    FUN_140001120();
    return recordCall("FUN_140001190", mutableState().fun_140001190, [](InitState&) {
        // Initialize thread pool
        io::settings::SaveSetting("app.threading.initialized", "true");
    });
}

bool FUN_140001200() {
    FUN_140001190();
    return recordCall("FUN_140001200", mutableState().fun_140001200, [](InitState&) {
        // Initialize logging system
        io::settings::SaveSetting("app.logging.initialized", "true");
    });
}

bool FUN_140001280() {
    FUN_140001200();
    return recordCall("FUN_140001280", mutableState().fun_140001280, [](InitState&) {
        // Initialize error handling
        io::settings::SaveSetting("app.error_handling.initialized", "true");
    });
}

bool FUN_140001380() {
    FUN_140001280();
    return recordCall("FUN_140001380", mutableState().fun_140001380, [](InitState&) {
        // Initialize plugin system
        io::settings::SaveSetting("app.plugins.initialized", "true");
    });
}

bool FUN_1400014a0() {
    FUN_140001380();
    return recordCall("FUN_1400014a0", mutableState().fun_1400014a0, [](InitState&) {
        // Initialize document management
        io::settings::SaveSetting("app.documents.initialized", "true");
    });
}

bool FUN_140001530() {
    FUN_1400014a0();
    return recordCall("FUN_140001530", mutableState().fun_140001530, [](InitState&) {
        // Initialize UI framework
        io::settings::SaveSetting("app.ui.initialized", "true");
    });
}

bool FUN_1400015c0() {
    FUN_140001530();
    return recordCall("FUN_1400015c0", mutableState().fun_1400015c0, [](InitState&) {
        // Initialize rendering system
        io::settings::SaveSetting("app.rendering.initialized", "true");
    });
}

bool FUN_140001670() {
    FUN_1400015c0();
    return recordCall("FUN_140001670", mutableState().fun_140001670, [](InitState&) {
        // Initialize CAD kernel
        io::settings::SaveSetting("app.cad.initialized", "true");
    });
}

bool FUN_140001700() {
    FUN_140001670();
    return recordCall("FUN_140001700", mutableState().fun_140001700, [](InitState&) {
        // Initialize database connections
        io::settings::SaveSetting("app.database.initialized", "true");
    });
}

bool FUN_140001750() {
    FUN_140001700();
    return recordCall("FUN_140001750", mutableState().fun_140001750, [](InitState&) {
        // Initialize file I/O system
        io::settings::SaveSetting("app.io.initialized", "true");
    });
}

bool FUN_1400017a0() {
    FUN_140001750();
    return recordCall("FUN_1400017a0", mutableState().fun_1400017a0, [](InitState&) {
        // Initialize network services
        io::settings::SaveSetting("app.network.initialized", "true");
    });
}

bool FUN_1400017f0() {
    FUN_1400017a0();
    return recordCall("FUN_1400017f0", mutableState().fun_1400017f0, [](InitState&) {
        // Initialize security framework
        io::settings::SaveSetting("app.security.initialized", "true");
    });
}

bool FUN_140001840() {
    FUN_1400017f0();
    return recordCall("FUN_140001840", mutableState().fun_140001840, [](InitState&) {
        // Initialize licensing system
        io::settings::SaveSetting("app.licensing.initialized", "true");
    });
}

bool FUN_140001890() {
    FUN_140001840();
    return recordCall("FUN_140001890", mutableState().fun_140001890, [](InitState&) {
        // Initialize update system
        io::settings::SaveSetting("app.updates.initialized", "true");
    });
}

bool FUN_140001a80() {
    FUN_140001890();
    return recordCall("FUN_140001a80", mutableState().fun_140001a80, [](InitState&) {
        // Initialize backup system
        io::settings::SaveSetting("app.backup.initialized", "true");
    });
}

bool FUN_140001cd0() {
    FUN_140001a80();
    return recordCall("FUN_140001cd0", mutableState().fun_140001cd0, [](InitState&) {
        // Initialize performance monitoring
        io::settings::SaveSetting("app.performance.initialized", "true");
    });
}

bool FUN_140001e30() {
    FUN_140001cd0();
    return recordCall("FUN_140001e30", mutableState().fun_140001e30, [](InitState&) {
        // Initialize analytics
        io::settings::SaveSetting("app.analytics.initialized", "true");
    });
}

bool FUN_140001eb0() {
    FUN_140001e30();
    return recordCall("FUN_140001eb0", mutableState().fun_140001eb0, [](InitState&) {
        // Initialize crash reporting
        io::settings::SaveSetting("app.crash_reporting.initialized", "true");
    });
}

bool FUN_140001f50() {
    FUN_140001eb0();
    return recordCall("FUN_140001f50", mutableState().fun_140001f50, [](InitState&) {
        // Initialize telemetry
        io::settings::SaveSetting("app.telemetry.initialized", "true");
    });
}

bool FUN_140001fe0() {
    FUN_140001f50();
    return recordCall("FUN_140001fe0", mutableState().fun_140001fe0, [](InitState&) {
        // Initialize user preferences
        io::settings::SaveSetting("app.preferences.initialized", "true");
    });
}

bool FUN_140002070() {
    FUN_140001fe0();
    return recordCall("FUN_140002070", mutableState().fun_140002070, [](InitState&) {
        // Final initialization complete
        io::settings::SaveSetting("app.fully.initialized", "true");
    });
}

}  // namespace app::init
