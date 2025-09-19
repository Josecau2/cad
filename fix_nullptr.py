#!/usr/bin/env python3

import re

# Read the file
with open('/workspaces/cad/opendesign/src/branch_map/BranchMapStubs.cpp', 'r') as f:
    content = f.read()

# Pattern to match FUN_140012780(nullptr, ... and replace with FUN_140012780((int*)&param_3,
# But we need to be careful about which param_3 to use

# For now, let's do a simpler replacement: replace nullptr with (int*)&param_3 in FUN_140012780 calls
# But this might not be accurate for all cases

# Let's look for the pattern more carefully
# We need to find the function context and replace nullptr with the appropriate cast

# Actually, let me do it manually for a few more key functions, then we can see the pattern

print("Bulk replacement script created")