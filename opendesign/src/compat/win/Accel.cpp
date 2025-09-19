#include "compat/win/Accel.h"

namespace compat::win {

void AcceleratorTable::setShortcut(const std::string& command,
                                   const std::string& shortcut) {
    mapping_[command] = shortcut;
}

std::string AcceleratorTable::shortcutFor(const std::string& command) const {
    auto it = mapping_.find(command);
    if (it != mapping_.end()) {
        return it->second;
    }
    return {};
}

}  // namespace compat::win
