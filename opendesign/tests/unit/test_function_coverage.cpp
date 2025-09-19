#include "catch2.hpp"

#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>

#include "framework/FunctionRegistry.h"

namespace {
std::string trim(const std::string& value) {
    const auto start = value.find_first_not_of(" \t");
    const auto end = value.find_last_not_of(" \t\r");
    if (start == std::string::npos || end == std::string::npos) {
        return "";
    }
    return value.substr(start, end - start + 1);
}

std::filesystem::path coverageFile() {
    std::filesystem::path path = std::filesystem::path(__FILE__).parent_path();
    path /= "../../docs/function_coverage.yaml";
    return std::filesystem::weakly_canonical(path);
}

std::vector<std::string> parseTargetSymbols(const std::filesystem::path& path) {
    std::ifstream file(path);
    std::vector<std::string> symbols;
    std::string line;
    while (std::getline(file, line)) {
        const auto pos = line.find("target_symbol:");
        if (pos == std::string::npos) {
            continue;
        }
        std::string value = line.substr(pos + std::string("target_symbol:").size());
        value = trim(value);
        if (!value.empty()) {
            symbols.push_back(value);
        }
    }
    return symbols;
}
}  // namespace

TEST_CASE("function coverage registry matches documentation", "[coverage]") {
    const auto path = coverageFile();
    auto symbols = parseTargetSymbols(path);
    REQUIRE_MESSAGE(!symbols.empty(), "No symbols declared in function coverage file.");

    const auto registry_symbols =
        framework::FunctionRegistry::instance().registered_symbols();
    std::unordered_set<std::string> documented(symbols.begin(), symbols.end());

    for (const auto& symbol : symbols) {
        REQUIRE_MESSAGE(framework::FunctionRegistry::instance().has(symbol),
                        "Missing implementation for " << symbol);
        REQUIRE_NOTHROW(framework::FunctionRegistry::instance().invoke(symbol));
    }

    for (const auto& registered : registry_symbols) {
        REQUIRE_MESSAGE(documented.count(registered) > 0,
                        "Registry contains undocumented symbol " << registered);
    }
}
