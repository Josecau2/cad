#pragma once

#include <memory>
#include <string>
#include <vector>

namespace ui::components {

// UI Component functions from branch_map.yaml (0x14005xxx range)
// These represent the user interface component operations

// Dialog components
bool FUN_140050324();  // Create dialog component
bool FUN_140050370();  // Show dialog component
bool FUN_1400503d4();  // Hide dialog component
bool FUN_140050460();  // Close dialog component
bool FUN_1400504a8();  // Modal dialog component
bool FUN_1400505f4();  // Modeless dialog component

// Property components
bool FUN_140050a2c();  // Property grid component
bool FUN_140050cd0();  // Property page component
bool FUN_140050d48();  // Property sheet component
bool FUN_140050ef4();  // Property editor component

// Toolbar components
bool FUN_14005108c();  // Main toolbar component
bool FUN_1400514e8();  // Drawing toolbar component
bool FUN_140051958();  // Modify toolbar component
bool FUN_140051ec0();  // View toolbar component

// Status bar components
bool FUN_140051f90();  // Status bar component
bool FUN_140052014();  // Progress bar component
bool FUN_140052094();  // Status text component
bool FUN_140052118();  // Status icon component

// Menu components
bool FUN_1400521f4();  // Main menu component
bool FUN_1400522c0();  // Context menu component
bool FUN_14005237c();  // Popup menu component
bool FUN_140052438();  // System menu component

// Tree view components
bool FUN_140052500();  // Model tree component
bool FUN_1400525c0();  // Layer tree component
bool FUN_140052684();  // Feature tree component
bool FUN_140052770();  // History tree component

// List view components
bool FUN_140052924();  // Object list component
bool FUN_1400529dc();  // Command list component
bool FUN_140052a50();  // Template list component
bool FUN_140052ac4();  // Recent files list component

// Tab control components
bool FUN_140052b38();  // Document tabs component
bool FUN_140052ba4();  // Property tabs component
bool FUN_140052c10();  // View tabs component
bool FUN_140052c7c();  // Tool tabs component

// Splitter components
bool FUN_140052ce8();  // Horizontal splitter component
bool FUN_140052d54();  // Vertical splitter component
bool FUN_140052dc0();  // Panel splitter component

// Dockable components
bool FUN_140052e2c();  // Command dock component
bool FUN_140052e98();  // Property dock component
bool FUN_140052f04();  // Layer dock component
bool FUN_140052f70();  // History dock component

// Scrollbar components
bool FUN_140052fdc();  // Horizontal scrollbar component
bool FUN_140053048();  // Vertical scrollbar component
bool FUN_1400530b4();  // Mini scrollbar component

// Button components
bool FUN_140053120();  // Push button component
bool FUN_14005318c();  // Toggle button component
bool FUN_1400531f8();  // Radio button component
bool FUN_140053264();  // Check button component

// Input components
bool FUN_1400532d0();  // Text input component
bool FUN_14005333c();  // Numeric input component
bool FUN_1400533a8();  // Combo box component
bool FUN_140053414();  // List box component

// Slider components
bool FUN_140053480();  // Horizontal slider component
bool FUN_1400534ec();  // Vertical slider component
bool FUN_140053558();  // Range slider component

// Progress components
bool FUN_1400535c4();  // Progress bar component
bool FUN_140053630();  // Progress dialog component
bool FUN_14005369c();  // Status progress component

// Tooltip components
bool FUN_140053708();  // Standard tooltip component
bool FUN_140053774();  // Rich tooltip component
bool FUN_1400537e0();  // Balloon tooltip component

// Notification components
bool FUN_14005384c();  // Status notification component
bool FUN_1400538b8();  // Error notification component
bool FUN_140053924();  // Warning notification component
bool FUN_140053990();  // Info notification component

}  // namespace ui::components