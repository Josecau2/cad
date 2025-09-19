#pragma once

#include <functional>
#include <string>
#include <unordered_map>

namespace plugins {

using PluginFactory = std::function<void()>;

class PluginManager {
public:
    bool registerPlugin(const std::string& id, PluginFactory factory);

    bool activate(const std::string& id) const;

    std::size_t count() const;

private:
    std::unordered_map<std::string, PluginFactory> plugins_;
};

PluginManager& global();

}  // namespace plugins
