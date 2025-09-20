#include <iostream>
#include <string>

#include "cad/Core.h"
#include "io/Settings.h"

int main() {
    std::cout << "Testing Core module functions..." << std::endl;

    // Test a few key functions from different sections
    cad::core::FUN_140002070();  // System initialization
    cad::core::FUN_140002850();  // Memory management
    cad::core::FUN_1400030c0();  // File operations
    cad::core::FUN_140004280();  // Viewport operations
    cad::core::FUN_140005000();  // Selection operations
    cad::core::FUN_140007120();  // Layer management
    cad::core::FUN_14000dfe0();  // Plugin system
    cad::core::FUN_14000f3b0();  // Scripting engine
    cad::core::FUN_14000ff70();  // Final function

    // Check that settings were saved
    auto systemInitOpt = io::settings::LoadSetting("core.system.initialized");
    auto memoryAllocOpt = io::settings::LoadSetting("core.memory.allocator_initialized");
    auto pluginManagerOpt = io::settings::LoadSetting("core.plugin.manager");
    auto scriptingEngineOpt = io::settings::LoadSetting("core.scripting.engine");

    std::string systemInit = systemInitOpt.value_or("");
    std::string memoryAlloc = memoryAllocOpt.value_or("");
    std::string pluginManager = pluginManagerOpt.value_or("");
    std::string scriptingEngine = scriptingEngineOpt.value_or("");

    std::cout << "\nSettings verification:" << std::endl;
    std::cout << "System initialized: " << systemInit << std::endl;
    std::cout << "Memory allocator: " << memoryAlloc << std::endl;
    std::cout << "Plugin manager: " << pluginManager << std::endl;
    std::cout << "Scripting engine: " << scriptingEngine << std::endl;

    if (systemInit == "true" && memoryAlloc == "true" &&
        pluginManager == "initialized" && scriptingEngine == "initialized") {
        std::cout << "\n✅ Core module test PASSED - All functions executed successfully!" << std::endl;
        return 0;
    } else {
        std::cout << "\n❌ Core module test FAILED - Settings not saved correctly!" << std::endl;
        return 1;
    }
}