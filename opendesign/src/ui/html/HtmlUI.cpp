#include "ui/html/HtmlUI.h"

#include <mutex>
#include <string>

#include "framework/FunctionRegistry.h"

namespace ui::html {
namespace {
struct HtmlUiState {
    bool visible = true;
    std::string caption = "Design Workspace";
};

HtmlUiState& state() {
    static HtmlUiState ui_state;
    return ui_state;
}

std::mutex& mutex() {
    static std::mutex mtx;
    return mtx;
}

const framework::FunctionRegistration hide_ui_registration{
    "ui::html::HideUI", []() {
        HideUI();
    }};

const framework::FunctionRegistration show_ui_registration{
    "ui::html::ShowUI", []() {
        ShowUI();
    }};
}  // namespace

bool HideUI() {
    std::lock_guard<std::mutex> lock(mutex());
    HtmlUiState& current = state();
    const bool changed = current.visible;
    current.visible = false;
    current.caption = "Hidden";
    return changed;
}

bool ShowUI() {
    std::lock_guard<std::mutex> lock(mutex());
    HtmlUiState& current = state();
    const bool changed = !current.visible;
    current.visible = true;
    current.caption = "Design Workspace";
    return changed;
}

bool IsVisible() {
    std::lock_guard<std::mutex> lock(mutex());
    return state().visible;
}

std::string Caption() {
    std::lock_guard<std::mutex> lock(mutex());
    return state().caption;
}

}  // namespace ui::html
