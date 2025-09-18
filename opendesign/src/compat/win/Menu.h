#pragma once

#include <functional>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace compat::win {

struct MenuItem {
    std::string id;
    std::string caption;
    bool enabled = true;
    std::function<void()> callback;
};

class Menu {
public:
    void addItem(MenuItem item);

    bool trigger(const std::string& id) const;

    bool setEnabled(const std::string& id, bool enabled);

    const std::vector<MenuItem>& items() const;

private:
    std::vector<MenuItem> items_;
};

using MenuHandle = std::shared_ptr<Menu>;

MenuHandle CreateMenu();

bool EnableMenuItem(const MenuHandle& menu, const std::string& id, bool enable);

bool InvokeMenuItem(const MenuHandle& menu, const std::string& id);

}  // namespace compat::win
