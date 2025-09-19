#include "branch_map/BranchMapStubs.h"
#include <cstdio>

int main() {
  // Touch a few symbols to force link
  auto v = branch_map::FUN_140004470(0, 0);
  std::printf("ok %llu\n", (unsigned long long)v);
  return 0;
}
