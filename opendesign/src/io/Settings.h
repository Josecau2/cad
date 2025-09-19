#pragma once

#include <optional>
#include <string>
#include <unordered_map>

namespace io::settings {

class SettingsStore {
public:
    void save(const std::string& key, const std::string& value);

    std::optional<std::string> load(const std::string& key) const;

    void erase(const std::string& key);

    void clear();

private:
    std::unordered_map<std::string, std::string> values_;
};

SettingsStore& global();

std::optional<std::string> LoadSetting(const std::string& key);

void SaveSetting(const std::string& key, const std::string& value);

void EraseSetting(const std::string& key);

void ResetSettings();

}  // namespace io::settings
