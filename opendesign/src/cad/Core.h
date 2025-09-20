#pragma once

#include <cstdint>

namespace cad {

// Core CAD operations module
// Functions from remaining 0x14000 range (207 functions total)

namespace core {

// System initialization and configuration
bool FUN_140002070();
bool FUN_140002100();
bool FUN_1400021b0();
bool FUN_140002260();

// Memory management
bool FUN_140002850();
bool FUN_1400028a0();
bool FUN_1400028e0();
bool FUN_140002930();
bool FUN_140002a10();
bool FUN_140002a90();
bool FUN_140002b90();
bool FUN_140002d60();
bool FUN_140002f30();

// File operations
bool FUN_1400030c0();
bool FUN_1400031c0();
bool FUN_140003380();
bool FUN_1400033d0();
bool FUN_140003410();
bool FUN_140003470();
bool FUN_1400034d0();
bool FUN_140003550();
bool FUN_1400035d0();
bool FUN_140003650();
bool FUN_1400036d0();

// Document management
bool FUN_140003c50();
bool FUN_140003ce0();
bool FUN_140003dd0();
bool FUN_140003ed0();
bool FUN_140003fa0();

// Viewport and display
bool FUN_140004280();
bool FUN_1400043d0();
bool FUN_140004470();
bool FUN_1400044b0();
bool FUN_140004580();
bool FUN_140004760();
bool FUN_140004890();
bool FUN_140004910();
bool FUN_1400049e0();
bool FUN_140004a80();
bool FUN_140004b60();
bool FUN_140004c60();
bool FUN_140004d40();

// Selection operations
bool FUN_140005000();
bool FUN_140005110();
bool FUN_1400051d0();
bool FUN_1400052e0();

// Undo/Redo system
bool FUN_1400058d0();
bool FUN_1400059c0();
bool FUN_1400059e0();

// Clipboard operations
bool FUN_140005cc0();
bool FUN_140005e40();

// Object manipulation
bool FUN_1400060b0();
bool FUN_1400060d0();
bool FUN_1400062e0();
bool FUN_1400065a0();
bool FUN_1400066f0();
bool FUN_1400067b0();
bool FUN_140006920();
bool FUN_140006990();
bool FUN_140006a10();
bool FUN_140006bc0();
bool FUN_140006c90();
bool FUN_140006d60();
bool FUN_140006e30();
bool FUN_140006f80();
bool FUN_140006fc0();

// Layer management
bool FUN_140007120();
bool FUN_1400071d0();
bool FUN_1400072a0();
bool FUN_1400073e0();
bool FUN_140007490();
bool FUN_140007560();
bool FUN_140007640();
bool FUN_140007730();

// Dimensioning
bool FUN_140007a80();
bool FUN_140007c80();
bool FUN_140007d10();
bool FUN_140007e50();
bool FUN_140007f70();

// Annotation system
bool FUN_140008080();
bool FUN_1400081a0();
bool FUN_140008290();
bool FUN_1400083b0();
bool FUN_1400084d0();
bool FUN_140008610();
bool FUN_140008720();
bool FUN_140008840();

// Property management
bool FUN_140008a10();
bool FUN_140008b40();
bool FUN_140008c30();
bool FUN_140008d20();
bool FUN_140008e80();
bool FUN_140008fa0();

// Constraint system
bool FUN_1400090c0();
bool FUN_140009190();
bool FUN_1400092b0();
bool FUN_140009470();
bool FUN_1400095b0();
bool FUN_1400096d0();
bool FUN_1400097f0();
bool FUN_140009910();
bool FUN_140009a30();
bool FUN_140009b50();
bool FUN_140009c70();
bool FUN_140009db0();
bool FUN_140009ed0();
bool FUN_140009ff0();

// Measurement tools
bool FUN_14000a0a0();
bool FUN_14000a150();
bool FUN_14000a200();
bool FUN_14000a2b0();
bool FUN_14000a360();
bool FUN_14000a410();
bool FUN_14000a4c0();
bool FUN_14000a570();
bool FUN_14000a620();
bool FUN_14000a6d0();

// Hatch patterns
bool FUN_14000a7f0();
bool FUN_14000a980();
bool FUN_14000aa30();

// Block management
bool FUN_14000ab50();
bool FUN_14000ac00();
bool FUN_14000acb0();
bool FUN_14000ad60();
bool FUN_14000ae10();

// Template system
bool FUN_14000af60();
bool FUN_14000b080();
bool FUN_14000b130();
bool FUN_14000b220();
bool FUN_14000b330();

// Print and export
bool FUN_14000b450();
bool FUN_14000b560();
bool FUN_14000b650();
bool FUN_14000b700();
bool FUN_14000b820();
bool FUN_14000b990();
bool FUN_14000bb00();

// Import operations
bool FUN_14000bc40();
bool FUN_14000bd60();
bool FUN_14000be70();
bool FUN_14000bf80();

// Drawing standards
bool FUN_14000c0a0();
bool FUN_14000c1c0();
bool FUN_14000c270();
bool FUN_14000c320();
bool FUN_14000c440();
bool FUN_14000c580();
bool FUN_14000c650();
bool FUN_14000c720();
bool FUN_14000c840();
bool FUN_14000c980();
bool FUN_14000ca70();
bool FUN_14000cb20();
bool FUN_14000cbd0();
bool FUN_14000ccf0();
bool FUN_14000ce30();
bool FUN_14000cf50();

// Customization
bool FUN_14000d000();
bool FUN_14000d0b0();
bool FUN_14000d160();
bool FUN_14000d210();
bool FUN_14000d2c0();
bool FUN_14000d390();
bool FUN_14000d4d0();
bool FUN_14000d580();
bool FUN_14000d6a0();
bool FUN_14000d750();
bool FUN_14000d840();
bool FUN_14000d970();
bool FUN_14000db00();
bool FUN_14000dc10();
bool FUN_14000dd30();
bool FUN_14000de50();

// Plugin system
bool FUN_14000dfe0();
bool FUN_14000e150();
bool FUN_14000e270();
bool FUN_14000e3c0();
bool FUN_14000e4e0();
bool FUN_14000e630();
bool FUN_14000e6e0();
bool FUN_14000e7d0();
bool FUN_14000e880();
bool FUN_14000e9c0();
bool FUN_14000eb00();
bool FUN_14000ec80();
bool FUN_14000ed30();
bool FUN_14000ede0();
bool FUN_14000ee90();
bool FUN_14000ef40();
bool FUN_14000eff0();

// Macro system
bool FUN_14000f0a0();
bool FUN_14000f150();
bool FUN_14000f200();

// Scripting engine
bool FUN_14000f3b0();
bool FUN_14000f550();
bool FUN_14000f560();
bool FUN_14000f6e0();
bool FUN_14000f7e0();
bool FUN_14000f870();
bool FUN_14000f9b0();
bool FUN_14000f9d0();
bool FUN_14000fa80();
bool FUN_14000fb20();
bool FUN_14000fb80();
bool FUN_14000fbd0();
bool FUN_14000fe00();
bool FUN_14000ff70();

} // namespace core
} // namespace cad