#include "framework/FunctionRegistry.h"

#include <stdexcept>

namespace framework {

FunctionRegistry& FunctionRegistry::instance() {
    static FunctionRegistry registry;
    return registry;
}

void FunctionRegistry::register_function(std::string name,
                                         std::function<void()> invoker) {
    std::lock_guard<std::mutex> lock(mutex_);
    functions_[std::move(name)] = std::move(invoker);
}

bool FunctionRegistry::has(const std::string& name) const {
    std::lock_guard<std::mutex> lock(mutex_);
    return functions_.find(name) != functions_.end();
}

void FunctionRegistry::invoke(const std::string& name) const {
    std::function<void()> invoker;
    {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = functions_.find(name);
        if (it == functions_.end()) {
            throw std::out_of_range("FunctionRegistry::invoke missing symbol: " +
                                   name);
        }
        invoker = it->second;
    }

    if (invoker) {
        invoker();
    }
}

std::vector<std::string> FunctionRegistry::registered_symbols() const {
    std::lock_guard<std::mutex> lock(mutex_);
    std::vector<std::string> symbols;
    symbols.reserve(functions_.size());
    for (const auto& entry : functions_) {
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
