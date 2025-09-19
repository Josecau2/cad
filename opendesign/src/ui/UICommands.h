#pragma once

#include <memory>
#include <string>
#include <vector>

namespace ui::commands {

// UI Command functions from branch_map.yaml (0x14004xxx range)
// These represent the user interface command operations

// File operations
bool FUN_1400402bc();  // New file command
bool FUN_140040474();  // Open file command
bool FUN_140040a48();  // Save file command
bool FUN_140041b1c();  // Save as command
bool FUN_1400422e8();  // Close file command
bool FUN_14004237c();  // Import file command
bool FUN_1400423e8();  // Export file command

// Edit operations
bool FUN_1400424b0();  // Undo command
bool FUN_140042908();  // Redo command
bool FUN_140042edc();  // Cut command
bool FUN_140043020();  // Copy command
bool FUN_1400435ac();  // Paste command
bool FUN_140043600();  // Delete command
bool FUN_14004378c();  // Select all command

// View operations
bool FUN_1400438cc();  // Zoom in command
bool FUN_140043a40();  // Zoom out command
bool FUN_140043a90();  // Zoom fit command
bool FUN_140043ce0();  // Pan command
bool FUN_140044384();  // Rotate view command
bool FUN_140044390();  // Isometric view command
bool FUN_14004439c();  // Top view command

// Tools operations
bool FUN_140044530();  // Select tool command
bool FUN_14004456c();  // Move tool command
bool FUN_140044650();  // Rotate tool command
bool FUN_140044924();  // Scale tool command
bool FUN_1400449dc();  // Mirror tool command
bool FUN_1400449ec();  // Array tool command
bool FUN_140044b88();  // Pattern tool command

// Drawing operations
bool FUN_140044c38();  // Line tool command
bool FUN_140044d40();  // Circle tool command
bool FUN_140044e50();  // Arc tool command
bool FUN_140044f60();  // Rectangle tool command
bool FUN_140045070();  // Polygon tool command
bool FUN_140045180();  // Spline tool command
bool FUN_140045290();  // Text tool command

// Dimension operations
bool FUN_1400453a0();  // Linear dimension command
bool FUN_1400454b0();  // Angular dimension command
bool FUN_1400455c0();  // Radial dimension command
bool FUN_1400456d0();  // Diameter dimension command
bool FUN_1400457e0();  // Ordinate dimension command

// Modify operations
bool FUN_1400458f0();  // Trim command
bool FUN_140045a00();  // Extend command
bool FUN_140045b10();  // Offset command
bool FUN_140045c20();  // Fillet command
bool FUN_140045d30();  // Chamfer command
bool FUN_140045e40();  // Break command

// Analysis operations
bool FUN_140045f50();  // Measure distance command
bool FUN_140046060();  // Measure angle command
bool FUN_140046170();  // Measure area command
bool FUN_140046280();  // Measure volume command
bool FUN_140046390();  // Mass properties command

// Layer operations
bool FUN_1400464a0();  // New layer command
bool FUN_1400465b0();  // Delete layer command
bool FUN_1400466c0();  // Show layer command
bool FUN_1400467d0();  // Hide layer command
bool FUN_1400468e0();  // Lock layer command
bool FUN_1400469f0();  // Unlock layer command

// Window operations
bool FUN_140046b00();  // New window command
bool FUN_140046c10();  // Close window command
bool FUN_140046d20();  // Cascade windows command
bool FUN_140046e30();  // Tile windows command
bool FUN_140046f40();  // Arrange icons command

// Help operations
bool FUN_140047050();  // Help contents command
bool FUN_140047160();  // About command
bool FUN_140047270();  // Check for updates command
bool FUN_140047380();  // Register product command

}  // namespace ui::commands