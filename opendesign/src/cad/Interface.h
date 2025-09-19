#pragma once

#include <cstdint>

// Type definitions
typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned int uint;

// Interface Management Functions (0x1401 range)
namespace cad {
namespace interface {

// Interface Operations (0x1401001b8 - 0x14010043c)
void FUN_1401001b8(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined *param_4);
void FUN_1401003dc(longlong *param_1);
void FUN_14010043c(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined *param_4);

// Interface Management (0x140100840 - 0x140100ad8)
void FUN_140100840(longlong *param_1);
void FUN_140100ad8(longlong *param_1);

// Interface Configuration (0x140100ee8 - 0x140101348)
void FUN_140100ee8(longlong *param_1);
void FUN_140101348(longlong *param_1);

// Interface State Management (0x1401016c8 - 0x140101b08)
void FUN_1401016c8(longlong *param_1);
void FUN_1401016fc(longlong *param_1);
void FUN_140101b08(longlong *param_1);

// Interface Processing (0x14010229c - 0x140102a1c)
void FUN_14010229c(longlong *param_1);
void FUN_140102a1c(longlong *param_1);

// Interface Rendering (0x140102e08 - 0x1401031bc)
void FUN_140102e08(longlong *param_1);
void FUN_1401031bc(longlong *param_1);

// Interface Layout (0x140103570 - 0x140103968)
void FUN_140103570(longlong *param_1);
void FUN_140103968(longlong *param_1);

// Interface Navigation (0x140103d2c - 0x140104280)
void FUN_140103d2c(longlong *param_1);
void FUN_140104280(longlong *param_1);

// Interface Controls (0x1401042dc - 0x140104328)
void FUN_1401042dc(longlong *param_1);
void FUN_140104304(longlong *param_1);
void FUN_140104328(longlong *param_1);

// Interface Events (0x140104364 - 0x14010439c)
void FUN_140104364(longlong *param_1);
void FUN_14010439c(longlong *param_1);

// Interface Properties (0x140104450 - 0x1401044b0)
void FUN_140104450(longlong *param_1);
void FUN_1401044b0(longlong *param_1);

// Interface Validation (0x140104558 - 0x140104620)
void FUN_140104558(longlong *param_1);
void FUN_140104620(longlong *param_1);

// Interface Utilities (0x140104680 - 0x140104c2c)
void FUN_140104680(longlong *param_1);
void FUN_140104c2c(longlong *param_1);

// Interface Advanced Operations (0x140104f1c)
void FUN_140104f1c(longlong *param_1);

} // namespace interface
} // namespace cad