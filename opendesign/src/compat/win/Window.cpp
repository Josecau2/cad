#include "compat/win/Window.h"

#include <memory>

#include "framework/FunctionRegistry.h"

namespace compat::win {
namespace {
const framework::FunctionRegistration create_window_registration{
    "compat::win::CreateWindowEx", []() {
        Rect rect{0, 0, 640, 480};
        auto window = CreateWindowEx("Widget", "Sample", rect);
        ShowWindow(window, true);
        MoveWindow(window, rect);
        SetWindowText(window, "Sample Window");
    }};

const framework::FunctionRegistration show_window_registration{
    "compat::win::ShowWindow", []() {
        Rect rect{0, 0, 320, 240};
        auto window = CreateWindowEx("Widget", "Preview", rect);
        ShowWindow(window, true);
        ShowWindow(window, false);
    }};
}  // namespace

WindowHandle CreateWindowEx(const std::string& class_name,
                            const std::string& title, const Rect& rect) {
    auto window = std::make_shared<Window>();
    window->class_name = class_name;
    window->title = title;
    window->geometry = rect;
    window->visible = false;
    return window;
}

void ShowWindow(const WindowHandle& window, bool show) {
    if (window) {
        window->visible = show;
    }
}

void MoveWindow(const WindowHandle& window, const Rect& rect) {
    if (window) {
        window->geometry = rect;
    }
}

void SetWindowText(const WindowHandle& window, const std::string& title) {
    if (window) {
        window->title = title;
    }
}

}  // namespace compat::win
