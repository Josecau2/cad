#pragma once

#include <functional>
#include <string>
#include <unordered_map>

namespace compat::mfc {

class UpdateUI {
public:
    void bind(const std::string& command, std::function<bool()> predicate);

    bool evaluate(const std::string& command) const;

private:
    std::unordered_map<std::string, std::function<bool()>> predicates_;
};

}  // namespace compat::mfc
