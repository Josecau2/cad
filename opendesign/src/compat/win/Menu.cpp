#include "compat/win/Menu.h"

#include <memory>
#include <utility>

namespace compat::win {

void Menu::addItem(MenuItem item) {
    items_.push_back(std::move(item));
}

bool Menu::trigger(const std::string& id) const {
    for (const auto& item : items_) {
        if (item.id == id && item.enabled) {
            if (item.callback) {
                item.callback();
            }
            return true;
        }
    }
    return false;
}

bool Menu::setEnabled(const std::string& id, bool enabled) {
    for (auto& item : items_) {
        if (item.id == id) {
            item.enabled = enabled;
            return true;
        }
    }
    return false;
}

const std::vector<MenuItem>& Menu::items() const {
    return items_;
}

MenuHandle CreateMenu() {
    return std::make_shared<Menu>();
}

bool EnableMenuItem(const MenuHandle& menu, const std::string& id, bool enable) {
    if (!menu) {
        return false;
    }
    return menu->setEnabled(id, enable);
}

bool InvokeMenuItem(const MenuHandle& menu, const std::string& id) {
    if (!menu) {
        return false;
    }
    return menu->trigger(id);
}

}  // namespace compat::win
