#include "app/Application.h"

#include <utility>

#include "app/Initialization.h"
#include "cad/Document.h"
#include "framework/FunctionRegistry.h"
#include "ui/grid/Grid.h"
#include "ui/printpreview/PrintPreview.h"
#include "ui/ribbon/RibbonCommands.h"
#include "ui/statusbar/StatusBar.h"

namespace app {

Application::Application() {
    framework::commands::RegisterCommand(
        "application.toggle_ui", []() { ui::html::HideUI(); });
    framework::commands::RegisterCommand(
        "application.show_ui", []() { ui::html::ShowUI(); });
    framework::commands::RegisterCommand("document.new", []() {
        cad::document::NewDocument("Untitled");
    });
}

void Application::initialize() {
    init::InitZoom();
    compat::mfc::ConstructRibbonBar();
    compat::mfc::SetRibbonSimplifiedMode(false);
    io::settings::SaveSetting("ui.visible", "true");
    ui::ribbon::InitializeRibbonCommandRoutes();
    ui::grid::InitializeGridCommands();
    ui::statusbar::InitializeStatusBarCommands();
    ui::printpreview::InitializePrintPreviewCommands();
}

void Application::run() {
    running_ = true;
    framework::commands::ExecuteCommand("application.show_ui");
}

void Application::shutdown() {
    running_ = false;
}

bool Application::isRunning() const {
    return running_;
}

std::size_t Application::commandCount() const {
    return framework::commands::CommandCount();
}

bool Application::ribbonSimplified() const {
    return compat::mfc::IsRibbonSimplified();
}

}  // namespace app
