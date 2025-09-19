#pragma once

#include <functional>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

namespace framework {

class FunctionRegistry {
public:
    static FunctionRegistry& instance();

    void register_function(std::string name, std::function<void()> invoker);

    bool has(const std::string& name) const;

    void invoke(const std::string& name) const;

    std::vector<std::string> registered_symbols() const;

private:
    FunctionRegistry() = default;

    mutable std::mutex mutex_;
    std::unordered_map<std::string, std::function<void()>> functions_;
};

class FunctionRegistration {
public:
    FunctionRegistration(std::string name, std::function<void()> invoker);
};

}  // namespace framework
