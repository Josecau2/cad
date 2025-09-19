#include "compat/mfc/UpdateUI.h"

namespace compat::mfc {

void UpdateUI::bind(const std::string& command,
                    std::function<bool()> predicate) {
    predicates_[command] = std::move(predicate);
}

bool UpdateUI::evaluate(const std::string& command) const {
    auto it = predicates_.find(command);
    if (it == predicates_.end() || !it->second) {
        return false;
    }
    return it->second();
}

}  // namespace compat::mfc
