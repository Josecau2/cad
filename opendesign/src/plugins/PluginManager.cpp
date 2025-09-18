#include "plugins/PluginManager.h"

#include <utility>

namespace plugins {

PluginManager& global() {
    static PluginManager manager;
    return manager;
}

bool PluginManager::registerPlugin(const std::string& id, PluginFactory factory) {
    plugins_[id] = std::move(factory);
    return true;
}

bool PluginManager::activate(const std::string& id) const {
    auto it = plugins_.find(id);
    if (it == plugins_.end()) {
        return false;
    }
    if (it->second) {
        it->second();
    }
    return true;
}

std::size_t PluginManager::count() const {
    return plugins_.size();
}

}  // namespace plugins
