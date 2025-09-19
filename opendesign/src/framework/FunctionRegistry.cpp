#include "framework/FunctionRegistry.h"

#include <stdexcept>

namespace framework {

FunctionRegistry& FunctionRegistry::instance() {
    static FunctionRegistry registry;
    return registry;
}

void FunctionRegistry::register_function(std::string name,
                                         std::function<void(std::vector<std::any>)> invoker) {
    std::lock_guard<std::mutex> lock(mutex_);
    functions_[std::move(name)] = std::move(invoker);
}

void FunctionRegistry::register_function(std::string name,
                                         std::function<void()> invoker) {
    std::lock_guard<std::mutex> lock(mutex_);
    // Store legacy functions separately and wrap them
    legacy_functions_[std::move(name)] = std::move(invoker);
}

bool FunctionRegistry::has(const std::string& name) const {
    std::lock_guard<std::mutex> lock(mutex_);
    return functions_.find(name) != functions_.end() || 
           legacy_functions_.find(name) != legacy_functions_.end();
}

void FunctionRegistry::invoke(const std::string& name) const {
    std::function<void()> invoker;
    {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = legacy_functions_.find(name);
        if (it != legacy_functions_.end()) {
            invoker = it->second;
        } else {
            // For new-style functions, call with empty args
            auto it2 = functions_.find(name);
            if (it2 != functions_.end()) {
                it2->second({});
                return;
            }
            throw std::out_of_range("FunctionRegistry::invoke missing symbol: " + name);
        }
    }

    if (invoker) {
        invoker();
    }
}

void FunctionRegistry::invoke(const std::string& name, const std::vector<std::any>& args) {
    std::function<void(std::vector<std::any>)> invoker;
    {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = functions_.find(name);
        if (it == functions_.end()) {
            throw std::out_of_range("FunctionRegistry::invoke missing symbol: " + name);
        }
        invoker = it->second;
    }

    if (invoker) {
        invoker(args);
    }
}

std::vector<std::string> FunctionRegistry::registered_symbols() const {
    std::lock_guard<std::mutex> lock(mutex_);
    std::vector<std::string> symbols;
    symbols.reserve(functions_.size() + legacy_functions_.size());
    for (const auto& entry : functions_) {
        symbols.push_back(entry.first);
    }
    for (const auto& entry : legacy_functions_) {
        symbols.push_back(entry.first);
    }
    return symbols;
}

FunctionRegistration::FunctionRegistration(std::string name,
                                           std::function<void()> invoker) {
    FunctionRegistry::instance().register_function(std::move(name),
                                                   std::move(invoker));
}

}  // namespace framework
