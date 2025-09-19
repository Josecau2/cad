#pragma once

#include <memory>
#include <string>

namespace compat::win {

struct Rect {
    int x = 0;
    int y = 0;
    int width = 0;
    int height = 0;
};

struct Window {
    std::string class_name;
    std::string title;
    Rect geometry;
    bool visible = false;
};

using WindowHandle = std::shared_ptr<Window>;

WindowHandle CreateWindowEx(const std::string& class_name,
                            const std::string& title, const Rect& rect);

void ShowWindow(const WindowHandle& window, bool show);

void MoveWindow(const WindowHandle& window, const Rect& rect);

void SetWindowText(const WindowHandle& window, const std::string& title);

}  // namespace compat::win
