#pragma once

#include <cstdint>

namespace cad::modeling {

// Decompiled function declarations from 0x14001xxx and 0x14002xxx ranges
// These match the exact signatures from the decompiled code

// Type definitions for decompiled code
using undefined = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using longlong = long long;
using ulonglong = unsigned long long;
using uint = unsigned int;
using byte_t = unsigned char;  // Use byte_t instead of byte
using ushort_t = unsigned short;  // Use ushort_t instead of ushort

// Forward declarations for complex types
class CSortThickness;
class Locale;  // Renamed from locale to avoid conflict with std::locale

// Document and model management (0x14001xxx)
undefined8 FUN_1400101f0(uint **param_1, undefined8 param_2);
ulonglong FUN_1400102d0(longlong param_1, uint **param_2, int param_3, uint *param_4);
undefined8 FUN_140010520(longlong **param_1, undefined8 param_2);
undefined8 FUN_140010610(longlong param_1, longlong **param_2, undefined8 param_3);
undefined8 FUN_1400106b0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6);
ulonglong FUN_140010700(longlong *param_1, undefined8 param_2);
void FUN_1400107a0(byte_t *param_1, uint param_2);

// Geometry creation functions
undefined8 FUN_140010860(undefined8 param_1, undefined4 param_2, undefined2 param_3, undefined2 param_4);
undefined8 FUN_140010950(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined8 FUN_140010a30(void);
undefined8 FUN_140010fd0(longlong param_1);
ulonglong FUN_140010ff0(longlong *param_1, longlong param_2, longlong param_3, undefined8 param_4);
ulonglong FUN_140011610(longlong **param_1, ulonglong param_2);
ulonglong FUN_140011890(longlong *param_1, undefined2 param_2, undefined2 param_3, int param_4, longlong param_5, longlong param_6, undefined8 param_7, undefined8 param_8);

// Transformation functions
void FUN_140011da0(undefined8 param_1);
undefined8 FUN_140011f80(undefined4 *param_1, undefined4 param_2, undefined8 param_3);
undefined8 FUN_140012050(int param_1);
ulonglong FUN_140012280(longlong param_1, undefined8 param_2);

// Boolean operations
bool FUN_140012430(longlong *param_1);
undefined8 FUN_140012470(longlong *param_1);
undefined8 FUN_1400124c0(undefined4 *param_1);
undefined4 FUN_140012510(undefined4 *param_1);
undefined4 FUN_140012520(longlong param_1);
undefined8 FUN_140012530(undefined4 *param_1, undefined4 param_2);

// Advanced modeling functions (0x14002xxx range)
ulonglong FUN_140020268(longlong param_1);
void FUN_140020358(ushort_t *param_1, ushort_t *param_2, longlong param_3, undefined8 param_4, int param_5);
void FUN_140020be8(short **param_1, longlong param_2);
uint FUN_140020d6c(ushort_t **param_1, ushort_t *param_2, uint param_3);
undefined8 FUN_140020fac(int param_1);

// Analysis functions
undefined8 FUN_1400211e8(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4);
void FUN_140021238(CSortThickness *param_1, CSortThickness *param_2);
void FUN_1400212a4(uint *param_1, undefined8 param_2);
undefined8 FUN_1400213c0(uint param_1);
void FUN_1400215f0(ulonglong *param_1, ulonglong param_2);

// Constraint and validation functions
void FUN_1400219cc(Locale *param_1);
void FUN_140021ae4(Locale *param_1);
void FUN_140021bfc(Locale *param_1);
void FUN_140021d14(longlong param_1);
void FUN_140021e24(undefined8 param_1, undefined4 *param_2, undefined4 *param_3);

// Model hierarchy functions
undefined8 FUN_140022000(void);
undefined8 FUN_140022100(undefined8 param_1);
undefined8 FUN_140022200(void);
undefined8 FUN_140022300(undefined8 param_1);
undefined8 FUN_140022400(undefined8 param_1);
undefined8 FUN_140022500(undefined8 param_1);
undefined8 FUN_140022600(undefined8 param_1);
undefined8 FUN_140022700(undefined8 param_1);
undefined8 FUN_140022800(undefined8 param_1);
undefined8 FUN_140022900(undefined8 param_1);
undefined8 FUN_140023000(undefined8 param_1);
undefined8 FUN_140023100(undefined8 param_1);
undefined8 FUN_140023200(undefined8 param_1);

// Additional advanced modeling functions (0x14002xxx range)
undefined8 FUN_1400200f0(undefined8 param_1);
undefined8 FUN_140020e08(undefined8 param_1);
undefined8 FUN_1400210ec(undefined8 param_1);
undefined8 FUN_140021848(undefined8 param_1);
undefined8 FUN_1400218d0(undefined8 param_1);
undefined8 FUN_140021908(undefined8 param_1);
undefined8 FUN_140021944(undefined8 param_1);
undefined8 FUN_14002197c(undefined8 param_1);
undefined8 FUN_140021f58(undefined8 param_1);
undefined8 FUN_1400220a4(undefined8 param_1);
undefined8 FUN_14002211c(undefined8 param_1);
undefined8 FUN_14002239c(undefined8 param_1);
undefined8 FUN_140022418(undefined8 param_1);
undefined8 FUN_140022638(undefined8 param_1);
undefined8 FUN_140022a84(undefined8 param_1);
undefined8 FUN_140022ed0(undefined8 param_1);
undefined8 FUN_140022f80(undefined8 param_1);
undefined8 FUN_140023048(undefined8 param_1);
undefined8 FUN_140023118(undefined8 param_1);
undefined8 FUN_1400231b8(undefined8 param_1);
undefined8 FUN_140023308(undefined8 param_1);
undefined8 FUN_1400233d8(undefined8 param_1);
undefined8 FUN_1400234a8(undefined8 param_1);
undefined8 FUN_14002356c(undefined8 param_1);
undefined8 FUN_14002368c(undefined8 param_1);
undefined8 FUN_140023748(undefined8 param_1);
undefined8 FUN_140023874(undefined8 param_1);
undefined8 FUN_140023930(undefined8 param_1);
undefined8 FUN_1400239ec(undefined8 param_1);
undefined8 FUN_140023b1c(undefined8 param_1);
undefined8 FUN_140023bf8(undefined8 param_1);
undefined8 FUN_140023cac(undefined8 param_1);
undefined8 FUN_140023d78(undefined8 param_1);
undefined8 FUN_140023e0c(undefined8 param_1);
undefined8 FUN_140023ef0(undefined8 param_1);
undefined8 FUN_140023fdc(undefined8 param_1);
undefined8 FUN_1400240d4(undefined8 param_1);
undefined8 FUN_140024210(undefined8 param_1);
undefined8 FUN_1400243b0(undefined8 param_1);
undefined8 FUN_140024434(undefined8 param_1);
undefined8 FUN_140024538(undefined8 param_1);
undefined8 FUN_1400245d0(undefined8 param_1);
undefined8 FUN_14002473c(undefined8 param_1);
undefined8 FUN_140024ad0(undefined8 param_1);
undefined8 FUN_140024e58(undefined8 param_1);
undefined8 FUN_140024f54(undefined8 param_1);
undefined8 FUN_140025088(undefined8 param_1);
undefined8 FUN_1400251d0(undefined8 param_1);
undefined8 FUN_140025324(undefined8 param_1);
undefined8 FUN_14002546c(undefined8 param_1);}  // namespace cad::modeling
