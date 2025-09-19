#include "io/Settings.h"

#include "framework/FunctionRegistry.h"

namespace io::settings {
namespace {
const framework::FunctionRegistration load_registration{
    "io::settings::LoadSetting", []() {
        SaveSetting("unit.test", "value");
        LoadSetting("unit.test");
    }};

const framework::FunctionRegistration save_registration{
    "io::settings::SaveSetting", []() {
        SaveSetting("unit.test", "value");
    }};
}

SettingsStore& global() {
    static SettingsStore store;
    return store;
}

void SettingsStore::save(const std::string& key, const std::string& value) {
    values_[key] = value;
}

std::optional<std::string> SettingsStore::load(const std::string& key) const {
    auto it = values_.find(key);
    if (it != values_.end()) {
        return it->second;
    }
    return std::nullopt;
}

void SettingsStore::erase(const std::string& key) {
    values_.erase(key);
}

void SettingsStore::clear() {
    values_.clear();
}

std::optional<std::string> LoadSetting(const std::string& key) {
    return global().load(key);
}

void SaveSetting(const std::string& key, const std::string& value) {
    global().save(key, value);
}

void EraseSetting(const std::string& key) {
    global().erase(key);
}

void ResetSettings() {
    global().clear();
}

}  // namespace io::settings
