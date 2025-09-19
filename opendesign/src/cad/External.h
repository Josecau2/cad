#pragma once

#include <mutex>
#include <string>

// Type definitions from decompiled code
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned char int7;  // For CONCAT71 macro

// Helper macro from decompiled code
#define CONCAT71(a, b) ((unsigned long long)(a) << 8 | (b))

namespace cad {
namespace external {

// External Interface Management (0x1400e002c - 0x1400e05c8)
undefined8 FUN_1400e002c(longlong *param_1, longlong *param_2);
undefined8 FUN_1400e00b4(longlong *param_1, undefined8 param_2);
void FUN_1400e0194(undefined (*param_1) [16], undefined4 *param_2);
undefined8 FUN_1400e01dc(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e026c(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0300(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0318(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e0390(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e03b4(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e03dc(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0404(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e042c(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0454(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e047c(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e04a4(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e04bc(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0550(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e0568(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0594(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e05c8(longlong param_1, undefined8 param_2, undefined8 param_3);

// External Communication Systems (0x1400e0644 - 0x1400e0f08)
undefined8 FUN_1400e0644(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e06b8(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e06fc(undefined8 param_1, ulonglong param_2);
undefined8 FUN_1400e0720(undefined8 param_1, ulonglong param_2);
void FUN_1400e0754(undefined (*param_1) [16]);
undefined8 FUN_1400e0790(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e08b0(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0990(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e0d34(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0e0c(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e0f08(longlong param_1, undefined8 param_2);

// External Data Processing (0x1400e151c - 0x1400e1fb8)
undefined8 FUN_1400e151c(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e156c(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e15a4(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e1754(longlong param_1, undefined8 param_2, undefined8 param_3);
undefined8 FUN_1400e17d8(longlong param_1, undefined8 param_2);
undefined8 FUN_1400e17e0(undefined8 param_1, undefined8 param_2, undefined8 param_3);
void FUN_1400e156c(undefined8 param_1, undefined (*param_2) [16]);
void FUN_1400e1888();
void FUN_1400e1950();
void FUN_1400e19ec();
void FUN_1400e1cdc();
void FUN_1400e1dd0();
void FUN_1400e1e3c();
void FUN_1400e1fb8();

// External Protocol Handlers (0x1400e217c - 0x1400e3294)
void FUN_1400e217c();
void FUN_1400e2314();
void FUN_1400e233c();
void FUN_1400e27c8();
void FUN_1400e2894();
void FUN_1400e29f0();
void FUN_1400e2a24();
void FUN_1400e2aac();
void FUN_1400e2b58();
void FUN_1400e2bec();
void FUN_1400e2d10();
void FUN_1400e317c();
void FUN_1400e31f4();
void FUN_1400e3238();
void FUN_1400e3274();
void FUN_1400e3294();

// External Service Integration (0x1400e340c - 0x1400e3fe8)
void FUN_1400e340c();
void FUN_1400e3534();
void FUN_1400e3588();
void FUN_1400e35e8();
void FUN_1400e3854();
void FUN_1400e3928();
void FUN_1400e39b0();
void FUN_1400e39f4();
void FUN_1400e3a40();
void FUN_1400e3b14();
void FUN_1400e3d70();
void FUN_1400e3d9c();
void FUN_1400e3dd0();
void FUN_1400e3f38();
void FUN_1400e3fa8();
void FUN_1400e3fe8();

// External API Management (0x1400e4020 - 0x1400e47cc)
void FUN_1400e4020();
void FUN_1400e4050();
void FUN_1400e40a0();
void FUN_1400e40d8();
void FUN_1400e41a0();
void FUN_1400e41bc();
void FUN_1400e41f0();
void FUN_1400e4224();
void FUN_1400e4344();
void FUN_1400e436c();
void FUN_1400e45cc();
void FUN_1400e46f8();
void FUN_1400e47c4();
void FUN_1400e47cc();

// External Security Systems (0x1400e4848 - 0x1400e4f9c)
void FUN_1400e4848();
void FUN_1400e48c8();
void FUN_1400e4920();
void FUN_1400e49c0();
void FUN_1400e4a3c();
void FUN_1400e4a80();
void FUN_1400e4f5c();
void FUN_1400e4f9c();

// External Analytics and Monitoring (0x1400e5594 - 0x1400e5804)
void FUN_1400e5594();
void FUN_1400e55ec();
void FUN_1400e5664();
void FUN_1400e56a4();
void FUN_1400e5798();
void FUN_1400e5804();

// External Performance Optimization (0x1400e5c00 - 0x1400e6a8c)
void FUN_1400e5c00();
void FUN_1400e5cf4();
void FUN_1400e6a58();
void FUN_1400e6a8c();

// External Cloud Integration (0x1400e705c - 0x1400e7da4)
void FUN_1400e705c();
void FUN_1400e7244();
void FUN_1400e7620();
void FUN_1400e789c();
void FUN_1400e78d4();
void FUN_1400e7998();
void FUN_1400e79ec();
void FUN_1400e7a74();
void FUN_1400e7b74();
void FUN_1400e7c74();
void FUN_1400e7d74();
void FUN_1400e7da4();

// External Device Management (0x1400e7ec4 - 0x1400e87fc)
void FUN_1400e7ec4();
void FUN_1400e7f2c();
void FUN_1400e8008();
void FUN_1400e8124();
void FUN_1400e813c();
void FUN_1400e8154();
void FUN_1400e816c();
void FUN_1400e8184();
void FUN_1400e819c();
void FUN_1400e81b4();
void FUN_1400e81cc();
void FUN_1400e81e4();
void FUN_1400e81fc();
void FUN_1400e8214();
void FUN_1400e822c();
void FUN_1400e8244();
void FUN_1400e825c();
void FUN_1400e8274();
void FUN_1400e828c();
void FUN_1400e82a4();
void FUN_1400e82bc();
void FUN_1400e82d4();
void FUN_1400e82ec();
void FUN_1400e8304();
void FUN_1400e831c();
void FUN_1400e8334();
void FUN_1400e834c();
void FUN_1400e8364();
void FUN_1400e837c();
void FUN_1400e8394();
void FUN_1400e83ac();
void FUN_1400e83c4();
void FUN_1400e83dc();
void FUN_1400e83f4();
void FUN_1400e840c();
void FUN_1400e8424();
void FUN_1400e843c();
void FUN_1400e8454();
void FUN_1400e846c();
void FUN_1400e8484();
void FUN_1400e849c();
void FUN_1400e84b4();
void FUN_1400e84cc();
void FUN_1400e84e4();
void FUN_1400e84fc();
void FUN_1400e8514();
void FUN_1400e852c();
void FUN_1400e8544();
void FUN_1400e855c();
void FUN_1400e8574();
void FUN_1400e858c();
void FUN_1400e85a4();
void FUN_1400e85bc();
void FUN_1400e85d4();
void FUN_1400e85ec();
void FUN_1400e8604();
void FUN_1400e861c();
void FUN_1400e8634();
void FUN_1400e864c();
void FUN_1400e8664();
void FUN_1400e867c();
void FUN_1400e8694();
void FUN_1400e86ac();
void FUN_1400e86c4();
void FUN_1400e86dc();
void FUN_1400e86f4();
void FUN_1400e870c();
void FUN_1400e8724();
void FUN_1400e873c();
void FUN_1400e8754();
void FUN_1400e876c();
void FUN_1400e8784();
void FUN_1400e879c();
void FUN_1400e87cc();
void FUN_1400e87fc();

// External Network Operations (0x1400e882c - 0x1400e9dd4)
void FUN_1400e882c();
void FUN_1400e8f1c();
void FUN_1400e8f8c();
void FUN_1400e8fc8();
void FUN_1400e9158();
void FUN_1400e91dc();
void FUN_1400e9658();
void FUN_1400e9a04();
void FUN_1400e9bc0();
void FUN_1400e9d2c();
void FUN_1400e9d58();
void FUN_1400e9dd4();

// External File Operations (0x1400ea430 - 0x1400ec9b8)
void FUN_1400ea430();
void FUN_1400eb1d0();
void FUN_1400eb3a4();
void FUN_1400eb55c();
void FUN_1400eb750();
void FUN_1400ebd2c();
void FUN_1400ebe18();
void FUN_1400ebed0();
void FUN_1400ec13c();
void FUN_1400ec374();
void FUN_1400ec408();
void FUN_1400ec4c0();
void FUN_1400ec6b8();
void FUN_1400ec878();
void FUN_1400ec950();
void FUN_1400ec9b8();

// External Database Operations (0x1400ecd2c - 0x1400eefc8)
void FUN_1400ecd2c();
void FUN_1400ecea0();
void FUN_1400eceb0();
void FUN_1400ecec8();
void FUN_1400ecee0();
void FUN_1400ecee8();
void FUN_1400ed030();
void FUN_1400ed0f4();
void FUN_1400ed428();
void FUN_1400ed698();
void FUN_1400ed758();
void FUN_1400ed7a0();
void FUN_1400ed7e8();
void FUN_1400ed9d0();
void FUN_1400edb1c();
void FUN_1400edc68();
void FUN_1400eddb4();
void FUN_1400edf1c();
void FUN_1400ee03c();
void FUN_1400ee360();
void FUN_1400ee440();
void FUN_1400ee4e8();
void FUN_1400ee7f8();
void FUN_1400ee934();
void FUN_1400eea7c();
void FUN_1400eebc4();
void FUN_1400eed0c();
void FUN_1400eed98();
void FUN_1400eedd8();
void FUN_1400eee4c();
void FUN_1400eee8c();
void FUN_1400eef00();
void FUN_1400eef1c();
void FUN_1400eef64();
void FUN_1400eef7c();
void FUN_1400eefc8();

// External System Integration (0x1400ef008 - 0x1400efcd8)
void FUN_1400ef008();
void FUN_1400ef07c();
void FUN_1400ef0bc();
void FUN_1400ef130();
void FUN_1400ef264();
void FUN_1400ef2a4();
void FUN_1400ef5ac();
void FUN_1400ef8b4();
void FUN_1400efcd8();

} // namespace external
} // namespace cad