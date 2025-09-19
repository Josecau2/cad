#include "branch_map/BranchMapStubs.h"
#include "framework/FunctionRegistry.h"
#include <algorithm>
#include <iostream>
#include <string>

int main() {
  branch_map::ensure_branch_map_registrations();
  auto& registry = framework::FunctionRegistry::instance();
  auto symbols = registry.registered_symbols();
  const auto fun_count = std::count_if(symbols.begin(), symbols.end(), [](const std::string& name) {
    return name.rfind("FUN_", 0) == 0;
  });
  std::cout << "Registered FUN_ count: " << fun_count << std::endl;
  return fun_count >= 2000 ? 0 : 1;
}
