#pragma once

#include <functional>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>
#include <any>

namespace framework {

class FunctionRegistry {
public:
    static FunctionRegistry& instance();

    // Support for functions with parameters using std::any
    void register_function(std::string name, std::function<void(std::vector<std::any>)> invoker);
    
    // Legacy support for parameterless functions
    void register_function(std::string name, std::function<void()> invoker);

    bool has(const std::string& name) const;

    void invoke(const std::string& name) const;
    void invoke(const std::string& name, const std::vector<std::any>& args);

    std::vector<std::string> registered_symbols() const;

private:
    FunctionRegistry() = default;

    mutable std::mutex mutex_;
    std::unordered_map<std::string, std::function<void(std::vector<std::any>)>> functions_;
    std::unordered_map<std::string, std::function<void()>> legacy_functions_;
};

class FunctionRegistration {
public:
    FunctionRegistration(std::string name, std::function<void()> invoker);
};

}  // namespace framework
