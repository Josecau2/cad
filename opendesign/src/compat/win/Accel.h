#pragma once

#include <string>
#include <unordered_map>

namespace compat::win {

class AcceleratorTable {
public:
    void setShortcut(const std::string& command, const std::string& shortcut);

    std::string shortcutFor(const std::string& command) const;

private:
    std::unordered_map<std::string, std::string> mapping_;
};

}  // namespace compat::win
