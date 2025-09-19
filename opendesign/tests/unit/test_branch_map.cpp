#include "catch2.hpp"

#include "framework/FunctionRegistry.h"
#include "branch_map/BranchMapStubs.h"

TEST_CASE("branch map functions are registered", "[branch_map]") {
    // Ensure branch map registrations
    branch_map::ensure_branch_map_registrations();
    
    auto& registry = framework::FunctionRegistry::instance();
    
    // Test that we have a reasonable number of registered functions
    auto symbols = registry.registered_symbols();
    REQUIRE(symbols.size() > 1000);  // Should have many functions from branch map
    
    // Test some specific branch map functions are registered
    REQUIRE(registry.has("FUN_140001040"));
    REQUIRE(registry.has("FUN_1400010b0"));
    REQUIRE(registry.has("FUN_140001120"));
    
    // Test that we can invoke them without error
    REQUIRE_NOTHROW(registry.invoke("FUN_140001040"));
    REQUIRE_NOTHROW(registry.invoke("FUN_1400010b0"));
    REQUIRE_NOTHROW(registry.invoke("FUN_140001120"));
}

TEST_CASE("branch map function count matches expectations", "[branch_map]") {
    // Ensure branch map registrations
    branch_map::ensure_branch_map_registrations();
    
    auto& registry = framework::FunctionRegistry::instance();
    auto symbols = registry.registered_symbols();
    
    // Count FUN_ functions (branch map functions)
    int fun_count = 0;
    for (const auto& symbol : symbols) {
        if (symbol.substr(0, 4) == "FUN_") {
            fun_count++;
        }
    }
    
    // We should have 2001 branch map functions plus other functions
    REQUIRE(fun_count >= 2000);
}