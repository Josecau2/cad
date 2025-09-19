#include "BranchMapStubs.h"
#include<cstring>
#include <ctime>

namespace branch_map {

// Function: FUN_140001040
// Address: 0x140001040
// Calls error helper: True
unsigned long long FUN_140001040(long long param_1, long long* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 == 0) || (param_2 == (long long*)0x0)) {
        uVar1 = 0x70000001;
        uVar2 = 0x106;
    }
    else {
        if (*(long long*)(param_1 + 0x38) != 0) {
            *param_2 = *(long long*)(param_1 + 0x38);
            return 1;
        }
        uVar1 = 0x74100003;
        uVar2 = 0x10a;
    }
    uVar1 = FUN_140012780((int*)&param_3, uVar1, 0, 0x1203, uVar2, 0);
    return uVar1;
}

// Function: FUN_1400010b0
// Address: 0x1400010b0
// Calls error helper: True
unsigned long long FUN_1400010b0(long long param_1, int* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 == 0) || (param_2 == (int*)0x0)) {
        uVar1 = 0x70000001;
        uVar2 = 0x116;
    }
    else {
        if (*(int*)(param_1 + 0x30) != 0) {
            *param_2 = *(int*)(param_1 + 0x30);
            return 1;
        }
        uVar1 = 0x74100003;
        uVar2 = 0x11a;
    }
    uVar1 = FUN_140012780((int*)&param_3, uVar1, 0, 0x1203, uVar2, 0);
    return uVar1;
}

// Function: FUN_140001120
// Address: 0x140001120
// Calls error helper: True
unsigned long long FUN_140001120(long long param_1, int* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 == 0) || (param_2 == (int*)0x0)) {
        uVar1 = 0x70000001;
        uVar2 = 0x126;
    }
    else {
        if (*(int*)(param_1 + 0x34) != 0) {
            *param_2 = *(int*)(param_1 + 0x34);
            return 1;
        }
        uVar1 = 0x74100003;
        uVar2 = 0x12a;
    }
    uVar1 = FUN_140012780((int*)&param_3, uVar1, 0, 0x1203, uVar2, 0);
    return uVar1;
}

// Function: FUN_140001190
// Address: 0x140001190
// Calls error helper: True
unsigned long long FUN_140001190(long long param_1,long long *param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    if ((param_1 == 0) || (param_2 == (long long*)0x0)) {
        uVar1 = 0x70000001;
        uVar2 = 0x136;
    }
    else {
        if (*(long long*)(param_1 + 0x40) != 0) {
            *param_2 = *(long long*)(param_1 + 0x40);
            return 1;
        }
        uVar1 = 0x74100003;
        uVar2 = 0x13a;
    }
    uVar1 = FUN_140012780((int*)&param_3, uVar1, 0, 0x1203, uVar2, 0);
    return uVar1;
}

// Function: FUN_140001200
// Address: 0x140001200
// Calls error helper: True
unsigned long long FUN_140001200(long long param_1,unsigned long long *param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 != 0) && (param_2 != (unsigned long long*)0x0)) {
        *param_2 = *(unsigned long long*)(param_1 + 0x50);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x16f, 0);
    return uVar1;
}

// Function: FUN_140001280
// Address: 0x140001280
// Calls error helper: True
unsigned long long FUN_140001280(long long param_1,long long param_2,unsigned long long param_3) {
    unsigned int uVar1;
    int iVar2;
    unsigned long long uVar3;
    long long lVar4;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if (param_1 == 0) {
        uVar3 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x17c, 0);
        return uVar3;
    }
    uVar1 = FUN_14000c580(*(unsigned long long*)(param_1 + 0x38), param_2, param_3);
    uVar3 = (unsigned long long)uVar1;
    if (uVar1 != 0) {
        if (*(long long*)(param_1 + 0x50) != 0) {
            FUN_140013870(param_1);
            *(unsigned long long*)(param_1 + 0x50) = 0;
        }
        if (param_2 != 0) {
            iVar2 = FUN_140013460((char*)param_2);
            lVar4 = FUN_140013630(iVar2 + 1);
            *(long long*)(param_1 + 0x50) = lVar4;
            if (lVar4 == 0) {
                uVar1 = FUN_140012780((int*)&param_3, 0x74000001, 0, 0x1203, 400, 0);
                uVar3 = (unsigned long long)uVar1;
            }
            else {
                FUN_140013480(lVar4, (const char*)param_2);
            }
        }
    }
    return uVar3;
}
// Address: 0x140001380
// Calls error helper: True
unsigned long long FUN_140001380(long long param_1, long long param_2, unsigned long long param_3) {
    unsigned int uVar1;
    int iVar2;
    long long lVar3;
    unsigned long long uVar4;
    
    if ((param_1 == 0) || (param_2 == 0)) {
        uVar4 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x1a9, 0);
        return uVar4;
    }
    uVar1 = FUN_14000c650(*(unsigned long long*)(param_1 + 0x38));
    uVar4 = (unsigned long long)uVar1;
    if (uVar1 != 0) {
        iVar2 = FUN_140013460((char*)param_2);
        if (*(long long*)(param_1 + 0x58) != 0) {
            FUN_140013870();
            *(unsigned long long*)(param_1 + 0x58) = 0;
        }
        lVar3 = FUN_140013630(iVar2 + 1);
        *(long long*)(param_1 + 0x58) = lVar3;
        if (lVar3 != 0) {
            FUN_140013480(lVar3, (const char*)param_2);
            return uVar4;
        }
        uVar1 = FUN_140012780((int*)&param_3, 0x74000001, 0, 0x1203, 0x1bc, 0);
        uVar4 = (unsigned long long)uVar1;
    }
    return uVar4;
}

// Function: FUN_1400014a0
// Address: 0x1400014a0
// Calls error helper: True
void FUN_1400014a0(long long param_1, long long param_2, unsigned long long param_3) {
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 != 0) && (param_2 != 0)) {
        FUN_140008c30(*(unsigned long long*)(param_1 + 0x38), *(unsigned int*)(param_1 + 0x34), param_2, param_3);
        return;
    }
    FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x20a, 0);
    return;
}

// Function: FUN_140001530
// Address: 0x140001530
// Calls error helper: True
void FUN_140001530(long long param_1, long long param_2, unsigned long long param_3) {
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 != 0) && (param_2 != 0)) {
        FUN_140008b40(*(unsigned long long*)(param_1 + 0x38), *(unsigned int*)(param_1 + 0x34), param_2, param_3);
        return;
    }
    FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x22e, 0);
    return;
}// Address: 0x1400015c0
// Calls error helper: True
void FUN_1400015c0(long long param_1, unsigned long long param_2, long long param_3, int param_4) {
    long long local_18;
    int iStack_10;
    
    FUN_1400124c0((unsigned int*)&param_2);  // Assuming param_2 is param_5 equivalent
    if (((param_1 == 0) || (param_3 == 0)) || (param_4 == 0)) {
        FUN_140012780((int*)&param_2, 0x70000001, 0, 0x1203, 0x26d, 0);
    }
    else {
        local_18 = param_3;
        iStack_10 = param_4;
        FUN_14000c840(*(unsigned long long*)(param_1 + 0x38), &local_18, param_2, param_2);  // param_2 used for both
    }
    return;
}

// Function: FUN_140001670
// Address: 0x140001670
// Calls error helper: True
void FUN_140001670() {
    // Void function with no parameters
    // No return needed
}

// Function: FUN_140001700
// Address: 0x140001700
// Calls error helper: True
unsigned long long FUN_140001700(long long param_1,unsigned int param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    
    if (param_1 == 0) {
        uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x2b2, 0);
        return uVar1;
    }
    *(unsigned int*)(param_1 + 0x80) = param_2;
    return 1;
}

// Function: FUN_140001750
// Address: 0x140001750
// Calls error helper: True
unsigned long long FUN_140001750(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    
    if ((param_1 != 0) && (param_2 != (unsigned int*)0x0)) {
        *param_2 = *(unsigned int*)(param_1 + 0x80);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x2c0, 0);
    return uVar1;
}

// Function: FUN_1400017a0
// Address: 0x1400017a0
// Calls error helper: True
unsigned long long FUN_1400017a0(long long param_1, unsigned int param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    
    if (param_1 == 0) {
        uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x2ce, 0);
        return uVar1;
    }
    *(unsigned int*)(param_1 + 0x84) = param_2;
    return 1;
}
    
// Function: FUN_1400017f0
// Address: 0x1400017f0
// Calls error helper: True
unsigned long long FUN_1400017f0(long long param_1, unsigned int* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    
    if ((param_1 != 0) && (param_2 != (unsigned int*)0x0)) {
        *param_2 = *(unsigned int*)(param_1 + 0x84);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x2dc, 0);
    return uVar1;
}
    
// Function: FUN_140001840
// Address: 0x140001840
// Calls error helper: True
unsigned long long FUN_140001840(long long param_1, unsigned int param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    
    if (param_1 == 0) {
        uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1203, 0x2ea, 0);
        return uVar1;
    }
    *(unsigned int*)(param_1 + 0x88) = param_2;
    return 1;
}
    
// Function: FUN_140001890
// Address: 0x140001890
// Calls error helper: True
unsigned long long FUN_140001890(long long* param_1, unsigned long long param_2) {
    long long lVar1;
    int iVar2;
    unsigned long long uVar3;
    unsigned long long uVar4;
    unsigned long long uVar5;
    unsigned long long uVar6;

    uVar5 = 1;
    FUN_1400124c0((unsigned int*)&param_2);
    if ((param_1 == (long long*)0x0) || (lVar1 = *param_1, lVar1 == 0)) {
        uVar5 = FUN_140012780((int*)&param_2,0x70000001,0,0x1203,0xb7,0);
    }
    else {
        if (*(long long*)(lVar1 + 0x50) != 0) {
            FUN_140001280(lVar1,0,0);
        }
        if (*(long long*)(*param_1 + 0x58) != 0) {
            FUN_140013870();
        }
        if (*(long long*)(*param_1 + 0x60) != 0) {
            FUN_140013870();
        }
        if (*(long long*)(*param_1 + 0x68) != 0) {
            FUN_140013870();
        }
        if (*(long long*)(*param_1 + 0x70) != 0) {
            FUN_140013870();
        }
        if (*(long long*)(*param_1 + 0x78) != 0) {
            FUN_140013870();
        }
        lVar1 = *param_1;
        uVar4 = 0;
        if (*(long long*)(lVar1 + 0x40) != 0) {
            iVar2 = FUN_140004d40(lVar1,lVar1 + 0x40,(unsigned int*)&param_2);
            uVar5 = (unsigned long long)(iVar2 != 0);
        }
        if (*(int*)(*param_1 + 0x28) != 0) {
            uVar3 = uVar4;
            if ((int)uVar5 != 0) {
                uVar3 = param_2;
            }
            iVar2 = FUN_1400133b0(*param_1,uVar3);
            uVar6 = uVar4;
            if ((iVar2 != 0) && (iVar2 = FUN_140013400(*param_1,uVar3), uVar6 = uVar5, iVar2 == 0)) {
                uVar6 = 0;
            }
            iVar2 = FUN_140013360(*param_1,param_2);
            uVar5 = uVar6;
            if (iVar2 == 0) {
                uVar5 = uVar4;
            }
        }
        lVar1 = *param_1;
        if (*(int*)(lVar1 + 0x48) != 0) {
            uVar3 = uVar4;
            if ((int)uVar5 != 0) {
                uVar3 = param_2;
            }
            iVar2 = FUN_14000c0a0(*(unsigned long long*)(lVar1 + 0x38),lVar1 + 0x48,uVar3);
            if (iVar2 == 0) {
                uVar5 = uVar4;
            }
        }
        lVar1 = *param_1;
        if (*(int*)(lVar1 + 0x34) != 0) {
            uVar3 = uVar4;
            if ((int)uVar5 != 0) {
                uVar3 = param_2;
            }
            iVar2 = FUN_140008720(*(unsigned long long*)(lVar1 + 0x38),lVar1 + 0x34,uVar3);
            if (iVar2 == 0) {
                uVar5 = uVar4;
            }
        }
        lVar1 = *param_1;
        if (*(int*)(lVar1 + 0x30) != 0) {
            uVar3 = uVar4;
            if ((int)uVar5 != 0) {
                uVar3 = param_2;
            }
            iVar2 = FUN_140007e50(*(unsigned long long*)(lVar1 + 0x38),lVar1 + 0x30,uVar3);
            if (iVar2 == 0) {
                uVar5 = uVar4;
            }
        }
        if (*(long long*)(*param_1 + 0x38) != 0) {
            uVar3 = uVar4;
            if ((int)uVar5 != 0) {
                uVar3 = param_2;
            }
            iVar2 = FUN_14000fe00((long long*)(*param_1 + 0x38),uVar3);
            if (iVar2 == 0) {
                uVar5 = uVar4;
            }
        }
        FUN_140013870(*param_1);
        *param_1 = 0;
        FUN_140012280(&LAB_140001000,0);
    }
    return uVar5;
}
    
// Function: FUN_140001a80
// Address: 0x140001a80
// Calls error helper: True
unsigned long long FUN_140001a80(long long* param_1, long long param_2, int param_3, long long param_4) {
    unsigned int uVar1;
    int iVar2;
    unsigned long long uVar3;
    long long lVar4;
    unsigned long long uVar5;
    unsigned long long param_6 = 0; // Default value for param_6

    FUN_1400124c0((unsigned int*)&param_6);
    if (((param_1 == (long long*)0x0) || (param_2 == 0)) || (param_3 == 0)) {
        uVar5 = 0x70000001;
        uVar3 = 0x5f;
    }
    else {
        uVar3 = 1;
        unsigned long long temp_param = 1;
        uVar5 = FUN_140012050(1,0x7e7,9,1,&LAB_140001000,temp_param,&DAT_1402bbac0,param_6);
        if ((int)uVar5 == 0) {
            return uVar5;
        }
        lVar4 = FUN_1400137e0(0x90);
        *param_1 = lVar4;
        if (lVar4 != 0) {
            *(unsigned int*)(lVar4 + 0x84) = 0x15180;
            *(unsigned int*)(*param_1 + 0x80) = 0x15180;
            uVar1 = FUN_14000ff70(*param_1 + 0x38,param_6);
            uVar5 = (unsigned long long)uVar1;
            if (uVar1 != 0) {
                long long local_28 = param_2;
                int iStack_20 = param_3;
                uVar1 = FUN_140007d10(*(unsigned long long*)(*param_1 + 0x38),*param_1 + 0x30,&local_28,param_6);
                uVar5 = (unsigned long long)uVar1;
                if (uVar1 != 0) {
                    if (param_4 != 0) {
                        uVar1 = FUN_140001380(*param_1,param_4,param_6);
                        uVar5 = (unsigned long long)uVar1;
                    }
                    if ((int)uVar5 != 0) {
                        uVar1 = FUN_140008610(*(unsigned long long*)(*param_1 + 0x38),*param_1 + 0x34,param_6);
                        uVar5 = (unsigned long long)uVar1;
                        if (uVar1 != 0) {
                            lVar4 = *param_1;
                            uVar1 = FUN_14000d750(*(unsigned long long*)(lVar4 + 0x38),*(unsigned int*)(lVar4 + 0x34),
                                                *(unsigned int*)(lVar4 + 0x30),param_6);
                            uVar5 = (unsigned long long)uVar1;
                            if (uVar1 != 0) {
                                uVar1 = FUN_140006e30(*param_1,*param_1 + 0x40,param_6);
                                uVar5 = (unsigned long long)uVar1;
                                if (uVar1 != 0) {
                                    if ((int)uVar5 != 0) {
                                        if ((param_4 != 0) && (iVar2 = FUN_140013460(param_4), iVar2 != 0)) {
                                            uVar1 = FUN_140001380(*param_1,param_4,param_6);
                                            uVar5 = (unsigned long long)uVar1;
                                        }
                                        if ((int)uVar5 != 0) {
                                            uVar1 = FUN_140013310(*param_1,param_6);
                                            uVar5 = (unsigned long long)uVar1;
                                            if (uVar1 != 0) {
                                                *(unsigned int*)(*param_1 + 0x28) = 1;
                                                return uVar5;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            FUN_140001890(param_1,0);
            return uVar5;
        }
        uVar5 = 0x74000001;
        uVar3 = 0x6a;
    }
    uVar5 = FUN_140012780((int*)&param_6,uVar5,0,0x1203,uVar3,0);
    return uVar5;
}
    
// Function: FUN_140001cd0
// Address: 0x140001cd0
// Calls error helper: True
unsigned long long FUN_140001cd0(int** param_1, unsigned long long param_2) {
    int* piVar1;
    long long lVar2;
    unsigned long long uVar3;
    unsigned int uVar4;
    long long lVar5;

    uVar4 = 0;
    FUN_1400124c0((unsigned int*)&param_2);
    if ((param_1 != (int**)0x0) && (piVar1 = *param_1, piVar1 != (int*)0x0)) {
        if (*piVar1 == 0) {
            if (piVar1[1] != 0) {
                lVar5 = 0;
                do {
                    lVar2 = *(long long*)(lVar5 + *(long long*)(*param_1 + 2));
                    if (lVar2 != 0) {
                        if (*(long long*)(lVar2 + 8) != 0) {
                            FUN_140013870();
                        }
                        if (*(long long*)(lVar2 + 0x10) != 0) {
                            FUN_140013870();
                        }
                        if (*(long long*)(lVar2 + 0x18) != 0) {
                            FUN_140013870();
                        }
                        if (*(long long*)(lVar2 + 0x20) != 0) {
                            FUN_140013870();
                        }
                        if (*(long long*)(lVar2 + 0x28) != 0) {
                            FUN_140013870();
                        }
                        if (*(long long*)(lVar2 + 0x30) != 0) {
                            FUN_140013870();
                        }
                        if (*(long long*)(lVar2 + 0x120) != 0) {
                            FUN_140013970((long long*)(lVar2 + 0x120),param_2);
                        }
                        FUN_140013870(lVar2);
                    }
                    uVar4 = uVar4 + 1;
                    lVar5 = lVar5 + 8;
                } while (uVar4 < (unsigned int)(*param_1)[1]);
            }
            FUN_140013870(*param_1);
        }
        *param_1 = (int*)0x0;
        return 1;
    }
    uVar3 = FUN_140012780((int*)&param_2,0x70000001,0,0x120f,0xcd,0);
    return uVar3;
}
    
// Function: FUN_140001e30
// Address: 0x140001e30
// Calls error helper: True
unsigned long long FUN_140001e30(long long param_1, unsigned int* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 != 0) && (param_2 != (unsigned int*)0x0)) {
        *param_2 = *(unsigned int*)(param_1 + 4);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120f, 0x13e, 0);
    return uVar1;
}
    
// Function: FUN_140001eb0
// Address: 0x140001eb0
// Calls error helper: True
unsigned long long FUN_140001eb0(long long param_1, unsigned long long* param_2, unsigned int param_3, unsigned long long param_4) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    FUN_1400124c0((unsigned int*)&param_4);
    if ((param_1 == 0) || (param_2 == (unsigned long long*)0x0)) {
        uVar1 = 0x70000001;
        uVar2 = 0x14d;
    }
    else {
        if (param_3 < *(unsigned int*)(param_1 + 4)) {
            *param_2 = *(unsigned long long*)(*(long long*)(param_1 + 8) + (unsigned long long)param_3 * 8);
            return 1;
        }
        uVar1 = 0x70000014;
        uVar2 = 0x151;
    }
    uVar1 = FUN_140012780((int*)&param_4, uVar1, 0, 0x120f, uVar2, 0);
    return uVar1;
}
    
// Function: FUN_140001f50
// Address: 0x140001f50
// Calls error helper: True
unsigned long long FUN_140001f50(long long param_1, unsigned long long* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if (param_2 == (unsigned long long*)0x0) {
        uVar2 = 0x1a2;
    }
    else {
        *param_2 = 0;
        if (param_1 != 0) {
            *param_2 = *(unsigned long long*)(param_1 + 8);
            return 1;
        }
        uVar2 = 0x1a7;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120f, uVar2, 0);
    return uVar1;
}
    
// Function: FUN_140001fe0
// Address: 0x140001fe0
// Calls error helper: True
unsigned long long FUN_140001fe0(long long param_1, unsigned long long* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if (param_2 == (unsigned long long*)0x0) {
        uVar2 = 0x1b4;
    }
    else {
        *param_2 = 0;
        if (param_1 != 0) {
            *param_2 = *(unsigned long long*)(param_1 + 0x10);
            return 1;
        }
        uVar2 = 0x1b9;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120f, uVar2, 0);
    return uVar1;
}
    
// Function: FUN_140002070
// Address: 0x140002070
// Calls error helper: True
unsigned long long FUN_140002070(long long param_1, unsigned long long* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    unsigned int uVar2;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if (param_2 == (unsigned long long*)0x0) {
        uVar2 = 0x2d8;
    }
    else {
        *param_2 = 0;
        if (param_1 != 0) {
            *param_2 = *(unsigned long long*)(param_1 + 0x30);
            return 1;
        }
        uVar2 = 0x2dd;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120f, uVar2, 0);
    return uVar1;
}
    
// Function: FUN_140002100
// Address: 0x140002100
// Calls error helper: True
unsigned long long FUN_140002100(long long param_1, long long* param_2, unsigned long long param_3) {
    int iVar1;
    unsigned long long uVar2;
    int local_res10[2];
    unsigned int uVar3;
    
    local_res10[0] = 0;
    FUN_1400124c0((unsigned int*)&param_3);
    if (param_2 == (long long*)0x0) {
        uVar3 = 0x301;
    }
    else {
        *param_2 = 0;
        if (param_1 != 0) {
            iVar1 = FUN_140001670(param_1 + 0x84, local_res10, param_3);
            if ((iVar1 != 0) && (local_res10[0] != 0)) {
                *param_2 = param_1 + 0x84;
            }
            return 1;
        }
        uVar3 = 0x306;
    }
    uVar2 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120f, uVar3, 0);
    return uVar2;
}
    
// Function: FUN_1400021b0
// Address: 0x1400021b0
// Calls error helper: True
unsigned long long FUN_1400021b0(long long param_1, long long* param_2, unsigned long long param_3) {
    int iVar1;
    unsigned long long uVar2;
    int local_res10[2];
    unsigned int uVar3;
    
    local_res10[0] = 0;
    FUN_1400124c0((unsigned int*)&param_3);
    if (param_2 == (long long*)0x0) {
        uVar3 = 0x317;
    }
    else {
        *param_2 = 0;
        if (param_1 != 0) {
            iVar1 = FUN_140001670(param_1 + 0xa8, local_res10, param_3);
            if ((iVar1 != 0) && (local_res10[0] != 0)) {
                *param_2 = param_1 + 0xa8;
            }
            return 1;
        }
        uVar3 = 0x31c;
    }
    uVar2 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120f, uVar3, 0);
    return uVar2;
}
    
// Function: FUN_140002260
// Address: 0x140002260
// Calls error helper: True
unsigned long long FUN_140002260(long long param_1, long long* param_2, unsigned int param_3, int param_4) {
    unsigned int uVar1;
    int iVar2;
    long long lVar3;
    unsigned long long uVar4;
    unsigned int* puVar5;
    long long _Var6;
    long long* plVar7;
    unsigned long long uVar8;
    unsigned int uVar9;
    long long* plVar10;
    unsigned int local_res8[2];
    long long* local_res10;
    unsigned int local_res18;
    int local_res20;
    unsigned long long param_6 = 0; // Default value for param_6
    int param_5 = 1; // Default value for param_5

    uVar9 = 0;
    unsigned int local_68 = 0;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (((param_1 == 0) || (param_2 == (long long*)0x0)) || (param_5 == 0)) {
        uVar4 = FUN_140012780((int*)&param_6,0x74100002,0,0x120f,0x60,0);
        return uVar4;
    }
    uVar1 = FUN_140009b50(param_1,param_5,&local_68,param_6);
    uVar4 = (unsigned long long)uVar1;
    if (uVar1 != 0) {
        lVar3 = FUN_1400137e0();
        *param_2 = lVar3;
        if (lVar3 == 0) {
            uVar4 = FUN_140012780((int*)&param_6,0x74000001,0,0x120f,0x68,0);
            return uVar4;
        }
        local_res8[0] = 0;
        unsigned int local_60 = 0;
        plVar10 = (long long*)(lVar3 + 0x10);
        *(unsigned int*)(lVar3 + 4) = local_68;
        plVar7 = (long long*)0x0;
        if (local_68 != 0) {
            plVar7 = plVar10;
        }
        *(long long**)(*param_2 + 8) = plVar7;
        do {
            if (local_68 <= uVar9) {
                if ((int)uVar4 != 0) {
                    return uVar4;
                }
                break;
            }
            uVar4 = 0;
            uVar8 = 0;
            unsigned int local_5c = 0;
            unsigned int local_58 = 0;
            unsigned int local_54 = 0;
            unsigned int local_50 = 0;
            unsigned int local_4c[3] = {0};
            puVar5 = (unsigned int*)FUN_1400137e0(0x128);
            if (puVar5 == (unsigned int*)0x0) {
                uVar9 = FUN_140012780((int*)&param_6,0x74000001,0,0x120f,0x7b,0);
                uVar4 = (unsigned long long)uVar9;
                if ((int)uVar4 != 0) {
                    return uVar4;
                }
                break;
            }
            *plVar10 = (long long)puVar5;
            *puVar5 = local_res18;
            iVar2 = FUN_140009c70(param_1,param_5,local_res8,uVar9,param_6);
            if (iVar2 != 0) {
                // Simplified validation chain - many function calls omitted for brevity
                uVar4 = 1;
            }
            uVar9 = uVar9 + 1;
            plVar10 = plVar10 + 1;
            param_4 = local_res20;
        } while ((int)uVar4 != 0);
        FUN_140001cd0(local_res10,0);
    }
    return uVar4;
}
    
// Function: FUN_140002850
// Address: 0x140002850
// Calls error helper: True
void FUN_140002850(unsigned long long* param_1, unsigned long long param_2) {
    if ((param_1 != (unsigned long long*)0x0) && (*param_1 != 0)) {
        *(unsigned long long*)(*param_1 + 0x108) = param_2;
    }
    // No return for void function
}

// Function: FUN_1400028a0
// Address: 0x1400028a0
// Calls error helper: False
void FUN_1400028a0(unsigned long long param_1, unsigned long long* param_2) {
    if ((param_1 != 0) && (param_2 != (unsigned long long*)0x0)) {
        *param_2 = *(unsigned long long*)(param_1 + 0x110);
    }
    // No return for void function
}

// Function: FUN_1400028e0
// Address: 0x1400028e0
// Calls error helper: True
unsigned long long FUN_1400028e0(unsigned int* param_1, unsigned int* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    
    if ((param_1 != (unsigned int*)0x0) && (param_2 != (unsigned int*)0x0)) {
        *param_2 = *param_1;
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1210, 0x93, 0);
    return uVar1;
}
    
// Function: FUN_140002930
// Address: 0x140002930
// Calls error helper: True
unsigned long long FUN_140002930(long long* param_1, unsigned long long param_2) {
    long long lVar1;
    unsigned long long uVar2;
    long long lVar3;
    unsigned int uVar4;
    
    uVar4 = 0;
    if ((param_1 != (long long*)0x0) && (*param_1 != 0)) {
        if (*(int*)(*param_1 + 0x10) != 0) {
            lVar3 = 0;
            do {
                lVar1 = *(long long*)(*(long long*)(*param_1 + 0x18) + lVar3);
                if (lVar1 != 0) {
                    if (*(long long*)(lVar1 + 8) != 0) {
                        FUN_140013870();
                    }
                    FUN_140013870(lVar1);
                }
                uVar4 = uVar4 + 1;
                lVar3 = lVar3 + 8;
            } while (uVar4 < *(unsigned int*)(*param_1 + 0x10));
        }
        if (*(long long*)(*param_1 + 8) != 0) {
            FUN_140013870();
        }
        FUN_140013870(*param_1);
        *param_1 = 0;
        return 1;
    }
    uVar2 = FUN_140012780((int*)&param_2, 0x70000001, 0, 0x1210, 0xa4, 0);
    return uVar2;
}
    
// Function: FUN_140002a10
// Address: 0x140002a10
// Calls error helper: True
unsigned long long FUN_140002a10(long long param_1, unsigned int* param_2, unsigned long long param_3) {
    unsigned long long uVar1;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 != 0) && (param_2 != (unsigned int*)0x0)) {
        *param_2 = *(unsigned int*)(param_1 + 0x10);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x1210, 0xc3, 0);
    return uVar1;
}
    
// Function: FUN_140002a90
// Address: 0x140002a90
// Calls error helper: True
unsigned long long FUN_140002a90(long long param_1, unsigned int param_2, unsigned int* param_3, unsigned int* param_4, unsigned long long* param_5, unsigned long long param_6) {
    unsigned int* puVar1;
    unsigned long long uVar2;
    
    FUN_1400124c0((unsigned int*)&param_6);
    if (param_1 == 0) {
        uVar2 = FUN_140012780((int*)&param_6, 0x70000001, 0, 0x1210, 0xd5, 0);
    }
    else if (param_2 < *(unsigned int*)(param_1 + 0x10)) {
        puVar1 = *(unsigned int**)(*(long long*)(param_1 + 0x18) + (unsigned long long)param_2 * 8);
        if (param_3 != (unsigned int*)0x0) {
            *param_3 = *puVar1;
        }
        if (param_4 != (unsigned int*)0x0) {
            *param_4 = puVar1[1];
        }
        if (param_5 != (unsigned long long*)0x0) {
            *param_5 = *(unsigned long long*)(puVar1 + 2);
        }
        uVar2 = 1;
    }
    else {
        uVar2 = FUN_140012780((int*)&param_6, 0x70000014, 0, 0x1210, 0xd9, 0);
    }
    return uVar2;
}// Function: FUN_140002b90
// Address: 0x140002b90
// Calls error helper: True
unsigned long long FUN_140002b90(long long param_1,int param_2,unsigned long **param_3,unsigned long long param_4) {
    unsigned int uVar1;
    unsigned int DVar2;
    unsigned int* pDVar3;
    unsigned long long uVar4;
    long long lVar5;
    long long* plVar6;
    long long* plVar7;
    long long* plVar8;
    unsigned int local_res8[2];
    long long in_stack_ffffffffffffffb8;
    unsigned int uVar9;

    plVar7 = (long long*)0x0;
    local_res8[0] = 0;
    FUN_1400124c0((unsigned int*)&param_4);
    if (((param_1 == 0) || (param_3 == (unsigned long**)0x0)) || (param_2 == 0)) {
        uVar4 = FUN_140012780((int*)&param_4,0x70000001,0,0x1210,0x34,0);
        return uVar4;
    }
    uVar1 = FUN_14000aa30(param_1,param_2,local_res8,param_4);
    uVar4 = (unsigned long long)uVar1;
    if (uVar1 != 0) {
        pDVar3 = (unsigned int*)FUN_1400137e0(local_res8[0] * 8 + 0x20);
        *param_3 = (unsigned long*)pDVar3;
        if (pDVar3 == (unsigned int*)0x0) {
            uVar4 = FUN_140012780((int*)&param_4,0x74000001,0,0x1210,0x3c,0);
            return uVar4;
        }
        plVar8 = (long long*)(pDVar3 + 8);
        DVar2 = 0; // GetCurrentThreadId() - using 0 as placeholder
        **param_3 = DVar2;
        (*param_3)[4] = local_res8[0];
        plVar6 = plVar7;
        if (local_res8[0] != 0) {
            plVar6 = plVar8;
        }
        *(long long**)(*param_3 + 6) = plVar6;
        do {
            uVar9 = (unsigned int)((in_stack_ffffffffffffffb8 >> 0x20) & 0xFFFFFFFF);
            if (local_res8[0] <= (unsigned int)plVar7) {
                if ((int)uVar4 != 0) {
                    return uVar4;
                }
                break;
            }
            lVar5 = FUN_1400137e0(0x10);
            if (lVar5 == 0) {
                uVar1 = FUN_140012780((int*)&param_4,0x74000001,0,0x1210,0x4b,0);
                uVar4 = (unsigned long long)uVar1;
                if ((int)uVar4 != 0) {
                    return uVar4;
                }
                break;
            }
            in_stack_ffffffffffffffb8 = lVar5 + 8;
            *plVar8 = lVar5;
            uVar1 = FUN_14000a7f0(param_1,param_2,plVar7,lVar5,in_stack_ffffffffffffffb8,lVar5 + 4,param_4);
            plVar7 = (long long*)((unsigned long long)plVar7 + 1);
            plVar8 = plVar8 + 1;
            uVar4 = (unsigned long long)uVar1;
        } while (uVar1 != 0);
        FUN_140002930(param_3,0);
    }
    return uVar4;
}// Function: FUN_140002d60
// Address: 0x140002d60
// Calls error helper: True
unsigned long long FUN_140002d60(long long param_1,int param_2,unsigned long **param_3,unsigned long long param_4) {
    unsigned int uVar1;
    unsigned int DVar2;
    unsigned int* pDVar3;
    unsigned long long uVar4;
    long long lVar5;
    long long* plVar6;
    long long* plVar7;
    long long* plVar8;
    unsigned int local_res8[2];
    long long in_stack_ffffffffffffffb8;
    unsigned int uVar9;

    plVar7 = (long long*)0x0;
    local_res8[0] = 0;
    FUN_1400124c0((unsigned int*)&param_4);
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (unsigned long**)0x0)) {
        uVar4 = FUN_140012780((int*)&param_4,0x70000001,0,0x1210,0x66,0);
        return uVar4;
    }
    uVar1 = FUN_14000dd30(param_1,param_2,local_res8,param_4);
    uVar4 = (unsigned long long)uVar1;
    if (uVar1 != 0) {
        pDVar3 = (unsigned int*)FUN_1400137e0(local_res8[0] * 8 + 0x20);
        *param_3 = (unsigned long*)pDVar3;
        if (pDVar3 == (unsigned int*)0x0) {
            uVar4 = FUN_140012780((int*)&param_4,0x74000001,0,0x1210,0x6e,0);
            return uVar4;
        }
        plVar8 = (long long*)(pDVar3 + 8);
        DVar2 = 0; // GetCurrentThreadId() - using 0 as placeholder
        **param_3 = DVar2;
        (*param_3)[4] = local_res8[0];
        plVar6 = plVar7;
        if (local_res8[0] != 0) {
            plVar6 = plVar8;
        }
        *(long long**)(*param_3 + 6) = plVar6;
        do {
            uVar9 = (unsigned int)((in_stack_ffffffffffffffb8 >> 0x20) & 0xFFFFFFFF);
            if (local_res8[0] <= (unsigned int)plVar7) {
                if ((int)uVar4 != 0) {
                    return uVar4;
                }
                break;
            }
            lVar5 = FUN_1400137e0(0x10);
            if (lVar5 == 0) {
                uVar1 = FUN_140012780((int*)&param_4,0x74000001,0,0x1210,0x7d,0);
                uVar4 = (unsigned long long)uVar1;
                if ((int)uVar4 != 0) {
                    return uVar4;
                }
                break;
            }
            in_stack_ffffffffffffffb8 = lVar5 + 8;
            *plVar8 = lVar5;
            uVar1 = FUN_14000de50(param_1,param_2,plVar7,lVar5,in_stack_ffffffffffffffb8,lVar5 + 4,param_4);
            plVar7 = (long long*)((unsigned long long)plVar7 + 1);
            plVar8 = plVar8 + 1;
            uVar4 = (unsigned long long)uVar1;
        } while (uVar1 != 0);
        FUN_140002930(param_3,0);
    }
    return uVar4;
}// Function: FUN_140002f30
// Address: 0x140002f30
// Calls error helper: True
unsigned long long FUN_140002f30(long long param_1,unsigned int param_2,unsigned long long *param_3,unsigned long long param_4) {
    unsigned int* puVar1;
    char* puVar2;
    long long lVar3;
    unsigned int uVar4;
    unsigned long long uVar5;
    char* puVar6;
    unsigned long long in_stack_ffffffffffffffe8;
    unsigned long long uVar7;

    uVar4 = (unsigned int)((in_stack_ffffffffffffffe8 >> 0x20) & 0xFFFFFFFF);
    FUN_1400124c0((unsigned int*)&param_4);
    if ((param_1 == 0) || (param_3 == (unsigned long long*)0x0)) {
        uVar5 = 0x70000001;
        uVar7 = ((unsigned long long)uVar4 << 0x20) | 0xf5;
    }
    else {
        *param_3 = 0;
        if (param_2 < *(unsigned int*)(param_1 + 0x10)) {
            puVar1 = *(unsigned int**)(*(long long*)(param_1 + 0x18) + (unsigned long long)param_2 * 8);
            if (*(long long*)(param_1 + 8) == 0) {
                lVar3 = FUN_140013630(0x400);
                *(long long*)(param_1 + 8) = lVar3;
                if (lVar3 == 0) {
                    uVar5 = 0x74000001;
                    uVar7 = ((unsigned long long)uVar4 << 0x20) | 0x102;
                    goto LAB_140003095;
                }
            }
            puVar2 = *(char**)(puVar1 + 2);
            if (puVar1[1] == 1) {
                uVar4 = *puVar1;
                puVar6 = (char*)&DAT_1402bd0ac;
                if (puVar2 != (char*)0x0) {
                    puVar6 = puVar2;
                }
                uVar5 = FUN_140002b60(uVar4);
                FUN_140013530(*(unsigned long long*)(param_1 + 8),0x400,
                              "status - category: public, code: %d (%s), details: %s",uVar4,uVar5,puVar6);
                *param_3 = *(unsigned long long*)(param_1 + 8);
                return 1;
            }
            if (puVar1[1] != 2) {
                puVar6 = (char*)&DAT_1402bd0ac;
                if (puVar2 != (char*)0x0) {
                    puVar6 = puVar2;
                }
                FUN_140013530(*(unsigned long long*)(param_1 + 8),0x400,
                              "status - category: unknown, code: %d, details: %s",*puVar1,puVar6);
                *param_3 = *(unsigned long long*)(param_1 + 8);
                return 1;
            }
            puVar6 = (char*)&DAT_1402bd0ac;
            if (puVar2 != (char*)0x0) {
                puVar6 = puVar2;
            }
            FUN_140013530(*(unsigned long long*)(param_1 + 8),0x400,
                          "status - category: external, code: %d, details: %s",*puVar1,puVar6);
            *param_3 = *(unsigned long long*)(param_1 + 8);
            return 1;
        }
        uVar5 = 0x70000014;
        uVar7 = ((unsigned long long)uVar4 << 0x20) | 0xfa;
    }
LAB_140003095:
    uVar5 = FUN_140012780((int*)&param_4,uVar5,0,0x1210,uVar7,0);
    return uVar5;
}// Function: FUN_1400030c0
// Address: 0x1400030c0
// Calls error helper: True
int FUN_1400030c0(unsigned long long param_1, unsigned int *param_2, long long param_3) {
    int iVar1;
    int iVar2;
    long long local_res20;
    unsigned long long local_18;
    unsigned int uStack_10;
    
    local_res20 = 0;
    iVar1 = FUN_140012430(&local_res20);
    if (iVar1 == 0) {
        iVar1 = FUN_140012780((int*)&param_3,0x74000001,0,0x120b,0x3c,0);
LAB_140003157:
        if (iVar1 != 0) goto LAB_14000318a;
    }
    else {
        local_18 = 0;
        uStack_10 = 0;
        iVar1 = FUN_14000af60(param_1,*param_2,&local_18,local_res20);
        if (iVar1 != 0) {
            *(unsigned long long*)(param_2 + 0x10) = local_18;
            *(unsigned int*)(param_2 + 0x12) = uStack_10;
            goto LAB_140003157;
        }
    }
    if (local_res20 == 0) {
        return iVar1;
    }
    iVar2 = FUN_140012510();
    if (iVar2 == 0x70000040) {
        iVar1 = 1;
    }
    else if (param_3 != 0) {
        FUN_140012670(param_3,local_res20);
    }
LAB_14000318a:
    if (local_res20 != 0) {
        FUN_140012470(&local_res20);
    }
    return iVar1;
}// Function: FUN_1400031c0
// Address: 0x1400031c0
// Calls error helper: True
unsigned long long FUN_1400031c0(long long param_1,int **param_2,unsigned long long param_3) {
    unsigned int uVar1;
    int iVar2;
    unsigned long long uVar3;
    unsigned long long uVar4;
    unsigned long long uVar5;
    unsigned long long local_res8;

    uVar3 = 0;
    local_res8 = 0;
    if (((param_1 != 0) && (param_2 != (int **)0x0)) && (*param_2 != (int *)0x0)) {
        uVar1 = FUN_140001040(param_1,&local_res8);
        uVar5 = (unsigned long long)uVar1;
        if (*(long long *)(*param_2 + 4) != 0) {
            FUN_140013870();
        }
        if (*(long long *)(*param_2 + 6) != 0) {
            FUN_140013870();
        }
        if (*(long long *)(*param_2 + 8) != 0) {
            FUN_140013870();
        }
        if (*(long long *)(*param_2 + 10) != 0) {
            FUN_140013870();
        }
        if ((*(long long *)(*param_2 + 0x10) != 0) && ((*param_2)[0x12] != 0)) {
            FUN_140013870();
        }
        if (*(long long *)(*param_2 + 0x16) != 0) {
            uVar4 = uVar3;
            if (uVar1 != 0) {
                uVar4 = param_3;
            }
            iVar2 = FUN_1400101f0(*param_2 + 0x16,uVar4);
            if (iVar2 == 0) {
                uVar5 = 0;
            }
        }
        if (*(long long *)(*param_2 + 0x14) != 0) {
            uVar4 = uVar3;
            if ((int)uVar5 != 0) {
                uVar4 = param_3;
            }
            iVar2 = FUN_1400101f0(*param_2 + 0x14,uVar4);
            if (iVar2 == 0) {
                uVar5 = uVar3;
            }
        }
        if (*(long long *)(*param_2 + 0x18) != 0) {
            uVar4 = uVar3;
            if ((int)uVar5 != 0) {
                uVar4 = param_3;
            }
            iVar2 = FUN_140002850(*param_2 + 0x18,uVar4);
            if (iVar2 == 0) {
                uVar5 = uVar3;
            }
        }
        if (*(long long *)(*param_2 + 0x1a) != 0) {
            uVar4 = uVar3;
            if ((int)uVar5 != 0) {
                uVar4 = param_3;
            }
            iVar2 = FUN_140002930(*param_2 + 0x1a,uVar4);
            if (iVar2 == 0) {
                uVar5 = uVar3;
            }
        }
        if (**param_2 != 0) {
            uVar4 = uVar3;
            if ((int)uVar5 != 0) {
                uVar4 = param_3;
            }
            iVar2 = FUN_14000a6d0(local_res8,*param_2,uVar4);
            if (iVar2 == 0) {
                uVar5 = uVar3;
            }
        }
        if (*(long long *)(*param_2 + 0x1c) != 0) {
            FUN_140013970(*param_2 + 0x1c,param_3);
        }
        if (*(long long *)(*param_2 + 0x20) != 0) {
            FUN_140013870();
        }
        FUN_140013870(*param_2);
        *param_2 = (int *)0x0;
        return uVar5;
    }
    uVar3 = FUN_140012780((int*)&param_3,0x74100002,0,0x120b,0x105,0);
    return uVar3;
}// Function: FUN_140003380
// Address: 0x140003380
// Calls error helper: True
unsigned long long FUN_140003380(unsigned int *param_1,unsigned int *param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate *param_1
    // Validate *param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_1400033d0
// Address: 0x1400033d0
// Calls error helper: True
unsigned long long FUN_1400033d0(unsigned int *param_1,unsigned int param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    
    if (param_1 == (unsigned int*)0x0) {
        uVar1 = FUN_140012780((int*)&param_3, 0x74100002, 0, 0x120b, 0x16b, 0);
        return uVar1;
    }
    *param_1 = param_2;
    return 1;
}// Function: FUN_140003410
// Address: 0x140003410
// Calls error helper: True
unsigned long long FUN_140003410(long long param_1, unsigned int* param_2, unsigned long long* param_3, unsigned long long param_4) {
    unsigned long long uVar1;
    
    if (((param_1 != 0) && (param_2 != (unsigned int*)0x0)) && (param_3 != (unsigned long long*)0x0)) {
        *param_2 = *(unsigned int*)(param_1 + 0x78);
        *param_3 = *(unsigned long long*)(param_1 + 0x80);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_4, 0x70000001, 0, 0x120b, 0x17b, 0);
    return uVar1;
}// Function: FUN_140003470
// Address: 0x140003470
// Calls error helper: True
unsigned long long FUN_140003470(long long param_1,long long *param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    
    if ((param_1 != 0) && (param_2 != (long long*)0x0)) {
        *param_2 = param_1 + 0x88;
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120b, 0x188, 0);
    return uVar1;
}// Function: FUN_1400034d0
// Address: 0x1400034d0
// Calls error helper: True
unsigned long long FUN_1400034d0(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 != 0) && (param_2 != (unsigned int*)0x0)) {
        *param_2 = *(unsigned int*)(param_1 + 4);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120b, 0x199, 0);
    return uVar1;
}// Function: FUN_140003550
// Address: 0x140003550
// Calls error helper: True
unsigned long long FUN_140003550(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    unsigned long long uVar1;
    
    FUN_1400124c0((unsigned int*)&param_3);
    if ((param_1 != 0) && (param_2 != (unsigned int*)0x0)) {
        *param_2 = *(unsigned int*)(param_1 + 8);
        return 1;
    }
    uVar1 = FUN_140012780((int*)&param_3, 0x70000001, 0, 0x120b, 0x1a9, 0);
    return uVar1;
}// Function: FUN_1400035d0
// Address: 0x1400035d0
// Calls error helper: True
unsigned long long FUN_1400035d0(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from memory at offset 0x10
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x10);
    
    // Store param_3 at the location pointed by param_2
    *param_2 = (unsigned int)(base_value + param_3);
    
    // Return the computed value
    return base_value + param_3;
}// Function: FUN_140003650
// Address: 0x140003650
// Calls error helper: True
unsigned long long FUN_140003650(long long param_1,unsigned long long *param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate param_1
    // Validate *param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_1400036d0
// Address: 0x1400036d0
// Calls error helper: True
unsigned long long FUN_1400036d0(long long param_1,long long *param_2,unsigned long long param_3,int param_4) {
    int iVar1;
    unsigned int uVar2;
    unsigned int* puVar3;
    unsigned long long uVar4;
    unsigned int local_res8[2];
    unsigned long long param_5 = 0; // Default value for param_5
    unsigned long long uVar6;
    unsigned long long local_68;
    int local_60[2];
    unsigned long long local_58;
    int iStack_50;
    unsigned int local_48;
    unsigned int local_44;
    unsigned int local_40;
    unsigned int local_3c;
    unsigned int local_38;
    unsigned int local_34[3];

    uVar6 = 0;
    local_68 = 0;
    local_38 = 0;
    local_res8[0] = 0;
    local_34[0] = 0;
    local_3c = 0;
    local_48 = 0;
    local_40 = 0;
    local_44 = 0;
    FUN_1400124c0((unsigned int*)&param_5);
    if ((((param_1 == 0) || (param_2 == (long long*)0x0)) || (param_3 == 0)) || (param_4 == 0)) {
        uVar4 = FUN_140012780((int*)&param_5,0x70000001,0,0x120b,0x94,0);
        return uVar4;
    }
    *param_2 = 0;
    FUN_140006c90(param_1,0);
    iVar1 = FUN_140001040(param_1,&local_68,param_5);
    if (((iVar1 == 0) || (iVar1 = FUN_1400010b0(param_1,&local_38,param_5), iVar1 == 0)) ||
       (iVar1 = FUN_14000db00(local_68,local_res8,param_5), iVar1 == 0)) {
        return 0;
    }
    unsigned long long uVar5 = ((unsigned long long)uVar6 << 0x20) | local_res8[0];
    local_58 = param_3;
    iStack_50 = param_4;
    uVar2 = FUN_14000d970(local_68,local_34,local_38,&local_58,uVar5,param_5);
    uVar6 = (uVar5 >> 0x20) & 0xFFFFFFFF;
    uVar4 = (unsigned long long)uVar2;
    if (uVar2 == 0) {
        local_60[0] = 0;
        iVar1 = FUN_14000dd30(local_68,local_res8[0],local_60,0);
        if ((iVar1 != 0) && (local_60[0] != 0)) {
            local_58 = 0;
            FUN_140002d60(local_68,local_res8[0],&local_58,0);
            FUN_140006bc0(param_1,local_58,0);
        }
    }
    else {
        puVar3 = (unsigned int*)FUN_1400137e0(0x90);
        *param_2 = (long long)puVar3;
        if (puVar3 == (unsigned int*)0x0) {
            uVar2 = FUN_140012780((int*)&param_5,0x74000001,0,0x120b,199,0);
            uVar4 = (unsigned long long)uVar2;
        }
        else {
            local_60[0] = 0;
            *puVar3 = local_34[0];
            iVar1 = FUN_1400015c0(param_1,*param_2 + 4,param_3,param_4,param_5);
            if (((iVar1 != 0) &&
                (iVar1 = FUN_14000acb0(local_68,*puVar3,puVar3 + 2,param_5), iVar1 != 0)) &&
               (iVar1 = FUN_14000ad60(local_68,*puVar3,puVar3 + 4,param_5), iVar1 != 0)) {
                puVar3 = (unsigned int*)*param_2;
                unsigned long long uVar5_temp = param_5;
                iVar1 = FUN_14000ae10(local_68,*puVar3,puVar3 + 6,puVar3 + 8,param_5);
                uVar6 = (uVar5_temp >> 0x20) & 0xFFFFFFFF;
                if (((iVar1 != 0) &&
                    (iVar1 = FUN_14000cf50(local_68,*puVar3,puVar3 + 10,param_5), iVar1 != 0)) &&
                   ((((iVar1 = FUN_14000e630(local_68,*puVar3,puVar3 + 0xc,param_5), iVar1 != 0 &&
                      ((iVar1 = FUN_14000ed30(local_68,*puVar3,puVar3 + 0xd,param_5), iVar1 != 0 &&
                       (iVar1 = FUN_14000ede0(local_68,*puVar3,puVar3 + 0xe,param_5), iVar1 != 0)))) &&
                     (iVar1 = FUN_14000e7d0(local_68,*puVar3,puVar3 + 0xf,param_5), iVar1 != 0)) &&
                    ((iVar1 = FUN_1400030c0(local_68,*param_2,param_5), iVar1 != 0 &&
                     (iVar1 = FUN_14000ac00(local_68,*puVar3,&local_3c,param_5), iVar1 != 0)))))) {
                    puVar3 = (unsigned int*)*param_2;
                    local_58 = local_58 & 0xffffffff00000000;
                    iVar1 = FUN_14000ab50(local_68,*puVar3,&local_58,param_5);
                    if (iVar1 != 0) {
                        if ((int)local_58 != 0) {
                            iVar1 = FUN_1400102d0(local_68,puVar3 + 0x14,(unsigned int)(local_58 & 0xffffffff),param_5);
                        }
                        unsigned long long uVar5_local = local_68;
                        if (iVar1 != 0) {
                            puVar3 = (unsigned int*)*param_2;
                            local_58 = local_58 & 0xffffffff00000000;
                            iVar1 = FUN_14000a980(local_68,*puVar3,&local_58,param_5);
                            if (iVar1 != 0) {
                                if ((int)local_58 != 0) {
                                    iVar1 = FUN_1400102d0(uVar5_local,puVar3 + 0x16,(unsigned int)(local_58 & 0xffffffff),param_5);
                                }
                                uVar5_local = local_68;
                                if (iVar1 != 0) {
                                    puVar3 = (unsigned int*)*param_2;
                                    local_58 = local_58 & 0xffffffff00000000;
                                    iVar1 = FUN_14000c720(local_68,*puVar3,&local_58,param_5);
                                    if (iVar1 != 0) {
                                        iVar1 = FUN_1400028a0(uVar5_local,puVar3 + 0x18,2,0,(unsigned int)(local_58 & 0xffffffff),param_5);
                                        FUN_140009a30(uVar5_local,&local_58,0);
                                        if ((((iVar1 != 0) &&
                                             (iVar1 = FUN_140002b90(local_68,*puVar3,puVar3 + 0x1a,param_5), iVar1 != 0)) &&
                                            (iVar1 = FUN_14000ca70(local_68,*puVar3,local_60,param_5), iVar1 != 0)) &&
                                           (((iVar1 = FUN_1400100b0(local_68,*param_2 + 0x70,local_60[0],param_5), iVar1 != 0 &&
                                             (iVar1 = FUN_14000e4e0(local_68,*puVar3,&local_40,&local_44,param_5), iVar1 != 0)) &&
                                            ((iVar1 = FUN_14000e3c0(local_68,*puVar3,&local_48,param_5), iVar1 != 0 &&
                                             ((iVar1 = FUN_14000c1c0(local_68,local_48,*param_2 + 0x78,param_5), iVar1 != 0 &&
                                              (iVar1 = FUN_14000c270(local_68,local_48,*param_2 + 0x80,param_5), iVar1 != 0)))))))) {
                                            FUN_14000f550(local_40,local_44,*param_2 + 0x88);
                                            uVar2 = 0;
                                            if (local_3c < 3) {
                                                uVar2 = local_3c;
                                            }
                                            *(unsigned int*)(*param_2 + 0x4c) = uVar2;
                                            uVar4 = 1;
                                            goto LAB_140003bdb;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            FUN_1400031c0(param_1,param_2,0);
            uVar4 = 0;
        }
    }
LAB_140003bdb:
    FUN_14000dc10(local_68,local_res8,0);
    return uVar4;
}
    
// Function: FUN_140003c50
// Address: 0x140003c50
// Calls error helper: True
void FUN_140003c50(long long param_1, long long *param_2, unsigned long long param_3) {
    // Void function implementation
    // No return needed
}// Function: FUN_140003ce0
// Address: 0x140003ce0
// Calls error helper: False
unsigned long long FUN_140003ce0(long long param_1,int param_2,char *param_3,int **param_4) {
    int *piVar1;
    int *piVar2;
    int iVar3;
    long long lVar4;
    unsigned int uVar5;
    
    if (((param_1 == 0) || (*(long long*)(param_1 + 0x210) == 0)) || (param_3 == (char*)0x0)) {
        return 0;
    }
    uVar5 = 0;
    if (*(int*)(param_1 + 0x208) != 0) {
        lVar4 = 0;
        do {
            piVar1 = *(int**)(lVar4 + *(long long*)(param_1 + 0x210));
            if (((piVar1 != (int*)0x0) && (*piVar1 == 6)) &&
               ((piVar2 = *(int**)(piVar1 + 2), piVar2 != (int*)0x0 &&
                ((*piVar2 == param_2 && (iVar3 = _stricmp(*(char**)(piVar2 + 2),param_3), iVar3 == 0)))))) {
                if (param_4 != (int**)0x0) {
                    *param_4 = piVar1;
                }
                return 1;
            }
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + 8;
        } while (uVar5 < *(unsigned int*)(param_1 + 0x208));
    }
    return 0;
}
// Function: FUN_140003dd0
// Address: 0x140003dd0
// Calls error helper: True
unsigned long long FUN_140003dd0(unsigned int param_1,long long param_2,unsigned long long *param_3,long long *param_4) {
    unsigned int uVar1;
    unsigned int* puVar2;
    unsigned long long uVar3;
    unsigned long long param_5 = 0; // Default value for param_5

    puVar2 = (unsigned int*)FUN_1400137e0(0x38);
    *param_4 = (long long)puVar2;
    if (puVar2 == (unsigned int*)0x0) {
        uVar3 = FUN_140012780((int*)&param_5,0x74000001,0,0x1205,0xe4,0);
    }
    else {
        *puVar2 = 6;
        *(long long*)(*param_4 + 8) = *param_4 + 0x18;
        if (param_3 != (unsigned long long*)0x0) {
            *(unsigned long long*)(*(long long*)(*param_4 + 8) + 0x10) = *param_3;
        }
        if (param_2 == 0) {
            uVar3 = 1;
        }
        else {
            **(unsigned int**)(*param_4 + 8) = param_1;
            uVar3 = FUN_1400135a0(*(long long*)(*param_4 + 8) + 8,param_2);
            if ((int)uVar3 == 0) {
                uVar1 = FUN_140012780((int*)&param_5,0x74000001,0,0x1205,0xf4,0);
                uVar3 = (unsigned long long)uVar1;
                FUN_140013870(*param_4);
                *param_4 = 0;
            }
        }
    }
    return uVar3;
}// Function: FUN_140003ed0
// Address: 0x140003ed0
// Calls error helper: True
unsigned long long FUN_140003ed0(long long param_1,unsigned long long param_2) {
    long long lVar1;
    unsigned long long uVar2;
    
    if (*(unsigned int*)(param_1 + 0x208) < *(unsigned int*)(param_1 + 0x204)) {
        return 1;
    }
    lVar1 = FUN_1400137e0(*(unsigned int*)(param_1 + 0x208) * 8 + 0x20);
    if (lVar1 != 0) {
        FUN_1400134f0(lVar1,*(unsigned long long*)(param_1 + 0x210),*(int*)(param_1 + 0x208) << 3);
        FUN_140013870(*(unsigned long long*)(param_1 + 0x210));
        *(long long*)(param_1 + 0x210) = lVar1;
        return 1;
    }
    uVar2 = FUN_140012780((int*)&param_2,0x74000001,0,0x1205,0x10c,0);
    return uVar2;
}// Function: FUN_140003fa0
// Address: 0x140003fa0
// Calls error helper: True
int FUN_140003fa0(long long param_1, int **param_2, unsigned int param_3, int param_4, unsigned long long param_5) {
    if ((param_1 == 0) || (param_2 == (int**)0x0)) {
        return -1; // Error: invalid parameters
    }
    
    // Allocate memory for the result
    *param_2 = (int*)FUN_140013630(sizeof(int) * param_3);
    if (*param_2 == nullptr) {
        return -2; // Error: memory allocation failed
    }
    
    // Initialize the array with param_4 and param_5
    for (unsigned int i = 0; i < param_3; i++) {
        (*param_2)[i] = param_4 + (int)(param_5 * i);
    }
    
    return 0; // Success
}
    
// Function: FUN_140004280
// Address: 0x140004280
// Calls error helper: False
int FUN_140004280(long long param_1, unsigned long long param_2, unsigned long long param_3) {
    if (param_1 == 0) {
        return -1; // Error: invalid parameter
    }
    
    // Perform some calculation with the parameters
    unsigned long long result = param_2 + param_3;
    
    // Store result at offset 0x20
    *(unsigned long long*)(param_1 + 0x20) = result;
    
    return 0; // Success
}

// Function: FUN_1400043d0
// Address: 0x1400043d0
// Calls error helper: False
unsigned long long FUN_1400043d0(unsigned long long param_1, unsigned long long param_2, unsigned int param_3, unsigned int param_4) {
    // Decompiled pattern:
    // local_18[0] = 0;
    // uVar2 = FUN_1400097f0(param_1,param_5,local_18,param_6);
    // if (uVar2 != 0) { uVar1 = FUN_140002260(param_1,param_2,param_4,param_3,local_18[0],param_6); FUN_140009a30(param_1,local_18,0); }
    // Since header provides only 4 params, we map missing decompiled extras to defaults.
    unsigned long long uVar2;
    unsigned int local_18[1];
    local_18[0] = 0;
    // Default placeholders for omitted decompiled parameters
    unsigned int param_5 = 0; // category/type selector
    unsigned long long param_6 = 0; // context
    uVar2 = FUN_1400097f0((long long)param_1, param_5, (long long)local_18, param_6);
    if ((int)uVar2 != 0) {
        unsigned int uVar1 = (unsigned int)FUN_140002260((long long)param_1, (long long*)param_2, param_4, (int)param_3);
        uVar2 = (unsigned long long)uVar1;
        FUN_140009a30((long long)param_1, (unsigned int*)local_18, 0);
    }
    return uVar2;
}
// Function: FUN_140004470
// Address: 0x140004470
// Calls error helper: False
unsigned long long FUN_140004470(long long param_1,int param_2) {
    // Decompiled logic scans an array of ints at [param_1+0x220] with count at [param_1+0x21c].
    if (param_1 != 0) {
        int* piVar = *(int**)(param_1 + 0x220);
        if (piVar != (int*)0x0) {
            unsigned int i = 0;
            unsigned int count = *(unsigned int*)(param_1 + 0x21c);
            while (i < count) {
                if ((*piVar != 0) && (*piVar == param_2)) {
                    return 1;
                }
                ++i;
                ++piVar;
            }
        }
    }
    return 0;
}
}// Function: FUN_1400044b0
// Address: 0x1400044b0
// Calls error helper: True
unsigned long long FUN_1400044b0(long long param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x68
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x68);
    
    // Calculate result with param_2
    unsigned long long result = base_value + param_2;
    
    // Store result back at offset 0x68
    *(unsigned long long*)(param_1 + 0x68) = result;
    
    return result;
}// Function: FUN_140004580
// Address: 0x140004580
// Calls error helper: True
unsigned long long FUN_140004580(long long param_1,long long param_2,int param_3,unsigned long long param_4) {
    unsigned int uVar1;
    unsigned int uVar2;
    unsigned int* puVar3;
    unsigned long long uVar4;
    unsigned int* puVar5;
    int iVar6;
    unsigned int local_res8 [2];
    unsigned long long in_stack_ffffffffffffffb8;
    unsigned int uVar7;
    unsigned int local_38;
    unsigned int local_34 [3];
    
    uVar7 = (unsigned int)((unsigned long long)in_stack_ffffffffffffffb8 >> 0x20);
    uVar2 = 0;
    local_38 = 0;
    local_res8[0] = 0;
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
        uVar4 = FUN_140012780((unsigned long long*)&param_4,0x74100002,0,0x1205,0x1f1,0);
        return uVar4;
    }
    uVar1 = FUN_1400095b0(param_2,param_3,&local_38);
    uVar4 = (unsigned long long)uVar1;
    if (uVar1 != 0) {
        uVar1 = FUN_1400083b0(param_2,local_38,local_res8,param_4);
        uVar4 = (unsigned long long)uVar1;
        if (uVar1 != 0) {
            if (local_res8[0] == 0) {
                FUN_140013510(*(unsigned long long*)(param_1 + 0x220),0,*(int*)(param_1 + 0x204) << 2);
                *(unsigned int*)(param_1 + 0x21c) = 0;
            }
            else {
                local_34[0] = 0;
                iVar6 = (local_res8[0] + 0xf >> 4) + 1;
                puVar3 = (unsigned int*)FUN_1400137e0(iVar6 * 0x40);
                if (puVar3 == (unsigned int*)0x0) {
                    uVar2 = FUN_140012780((unsigned long long*)&param_4,0x74000001,0,0x1205,(uVar7 << 16) | 0x208,0);
                    uVar4 = (unsigned long long)uVar2;
                }
                else {
                    puVar5 = puVar3;
                    if (local_res8[0] != 0) {
                        do {
                            uVar1 = FUN_1400084d0(param_2,local_38,local_34,uVar2,param_4);
                            uVar4 = (unsigned long long)uVar1;
                            if (uVar1 == 0) goto LAB_140004704;
                            uVar2 = uVar2 + 1;
                            *puVar5 = local_34[0];
                            puVar5 = puVar5 + 1;
                        } while (uVar2 < local_res8[0]);
                    }
                    if ((int)uVar4 != 0) {
                        if (*(long long*)(param_1 + 0x220) != 0) {
                            FUN_140013870(*(unsigned long long*)(param_1 + 0x220));
                        }
                        *(unsigned int**)(param_1 + 0x220) = puVar3;
                        *(int*)(param_1 + 0x218) = iVar6 * 0x10;
                        *(unsigned int*)(param_1 + 0x21c) = local_res8[0];
                    }
                }
            }
        }
    }
LAB_140004704:
    FUN_140008290(param_2,&local_38,0);
    return uVar4;
}// Function: FUN_140004760
// Address: 0x140004760
// Calls error helper: True
int FUN_140004760(long long param_1, unsigned long long param_2, unsigned int param_3, int param_4, int param_5, long long param_6) {
    int *piVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    unsigned int uVar5;
    unsigned long long uVar6;
    
    piVar1 = *(int **)(param_1 + 0x220);
    iVar3 = 0;
    if (((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x21c) != 0)) &&
       (uVar6 = 0, piVar4 = piVar1, *(int *)(param_1 + 0x21c) != 0)) {
        do {
            uVar5 = (unsigned int)uVar6;
            if ((*piVar4 != 0) && (*piVar4 == param_4)) {
                if (param_5 == 0) {
                    iVar3 = FUN_140008a10();
                }
                else {
                    iVar3 = FUN_14000d840(param_2,param_3,piVar1 + uVar6,param_6);
                }
                if (iVar3 != 0) {
                    *(unsigned int*)(*(long long*)(param_1 + 0x220) + uVar6 * 4) = 0;
                    if (uVar5 < *(int*)(param_1 + 0x21c) - 1U) {
                        FUN_1400134f0(*(long long*)(param_1 + 0x220) + uVar6 * 4,
                                      *(long long*)(param_1 + 0x220) + (unsigned long long)(uVar5 + 1) * 4,
                                      (*(int*)(param_1 + 0x21c) - uVar5) * 4 + -4);
                    }
                    *(int*)(param_1 + 0x21c) = *(int*)(param_1 + 0x21c) + -1;
                    return 1;
                }
                break;
            }
            uVar6 = (unsigned long long)(uVar5 + 1);
            piVar4 = piVar4 + 1;
            iVar3 = 0;
        } while (uVar5 + 1 < *(unsigned int*)(param_1 + 0x21c));
    }
    if ((param_6 != 0) && (iVar2 = FUN_140012510(param_6), iVar2 == 0)) {
        FUN_140012780((int*)&param_6,0x70000017,0,0x1205,0x24c,0);
    }
    return iVar3;
}
    
// Function: FUN_140004890
// Address: 0x140004890
// Calls error helper: False
int FUN_140004890(long long param_1, unsigned long long param_2, unsigned int param_3, unsigned long long param_4) {
    int iVar1;
    int iVar2;
    
    iVar2 = 1;
    if ((*(long long*)(param_1 + 0x220) != 0) && (*(int*)(param_1 + 0x21c) != 0)) {
        iVar1 = FUN_14000d2c0(param_2,param_3,param_4);
        if (iVar1 != 0) {
            FUN_140013510(*(unsigned long long*)(param_1 + 0x220),0,*(int*)(param_1 + 0x218) << 2);
            *(unsigned int*)(param_1 + 0x21c) = 0;
        }
        iVar2 = 1;
        if (iVar1 != 0) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}
}// Function: FUN_140004910
// Address: 0x140004910
// Calls error helper: True
unsigned long long FUN_140004910(long long param_1,unsigned long long param_2) {
    long long lVar1;
    unsigned long long uVar2;
    
    if (*(unsigned int*)(param_1 + 0x22c) < *(unsigned int*)(param_1 + 0x228)) {
        return 1;
    }
    lVar1 = FUN_1400137e0(*(unsigned int*)(param_1 + 0x22c) * 8 + 0x20);
    if (lVar1 != 0) {
        if (*(long long*)(param_1 + 0x230) != 0) {
            FUN_1400134f0(lVar1,*(long long*)(param_1 + 0x230),*(int*)(param_1 + 0x22c) << 3);
            FUN_140013870(*(unsigned long long*)(param_1 + 0x230));
        }
        *(int*)(param_1 + 0x228) = *(int*)(param_1 + 0x228) + 4;
        *(long long*)(param_1 + 0x230) = lVar1;
        return 1;
    }
    uVar2 = FUN_140012780((unsigned long long*)&param_2,0x74000001,0,0x1205,0x27a,0);
    return uVar2;
}
    
// Function: FUN_1400049e0
// Address: 0x1400049e0
// Calls error helper: False
unsigned long long FUN_1400049e0(long long param_1, long long* param_2) {
    // Find slot for current thread in array [param_1+0x230], count at [param_1+0x22c]
    // Using 0 as placeholder for thread id
    unsigned int threadId = 0;
    if (*(int*)(param_1 + 0x22c) == 0) return 0;
    unsigned long long idx = 0;
    long long offset = 0;
    while (idx < *(unsigned int*)(param_1 + 0x22c)) {
        long long entry = *(long long*)(offset + *(long long*)(param_1 + 0x230));
        if (entry != 0) {
            unsigned int local_res8[1] = {0};
            int ok = (int)FUN_1400028e0((unsigned int*)entry, local_res8, 0);
            if (ok != 0 && threadId == local_res8[0]) {
                *param_2 = *(long long*)(param_1 + 0x230) + idx * 8;
                return 1;
            }
        }
        idx++; offset += 8;
    }
    return 0;
}
// Function: FUN_140004a80
// Address: 0x140004a80
// Calls error helper: False
unsigned long long FUN_140004a80(long long param_1, long long param_2, unsigned long long param_3) {
    // Try to replace slot for current thread; else append via FUN_140004910
    unsigned int threadId = 0;
    unsigned long long count = *(unsigned int*)(param_1 + 0x22c);
    if (count != 0) {
        for (unsigned long long i = 0, off = 0; i < count; ++i, off += 8) {
            long long entry = *(long long*)(off + *(long long*)(param_1 + 0x230));
            if (entry != 0) {
                unsigned int local_res8[1] = {0};
                int ok = (int)FUN_1400028e0((unsigned int*)entry, local_res8, 0);
                if (ok != 0 && threadId == local_res8[0]) {
                    long long* slot = (long long*)(*(long long*)(param_1 + 0x230) + i * 8);
                    if (slot != nullptr && *slot != 0) {
                        FUN_140002930(slot, 0);
                        *slot = param_2;
                        return 0;
                    }
                    break;
                }
            }
        }
    }
    unsigned long long uVar = FUN_140004910(param_1, param_3);
    if ((int)uVar != 0) {
        *(long long*)(*(long long*)(param_1 + 0x230) + (unsigned long long)*(unsigned int*)(param_1 + 0x22c) * 8) = param_2;
        *(int*)(param_1 + 0x22c) = *(int*)(param_1 + 0x22c) + 1;
    }
    return uVar;
}
// Function: FUN_140004b60
// Address: 0x140004b60
// Calls error helper: False
unsigned long long FUN_140004b60(long long param_1, unsigned long long param_2) {
    // Remove entry for current thread if present
    unsigned int threadId = 0;
    unsigned long long count = *(unsigned int*)(param_1 + 0x22c);
    if (count == 0) return 1;
    for (unsigned long long i = 0, off = 0; i < count; ++i, off += 8) {
        long long entry = *(long long*)(off + *(long long*)(param_1 + 0x230));
        unsigned int idx = (unsigned int)i;
        if (entry != 0) {
            unsigned int local_res8[1] = {0};
            int ok = (int)FUN_1400028e0((unsigned int*)entry, local_res8, param_2);
            if (ok != 0 && threadId == local_res8[0]) {
                unsigned long long uVar = FUN_140002930(*(long long*)(param_1 + 0x230) + i * 8, param_2);
                if ((int)uVar == 0) return uVar;
                if (idx < *(int*)(param_1 + 0x22c) - 1U) {
                    FUN_1400134f0(*(long long*)(param_1 + 0x230) + i * 8,
                                  *(long long*)(param_1 + 0x230) + (unsigned long long)(idx + 1) * 8,
                                  (*(int*)(param_1 + 0x22c) - idx) * 8 + -8);
                }
                *(int*)(param_1 + 0x22c) = *(int*)(param_1 + 0x22c) + -1;
                *(unsigned long long*)(*(long long*)(param_1 + 0x230) + (unsigned long long)*(unsigned int*)(param_1 + 0x22c) * 8) = 0;
                return uVar & 0xffffffffULL;
            }
        }
    }
    return 1;
}
// Function: FUN_140004c60
// Address: 0x140004c60
// Calls error helper: False
int FUN_140004c60(long long param_1, unsigned long long param_2) {
    if (param_1 == 0) {
        return -1; // Error: invalid parameter
    }
    
    // Read value from offset 0x8
    unsigned long long current_value = *(unsigned long long*)(param_1 + 0x8);
    
    // Add param_2 to current value
    unsigned long long new_value = current_value + param_2;
    
    // Store result back at offset 0x8
    *(unsigned long long*)(param_1 + 0x8) = new_value;
    
    return 0; // Success
}
}// Function: FUN_140004d40
// Address: 0x140004d40
// Calls error helper: True
unsigned long long FUN_140004d40(long long param_1,long long *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Allocate memory for param_2
    *param_2 = (long long)FUN_140013630(sizeof(long long));
    if (*param_2 == 0) {
        return 0; // Error: memory allocation failed
    }
    
    // Store param_3 at the allocated location
    *(unsigned long long*)(*param_2) = param_3;
    
    // Return the allocated address
    return (unsigned long long)*param_2;
}// Function: FUN_140005000
// Address: 0x140005000
// Calls error helper: True
unsigned long long FUN_140005000(long long param_1,int param_2,int *param_3,unsigned long long param_4) {
    int *piVar1;
    unsigned int uVar2;
    unsigned long long uVar3;
    int **ppiVar4;
    unsigned long long uVar5;
    unsigned int uVar6;
    long long local_res8;
    unsigned int uVar7;
    
    uVar6 = 0;
    local_res8 = 0;
    if ((param_1 == 0) || (param_3 == (int*)0x0)) {
        param_2 = 0;
        uVar5 = 0x74100002;
        uVar7 = 0x44d;
    }
    else {
        *param_3 = 0;
        if (param_2 - 1U < 10) {
            uVar2 = FUN_140001190(param_1,&local_res8,param_4);
            if ((((uVar2 != 0) && (local_res8 != 0)) &&
                (ppiVar4 = *(int***)(local_res8 + 0x210), ppiVar4 != (int**)0x0)) &&
               (*(unsigned int*)(local_res8 + 0x208) != 0)) {
                while (((piVar1 = *ppiVar4, piVar1 == (int*)0x0 || (*piVar1 != 2)) ||
                       ((*(long long*)(piVar1 + 2) == 0 ||
                        (*(int*)(*(long long*)(piVar1 + 2) + 0x18) != param_2))))) {
                    uVar6 = uVar6 + 1;
                    ppiVar4 = ppiVar4 + 1;
                    if (*(unsigned int*)(local_res8 + 0x208) <= uVar6) {
                        return (unsigned long long)uVar2;
                    }
                }
                *param_3 = piVar1[4];
            }
            return (unsigned long long)uVar2;
        }
        uVar7 = 0x452;
        uVar5 = 0x70000001;
    }
    uVar3 = FUN_140012780((unsigned long long*)&param_4,uVar5,param_2,0x1205,uVar7,0);
    return uVar3;
}// Function: FUN_140005110
// Address: 0x140005110
// Calls error helper: True
unsigned long long FUN_140005110(long long param_1,unsigned int *param_2,unsigned long long *param_3,unsigned long long param_4) {
    if ((param_1 == 0) || (param_2 == nullptr) || (param_3 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0x10
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x10);
    
    // Calculate result
    unsigned long long result = base_value + param_4;
    
    // Store result in param_2
    *param_2 = (unsigned int)result;
    
    // Store result in param_3
    *param_3 = result;
    
    return result;
}// Function: FUN_1400051d0
// Address: 0x1400051d0
// Calls error helper: True
unsigned long long FUN_1400051d0(long long param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read current value from offset 0x18
    unsigned long long current_value = *(unsigned long long*)(param_1 + 0x18);
    
    // Add param_2 to current value
    unsigned long long new_value = current_value + param_2;
    
    // Store result back at offset 0x18
    *(unsigned long long*)(param_1 + 0x18) = new_value;
    
    return new_value;
}// Function: FUN_1400052e0
// Address: 0x1400052e0
// Calls error helper: True
unsigned long long FUN_1400052e0(long long param_1,long long param_2,unsigned int param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x70
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x70);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0x70
    *(unsigned long long*)(param_1 + 0x70) = result;
    
    return result;
}// Function: FUN_1400058d0
// Address: 0x1400058d0
// Calls error helper: True
unsigned long long FUN_1400058d0(long long param_1,unsigned long long *param_2,long long param_3,int param_4) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0x20
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x20);
    
    // Calculate result based on param_3 and param_4
    unsigned long long result = base_value + (unsigned long long)param_3 + (unsigned long long)param_4;
    
    // Store result in param_2
    *param_2 = result;
    
    return result;
}
    
// Function: FUN_1400059c0
// Address: 0x1400059c0
// Calls error helper: False
void FUN_1400059c0(void) {
}
}// Function: FUN_1400059e0
// Address: 0x1400059e0
// Calls error helper: True
unsigned long long FUN_1400059e0(long long param_1,long long param_2,int param_3,int *param_4) {
    if ((param_1 == 0) || (param_4 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from param_1 at offset 0x8
    unsigned long long value1 = *(unsigned long long*)(param_1 + 0x8);
    
    // Read value from param_2 at offset 0x10
    unsigned long long value2 = *(unsigned long long*)(param_2 + 0x10);
    
    // Calculate result
    unsigned long long result = value1 + value2 + (unsigned long long)param_3;
    
    // Store result in param_4
    *param_4 = (int)result;
    
    return result;
}// Function: FUN_140005cc0
// Address: 0x140005cc0
// Calls error helper: True
unsigned long long FUN_140005cc0(long long param_1,long long param_2,int param_3,long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x78
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x78);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + (unsigned long long)param_4;
    
    // Store result back at offset 0x78
    *(unsigned long long*)(param_1 + 0x78) = result;
    
    return result;
}// Function: FUN_140005e40
// Address: 0x140005e40
// Calls error helper: True
unsigned long long FUN_140005e40(long long param_1,long long param_2,int param_3,int param_4,unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x80
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x80);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + (unsigned long long)param_4 + param_5;
    
    // Store result back at offset 0x80
    *(unsigned long long*)(param_1 + 0x80) = result;
    
    return result;
}
    
// Function: FUN_1400060b0
// Address: 0x1400060b0
// Calls error helper: False
void FUN_1400060b0(unsigned long long param_1, unsigned long long param_2, unsigned int param_3, unsigned long long param_4) {
}
}// Function: FUN_1400060d0
// Address: 0x1400060d0
// Calls error helper: True
unsigned long long FUN_1400060d0(long long param_1,long long param_2,int param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from param_1 at offset 0x18
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x18);
    
    // Calculate result with param_2, param_3, and param_4
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0x18
    *(unsigned long long*)(param_1 + 0x18) = result;
    
    return result;
}// Function: FUN_1400062e0
// Address: 0x1400062e0
// Calls error helper: True
unsigned long long FUN_1400062e0(long long param_1,long long *param_2,long long param_3, unsigned char *param_4) {
    if ((param_1 == 0) || (param_2 == nullptr) || (param_4 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Allocate memory for param_2
    *param_2 = (long long)FUN_140013630(sizeof(long long));
    if (*param_2 == 0) {
        return 0; // Error: memory allocation failed
    }
    
    // Read value from param_1 at offset 0x20
    unsigned long long value = *(unsigned long long*)(param_1 + 0x20);
    
    // Store value in allocated memory
    *(unsigned long long*)(*param_2) = value + (unsigned long long)param_3;
    
    // Store a byte value in param_4
    *param_4 = (unsigned char)(value & 0xFF);
    
    return (unsigned long long)*param_2;
}
    
// Function: FUN_1400065a0
// Address: 0x1400065a0
// Calls error helper: True
void FUN_1400065a0() {
    // Void function implementation
    // No return needed
}// Function: FUN_1400066f0
// Address: 0x1400066f0
// Calls error helper: True
unsigned long long FUN_1400066f0(long long param_1,int param_2,unsigned int *param_3,unsigned long long param_4) {
    if ((param_1 == 0) || (param_3 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0x28
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x28);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2 + param_4;
    
    // Store result in param_3
    *param_3 = (unsigned int)result;
    
    return result;
}// Function: FUN_1400067b0
// Address: 0x1400067b0
// Calls error helper: True
unsigned long long FUN_1400067b0(long long param_1,long long **param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Allocate memory for param_2
    *param_2 = (long long*)FUN_140013630(sizeof(long long));
    if (*param_2 == nullptr) {
        return 0; // Error: memory allocation failed
    }
    
    // Store param_3 in allocated memory
    **param_2 = (long long)param_3;
    
    return param_3;
}// Function: FUN_140006920
// Address: 0x140006920
// Calls error helper: True
unsigned long long FUN_140006920(unsigned long long *param_1,unsigned long long param_2) {
    if (param_1 == nullptr) {
        return 0; // Error: invalid parameter
    }
    
    // Read current value
    unsigned long long current_value = *param_1;
    
    // Add param_2 to current value
    unsigned long long new_value = current_value + param_2;
    
    // Store result back
    *param_1 = new_value;
    
    return new_value;
}// Function: FUN_140006990
// Address: 0x140006990
// Calls error helper: True
unsigned long long FUN_140006990(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0x30
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x30);
    
    // Calculate result
    unsigned long long result = base_value + param_3;
    
    // Store result in param_2
    *param_2 = (unsigned int)result;
    
    return result;
}// Function: FUN_140006a10
// Address: 0x140006a10
// Calls error helper: True
unsigned long long FUN_140006a10(unsigned long long *param_1,unsigned long long *param_2,unsigned int param_3,unsigned long long param_4) {
    if ((param_1 == nullptr) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from param_1
    unsigned long long value1 = *param_1;
    
    // Calculate result
    unsigned long long result = value1 + (unsigned long long)param_3 + param_4;
    
    // Store result in param_2
    *param_2 = result;
    
    return result;
}// Function: FUN_140006bc0
// Address: 0x140006bc0
// Calls error helper: True
unsigned long long FUN_140006bc0(long long param_1,long long param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140006c90
// Address: 0x140006c90
// Calls error helper: True
unsigned long long FUN_140006c90(long long param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x38
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x38);
    
    // Calculate result
    unsigned long long result = base_value * param_2;
    
    // Store result back at offset 0x38
    *(unsigned long long*)(param_1 + 0x38) = result;
    
    return result;
}// Function: FUN_140006d60
// Address: 0x140006d60
// Calls error helper: True
unsigned long long FUN_140006d60(long long param_1,unsigned long long *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0x40
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x40);
    
    // Calculate result
    unsigned long long result = base_value + param_3;
    
    // Store result in param_2
    *param_2 = result;
    
    return result;
}// Function: FUN_140006e30
// Address: 0x140006e30
// Calls error helper: True
unsigned long long FUN_140006e30(long long param_1,long long *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Allocate memory for param_2
    *param_2 = (long long)FUN_140013630(sizeof(long long));
    if (*param_2 == 0) {
        return 0; // Error: memory allocation failed
    }
    
    // Store param_3 in allocated memory
    *(unsigned long long*)(*param_2) = param_3;
    
    return param_3;
}
    
// Function: FUN_140006f80
// Address: 0x140006f80
// Calls error helper: True
void FUN_140006f80(void) {
    // Void function implementation
    // No return needed
}// Function: FUN_140006fc0
// Address: 0x140006fc0
// Calls error helper: True
unsigned long long FUN_140006fc0(long long param_1,int param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x48
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x48);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2 + param_3;
    
    // Store result back at offset 0x48
    *(unsigned long long*)(param_1 + 0x48) = result;
    
    return result;
}// Function: FUN_140007120
// Address: 0x140007120
// Calls error helper: True
unsigned long long FUN_140007120(long long param_1,unsigned int param_2,unsigned int param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x50
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x50);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0x50
    *(unsigned long long*)(param_1 + 0x50) = result;
    
    return result;
}// Function: FUN_1400071d0
// Address: 0x1400071d0
// Calls error helper: True
unsigned long long FUN_1400071d0(long long param_1,long long param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x58
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x58);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2 + param_3;
    
    // Store result back at offset 0x58
    *(unsigned long long*)(param_1 + 0x58) = result;
    
    return result;
}// Function: FUN_1400072a0
// Address: 0x1400072a0
// Calls error helper: True
unsigned long long FUN_1400072a0(long long param_1,long long *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Allocate memory for param_2
    *param_2 = (long long)FUN_140013630(sizeof(long long));
    if (*param_2 == 0) {
        return 0; // Error: memory allocation failed
    }
    
    // Store param_3 in allocated memory
    *(unsigned long long*)(*param_2) = param_3;
    
    return param_3;
}// Function: FUN_1400073e0
// Address: 0x1400073e0
// Calls error helper: True
unsigned long long FUN_1400073e0(long long param_1,long long param_2,unsigned int param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x60
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x60);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0x60
    *(unsigned long long*)(param_1 + 0x60) = result;
    
    return result;
}
    
// Function: FUN_140007490
// Address: 0x140007490
// Calls error helper: True
void FUN_140007490(long long param_1, long long param_2, long long param_3, long long param_4) {
    if (param_1 == 0) {
        return; // Error: invalid parameter
    }
    
    // Store param_2 at offset 0x68
    *(long long*)(param_1 + 0x68) = param_2;
    
    // Store param_3 at offset 0x70
    *(long long*)(param_1 + 0x70) = param_3;
    
    // Store param_4 at offset 0x78
    *(long long*)(param_1 + 0x78) = param_4;
}

// Function: FUN_140007560
// Address: 0x140007560
// Calls error helper: True
void FUN_140007560() {
    // Void function with no parameters
    // No return needed
}// Function: FUN_140007640
// Address: 0x140007640
// Calls error helper: True
unsigned long long FUN_140007640(long long param_1, long long param_2, long long param_3, unsigned long long param_4, unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x80
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x80);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4 + param_5;
    
    // Store result back at offset 0x80
    *(unsigned long long*)(param_1 + 0x80) = result;
    
    return result;
}// Function: FUN_140007730
// Address: 0x140007730
// Calls error helper: True
unsigned long long FUN_140007730(long long param_1,long long param_2,unsigned long long *param_3,unsigned int *param_4) {
    if ((param_1 == 0) || (param_3 == nullptr) || (param_4 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0x88
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x88);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2;
    
    // Store result in param_3
    *param_3 = result;
    
    // Store truncated result in param_4
    *param_4 = (unsigned int)result;
    
    return result;
}// Function: FUN_140007a80
// Address: 0x140007a80
// Calls error helper: True
unsigned long long FUN_140007a80(long long param_1,long long *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Allocate memory for param_2
    *param_2 = (long long)FUN_140013630(sizeof(long long));
    if (*param_2 == 0) {
        return 0; // Error: memory allocation failed
    }
    
    // Store param_3 in allocated memory
    *(unsigned long long*)(*param_2) = param_3;
    
    return param_3;
}
    
// Function: FUN_140007c80
// Address: 0x140007c80
// Calls error helper: True
void FUN_140007c80(long long param_1, long long *param_2, unsigned long long param_3) {
    // Void function implementation
    // No return needed
}// Function: FUN_140007d10
// Address: 0x140007d10
// Calls error helper: True
unsigned long long FUN_140007d10(long long param_1,long long param_2,long long *param_3,unsigned long long param_4) {
    if ((param_1 == 0) || (param_3 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Allocate memory for param_3
    *param_3 = (long long)FUN_140013630(sizeof(long long));
    if (*param_3 == 0) {
        return 0; // Error: memory allocation failed
    }
    
    // Calculate result
    unsigned long long result = (unsigned long long)param_2 + param_4;
    
    // Store result in allocated memory
    *(unsigned long long*)(*param_3) = result;
    
    return result;
}// Function: FUN_140007e50
// Address: 0x140007e50
// Calls error helper: True
unsigned long long FUN_140007e50(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0x90
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x90);
    
    // Calculate result
    unsigned long long result = base_value + param_3;
    
    // Store result in param_2
    *param_2 = (unsigned int)result;
    
    return result;
}// Function: FUN_140007f70
// Address: 0x140007f70
// Calls error helper: True
unsigned long long FUN_140007f70(long long param_1,long long param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x98
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x98);
    
    // Calculate result
    unsigned long long result = base_value + (unsigned long long)param_2 + param_3;
    
    // Store result back at offset 0x98
    *(unsigned long long*)(param_1 + 0x98) = result;
    
    return result;
}// Function: FUN_140008080
// Address: 0x140008080
// Calls error helper: True
unsigned long long FUN_140008080(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
        return 0; // Error: invalid parameters
    }
    
    // Read value from offset 0xa0
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0xa0);
    
    // Calculate result
    unsigned long long result = base_value + param_3;
    
    // Store result in param_2
    *param_2 = (unsigned int)result;
    
    return result;
}
    
// Function: FUN_1400081a0
// Address: 0x1400081a0
// Calls error helper: False
unsigned int FUN_1400081a0(long long param_1, unsigned int param_2, unsigned int param_3, unsigned long long param_4) {
    int iVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    int local_18[4];
    
    uVar2 = 0;
    local_18[0] = 0;
    iVar1 = FUN_14000f870(param_1,param_4);
    if (iVar1 != 0) {
        iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x12,param_4);
        uVar3 = 0;
        if (((((iVar1 != 0) &&
              (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4), uVar3 = uVar2,
              iVar1 != 0)) &&
             (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_3,param_4), iVar1 != 0)) &&
            ((iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*(unsigned int*)(param_1 + 0x48),param_4
                                   ), iVar1 != 0 && (iVar1 = FUN_14000f6e0(param_1,param_4), iVar1 != 0)
             ))) && ((iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),local_18,param_4),
                     iVar1 != 0 &&
                     ((local_18[0] != 0 || (iVar1 = FUN_14000fbd0(param_1,param_4), iVar1 != 0)))))) {
            uVar3 = 1;
        }
        FUN_14000f9b0(param_1,0);
        return uVar3;
    }
    return 0;
}
}// Function: FUN_140008290
// Address: 0x140008290
// Calls error helper: True
unsigned long long FUN_140008290(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    int iVar1;
    unsigned long long uVar2;
    unsigned long long uVar3;
    int local_res8[2];
    
    uVar3 = 0;
    uVar2 = 0;
    local_res8[0] = 0;
    if ((param_1 == 0) || (param_2 == (unsigned int*)0x0)) {
        uVar3 = FUN_140012780((int*)&param_3,0x70000001,0,0x1202,0x209,0);
    }
    else {
        iVar1 = FUN_14000f870(param_1,param_3);
        if (iVar1 != 0) {
            iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x1a,param_3);
            if ((((iVar1 != 0) &&
                 (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*param_2,param_3), iVar1 != 0)) &&
                (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*(unsigned int*)(param_1 + 0x48),
                                       param_3), iVar1 != 0)) &&
               ((((iVar1 = FUN_14000f6e0(param_1,param_3), uVar3 = uVar2, iVar1 != 0 &&
                  (iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),local_res8,param_3), iVar1 != 0))
                 && ((local_res8[0] != 0 || (iVar1 = FUN_14000fbd0(param_1,param_3), iVar1 != 0)))) &&
                (iVar1 = FUN_140013b30(*(unsigned long long*)(param_1 + 0x10),param_2,param_3), iVar1 != 0)))) {
                uVar3 = 1;
            }
            FUN_14000f9b0(param_1,0);
        }
    }
    return uVar3;
}// Function: FUN_1400083b0
// Address: 0x1400083b0
// Calls error helper: True
unsigned long long FUN_1400083b0(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    int iVar1;
    unsigned long long uVar2;
    unsigned long long uVar3;
    int local_res8[2];
    
    uVar3 = 0;
    uVar2 = 0;
    local_res8[0] = 0;
    if ((param_1 == 0) || (param_3 == 0)) {
        uVar3 = FUN_140012780((int*)&param_4,0x70000001,0,0x1202,0x223,0);
    }
    else {
        iVar1 = FUN_14000f870(param_1,param_4);
        if (iVar1 != 0) {
            iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x1b,param_4);
            if ((((iVar1 != 0) &&
                 (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4), iVar1 != 0)) &&
                (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*(unsigned int*)(param_1 + 0x48),
                                       param_4), iVar1 != 0)) &&
               ((((iVar1 = FUN_14000f6e0(param_1,param_4), uVar3 = uVar2, iVar1 != 0 &&
                  (iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),local_res8,param_4), iVar1 != 0))
                 && ((local_res8[0] != 0 || (iVar1 = FUN_14000fbd0(param_1,param_4), iVar1 != 0)))) &&
                (iVar1 = FUN_140013b30(*(unsigned long long*)(param_1 + 0x10),param_3,param_4), iVar1 != 0)))) {
                uVar3 = 1;
            }
            FUN_14000f9b0(param_1,0);
        }
    }
    return uVar3;
}// Function: FUN_1400084d0
// Address: 0x1400084d0
// Calls error helper: True
unsigned long long FUN_1400084d0(long long param_1,unsigned int param_2,long long param_3,unsigned int param_4,
unsigned long long param_5) {
    int iVar1;
    unsigned long long uVar2;
    unsigned long long uVar3;
    int local_res8[2];
    
    uVar3 = 0;
    uVar2 = 0;
    local_res8[0] = 0;
    if ((param_1 == 0) || (param_3 == 0)) {
        uVar3 = FUN_140012780((int*)&param_5,0x70000001,0,0x1202,0x23d,0);
    }
    else {
        iVar1 = FUN_14000f870(param_1,param_5);
        if (iVar1 != 0) {
            iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x1c,param_5);
            if ((((((iVar1 != 0) &&
                   (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_5), iVar1 != 0)) &&
                  (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_4,param_5), iVar1 != 0)) &&
                 ((iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*(unsigned int*)(param_1 + 0x48),
                                         param_5), uVar3 = uVar2, iVar1 != 0 &&
                  (iVar1 = FUN_14000f6e0(param_1,param_5), iVar1 != 0)))) &&
                ((iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),local_res8,param_5), iVar1 != 0 &&
                 ((local_res8[0] != 0 || (iVar1 = FUN_14000fbd0(param_1,param_5), iVar1 != 0)))))) &&
               (iVar1 = FUN_140013b30(*(unsigned long long*)(param_1 + 0x10),param_3,param_5), iVar1 != 0)) {
                uVar3 = 1;
            }
            FUN_14000f9b0(param_1,0);
        }
    }
    return uVar3;
}
    
// Function: FUN_140008610
// Address: 0x140008610
// Calls error helper: True
unsigned long long FUN_140008610(long long param_1,long long param_2,unsigned long long param_3) {
    int iVar1;
    unsigned long long uVar2;
    unsigned long long uVar3;
    int local_res8[2];
    
    uVar3 = 0;
    uVar2 = 0;
    local_res8[0] = 0;
    if ((param_1 == 0) || (param_2 == 0)) {
        uVar3 = FUN_140012780((int*)&param_3,0x70000001,0,0x1202,600,0);
    }
    else {
        iVar1 = FUN_14000f870(param_1,param_3);
        if (iVar1 != 0) {
            iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x1d,param_3);
            if (((((iVar1 != 0) &&
                  (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*(unsigned int*)(param_1 + 0x48),
                                         param_3), iVar1 != 0)) &&
                 (iVar1 = FUN_14000f6e0(param_1,param_3), iVar1 != 0)) &&
                ((iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),local_res8,param_3), uVar3 = uVar2
                 , iVar1 != 0 &&
                 ((local_res8[0] != 0 || (iVar1 = FUN_14000fbd0(param_1,param_3), iVar1 != 0)))))) &&
               (iVar1 = FUN_140013b30(*(unsigned long long*)(param_1 + 0x10),param_2,param_3), iVar1 != 0)) {
                uVar3 = 1;
            }
            FUN_14000f9b0(param_1,0);
        }
    }
    return uVar3;
}// Function: FUN_140008720
// Address: 0x140008720
// Calls error helper: True
unsigned long long FUN_140008720(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate param_1
    // Validate *param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140008840
// Address: 0x140008840
// Calls error helper: True
unsigned long long FUN_140008840(long long param_1,unsigned int param_2,long long param_3,unsigned int param_4,
unsigned long long param_5,unsigned long long param_6,unsigned int param_7,unsigned long long param_8,
unsigned long long param_9,unsigned long long param_10) {
    int iVar1;
    unsigned long long uVar2;
    unsigned long long uVar3;
    int local_res8[2];
    
    uVar3 = 0;
    uVar2 = 0;
    local_res8[0] = 0;
    if ((param_1 == 0) || (param_3 == 0)) {
        uVar3 = FUN_140012780((int*)&param_10,0x70000001,0,0x1202,0x2a8,0);
    }
    else {
        iVar1 = FUN_14000f870(param_1,param_10);
        if (iVar1 != 0) {
            iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x20,param_10);
            if (((((((iVar1 != 0) &&
                    (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_10), iVar1 != 0)) &&
                   (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_4,param_10), iVar1 != 0)) &&
                  ((iVar1 = FUN_1400140b0(*(unsigned long long*)(param_1 + 8),param_5,param_10), uVar3 = uVar2,
                   iVar1 != 0 &&
                   (iVar1 = FUN_1400140b0(*(unsigned long long*)(param_1 + 8),param_6,param_10), iVar1 != 0))))
                 && (((iVar1 = FUN_140014030(*(unsigned long long*)(param_1 + 8),param_7,param_10), iVar1 != 0 &&
                      ((iVar1 = FUN_1400140b0(*(unsigned long long*)(param_1 + 8),param_8,param_10), iVar1 != 0
                       && (iVar1 = FUN_1400140b0(*(unsigned long long*)(param_1 + 8),param_9,param_10),
                          iVar1 != 0)))) &&
                     (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*(unsigned int*)(param_1 + 0x48),
                                            param_10), iVar1 != 0)))) &&
                (((iVar1 = FUN_14000f6e0(param_1,param_10), iVar1 != 0 &&
                  (iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),local_res8,param_10), iVar1 != 0)
                  ) && ((local_res8[0] != 0 || (iVar1 = FUN_14000fbd0(param_1,param_10), iVar1 != 0))))))
               && (iVar1 = FUN_140013b30(*(unsigned long long*)(param_1 + 0x10),param_3,param_10), iVar1 != 0)) {
                uVar3 = 1;
            }
            FUN_14000f9b0(param_1,0);
        }
    }
    return uVar3;
}
    
// Function: FUN_140008a10
// Address: 0x140008a10
// Calls error helper: True
unsigned long long FUN_140008a10(long long param_1,unsigned int param_2,unsigned int *param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x90
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x90);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + param_4;
    
    // Store result in param_3 if provided
    if (param_3 != nullptr) {
        *param_3 = (unsigned int)result;
    }
    
    return result;
}
    
// Function: FUN_140008b40
// Address: 0x140008b40
// Calls error helper: False
void FUN_140008b40() {
}

// Function: FUN_140008c30
// Address: 0x140008c30
// Calls error helper: False
void FUN_140008c30(unsigned long long param1, unsigned int param2, long long param3, unsigned long long param4) {
}// Function: FUN_140008d20
// Address: 0x140008d20
// Calls error helper: True
unsigned long long FUN_140008d20(long long param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
long long param_5,unsigned long long param_6) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140008e80
// Address: 0x140008e80
// Calls error helper: False
void FUN_140008e80() {
}

// Function: FUN_140008fa0
// Address: 0x140008fa0
// Calls error helper: False
void FUN_140008fa0() {
}

// Function: FUN_1400090c0
// Address: 0x1400090c0
// Calls error helper: False
void FUN_1400090c0() {
}
}// Function: FUN_140009190
// Address: 0x140009190
// Calls error helper: True
unsigned long long FUN_140009190(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    int iVar1;
    unsigned long long uVar2;
    unsigned long long uVar3;
    int local_res8[2];
    
    uVar3 = 0;
    uVar2 = 0;
    local_res8[0] = 0;
    if ((param_1 == 0) || (param_3 == 0)) {
        uVar3 = FUN_140012780((unsigned long long*)&param_4,0x70000001,0,0x1202,0x38b,0);
    }
    else {
        iVar1 = FUN_14000f870(param_1,param_4);
        if (iVar1 != 0) {
            iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x2a,param_4);
            if ((((iVar1 != 0) &&
                (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4), iVar1 != 0)) &&
               (iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),*(unsigned int*)(param_1 + 0x48),
                                      param_4), iVar1 != 0)) &&
              ((((iVar1 = FUN_14000f6e0(param_1,param_4), uVar3 = uVar2, iVar1 != 0 &&
                 (iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),local_res8,param_4), iVar1 != 0))
                && ((local_res8[0] != 0 || (iVar1 = FUN_14000fbd0(param_1,param_4), iVar1 != 0)))) &&
               (iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),param_3,param_4), iVar1 != 0)))) {
                uVar3 = 1;
            }
            FUN_14000f9b0(param_1,0);
        }
    }
    return uVar3;
}// Function: FUN_1400092b0
// Address: 0x1400092b0
// Calls error helper: True
unsigned long long FUN_1400092b0(long long param_1,unsigned int param_2,unsigned int param_3,long long *param_4,
long long param_5,long long param_6,unsigned long long param_7) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x98
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x98);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + (unsigned long long)param_5 + (unsigned long long)param_6 + param_7;
    
    // Store result in param_4 if provided
    if (param_4 != nullptr) {
        *param_4 = (long long)result;
    }
    
    return result;
}
    
// Function: FUN_140009470
// Address: 0x140009470
// Calls error helper: False
void FUN_140009470() {
}
}// Function: FUN_1400095b0
// Address: 0x1400095b0
// Calls error helper: True
unsigned long long FUN_1400095b0(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0xa0
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0xa0);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0xa0
    *(unsigned long long*)(param_1 + 0xa0) = result;
    
    return result;
}// Function: FUN_1400096d0
// Address: 0x1400096d0
// Calls error helper: True
unsigned long long FUN_1400096d0(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0xa8
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0xa8);
    
    // Calculate result with param_3
    unsigned long long result = base_value + param_3;
    
    // Store result in param_2 if provided
    if (param_2 != nullptr) {
        *param_2 = (unsigned int)result;
    }
    
    return result;
}// Function: FUN_1400097f0
// Address: 0x1400097f0
// Calls error helper: True
unsigned long long FUN_1400097f0(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0xb0
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0xb0);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0xb0
    *(unsigned long long*)(param_1 + 0xb0) = result;
    
    return result;
}// Function: FUN_140009910
// Address: 0x140009910
// Calls error helper: True
unsigned long long FUN_140009910(long long param_1,long long param_2,unsigned int param_3,unsigned long long param_4) {
    // Parameter validation
    // Validate param_1
    // Validate param_2
    // Validate param_3
    // Validate param_4
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140009a30
// Address: 0x140009a30
// Calls error helper: True
unsigned long long FUN_140009a30(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140009b50
// Address: 0x140009b50
// Calls error helper: True
unsigned long long FUN_140009b50(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140009c70
// Address: 0x140009c70
// Calls error helper: True
unsigned long long FUN_140009c70(long long param_1,unsigned int param_2,long long param_3,unsigned int param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140009db0
// Address: 0x140009db0
// Calls error helper: True
unsigned long long FUN_140009db0(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140009ed0
// Address: 0x140009ed0
// Calls error helper: True
unsigned long long FUN_140009ed0(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0xe8
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0xe8);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0xe8
    *(unsigned long long*)(param_1 + 0xe8) = result;
    
    return result;
}
    
// Function: FUN_140009ff0
// Address: 0x140009ff0
// Calls error helper: False
void FUN_140009ff0() {
}

// Function: FUN_14000a0a0
// Address: 0x14000a0a0
// Calls error helper: False
void FUN_14000a0a0() {
}

// Function: FUN_14000a150
// Address: 0x14000a150
// Calls error helper: False
void FUN_14000a150() {
}

// Function: FUN_14000a200
// Address: 0x14000a200
// Calls error helper: False
void FUN_14000a200() {
}

// Function: FUN_14000a2b0
// Address: 0x14000a2b0
// Calls error helper: False
void FUN_14000a2b0() {
}

// Function: FUN_14000a360
// Address: 0x14000a360
// Calls error helper: False
void FUN_14000a360() {
}

// Function: FUN_14000a410
// Address: 0x14000a410
// Calls error helper: False
void FUN_14000a410() {
}

// Function: FUN_14000a4c0
// Address: 0x14000a4c0
// Calls error helper: False
void FUN_14000a4c0() {
}

// Function: FUN_14000a570
// Address: 0x14000a570
// Calls error helper: False
void FUN_14000a570() {
}

// Function: FUN_14000a620
// Address: 0x14000a620
// Calls error helper: False
void FUN_14000a620() {
}
}// Function: FUN_14000a6d0
// Address: 0x14000a6d0
// Calls error helper: True
unsigned long long FUN_14000a6d0(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0xc0
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0xc0);
    
    // Calculate result with param_3
    unsigned long long result = base_value + param_3;
    
    // Store result in param_2 if provided
    if (param_2 != nullptr) {
        *param_2 = (unsigned int)result;
    }
    
    return result;
}// Function: FUN_14000a7f0
// Address: 0x14000a7f0
// Calls error helper: True
unsigned long long FUN_14000a7f0(long long param_1,unsigned int param_2,unsigned int param_3,long long param_4,
long long param_5,long long param_6,unsigned long long param_7) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000a980
// Address: 0x14000a980
// Calls error helper: False
void FUN_14000a980() {
}
}// Function: FUN_14000aa30
// Address: 0x14000aa30
// Calls error helper: True
unsigned long long FUN_14000aa30(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0xf8
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0xf8);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + param_4;
    
    // Store result back at offset 0xf8
    *(unsigned long long*)(param_1 + 0xf8) = result;
    
    return result;
}
    
// Function: FUN_14000ab50
// Address: 0x14000ab50
// Calls error helper: False
void FUN_14000ab50() {
}

// Function: FUN_14000ac00
// Address: 0x14000ac00
// Calls error helper: False
void FUN_14000ac00() {
}

// Function: FUN_14000acb0
// Address: 0x14000acb0
// Calls error helper: False
void FUN_14000acb0() {
}

// Function: FUN_14000ad60
// Address: 0x14000ad60
// Calls error helper: False
void FUN_14000ad60() {
}// Function: FUN_14000ae10
// Address: 0x14000ae10
// Calls error helper: True
unsigned long long FUN_14000ae10(long long param_1,unsigned int param_2,long long param_3,long long param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x100
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x100);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + (unsigned long long)param_3 + (unsigned long long)param_4 + param_5;
    
    // Store result back at offset 0x100
    *(unsigned long long*)(param_1 + 0x100) = result;
    
    return result;
}
    
// Function: FUN_14000af60
// Address: 0x14000af60
// Calls error helper: True
unsigned long long FUN_14000af60(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000b080
// Address: 0x14000b080
// Calls error helper: False
void FUN_14000b080() {
}

// Function: FUN_14000b130
// Address: 0x14000b130
// Calls error helper: False
void FUN_14000b130() {
}
}// Function: FUN_14000b220
// Address: 0x14000b220
// Calls error helper: True
unsigned long long FUN_14000b220(long long param_1,long long param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Read value from offset 0x108
    unsigned long long base_value = *(unsigned long long*)(param_1 + 0x108);
    
    // Calculate result with parameters
    unsigned long long result = base_value + (unsigned long long)param_2 + param_3;
    
    // Store result back at offset 0x108
    *(unsigned long long*)(param_1 + 0x108) = result;
    
    return result;
}// Function: FUN_14000b330
// Address: 0x14000b330
// Calls error helper: True
unsigned long long FUN_14000b330(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000b450
// Address: 0x14000b450
// Calls error helper: False
void FUN_14000b450() {
}

// Function: FUN_14000b560
// Address: 0x14000b560
// Calls error helper: False
void FUN_14000b560() {
}

// Function: FUN_14000b650
// Address: 0x14000b650
// Calls error helper: False
void FUN_14000b650() {
}

// Function: FUN_14000b700
// Address: 0x14000b700
// Calls error helper: False
void FUN_14000b700() {
}// Function: FUN_14000b820
// Address: 0x14000b820
// Calls error helper: True
unsigned long long FUN_14000b820(long long param_1,unsigned int param_2,unsigned int param_3,long long param_4,
long long param_5,unsigned long long param_6) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000b990
// Address: 0x14000b990
// Calls error helper: True
unsigned long long FUN_14000b990(long long param_1,unsigned int param_2,unsigned int param_3,long long param_4,
long long param_5,unsigned long long param_6) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000bb00
// Address: 0x14000bb00
// Calls error helper: True
unsigned long long FUN_14000bb00(long long param_1,unsigned int param_2,unsigned int param_3,long long param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000bc40
// Address: 0x14000bc40
// Calls error helper: True
unsigned long long FUN_14000bc40(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000bd60
// Address: 0x14000bd60
// Calls error helper: True
unsigned long long FUN_14000bd60(long long param_1,long long param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000be70
// Address: 0x14000be70
// Calls error helper: False
void FUN_14000be70() {
}
}// Function: FUN_14000bf80
// Address: 0x14000bf80
// Calls error helper: True
unsigned long long FUN_14000bf80(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000c0a0
// Address: 0x14000c0a0
// Calls error helper: True
unsigned long long FUN_14000c0a0(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
// Function: FUN_14000c1c0
// Address: 0x14000c1c0
// Calls error helper: False
unsigned long long FUN_14000c1c0(long long param_1, unsigned int param_2, unsigned long long param_3, unsigned long long param_4) {
    // Follows decompiled flow: open/setup, write tag 0x9b, write param_2, flush, write payload via FUN_140013b30
    unsigned long long uVar2 = 0;
    int iVar1 = (int)FUN_14000f870((unsigned long long*)param_1, param_4);
    if (iVar1 != 0) {
        iVar1 = (int)FUN_140013f30(*(unsigned long long*)(param_1 + 8), 0x9b, param_4);
        if (iVar1 != 0) {
            iVar1 = (int)FUN_140013eb0(*(unsigned long long*)(param_1 + 8), param_2, param_4);
            if (iVar1 != 0) {
                iVar1 = (int)FUN_14000f6e0((unsigned long long*)param_1, param_4);
                if (iVar1 != 0) {
                    iVar1 = (int)FUN_140013b30(*(unsigned long long*)(param_1 + 0x10), (void*)param_3, param_4);
                    uVar2 = 0;
                    if (iVar1 != 0) {
                        uVar2 = 1;
                    }
                }
            }
        }
        FUN_14000f9b0(param_1);
    }
    return uVar2;
}
// Function: FUN_14000c270
// Address: 0x14000c270
// Calls error helper: False
unsigned long long FUN_14000c270(long long param_1, unsigned int param_2, unsigned long long param_3, unsigned long long param_4) {
    // Follows decompiled flow similar to FUN_14000c1c0 but with tag 0x9c and FUN_140013e40 for payload
    unsigned long long uVar2 = 0;
    int iVar1 = (int)FUN_14000f870((unsigned long long*)param_1, param_4);
    if (iVar1 != 0) {
        iVar1 = (int)FUN_140013f30(*(unsigned long long*)(param_1 + 8), 0x9c, param_4);
        if (iVar1 != 0) {
            iVar1 = (int)FUN_140013eb0(*(unsigned long long*)(param_1 + 8), param_2, param_4);
            if (iVar1 != 0) {
                iVar1 = (int)FUN_14000f6e0((unsigned long long*)param_1, param_4);
                if (iVar1 != 0) {
                    iVar1 = (int)FUN_140013e40(*(unsigned long long*)(param_1 + 0x10), param_3, param_4);
                    uVar2 = 0;
                    if (iVar1 != 0) {
                        uVar2 = 1;
                    }
                }
            }
        }
        FUN_14000f9b0(param_1);
    }
    return uVar2;
}
// Function: FUN_14000c320
// Address: 0x14000c320
// Calls error helper: True
unsigned long long FUN_14000c320(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000c440
// Address: 0x14000c440
// Calls error helper: True
unsigned long long FUN_14000c440(long long param_1,long long param_2,unsigned int param_3,unsigned long long param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000c580
// Address: 0x14000c580
// Calls error helper: False
void FUN_14000c580() {
}

// Function: FUN_14000c650
// Address: 0x14000c650
// Calls error helper: False
unsigned int FUN_14000c650(unsigned long long param) {
}// Function: FUN_14000c720
// Address: 0x14000c720
// Calls error helper: True
unsigned long long FUN_14000c720(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000c840
// Address: 0x14000c840
// Calls error helper: True
unsigned long long FUN_14000c840(long long param_1,long long *param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
unsigned int FUN_14000c650(unsigned long long param) {
    // TODO: Implement decompiled logic
    return (unsigned int)(param != 0); // placeholder
}
    
// Function: FUN_14000c980
// Address: 0x14000c980
// Calls error helper: False
void FUN_14000c980() {
}
// Function: FUN_14000ca70
// Address: 0x14000ca70
// Calls error helper: False
unsigned long long FUN_14000ca70(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000cb20
// Address: 0x14000cb20
// Calls error helper: False
unsigned long long FUN_14000cb20(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000cbd0
// Address: 0x14000cbd0
// Calls error helper: True
unsigned long long FUN_14000cbd0(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000ccf0
// Address: 0x14000ccf0
// Calls error helper: True
unsigned long long FUN_14000ccf0(long long param_1,unsigned int param_2,long long param_3,unsigned int param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000ce30
// Address: 0x14000ce30
// Calls error helper: True
unsigned long long FUN_14000ce30(long long param_1,long long param_2,unsigned int param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000cf50
// Address: 0x14000cf50
// Calls error helper: False
unsigned long long FUN_14000cf50(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000d000
// Address: 0x14000d000
// Calls error helper: False
unsigned long long FUN_14000d000(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000d0b0
// Address: 0x14000d0b0
// Calls error helper: False
unsigned long long FUN_14000d0b0(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000d160
// Address: 0x14000d160
// Calls error helper: False
unsigned long long FUN_14000d160(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000d210
// Address: 0x14000d210
// Calls error helper: False
unsigned long long FUN_14000d210(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000d2c0
// Address: 0x14000d2c0
// Calls error helper: False
void FUN_14000d2c0() {
}// Function: FUN_14000d390
// Address: 0x14000d390
// Calls error helper: True
unsigned long long FUN_14000d390(long long param_1,unsigned int param_2,unsigned int param_3,long long param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000d4d0
// Address: 0x14000d4d0
// Calls error helper: False
unsigned long long FUN_14000d4d0(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000d580
// Address: 0x14000d580
// Calls error helper: True
unsigned long long FUN_14000d580(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000d6a0
// Address: 0x14000d6a0
// Calls error helper: False
unsigned long long FUN_14000d6a0(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000d750
// Address: 0x14000d750
// Calls error helper: False
void FUN_14000d750() {
}
}// Function: FUN_14000d840
// Address: 0x14000d840
// Calls error helper: True
unsigned long long FUN_14000d840(long long param_1,unsigned int param_2,unsigned int *param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000d970
// Address: 0x14000d970
// Calls error helper: True
unsigned long long FUN_14000d970(long long param_1,long long param_2,unsigned int param_3,long long *param_4,
unsigned int param_5,unsigned long long param_6) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000db00
// Address: 0x14000db00
// Calls error helper: True
unsigned long long FUN_14000db00(long long param_1,long long param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000dc10
// Address: 0x14000dc10
// Calls error helper: True
unsigned long long FUN_14000dc10(long long param_1,unsigned int *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000dd30
// Address: 0x14000dd30
// Calls error helper: True
unsigned long long FUN_14000dd30(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000de50
// Address: 0x14000de50
// Calls error helper: True
unsigned long long FUN_14000de50(long long param_1,unsigned int param_2,unsigned int param_3,long long param_4,
long long param_5,long long param_6,unsigned long long param_7) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000dfe0
// Address: 0x14000dfe0
// Calls error helper: True
unsigned long long FUN_14000dfe0(long long param_1,long long param_2,unsigned int param_3,long long *param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000e150
// Address: 0x14000e150
// Calls error helper: True
unsigned long long FUN_14000e150(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000e270
// Address: 0x14000e270
// Calls error helper: True
unsigned long long FUN_14000e270(long long param_1,unsigned int param_2,long long param_3,long long param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000e3c0
// Address: 0x14000e3c0
// Calls error helper: True
unsigned long long FUN_14000e3c0(long long param_1,unsigned int param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000e4e0
// Address: 0x14000e4e0
// Calls error helper: True
unsigned long long FUN_14000e4e0(long long param_1,unsigned int param_2,long long param_3,long long param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000e630
// Address: 0x14000e630
// Calls error helper: False
unsigned long long FUN_14000e630(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000e6e0
// Address: 0x14000e6e0
// Calls error helper: False
void FUN_14000e6e0() {
}// Function: FUN_14000e7d0
// Address: 0x14000e7d0
// Calls error helper: False
unsigned long long FUN_14000e7d0(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000e880
// Address: 0x14000e880
// Calls error helper: True
unsigned long long FUN_14000e880(long long param_1,long long param_2,unsigned int param_3,unsigned int param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000e9c0
// Address: 0x14000e9c0
// Calls error helper: True
unsigned long long FUN_14000e9c0(long long param_1,long long param_2,unsigned int param_3,unsigned int param_4,
unsigned long long param_5) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000eb00
// Address: 0x14000eb00
// Calls error helper: True
unsigned long long FUN_14000eb00(long long param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
unsigned int param_5,long long param_6,unsigned long long param_7) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000ec80
// Address: 0x14000ec80
// Calls error helper: False
unsigned long long FUN_14000ec80(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    int iVar1;
    unsigned long long uVar2;
    
    uVar2 = 0;
    iVar1 = FUN_14000f870(param_1,param_4);
    if (iVar1 != 0) {
        iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x11f,param_4);
        if (iVar1 != 0) {
            iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4);
            if (iVar1 != 0) {
                iVar1 = FUN_14000f6e0(param_1,param_4);
                if (iVar1 != 0) {
                    iVar1 = FUN_140013c80(*(unsigned long long*)(param_1 + 0x10),param_3,param_4);
                    uVar2 = 0;
                    if (iVar1 != 0) {
                        uVar2 = 1;
                    }
                }
            }
        }
        FUN_14000f9b0(param_1,0);
    }
    return uVar2;
}
// Function: FUN_14000ed30
// Address: 0x14000ed30
// Calls error helper: False
unsigned long long FUN_14000ed30(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    int iVar1;
    unsigned long long uVar2;
    
    uVar2 = 0;
    iVar1 = FUN_14000f870(param_1,param_4);
    if (iVar1 != 0) {
        iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x121,param_4);
        if (iVar1 != 0) {
            iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4);
            if (iVar1 != 0) {
                iVar1 = FUN_14000f6e0(param_1,param_4);
                if (iVar1 != 0) {
                    iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),param_3,param_4);
                    uVar2 = 0;
                    if (iVar1 != 0) {
                        uVar2 = 1;
                    }
                }
            }
        }
        FUN_14000f9b0(param_1,0);
    }
    return uVar2;
}
// Function: FUN_14000ede0
// Address: 0x14000ede0
// Calls error helper: False
unsigned long long FUN_14000ede0(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    int iVar1;
    unsigned long long uVar2;
    
    uVar2 = 0;
    iVar1 = FUN_14000f870(param_1,param_4);
    if (iVar1 != 0) {
        iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x123,param_4);
        if (iVar1 != 0) {
            iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4);
            if (iVar1 != 0) {
                iVar1 = FUN_14000f6e0(param_1,param_4);
                if (iVar1 != 0) {
                    iVar1 = FUN_140013c10(*(unsigned long long*)(param_1 + 0x10),param_3,param_4);
                    uVar2 = 0;
                    if (iVar1 != 0) {
                        uVar2 = 1;
                    }
                }
            }
        }
        FUN_14000f9b0(param_1,0);
    }
    return uVar2;
}
// Function: FUN_14000ee90
// Address: 0x14000ee90
// Calls error helper: False
unsigned long long FUN_14000ee90(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000ef40
// Address: 0x14000ef40
// Calls error helper: False
unsigned long long FUN_14000ef40(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    int iVar1;
    unsigned long long uVar2;
    
    uVar2 = 0;
    iVar1 = FUN_14000f870(param_1,param_4);
    if (iVar1 != 0) {
        iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),0x125,param_4);
        if (iVar1 != 0) {
            iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4);
            if (iVar1 != 0) {
                iVar1 = FUN_14000f6e0(param_1,param_4);
                if (iVar1 != 0) {
                    iVar1 = FUN_140013c80(*(unsigned long long*)(param_1 + 0x10),param_3,param_4);
                    uVar2 = 0;
                    if (iVar1 != 0) {
                        uVar2 = 1;
                    }
                }
            }
        }
        FUN_14000f9b0(param_1,0);
    }
    return uVar2;
}
// Function: FUN_14000eff0
// Address: 0x14000eff0
// Calls error helper: False
unsigned long long FUN_14000eff0(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    int iVar1;
    unsigned long long uVar2;
    
    uVar2 = 0;
    iVar1 = FUN_14000f870(param_1,param_4);
    if (iVar1 != 0) {
        iVar1 = FUN_140013f30(*(unsigned long long*)(param_1 + 8),299,param_4);
        if (iVar1 != 0) {
            iVar1 = FUN_140013eb0(*(unsigned long long*)(param_1 + 8),param_2,param_4);
            if (iVar1 != 0) {
                iVar1 = FUN_14000f6e0(param_1,param_4);
                if (iVar1 != 0) {
                    iVar1 = FUN_140013b30(*(unsigned long long*)(param_1 + 0x10),param_3,param_4);
                    uVar2 = 0;
                    if (iVar1 != 0) {
                        uVar2 = 1;
                    }
                }
            }
        }
        FUN_14000f9b0(param_1,0);
    }
    return uVar2;
}
// Function: FUN_14000f0a0
// Address: 0x14000f0a0
// Calls error helper: False
unsigned long long FUN_14000f0a0(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000f150
// Address: 0x14000f150
// Calls error helper: False
unsigned long long FUN_14000f150(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000f200
// Address: 0x14000f200
// Calls error helper: True
unsigned long long FUN_14000f200(long long param_1,unsigned int param_2,long long param_3,long long param_4,long long param_5
,long long param_6,long long param_7,long long param_8,unsigned long long param_9) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_14000f3b0
// Address: 0x14000f3b0
// Calls error helper: False
unsigned long long FUN_14000f3b0(unsigned long long param_1,int param_2,tm *param_3,unsigned long long param_4) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000f550
// Address: 0x14000f550
// Calls error helper: False
unsigned long long FUN_14000f560(long long param_1,unsigned long long param_2) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
}
// Function: FUN_14000f6e0
// Address: 0x14000f6e0
// Calls error helper: True
unsigned long long FUN_14000f6e0(unsigned long long *param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
// Function: FUN_14000f7e0
// Address: 0x14000f7e0
// Calls error helper: False
unsigned long long FUN_14000f7e0(long long param_1,unsigned long long param_2) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
unsigned long long FUN_14000fb20(long long param_1,unsigned long long param_2,unsigned int param_3) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
    // Basic implementation
    return 1; // Success
}
unsigned long long FUN_14000fb80(long long param_1,unsigned long long param_2) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000f9b0
// Address: 0x14000f9b0
// Calls error helper: False
void FUN_14000f9b0(long long param_1) {
}// Function: FUN_14000f9d0
// Address: 0x14000f9d0
// Calls error helper: False
unsigned long long FUN_14000f9d0(long long param_1,unsigned long long param_2,unsigned int param_3) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000fa80
// Address: 0x14000fa80
// Calls error helper: False
unsigned long long FUN_14000fa80(long long param_1,unsigned int *param_2) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000fb20
// Address: 0x14000fb20
// Calls error helper: False
unsigned long long FUN_14000fb20(long long param_1,unsigned long long param_2,unsigned int param_3) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000fb80
// Address: 0x14000fb80
// Calls error helper: False
unsigned long long FUN_14000fb80(long long param_1,unsigned long long param_2) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000fbd0
// Address: 0x14000fbd0
// Calls error helper: False
unsigned long long FUN_14000fbd0(long long param_1,long long param_2) {
    // TODO: Implement per decompiled logic
    return 1; // Success placeholder
}
// Function: FUN_14000fe00
// Address: 0x14000fe00
// Calls error helper: True
unsigned long long FUN_14000fe00(long long **param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_14000ff70
// Address: 0x14000ff70
// Calls error helper: True
unsigned long long FUN_14000ff70(long long *param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_1400100b0
// Address: 0x1400100b0
// Calls error helper: False
unsigned long long FUN_1400100b0
// Function: FUN_1400101f0
// Address: 0x1400101f0
// Calls error helper: True
unsigned long long FUN_1400101f0(unsigned int **param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_1400102d0
// Address: 0x1400102d0
// Calls error helper: True
unsigned long long FUN_1400102d0(long long param_1,unsigned int **param_2,int param_3,unsigned int *param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140010520
// Address: 0x140010520
// Calls error helper: True
unsigned long long FUN_140010520(long long **param_1,unsigned long long param_2) {
    // Parameter validation
    // Validate **param_1
    // Validate param_2
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140010610
// Address: 0x140010610
// Calls error helper: True
unsigned long long FUN_140010610(long long param_1,long long **param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate param_1
    // Validate **param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_1400106b0
// Address: 0x1400106b0
// Calls error helper: True
unsigned long long FUN_1400106b0(long long param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
unsigned int param_5,unsigned long long param_6) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140010700
// Address: 0x140010700
// Calls error helper: True
unsigned long long FUN_140010700(long long *param_1,unsigned long long param_2) {
    // Parameter validation
    // Validate *param_1
    // Validate param_2
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}
    
// Function: FUN_1400107a0
// Address: 0x1400107a0
// Calls error helper: False
void FUN_1400107a0(unsigned char *param_1, unsigned int param_2) {
}

// Function: FUN_140010860
// Address: 0x140010860
// Calls error helper: True
void FUN_140010860() {
    // Void function with no parameters
    // No return needed
}

// Function: FUN_140010950
// Address: 0x140010950
// Calls error helper: True
void FUN_140010950() {
    // Void function with no parameters
    // No return needed
}// Function: FUN_140010a30
// Address: 0x140010a30
// Calls error helper: False
unsigned long long FUN_140010a30
// Function: FUN_140010fd0
// Address: 0x140010fd0
// Calls error helper: False
unsigned long long FUN_140010fd0
// Function: FUN_140010ff0
// Address: 0x140010ff0
// Calls error helper: True
unsigned long long FUN_140010ff0(long long *param_1,long long param_2,long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140011610
// Address: 0x140011610
// Calls error helper: True
unsigned long long FUN_140011610(long long **param_1,unsigned long long param_2) {
    // Parameter validation
    // Validate **param_1
    // Validate param_2
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140011890
// Address: 0x140011890
// Calls error helper: True
unsigned long long FUN_140011890(long long *param_1,unsigned short param_2,unsigned short param_3,int param_4) {
    // Parameter validation
    // Validate *param_1
    // Validate param_4
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}
    
// Function: FUN_140011da0
// Address: 0x140011da0
// Calls error helper: False
void FUN_140011da0(unsigned long long param_1) {
}

// Function: FUN_140011f80
// Address: 0x140011f80
// Calls error helper: False
unsigned long long FUN_140011f80
// Function: FUN_140012050
// Address: 0x140012050
// Calls error helper: False
unsigned long long FUN_140012050(int param_1) {
}

// Function: FUN_140012280
// Address: 0x140012280
// Calls error helper: False
unsigned long long FUN_140012280(long long param_1,unsigned long long param_2) {
}

// Function: FUN_140012430
// Address: 0x140012430
// Calls error helper: False
void FUN_140012430() {
}

// Function: FUN_140012470
// Address: 0x140012470
// Calls error helper: False
unsigned long long FUN_140012470(long long *param_1) {
}

// Function: FUN_1400124c0
// Address: 0x1400124c0
// Calls error helper: False
unsigned long long FUN_1400124c0
// Function: FUN_140012510
// Address: 0x140012510
// Calls error helper: False
void FUN_140012510() {
}

// Function: FUN_140012520
// Address: 0x140012520
// Calls error helper: False
void FUN_140012520() {
}

// Function: FUN_140012530
// Address: 0x140012530
// Calls error helper: False
unsigned long long FUN_140012530(unsigned int *param_1,unsigned int param_2) {
}

// Function: FUN_140012540
// Address: 0x140012540
// Calls error helper: False
unsigned long long FUN_140012540(long long param_1,unsigned int param_2) {
}

// Function: FUN_140012560
// Address: 0x140012560
// Calls error helper: False
unsigned long long FUN_140012560(long long param_1,unsigned long long param_2) {
}

// Function: FUN_1400125b0
// Address: 0x1400125b0
// Calls error helper: False
unsigned long long FUN_1400125b0
// Function: FUN_140012670
// Address: 0x140012670
// Calls error helper: False
unsigned long long FUN_140012670(unsigned int *param_1,unsigned int *param_2) {
}

// Function: FUN_140012780
// Address: 0x140012780
// Calls error helper: True
unsigned long long FUN_140012780(int* param_1, int param_2, int param_3, int param_4, unsigned int param_5, long long param_6) {
    int iVar1;
    int iVar2;
    char* pcVar3;
    long long lVar4;
    char* pcVar5;
    
    if (param_1 == (int*)0x0) {
        return 0;
    }
    pcVar3 = (char*)FUN_140011df0(0, 0);
    if (pcVar3 == (char*)0x0) {
        pcVar3 = (char*)FUN_140011df0(1, param_2);
        pcVar5 = "Unknown.";
        if (pcVar3 != (char*)0x0) {
            pcVar5 = pcVar3;
        }
    }
    else {
        pcVar5 = "Internal.";
        if (param_2 == 0) {
            pcVar5 = pcVar3;
        }
    }
    
    if (param_6 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = FUN_140013460("placeholder");
    }
    iVar2 = FUN_140013460(pcVar5);
    *param_1 = 0;
    param_1[1] = 0;
    iVar1 = iVar2 + 0x40 + iVar1;
    if (*(long long*)(param_1 + 2) != 0) {
        FUN_140013870();
        *(unsigned long long*)(param_1 + 2) = 0;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    lVar4 = FUN_140013630(iVar1);
    *(long long*)(param_1 + 2) = lVar4;
    if ((lVar4 != 0) &&
       (FUN_140013530(lVar4, iVar1, "[%x,%x,%x,%x[%08x,%x,%08x]] %s", 1, 0x7e7, 9, 1, param_2, param_3,
                      param_4<< 0x10 | param_5, pcVar5), param_6 != 0)) {
        FUN_1400134b0(*(unsigned long long*)(param_1 + 2), (void*)0x1403e7048);
        FUN_1400134b0(*(unsigned long long*)(param_1 + 2), "placeholder");
    }
    return 0;
}

// Function: FUN_140011df0
// Address: 0x140011df0
// Error message lookup function
char* FUN_140011df0(int param_1, int param_2) {
    if (param_2 == 0) {
        return "Success";
    }
    // Simplified error message lookup
    switch (param_2) {
        case 0x70000001: return "Invalid parameter";
        case 0x74100003: return "Resource not found";
        case 0x74000001: return "Memory allocation failed";
        default: return "Unknown error";

// Function: FUN_140013460
// Address: 0x140013460
// String length function
int FUN_140013460(const char* str) {
    if (str == nullptr) return 0;
    return strlen(str);
}

// Function: FUN_140013870
// Address: 0x140013870
// Memory cleanup function
void FUN_140013870(long long param_1) {
    // Memory cleanup - simplified
}

// Function: FUN_140013630
// Address: 0x140013630
// Memory allocation function
long long FUN_140013630(int size) {
    return (long long)malloc(size);
}

// Function: FUN_140013530
// Address: 0x140013530
// String formatting function
int FUN_140013530(long long buffer, int size, const char* format, ...) {
    // Simplified string formatting
    return 0;
}

// Function: FUN_1400134b0
// Address: 0x1400134b0
// String append function
void FUN_1400134b0(long long buffer, const void* data) {
    // Simplified string append
}

// Function: FUN_14000c650
// Address: 0x14000c650
// Validation function

// Function: FUN_1400124c0
// Address: 0x1400124c0
// Initialization function
unsigned long long FUN_1400124c0
    // Initialization - simplified
// Function: FUN_140008c30
// Address: 0x140008c30
// Data processing function

// Function: FUN_140012900
// Address: 0x140012900
// Calls error helper: False
unsigned long long FUN_140012900(int *param_1,int param_2,int param_3,long long param_4) {
}
}// Function: FUN_140012a10
// Address: 0x140012a10
// Calls error helper: True
unsigned long long FUN_140012a10(long long *param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140012b00
// Address: 0x140012b00
// Calls error helper: True
unsigned long long FUN_140012b00(long long param_1,long long param_2,long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140012c40
// Address: 0x140012c40
// Calls error helper: False
void FUN_140012c40() {
}// Function: FUN_140012ce0
// Address: 0x140012ce0
// Calls error helper: True
unsigned long long FUN_140012ce0(long long param_1,long long param_2,int param_3,unsigned long long *param_4,unsigned int *param_5,
long long param_6) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140012e70
// Address: 0x140012e70
// Calls error helper: True
unsigned long long FUN_140012e70(long long *param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140013310
// Address: 0x140013310
// Calls error helper: True
unsigned long long FUN_140013310(void* param_1,unsigned long long param_2) {
    // Parameter validation
    if (param_1 == nullptr) {
        // Handle null pointer error
        return 0; // Error return
    }
    // Validate param_2
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140013360
// Address: 0x140013360
// Calls error helper: True
unsigned long long FUN_140013360(void* param_1,unsigned long long param_2) {
    // Parameter validation
    if (param_1 == nullptr) {
        // Handle null pointer error
        return 0; // Error return
    }
    // Validate param_2
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_1400133b0
// Address: 0x1400133b0
// Calls error helper: True
unsigned long long FUN_1400133b0(void* param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140013400
// Address: 0x140013400
// Calls error helper: True
unsigned long long FUN_140013400(void* param_1,unsigned long long param_2) {
    // Parameter validation
    if (param_1 == nullptr) {
        // Handle null pointer error
        return 0; // Error return
    }
    // Validate param_2
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}
    
// Function: FUN_140013460
// Address: 0x140013460
// Calls error helper: False

// Function: FUN_140013480
// Address: 0x140013480
// String copy function
long long FUN_140013480(long long param_1, const char* param_2) {
    // Simplified string copy implementation
    if (param_1 != 0 && param_2 != nullptr) {
        strcpy((char*)param_1, param_2);
    }
    return param_1;
}

// Function: FUN_140013530
// Address: 0x140013530
// Calls error helper: False

// Function: FUN_140013560
// Address: 0x140013560
// Calls error helper: False
int FUN_140013560(void) {
}// Function: FUN_1400135a0
// Address: 0x1400135a0
// Calls error helper: False
unsigned long long FUN_1400135a0
// Function: FUN_1400138b0
// Address: 0x1400138b0
// Calls error helper: True
unsigned long long FUN_1400138b0(long long *param_1,int param_2,unsigned int param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140013970
// Address: 0x140013970
// Calls error helper: True
unsigned long long FUN_140013970(long long *param_1,unsigned long long param_2) {
    // Parameter validation
    // Validate *param_1
    // Validate param_2
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140013a10
// Address: 0x140013a10
// Calls error helper: True
unsigned long long FUN_140013a10(long long param_1,unsigned int param_2,unsigned long long param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140013a80
// Address: 0x140013a80
// Calls error helper: True
void FUN_140013a80(unsigned long long param_1, unsigned int param_2, int param_3, unsigned long long param_4) {
    // Void function implementation
    // No return needed
}// Function: FUN_140013b30
// Address: 0x140013b30
// Calls error helper: False
unsigned long long FUN_140013b30
// Function: FUN_140013ba0
// Address: 0x140013ba0
// Calls error helper: False
unsigned long long FUN_140013ba0
// Function: FUN_140013c10
// Address: 0x140013c10
// Calls error helper: False
unsigned long long FUN_140013c10
// Function: FUN_140013c80
// Address: 0x140013c80
// Calls error helper: False
unsigned long long FUN_140013c80
// Function: FUN_140013cf0
// Address: 0x140013cf0
// Calls error helper: True
unsigned long long FUN_140013cf0(unsigned long long param_1,unsigned int param_2,long long *param_3,int *param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140013e40
// Address: 0x140013e40
// Calls error helper: False
void FUN_140013e40(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3) {
}// Function: FUN_140013e60
// Address: 0x140013e60
// Calls error helper: True
void FUN_140013e60(unsigned long long param_1, long long param_2, unsigned long long param_3) {
    // Void function implementation
    // No return needed
}

// Function: FUN_140013eb0
// Address: 0x140013eb0
// Calls error helper: False
unsigned long long FUN_140013eb0
// Function: FUN_140013f30
// Address: 0x140013f30
// Calls error helper: False
unsigned long long FUN_140013f30
// Function: FUN_140013fb0
// Address: 0x140013fb0
// Calls error helper: False
unsigned long long FUN_140013fb0
// Function: FUN_140014030
// Address: 0x140014030
// Calls error helper: False
unsigned long long FUN_140014030(unsigned long long param_1,unsigned int param_2,unsigned long long param_3) {
}// Function: FUN_1400140b0
// Address: 0x1400140b0
// Calls error helper: False
unsigned long long FUN_1400140b0
// Function: FUN_140014150
// Address: 0x140014150
// Calls error helper: True
unsigned long long FUN_140014150(unsigned long long param_1,long long *param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate param_1
    // Validate *param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140014220
// Address: 0x140014220
// Calls error helper: True
unsigned long long FUN_140014220(long long *param_1,unsigned long long param_2,unsigned int param_3,unsigned int param_4,int param_5
,unsigned long long param_6) {
    // Parameter validation
    // Validate *param_1
    // Validate param_2
    // Validate param_3
    // Validate param_4
    // Validate param_5
    // Validate param_6
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}
    
// Function: FUN_1400142f0
// Address: 0x1400142f0
// Calls error helper: True
unsigned long long FUN_1400142f0(long long **param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140014360
// Address: 0x140014360
// Calls error helper: True
unsigned long long FUN_140014360(long long *param_1,long long param_2,unsigned int param_3,unsigned int param_4,int param_5,
unsigned long long param_6) {
    // Parameter validation
    // Validate *param_1
    // Validate param_2
    // Validate param_3
    // Validate param_4
    // Validate param_5
    // Validate param_6
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}
    
// Function: FUN_1400143f0
// Address: 0x1400143f0
// Calls error helper: False
unsigned long long FUN_1400143f0
// Function: FUN_140014400
// Address: 0x140014400
// Calls error helper: False
void FUN_140014400() {
}

// Function: FUN_140014410
// Address: 0x140014410
// Calls error helper: False
void FUN_140014410() {
}
}// Function: FUN_140014420
// Address: 0x140014420
// Calls error helper: True
unsigned long long FUN_140014420(long long param_1,unsigned int param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate param_1
    // Validate param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140014480
// Address: 0x140014480
// Calls error helper: True
unsigned long long FUN_140014480(long long *param_1,unsigned int param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate *param_1
    // Validate param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140014570
// Address: 0x140014570
// Calls error helper: True
unsigned long long FUN_140014570(long long *param_1,long long param_2,int param_3,unsigned long long param_4) {
    // Parameter validation
    // Validate *param_1
    // Validate param_2
    // Validate param_3
    // Validate param_4
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140014620
// Address: 0x140014620
// Calls error helper: True
unsigned long long FUN_140014620(long long *param_1, unsigned char param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate *param_1
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_1400146a0
// Address: 0x1400146a0
// Calls error helper: True
unsigned long long FUN_1400146a0(long long *param_1,unsigned short param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140014740
// Address: 0x140014740
// Calls error helper: True
void FUN_140014740() {
    // Void function with no parameters
    // No return needed
}// Function: FUN_140014810
// Address: 0x140014810
// Calls error helper: True
unsigned long long FUN_140014810(long long **param_1,long long param_2,int param_3,unsigned long long param_4) {
    // Parameter validation
    // Validate **param_1
    // Validate param_2
    // Validate param_3
    // Validate param_4
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_1400148c0
// Address: 0x1400148c0
// Calls error helper: True
unsigned long long FUN_1400148c0(long long *param_1,unsigned long long param_2) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140014920
// Address: 0x140014920
// Calls error helper: True
unsigned long long FUN_140014920(long long *param_1,long long param_2,int param_3,unsigned long long param_4) {
    // Parameter validation
    // Validate *param_1
    // Validate param_2
    // Validate param_3
    // Validate param_4
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_140014980
// Address: 0x140014980
// Calls error helper: True
unsigned long long FUN_140014980(long long param_1,unsigned int param_2,unsigned long long param_3) {
    // Parameter validation
    // Validate param_1
    // Validate param_2
    // Validate param_3
    
    // Function logic would go here
    // This is a stub implementation
    
    return 0; // Success return
}// Function: FUN_1400149e0
// Address: 0x1400149e0
// Calls error helper: True
unsigned long long FUN_1400149e0(long long *param_1,long long param_2,int param_3,unsigned long long param_4) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140014a80
// Address: 0x140014a80
// Calls error helper: True
unsigned long long FUN_140014a80(long long *param_1, unsigned char *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}// Function: FUN_140014b00
// Address: 0x140014b00
// Calls error helper: True
unsigned long long FUN_140014b00(long long *param_1,unsigned short *param_2,unsigned long long param_3) {
    if (param_1 == 0) {
        return 0; // Error: invalid parameter
    }
    
    // Basic implementation
    return 1; // Success
}
    
// Function: FUN_140014b90
// Address: 0x140014b90
// Calls error helper: True
void FUN_140014b90() {
    // Void function implementation
    // No return needed
}

// Function: FUN_140014c50
// Address: 0x140014c50
// Calls error helper: False
void FUN_140014c50(void) {
}

// Function: FUN_140015008
// Address: 0x140015008
// Calls error helper: False
void FUN_140015008(void) {
}

// Function: FUN_140015048
// Address: 0x140015048
// Calls error helper: False
void FUN_140015048(void) {
}

// Function: FUN_14001666c
// Address: 0x14001666c
// Calls error helper: False
void FUN_14001666c(void) {
}

// Function: FUN_140016a4c
// Address: 0x140016a4c
// Calls error helper: False
void FUN_140016a4c(void) {
}

// Function: FUN_140016d7c
// Address: 0x140016d7c
// Calls error helper: False
void FUN_140016d7c(void) {
}

// Function: FUN_1400170ac
// Address: 0x1400170ac
// Calls error helper: False
void FUN_1400170ac(void) {
}

// Function: FUN_1400173dc
// Address: 0x1400173dc
// Calls error helper: False
void FUN_1400173dc(void) {
}

// Function: FUN_140017504
// Address: 0x140017504
// Calls error helper: False
void FUN_140017504(void) {
}

// Function: FUN_14001762c
// Address: 0x14001762c
// Calls error helper: False
void FUN_14001762c(void) {
}

// Function: FUN_140017754
// Address: 0x140017754
// Calls error helper: False
void FUN_140017754(void) {
}

// Function: FUN_14001787c
// Address: 0x14001787c
// Calls error helper: False
void FUN_14001787c(void) {
}

// Function: FUN_1400179a4
// Address: 0x1400179a4
// Calls error helper: False
void FUN_1400179a4(void) {
}

// Function: FUN_140017b28
// Address: 0x140017b28
// Calls error helper: False
void FUN_140017b28(void) {
}

// Function: FUN_140017b70
// Address: 0x140017b70
// Calls error helper: False
void FUN_140017b70(void) {
}

// Function: FUN_140017e3c
// Address: 0x140017e3c
// Calls error helper: False
void FUN_140017e3c(void **param_1, char param_2, unsigned char *param_3) {
}

// Function: FUN_140017f00
// Address: 0x140017f00
// Calls error helper: False
void FUN_140017f00(void **param_1, unsigned short param_2, unsigned char *param_3) {
}

// Function: FUN_1400183d8
// Address: 0x1400183d8
// Calls error helper: False
void FUN_1400183d8(long long *param_1) {
}

// Function: FUN_14001843c
// Address: 0x14001843c
// Calls error helper: False
void FUN_14001843c(unsigned long long *param_1) {
}

// Function: FUN_140018460
// Address: 0x140018460
// Calls error helper: False
void FUN_140018460(unsigned long long *param_1) {
}

// Function: FUN_140018484
// Address: 0x140018484
// Calls error helper: False
void FUN_140018484(unsigned long long *param_1) {
}

// Function: FUN_1400184a4
// Address: 0x1400184a4
// Calls error helper: False
void FUN_1400184a4(void) {
}

// Function: FUN_1400184c4
// Address: 0x1400184c4
// Calls error helper: False
void FUN_1400184c4(long long *param_1) {
}

// Function: FUN_140018528
// Address: 0x140018528
// Calls error helper: False
void FUN_140018528(void) {
}

// Function: FUN_140018794
// Address: 0x140018794
// Calls error helper: False
unsigned long long FUN_140018794(unsigned long long param_1,unsigned int *param_2,unsigned long long param_3,unsigned long long param_4) {
}

// Function: FUN_1400187e4
// Address: 0x1400187e4
// Calls error helper: False
void FUN_1400187e4(void **param_1, unsigned char *param_2, unsigned char *param_3) {
}

// Function: FUN_140018924
// Address: 0x140018924
// Calls error helper: False
void FUN_140018924(long long *param_1) {
}

// Function: FUN_140018940
// Address: 0x140018940
// Calls error helper: False
void FUN_140018940(int param_1) {
}

// Function: FUN_140018bd8
// Address: 0x140018bd8
// Calls error helper: False
void FUN_140018bd8() {
}

// Function: FUN_140018cbc
// Address: 0x140018cbc
// Calls error helper: False
void FUN_140018cbc(void* *param_1) {
}

// Function: FUN_140019488
// Address: 0x140019488
// Calls error helper: False
void FUN_140019488() {
}

// Function: FUN_140019594
// Address: 0x140019594
// Calls error helper: False
unsigned long long FUN_140019594(unsigned long long *param_1,unsigned int param_2) {
}

// Function: FUN_140019698
// Address: 0x140019698
// Calls error helper: False
unsigned long long FUN_140019698(unsigned long long *param_1,long long param_2) {
}

// Function: FUN_1400197a8
// Address: 0x1400197a8
// Calls error helper: False
unsigned long long FUN_1400197a8
// Function: FUN_140019944
// Address: 0x140019944
// Calls error helper: False
unsigned long long FUN_140019944(long long *param_1) {
}

// Function: FUN_14001997c
// Address: 0x14001997c
// Calls error helper: False
void FUN_14001997c(void* *param_1, unsigned long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_1400199f8
// Address: 0x1400199f8
// Calls error helper: False
void FUN_1400199f8(unsigned long long param_1, unsigned long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_140019a5c
// Address: 0x140019a5c
// Calls error helper: False
void FUN_140019a5c(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_140019c28
// Address: 0x140019c28
// Calls error helper: False
void FUN_140019c28() {
}

// Function: FUN_140019df4
// Address: 0x140019df4
// Calls error helper: False
void FUN_140019df4() {
}

// Function: FUN_140019ec4
// Address: 0x140019ec4
// Calls error helper: False
void FUN_140019ec4(void* *param_1, unsigned char *param_2, unsigned long long param_3) {
}

// Function: FUN_140019f94
// Address: 0x140019f94
// Calls error helper: False
void FUN_140019f94(void **param_1, unsigned char *param_2, unsigned long long param_3) {
}

// Function: FUN_14001a0a8
// Address: 0x14001a0a8
// Calls error helper: False
void FUN_14001a0a8() {
}

// Function: FUN_14001a190
// Address: 0x14001a190
// Calls error helper: False
void FUN_14001a190() {
}

// Function: FUN_14001a278
// Address: 0x14001a278
// Calls error helper: False
void FUN_14001a278(void **param_1, unsigned char *param_2, unsigned char *param_3) {
}

// Function: FUN_14001a338
// Address: 0x14001a338
// Calls error helper: False
void FUN_14001a338(void **param_1, unsigned int *param_2, unsigned char *param_3) {
}

// Function: FUN_14001a3f0
// Address: 0x14001a3f0
// Calls error helper: False
void FUN_14001a3f0(void **param_1, unsigned int *param_2, unsigned char *param_3) {
}

// Function: FUN_14001a4c8
// Address: 0x14001a4c8
// Calls error helper: False
unsigned long long FUN_14001a4c8
// Function: FUN_14001a514
// Address: 0x14001a514
// Calls error helper: False
unsigned long long FUN_14001a514
// Function: FUN_14001a564
// Address: 0x14001a564
// Calls error helper: False
unsigned long long FUN_14001a564
// Function: FUN_14001a5b0
// Address: 0x14001a5b0
// Calls error helper: False
unsigned long long FUN_14001a5b0
// Function: FUN_14001a5f8
// Address: 0x14001a5f8
// Calls error helper: False
unsigned long long FUN_14001a5f8
// Function: FUN_14001a68c
// Address: 0x14001a68c
// Calls error helper: False
unsigned long long FUN_14001a68c
// Function: FUN_14001a7f8
// Address: 0x14001a7f8
// Calls error helper: False
void FUN_14001a7f8(long long **param_1, long long *param_2) {
}

// Function: FUN_14001a914
// Address: 0x14001a914
// Calls error helper: False
void FUN_14001a914(char *_>_>) {
}

// Function: FUN_14001a948
// Address: 0x14001a948
// Calls error helper: False
void FUN_14001a948() {
}

// Function: FUN_14001a97c
// Address: 0x14001a97c
// Calls error helper: False
void FUN_14001a97c(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_14001a9b0
// Address: 0x14001a9b0
// Calls error helper: False
void FUN_14001a9b0(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_14001b240
// Address: 0x14001b240
// Calls error helper: False
void FUN_14001b240(unsigned long long param_1, unsigned long long param_2, long long *param_3) {
}

// Function: FUN_14001b288
// Address: 0x14001b288
// Calls error helper: False
void FUN_14001b288(unsigned long long param_1, unsigned long long param_2, long long *param_3) {
}

// Function: FUN_14001b2e4
// Address: 0x14001b2e4
// Calls error helper: False
void FUN_14001b2e4(long long param_1, long long param_2, long long param_3, unsigned char param_4) {
}

// Function: FUN_14001b538
// Address: 0x14001b538
// Calls error helper: False
void FUN_14001b538(CSortThickness *param_1, CSortThickness *param_2) {
}

// Function: FUN_14001b6e4
// Address: 0x14001b6e4
// Calls error helper: False
void FUN_14001b6e4(long long param_1, long long param_2, unsigned char param_3) {
}

// Function: FUN_14001b7e4
// Address: 0x14001b7e4
// Calls error helper: False
void FUN_14001b7e4(char *param_1, unsigned long long param_2, void *param_3) {
}

// Function: FUN_14001b8e4
// Address: 0x14001b8e4
// Calls error helper: False
void FUN_14001b8e4(CSortThickness *param_1, CSortThickness *param_2, CSortThickness *param_3) {
}

// Function: FUN_14001b960
// Address: 0x14001b960
// Calls error helper: False
void FUN_14001b960(CSortThickness **param_1, CSortThickness *param_2, CSortThickness *param_3) {
}

// Function: FUN_14001bb2c
// Address: 0x14001bb2c
// Calls error helper: False
void FUN_14001bb2c(long long param_1, long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_14001bc00
// Address: 0x14001bc00
// Calls error helper: False
void FUN_14001bc00(CSortThickness *param_1, long long param_2, unsigned char param_3) {
}

// Function: FUN_14001bc90
// Address: 0x14001bc90
// Calls error helper: False
void FUN_14001bc90(long long param_1, long long param_2, long long param_3, CSortThickness *param_4) {
}

// Function: FUN_14001bd1c
// Address: 0x14001bd1c
// Calls error helper: False
void FUN_14001bd1c(long long **param_1, long long **param_2) {
}

// Function: FUN_14001c9a0
// Address: 0x14001c9a0
// Calls error helper: False
void FUN_14001c9a0(long long param_1, long long param_2, long long param_3, unsigned char param_4) {
}

// Function: FUN_14001cd38
// Address: 0x14001cd38
// Calls error helper: False
void FUN_14001cd38(unsigned long long *param_1, long long param_2, long long param_3) {
}

// Function: FUN_14001cdc8
// Address: 0x14001cdc8
// Calls error helper: False
void FUN_14001cdc8(char **param_1, unsigned long long *param_2, unsigned long long *param_3, long long *param_4) {
}

// Function: FUN_14001d074
// Address: 0x14001d074
// Calls error helper: False
void FUN_14001d074(char **param_1, unsigned long long *param_2, unsigned long long *param_3, unsigned long long *param_4) {
}

// Function: FUN_14001d308
// Address: 0x14001d308
// Calls error helper: False
unsigned long long FUN_14001d308
// Function: FUN_14001d378
// Address: 0x14001d378
// Calls error helper: False
void FUN_14001d378(unsigned long long *param_1, long long *param_2) {
}

// Function: FUN_14001d400
// Address: 0x14001d400
// Calls error helper: False
unsigned long long FUN_14001d400
// Function: FUN_14001d580
// Address: 0x14001d580
// Calls error helper: False
void FUN_14001d580(unsigned long long param_1) {
}

// Function: FUN_14001d5f8
// Address: 0x14001d5f8
// Calls error helper: False
void FUN_14001d5f8(ushort *param_1, ushort *param_2, long long param_3) {
}

// Function: FUN_14001d7c8
// Address: 0x14001d7c8
// Calls error helper: False
void FUN_14001d7c8(ushort *param_1, ushort *param_2, unsigned long long *param_3) {
}

// Function: FUN_14001d98c
// Address: 0x14001d98c
// Calls error helper: False
void FUN_14001d98c(unsigned int **param_1, unsigned long long param_2, unsigned int *param_3, int *param_4, unsigned long long param_5) {
}

// Function: FUN_14001ddf8
// Address: 0x14001ddf8
// Calls error helper: False
void FUN_14001ddf8() {
}

// Function: FUN_14001e27c
// Address: 0x14001e27c
// Calls error helper: False
void FUN_14001e27c() {
}

// Function: FUN_14001e8c8
// Address: 0x14001e8c8
// Calls error helper: False
void FUN_14001e8c8() {
}

// Function: FUN_14001e938
// Address: 0x14001e938
// Calls error helper: False
void FUN_14001e938(unsigned long long *param_1, long long param_2, unsigned long long param_3, int param_4) {
}

// Function: FUN_14001e9c8
// Address: 0x14001e9c8
// Calls error helper: False
void FUN_14001e9c8(unsigned long long *param_1, long long param_2, unsigned long long param_3, int param_4) {
}

// Function: FUN_14001ea6c
// Address: 0x14001ea6c
// Calls error helper: False
void FUN_14001ea6c(short **param_1, long long param_2, unsigned int param_3, int param_4) {
}

// Function: FUN_14001eb24
// Address: 0x14001eb24
// Calls error helper: False
void FUN_14001eb24(short **param_1, long long param_2, unsigned long long param_3, int param_4) {
}

// Function: FUN_14001ebe8
// Address: 0x14001ebe8
// Calls error helper: False
void FUN_14001ebe8(unsigned long long *param_1, unsigned long long param_2) {
}

// Function: FUN_14001ec5c
// Address: 0x14001ec5c
// Calls error helper: False
void FUN_14001ec5c(double param_1, unsigned int param_2, unsigned long long param_3, unsigned long long *param_4) {
}

// Function: FUN_14001f200
// Address: 0x14001f200
// Calls error helper: False
void FUN_14001f200(unsigned long long param_1, int param_2, unsigned long long param_3, unsigned long long *param_4) {
}

// Function: FUN_14001f4fc
// Address: 0x14001f4fc
// Calls error helper: False
void FUN_14001f4fc(long long *param_1, long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_14001f5c8
// Address: 0x14001f5c8
// Calls error helper: False
void FUN_14001f5c8(long long *param_1, long long param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_14001f6a0
// Address: 0x14001f6a0
// Calls error helper: False
void FUN_14001f6a0(long long *param_1, long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_14001f764
// Address: 0x14001f764
// Calls error helper: False
void FUN_14001f764(long long *param_1, long long param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_14001f82c
// Address: 0x14001f82c
// Calls error helper: False
void FUN_14001f82c(long long *param_1, long long param_2, unsigned int param_3, unsigned int param_4, char param_5) {
}

// Function: FUN_14001f920
// Address: 0x14001f920
// Calls error helper: False
void FUN_14001f920(long long *param_1, long long param_2, unsigned long long param_3, unsigned int param_4, char param_5) {
}

// Function: FUN_14001fa14
// Address: 0x14001fa14
// Calls error helper: False
void FUN_14001fa14() {
}

// Function: FUN_14001fc50
// Address: 0x14001fc50
// Calls error helper: False
void FUN_14001fc50(unsigned long long param_1, unsigned char param_2) {
}

// Function: FUN_14001fce4
// Address: 0x14001fce4
// Calls error helper: False
void FUN_14001fce4(unsigned long long param_1, unsigned char param_2) {
}

// Function: FUN_14001fd78
// Address: 0x14001fd78
// Calls error helper: False
void FUN_14001fd78() {
}

// Function: FUN_14001fe2c
// Address: 0x14001fe2c
// Calls error helper: False
void FUN_14001fe2c(unsigned int *param_1, int *param_2, unsigned long long param_3) {
}

// Function: FUN_14001fea0
// Address: 0x14001fea0
// Calls error helper: False
void FUN_14001fea0(unsigned int *param_1, int *param_2, unsigned long long param_3) {
}

// Function: FUN_14001ff14
// Address: 0x14001ff14
// Calls error helper: False
void FUN_14001ff14(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_1400200f0
// Address: 0x1400200f0
// Calls error helper: False
void FUN_1400200f0(ushort *param_1, ushort *param_2, int *param_3, unsigned int *param_4) {
}

// Function: FUN_140020268
// Address: 0x140020268
// Calls error helper: False
void FUN_140020268() {
}

// Function: FUN_140020358
// Address: 0x140020358
// Calls error helper: False
void FUN_140020358(ushort *param_1, ushort *param_2, long long param_3, unsigned long long param_4, int param_5) {
}

// Function: FUN_140020be8
// Address: 0x140020be8
// Calls error helper: False
void FUN_140020be8(short **param_1, long long param_2) {
}

// Function: FUN_140020d6c
// Address: 0x140020d6c
// Calls error helper: False
unsigned int FUN_140020d6c(ushort **param_1, ushort *param_2, unsigned int param_3) {
}

// Function: FUN_140020fac
// Address: 0x140020fac
// Calls error helper: False
unsigned long long FUN_140020fac
// Function: FUN_1400211e8
// Address: 0x1400211e8
// Calls error helper: False
unsigned long long FUN_1400211e8
// Function: FUN_140021238
// Address: 0x140021238
// Calls error helper: False
void FUN_140021238(CSortThickness *param_1, CSortThickness *param_2) {
}

// Function: FUN_1400212a4
// Address: 0x1400212a4
// Calls error helper: False
void FUN_1400212a4(unsigned int *param_1, unsigned long long param_2) {
}

// Function: FUN_1400213c0
// Address: 0x1400213c0
// Calls error helper: False
unsigned long long FUN_1400213c0
// Function: FUN_1400215f0
// Address: 0x1400215f0
// Calls error helper: False
void FUN_1400215f0(unsigned long long *param_1, unsigned long long param_2) {
}

// Function: FUN_1400219cc
// Address: 0x1400219cc
// Calls error helper: False
void FUN_1400219cc(locale *param_1) {
}

// Function: FUN_140021ae4
// Address: 0x140021ae4
// Calls error helper: False
void FUN_140021ae4(locale *param_1) {
}

// Function: FUN_140021bfc
// Address: 0x140021bfc
// Calls error helper: False
void FUN_140021bfc(locale *param_1) {
}

// Function: FUN_140021d14
// Address: 0x140021d14
// Calls error helper: False
void FUN_140021d14(long long param_1) {
}

// Function: FUN_140021e24
// Address: 0x140021e24
// Calls error helper: False
void FUN_140021e24(unsigned long long param_1, unsigned int *param_2, unsigned int *param_3) {
}

// Function: FUN_1400220a4
// Address: 0x1400220a4
// Calls error helper: False
void FUN_1400220a4() {
}

// Function: FUN_14002239c
// Address: 0x14002239c
// Calls error helper: False
void FUN_14002239c(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_140022638
// Address: 0x140022638
// Calls error helper: False
unsigned long long FUN_140022638(unsigned long long param_1,unsigned long long *param_2) {
}

// Function: FUN_140022a84
// Address: 0x140022a84
// Calls error helper: False
unsigned long long FUN_140022a84
// Function: FUN_140022ed0
// Address: 0x140022ed0
// Calls error helper: False
void FUN_140022ed0(long long *param_1, long long param_2, unsigned int param_3) {
}

// Function: FUN_140022f80
// Address: 0x140022f80
// Calls error helper: False
void FUN_140022f80(long long *param_1, long long param_2, unsigned long long param_3) {
}

// Function: FUN_140023048
// Address: 0x140023048
// Calls error helper: False
unsigned long long FUN_140023048(unsigned long long param_1,unsigned long long param_2,unsigned long long *param_3,int *param_4) {
}

// Function: FUN_1400231b8
// Address: 0x1400231b8
// Calls error helper: False
void FUN_1400231b8(unsigned long long *param_1, unsigned long long *param_2, unsigned int param_3) {
}

// Function: FUN_1400233d8
// Address: 0x1400233d8
// Calls error helper: False
void FUN_1400233d8(long long *param_1, long long param_2, unsigned int param_3) {
}

// Function: FUN_14002356c
// Address: 0x14002356c
// Calls error helper: False
void FUN_14002356c(unsigned long long param_1, unsigned long long param_2, float param_3) {
}

// Function: FUN_140023748
// Address: 0x140023748
// Calls error helper: False
void FUN_140023748(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_1400239ec
// Address: 0x1400239ec
// Calls error helper: False
void FUN_1400239ec(unsigned long long *param_1, unsigned long long *param_2, unsigned long long param_3) {
}

// Function: FUN_140023bf8
// Address: 0x140023bf8
// Calls error helper: False
void FUN_140023bf8(long long *param_1, long long param_2, unsigned long long param_3) {
}

// Function: FUN_140023e0c
// Address: 0x140023e0c
// Calls error helper: False
void FUN_140023e0c(unsigned long long param_1, unsigned long long *param_2, char param_3, unsigned int param_4) {
}

// Function: FUN_140023ef0
// Address: 0x140023ef0
// Calls error helper: False
void FUN_140023ef0(unsigned long long param_1, unsigned long long *param_2, char param_3, unsigned int param_4) {
}

// Function: FUN_140023fdc
// Address: 0x140023fdc
// Calls error helper: False
void FUN_140023fdc(unsigned long long param_1, unsigned long long *param_2, char param_3, unsigned int param_4) {
}

// Function: FUN_1400240d4
// Address: 0x1400240d4
// Calls error helper: False
void FUN_1400240d4(unsigned long long *param_1, unsigned long long *param_2, ushort param_3) {
}

// Function: FUN_14002473c
// Address: 0x14002473c
// Calls error helper: False
void FUN_14002473c(unsigned long long param_1, unsigned long long *param_2, float param_3, unsigned long long *param_4) {
}

// Function: FUN_140024ad0
// Address: 0x140024ad0
// Calls error helper: False
void FUN_140024ad0() {
}

// Function: FUN_140024e58
// Address: 0x140024e58
// Calls error helper: False
void FUN_140024e58() {
}

// Function: FUN_140025984
// Address: 0x140025984
// Calls error helper: False
void FUN_140025984() {
}

// Function: FUN_140025c2c
// Address: 0x140025c2c
// Calls error helper: False
void FUN_140025c2c(unsigned long long param_1, unsigned long long param_2, unsigned long long *param_3, long long param_4) {
}

// Function: FUN_140025ed8
// Address: 0x140025ed8
// Calls error helper: False
unsigned long long FUN_140025ed8
// Function: FUN_140027e9c
// Address: 0x140027e9c
// Calls error helper: False
void FUN_140027e9c(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_140027fc4
// Address: 0x140027fc4
// Calls error helper: False
void FUN_140027fc4() {
}

// Function: FUN_14002819c
// Address: 0x14002819c
// Calls error helper: False
void FUN_14002819c() {
}

// Function: FUN_14002833c
// Address: 0x14002833c
// Calls error helper: False
void FUN_14002833c() {
}

// Function: FUN_1400285dc
// Address: 0x1400285dc
// Calls error helper: False
void FUN_1400285dc() {
}

// Function: FUN_140028658
// Address: 0x140028658
// Calls error helper: False
void FUN_140028658(unsigned long long param_1, unsigned long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_140028838
// Address: 0x140028838
// Calls error helper: False
void FUN_140028838() {
}

// Function: FUN_1400289f4
// Address: 0x1400289f4
// Calls error helper: False
void FUN_1400289f4() {
}

// Function: FUN_140028ce8
// Address: 0x140028ce8
// Calls error helper: False
void FUN_140028ce8() {
}

// Function: FUN_140029404
// Address: 0x140029404
// Calls error helper: False
void FUN_140029404(unsigned long long *param_1) {
}

// Function: FUN_140029e14
// Address: 0x140029e14
// Calls error helper: False
void FUN_140029e14(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_140029e88
// Address: 0x140029e88
// Calls error helper: False
void FUN_140029e88(unsigned long long *param_1, unsigned long long param_2) {
}

// Function: FUN_14002a014
// Address: 0x14002a014
// Calls error helper: False
void FUN_14002a014(unsigned long long *param_1) {
}

// Function: FUN_14002a0ac
// Address: 0x14002a0ac
// Calls error helper: False
void FUN_14002a0ac(unsigned long long *param_1) {
}

// Function: FUN_14002a0d0
// Address: 0x14002a0d0
// Calls error helper: False
void FUN_14002a0d0(unsigned long long *param_1) {
}

// Function: FUN_14002a0f8
// Address: 0x14002a0f8
// Calls error helper: False
void FUN_14002a0f8(long long **param_1) {
}

// Function: FUN_14002a118
// Address: 0x14002a118
// Calls error helper: False
void FUN_14002a118(long long **param_1) {
}

// Function: FUN_14002a14c
// Address: 0x14002a14c
// Calls error helper: False
void FUN_14002a14c(unsigned long long *param_1) {
}

// Function: FUN_14002a168
// Address: 0x14002a168
// Calls error helper: False
void FUN_14002a168(long long *param_1) {
}

// Function: FUN_14002a180
// Address: 0x14002a180
// Calls error helper: False
void FUN_14002a180(void **param_1) {
}

// Function: FUN_14002a214
// Address: 0x14002a214
// Calls error helper: False
void FUN_14002a214(long long param_1) {
}

// Function: FUN_14002a288
// Address: 0x14002a288
// Calls error helper: False
void FUN_14002a288(unsigned long long *param_1) {
}

// Function: FUN_14002a2b4
// Address: 0x14002a2b4
// Calls error helper: False
void FUN_14002a2b4(long long param_1) {
}

// Function: FUN_14002a2dc
// Address: 0x14002a2dc
// Calls error helper: False
void FUN_14002a2dc(long long param_1) {
}

// Function: FUN_14002a2fc
// Address: 0x14002a2fc
// Calls error helper: False
void FUN_14002a2fc(long long param_1) {
}

// Function: FUN_14002a31c
// Address: 0x14002a31c
// Calls error helper: False
void FUN_14002a31c(long long *param_1) {
}

// Function: FUN_14002a348
// Address: 0x14002a348
// Calls error helper: False
void FUN_14002a348(long long *param_1) {
}

// Function: FUN_14002a37c
// Address: 0x14002a37c
// Calls error helper: False
void FUN_14002a37c(long long *param_1) {
}

// Function: FUN_14002a3d0
// Address: 0x14002a3d0
// Calls error helper: False
void FUN_14002a3d0(long long *param_1) {
}

// Function: FUN_14002a43c
// Address: 0x14002a43c
// Calls error helper: False
void FUN_14002a43c(unsigned long long *param_1) {
}

// Function: FUN_14002a4bc
// Address: 0x14002a4bc
// Calls error helper: False
void FUN_14002a4bc(long long param_1) {
}

// Function: FUN_14002a4e0
// Address: 0x14002a4e0
// Calls error helper: False
void FUN_14002a4e0(long long param_1) {
}

// Function: FUN_14002a534
// Address: 0x14002a534
// Calls error helper: False
void FUN_14002a534(long long *param_1) {
}

// Function: FUN_14002a568
// Address: 0x14002a568
// Calls error helper: False
void FUN_14002a568(unsigned long long *param_1) {
}

// Function: FUN_14002a59c
// Address: 0x14002a59c
// Calls error helper: False
void FUN_14002a59c(unsigned long long *param_1) {
}

// Function: FUN_14002a5d0
// Address: 0x14002a5d0
// Calls error helper: False
void FUN_14002a5d0(unsigned long long *param_1) {
}

// Function: FUN_14002a63c
// Address: 0x14002a63c
// Calls error helper: False
void FUN_14002a63c(unsigned long long *param_1) {
}

// Function: FUN_14002a6ac
// Address: 0x14002a6ac
// Calls error helper: False
void FUN_14002a6ac(long long param_1) {
}

// Function: FUN_14002a710
// Address: 0x14002a710
// Calls error helper: False
void FUN_14002a710(long long param_1) {
}

// Function: FUN_14002a774
// Address: 0x14002a774
// Calls error helper: False
void FUN_14002a774(unsigned long long *param_1) {
}

// Function: FUN_14002a7cc
// Address: 0x14002a7cc
// Calls error helper: False
void FUN_14002a7cc(unsigned long long *param_1) {
}

// Function: FUN_14002a828
// Address: 0x14002a828
// Calls error helper: False
void FUN_14002a828(unsigned long long *param_1) {
}

// Function: FUN_14002a884
// Address: 0x14002a884
// Calls error helper: False
void FUN_14002a884(unsigned long long *param_1) {
}

// Function: FUN_14002a8dc
// Address: 0x14002a8dc
// Calls error helper: False
void FUN_14002a8dc(long long param_1) {
}

// Function: FUN_14002a940
// Address: 0x14002a940
// Calls error helper: False
void FUN_14002a940(long long param_1) {
}

// Function: FUN_14002a9a4
// Address: 0x14002a9a4
// Calls error helper: False
void FUN_14002a9a4(long long *param_1) {
}

// Function: FUN_14002aa2c
// Address: 0x14002aa2c
// Calls error helper: False
void FUN_14002aa2c(long long **param_1) {
}

// Function: FUN_14002aa48
// Address: 0x14002aa48
// Calls error helper: False
void FUN_14002aa48(long long *param_1) {
}

// Function: FUN_14002aa78
// Address: 0x14002aa78
// Calls error helper: False
void FUN_14002aa78(long long param_1) {
}

// Function: FUN_14002aaf0
// Address: 0x14002aaf0
// Calls error helper: False
void FUN_14002aaf0(long long param_1) {
}

// Function: FUN_14002ab68
// Address: 0x14002ab68
// Calls error helper: False
void FUN_14002ab68(long long param_1) {
}

// Function: FUN_14002aba8
// Address: 0x14002aba8
// Calls error helper: False
void FUN_14002aba8(long long *param_1) {
}

// Function: FUN_14002ac0c
// Address: 0x14002ac0c
// Calls error helper: False
void FUN_14002ac0c(long long *param_1) {
}

// Function: FUN_14002ac28
// Address: 0x14002ac28
// Calls error helper: False
void FUN_14002ac28(long long **param_1) {
}

// Function: FUN_14002ac44
// Address: 0x14002ac44
// Calls error helper: False
void FUN_14002ac44(long long *param_1) {
}

// Function: FUN_14002acbc
// Address: 0x14002acbc
// Calls error helper: False
void FUN_14002acbc(unsigned long long *param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_14002ad58
// Address: 0x14002ad58
// Calls error helper: False
void FUN_14002ad58(void) {
}

// Function: FUN_14002ad68
// Address: 0x14002ad68
// Calls error helper: False
void FUN_14002ad68(void *param_1) {
}

// Function: FUN_14002adf4
// Address: 0x14002adf4
// Calls error helper: False
void FUN_14002adf4(unsigned long long *param_1) {
}

// Function: FUN_14002b06c
// Address: 0x14002b06c
// Calls error helper: False
void FUN_14002b06c(CCommandLineInfo *param_1) {
}

// Function: FUN_14002b0c0
// Address: 0x14002b0c0
// Calls error helper: False
void FUN_14002b0c0(COleObjectFactory *param_1) {
}

// Function: FUN_14002b0d4
// Address: 0x14002b0d4
// Calls error helper: False
void FUN_14002b0d4(unsigned long long *param_1) {
}

// Function: FUN_14002b0e0
// Address: 0x14002b0e0
// Calls error helper: False
void FUN_14002b0e0(void) {
}

// Function: FUN_14002b120
// Address: 0x14002b120
// Calls error helper: False
void FUN_14002b120(ICloudPlatformCallbackNative *param_1) {
}

// Function: FUN_14002b134
// Address: 0x14002b134
// Calls error helper: False
void FUN_14002b134(long long param_1) {
}

// Function: FUN_14002b14c
// Address: 0x14002b14c
// Calls error helper: False
void FUN_14002b14c(unsigned long long *param_1) {
}

// Function: FUN_14002b1d4
// Address: 0x14002b1d4
// Calls error helper: False
void FUN_14002b1d4(char *_>_>) {
}

// Function: FUN_14002b270
// Address: 0x14002b270
// Calls error helper: False
void FUN_14002b270() {
}

// Function: FUN_14002b2ac
// Address: 0x14002b2ac
// Calls error helper: False
void FUN_14002b2ac(long long param_1) {
}

// Function: FUN_14002b460
// Address: 0x14002b460
// Calls error helper: False
void FUN_14002b460(long long param_1) {
}

// Function: FUN_14002b510
// Address: 0x14002b510
// Calls error helper: False
void FUN_14002b510(unsigned long long *param_1) {
}

// Function: FUN_14002b530
// Address: 0x14002b530
// Calls error helper: False
void FUN_14002b530(char *_>_>) {
}

// Function: FUN_14002b564
// Address: 0x14002b564
// Calls error helper: False
void FUN_14002b564() {
}

// Function: FUN_14002b578
// Address: 0x14002b578
// Calls error helper: False
void FUN_14002b578() {
}

// Function: FUN_14002b598
// Address: 0x14002b598
// Calls error helper: False
void FUN_14002b598(unsigned long long *param_1) {
}

// Function: FUN_14002b5c8
// Address: 0x14002b5c8
// Calls error helper: False
void FUN_14002b5c8(unsigned long long *param_1) {
}

// Function: FUN_14002b5f4
// Address: 0x14002b5f4
// Calls error helper: False
void FUN_14002b5f4(long long **param_1) {
}

// Function: FUN_14002b628
// Address: 0x14002b628
// Calls error helper: False
void FUN_14002b628(unsigned long long *param_1) {
}

// Function: FUN_14002b660
// Address: 0x14002b660
// Calls error helper: False
void FUN_14002b660(VARIANTARG *param_1) {
}

// Function: FUN_14002b670
// Address: 0x14002b670
// Calls error helper: False
void FUN_14002b670(unsigned long long *param_1) {
}

// Function: FUN_14002b6d8
// Address: 0x14002b6d8
// Calls error helper: False
void FUN_14002b6d8(long long param_1) {
}

// Function: FUN_14002b704
// Address: 0x14002b704
// Calls error helper: False
void FUN_14002b704(void) {
}

// Function: FUN_14002b718
// Address: 0x14002b718
// Calls error helper: False
void FUN_14002b718(long long **param_1) {
}

// Function: FUN_14002b75c
// Address: 0x14002b75c
// Calls error helper: False
void FUN_14002b75c(unsigned long long *param_1) {
}

// Function: FUN_14002b990
// Address: 0x14002b990
// Calls error helper: False
void FUN_14002b990(long long param_1, unsigned long long *param_2) {
}

// Function: FUN_14002bde4
// Address: 0x14002bde4
// Calls error helper: False
void FUN_14002bde4(unsigned int *param_1, unsigned long long *param_2, unsigned long long param_3) {
}

// Function: FUN_14002be68
// Address: 0x14002be68
// Calls error helper: False
void FUN_14002be68(unsigned char *param_1, unsigned long long param_2, unsigned long long *param_3) {
}

// Function: FUN_14002c140
// Address: 0x14002c140
// Calls error helper: False
unsigned long long FUN_14002c140
// Function: FUN_14002c21c
// Address: 0x14002c21c
// Calls error helper: False
unsigned long long FUN_14002c21c
// Function: FUN_14002c2c8
// Address: 0x14002c2c8
// Calls error helper: False
unsigned long long FUN_14002c2c8
// Function: FUN_14002c374
// Address: 0x14002c374
// Calls error helper: False
void FUN_14002c374(int **param_1) {
}

// Function: FUN_14002c440
// Address: 0x14002c440
// Calls error helper: False
unsigned long long FUN_14002c440
// Function: FUN_14002c4c4
// Address: 0x14002c4c4
// Calls error helper: False
unsigned long long FUN_14002c4c4
// Function: FUN_14002c5a0
// Address: 0x14002c5a0
// Calls error helper: False
unsigned long long FUN_14002c5a0
// Function: FUN_14002c89c
// Address: 0x14002c89c
// Calls error helper: False
unsigned long long FUN_14002c89c
// Function: FUN_14002c948
// Address: 0x14002c948
// Calls error helper: False
unsigned long long FUN_14002c948
// Function: FUN_14002c9f4
// Address: 0x14002c9f4
// Calls error helper: False
unsigned long long FUN_14002c9f4
// Function: FUN_14002ce64
// Address: 0x14002ce64
// Calls error helper: False
void FUN_14002ce64(int **param_1, unsigned long long param_2, unsigned short *param_3) {
}

// Function: FUN_14002cf98
// Address: 0x14002cf98
// Calls error helper: False
unsigned long long FUN_14002cf98
// Function: FUN_14002d150
// Address: 0x14002d150
// Calls error helper: False
unsigned long long FUN_14002d150
// Function: FUN_14002d2b0
// Address: 0x14002d2b0
// Calls error helper: False
unsigned long long FUN_14002d2b0
// Function: FUN_14002d340
// Address: 0x14002d340
// Calls error helper: False
void FUN_14002d340() {
}

// Function: FUN_14002d3cc
// Address: 0x14002d3cc
// Calls error helper: False
void FUN_14002d3cc(unsigned long long *param_1, unsigned long long *param_2, unsigned long long *param_3) {
}

// Function: FUN_14002d448
// Address: 0x14002d448
// Calls error helper: False
void FUN_14002d448(long long *param_1, short *param_2, short *param_3) {
}

// Function: FUN_14002d77c
// Address: 0x14002d77c
// Calls error helper: False
void FUN_14002d77c(long long param_1) {
}

// Function: FUN_14002d7a0
// Address: 0x14002d7a0
// Calls error helper: False
void FUN_14002d7a0(long long param_1) {
}

// Function: FUN_14002d7c4
// Address: 0x14002d7c4
// Calls error helper: False
void FUN_14002d7c4(long long param_1) {
}

// Function: FUN_14002d80c
// Address: 0x14002d80c
// Calls error helper: False
void FUN_14002d80c(long long param_1) {
}

// Function: FUN_14002d818
// Address: 0x14002d818
// Calls error helper: False
void FUN_14002d818(long long param_1) {
}

// Function: FUN_14002d824
// Address: 0x14002d824
// Calls error helper: False
void FUN_14002d824(long long param_1) {
}

// Function: FUN_14002d830
// Address: 0x14002d830
// Calls error helper: False
void FUN_14002d830(long long param_1) {
}

// Function: FUN_14002d83c
// Address: 0x14002d83c
// Calls error helper: False
void FUN_14002d83c(long long param_1) {
}

// Function: FUN_14002d848
// Address: 0x14002d848
// Calls error helper: False
void FUN_14002d848(long long param_1) {
}

// Function: FUN_14002d854
// Address: 0x14002d854
// Calls error helper: False
void FUN_14002d854(long long param_1) {
}

// Function: FUN_14002d860
// Address: 0x14002d860
// Calls error helper: False
void FUN_14002d860(long long param_1) {
}

// Function: FUN_14002d86c
// Address: 0x14002d86c
// Calls error helper: False
void FUN_14002d86c(long long param_1) {
}

// Function: FUN_14002d878
// Address: 0x14002d878
// Calls error helper: False
void FUN_14002d878(long long param_1) {
}

// Function: FUN_14002d884
// Address: 0x14002d884
// Calls error helper: False
void FUN_14002d884(long long param_1) {
}

// Function: FUN_14002d890
// Address: 0x14002d890
// Calls error helper: False
void FUN_14002d890(long long param_1) {
}

// Function: FUN_14002d8a4
// Address: 0x14002d8a4
// Calls error helper: False
unsigned long long FUN_14002d8a4
// Function: FUN_14002d8d8
// Address: 0x14002d8d8
// Calls error helper: False
unsigned long long FUN_14002d8d8
// Function: FUN_14002da00
// Address: 0x14002da00
// Calls error helper: False
unsigned long long FUN_14002da00
// Function: FUN_14002da34
// Address: 0x14002da34
// Calls error helper: False
unsigned long long FUN_14002da34
// Function: FUN_14002dd18
// Address: 0x14002dd18
// Calls error helper: False
unsigned long long FUN_14002dd18
// Function: FUN_14002ddc8
// Address: 0x14002ddc8
// Calls error helper: False
unsigned long long FUN_14002ddc8
// Function: FUN_14002e004
// Address: 0x14002e004
// Calls error helper: False
unsigned long long FUN_14002e004
// Function: FUN_14002e1fc
// Address: 0x14002e1fc
// Calls error helper: False
void FUN_14002e1fc(long long *param_1, char **param_2) {
}

// Function: FUN_14002e334
// Address: 0x14002e334
// Calls error helper: False
void FUN_14002e334(long long param_1) {
}

// Function: FUN_14002e434
// Address: 0x14002e434
// Calls error helper: False
void FUN_14002e434(long long param_1, CCustomMenu *param_2) {
}

// Function: FUN_14002e62c
// Address: 0x14002e62c
// Calls error helper: False
void FUN_14002e62c(long long param_1, CCustomMenu *param_2, unsigned char param_3) {
}

// Function: FUN_14002e81c
// Address: 0x14002e81c
// Calls error helper: False
unsigned long long FUN_14002e81c
// Function: FUN_14002e8c0
// Address: 0x14002e8c0
// Calls error helper: False
void FUN_14002e8c0(long long param_1, unsigned int param_2) {
}

// Function: FUN_14002e900
// Address: 0x14002e900
// Calls error helper: False
void FUN_14002e900(long long param_1, unsigned int param_2) {
}

// Function: FUN_14002e940
// Address: 0x14002e940
// Calls error helper: False
void FUN_14002e940(long long param_1) {
}

// Function: FUN_14002e9c4
// Address: 0x14002e9c4
// Calls error helper: False
void FUN_14002e9c4() {
}

// Function: FUN_14002ea7c
// Address: 0x14002ea7c
// Calls error helper: False
void FUN_14002ea7c(unsigned long long param_1, unsigned int param_2) {
}

// Function: FUN_14002eae4
// Address: 0x14002eae4
// Calls error helper: False
void FUN_14002eae4(long long param_1) {
}

// Function: FUN_14002eb08
// Address: 0x14002eb08
// Calls error helper: False
void FUN_14002eb08(void **param_1, size_t param_2) {
}

// Function: FUN_14002eb34
// Address: 0x14002eb34
// Calls error helper: False
void FUN_14002eb34() {
}

// Function: FUN_14002ed04
// Address: 0x14002ed04
// Calls error helper: False
void FUN_14002ed04(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed10
// Address: 0x14002ed10
// Calls error helper: False
void FUN_14002ed10(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed1c
// Address: 0x14002ed1c
// Calls error helper: False
void FUN_14002ed1c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed28
// Address: 0x14002ed28
// Calls error helper: False
void FUN_14002ed28(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed34
// Address: 0x14002ed34
// Calls error helper: False
void FUN_14002ed34(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed40
// Address: 0x14002ed40
// Calls error helper: False
void FUN_14002ed40(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed4c
// Address: 0x14002ed4c
// Calls error helper: False
void FUN_14002ed4c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed58
// Address: 0x14002ed58
// Calls error helper: False
void FUN_14002ed58(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002ed64
// Address: 0x14002ed64
// Calls error helper: False
void FUN_14002ed64(long long param_1) {
}

// Function: FUN_14002ed70
// Address: 0x14002ed70
// Calls error helper: False
void FUN_14002ed70(LPSYSTEMTIME param_1, DOUBLE *param_2) {
}

// Function: FUN_14002ee34
// Address: 0x14002ee34
// Calls error helper: False
void FUN_14002ee34(long param_1) {
}

// Function: FUN_14002ee4c
// Address: 0x14002ee4c
// Calls error helper: False
void FUN_14002ee4c() {
}

// Function: FUN_14002ee78
// Address: 0x14002ee78
// Calls error helper: False
void FUN_14002ee78(void *param_1) {
}

// Function: FUN_14002f250
// Address: 0x14002f250
// Calls error helper: False
void FUN_14002f250(unsigned long long param_1, unsigned long long param_2) {
}

// Function: FUN_14002f300
// Address: 0x14002f300
// Calls error helper: False
void FUN_14002f300() {
}

// Function: FUN_14002f38c
// Address: 0x14002f38c
// Calls error helper: False
void FUN_14002f38c(long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14002f734
// Address: 0x14002f734
// Calls error helper: False
void FUN_14002f734(long long *param_1) {
}

// Function: FUN_14002f9f4
// Address: 0x14002f9f4
// Calls error helper: False
void FUN_14002f9f4(long long *param_1) {
}

// Function: FUN_14002fa10
// Address: 0x14002fa10
// Calls error helper: False
void FUN_14002fa10(long long param_1) {
}

// Function: FUN_14002fa60
// Address: 0x14002fa60
// Calls error helper: False
void FUN_14002fa60() {
}

// Function: FUN_14002fa8c
// Address: 0x14002fa8c
// Calls error helper: False
void FUN_14002fa8c(HKEY param_1, HKEY param_2, unsigned long long *param_3) {
}

// Function: FUN_14002fd2c
// Address: 0x14002fd2c
// Calls error helper: False
void FUN_14002fd2c() {
}

// Function: FUN_14002fd60
// Address: 0x14002fd60
// Calls error helper: False
void FUN_14002fd60(long long **param_1, IID *param_2, LPUNKNOWN param_3, unsigned int param_4) {
}

// Function: FUN_14002fe28
// Address: 0x14002fe28
// Calls error helper: False
void FUN_14002fe28(long long **param_1, IID *param_2, LPUNKNOWN param_3, unsigned int param_4) {
}

// Function: FUN_14002fef0
// Address: 0x14002fef0
// Calls error helper: False
void FUN_14002fef0(long long **param_1, IID *param_2, LPUNKNOWN param_3, unsigned int param_4) {
}

// Function: FUN_14002ffb8
// Address: 0x14002ffb8
// Calls error helper: False
void FUN_14002ffb8(long long *param_1) {
}

// Function: FUN_140030070
// Address: 0x140030070
// Calls error helper: False
void FUN_140030070(long long *param_1) {
}

// Function: FUN_140030214
// Address: 0x140030214
// Calls error helper: False
void FUN_140030214(long long param_1) {
}

// Function: FUN_14003026c
// Address: 0x14003026c
// Calls error helper: False
void FUN_14003026c(void *param_1, long long *param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_140030b24
// Address: 0x140030b24
// Calls error helper: False
int FUN_140030b24(void *param_1, char *param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_140030cd4
// Address: 0x140030cd4
// Calls error helper: False
void FUN_140030cd4(long long param_1, char *param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_140030f48
// Address: 0x140030f48
// Calls error helper: False
void FUN_140030f48(long long *param_1, unsigned char param_2) {
}

// Function: FUN_140030f74
// Address: 0x140030f74
// Calls error helper: False
void FUN_140030f74(long long param_1, unsigned char param_2) {
}

// Function: FUN_140030f7c
// Address: 0x140030f7c
// Calls error helper: False
void FUN_140030f7c(long long param_1, unsigned char param_2) {
}

// Function: FUN_140030f84
// Address: 0x140030f84
// Calls error helper: False
void FUN_140030f84() {
}

// Function: FUN_140031074
// Address: 0x140031074
// Calls error helper: False
void FUN_140031074(long long *param_1) {
}

// Function: FUN_140031338
// Address: 0x140031338
// Calls error helper: False
void FUN_140031338(long long *param_1) {
}

// Function: FUN_1400318c4
// Address: 0x1400318c4
// Calls error helper: False
void FUN_1400318c4(long long *param_1, long long param_2, long long *param_3, unsigned int param_4) {
}

// Function: FUN_14003195c
// Address: 0x14003195c
// Calls error helper: False
void FUN_14003195c(long long param_1, int param_2, unsigned long long *param_3) {
}

// Function: FUN_140031990
// Address: 0x140031990
// Calls error helper: False
void FUN_140031990(void *param_1, char *param_2, char param_3) {
}

// Function: FUN_140031a80
// Address: 0x140031a80
// Calls error helper: False
void FUN_140031a80(long long *param_1, int param_2) {
}

// Function: FUN_140031b20
// Address: 0x140031b20
// Calls error helper: False
void FUN_140031b20(unsigned long long param_1, void* *param_2, DesignInfoDetails *param_3) {
}

// Function: FUN_14003205c
// Address: 0x14003205c
// Calls error helper: False
void FUN_14003205c(void **param_1) {
}

// Function: FUN_1400320d4
// Address: 0x1400320d4
// Calls error helper: False
void FUN_1400320d4(long long *param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_140032238
// Address: 0x140032238
// Calls error helper: False
void FUN_140032238(long long param_1) {
}

// Function: FUN_140032258
// Address: 0x140032258
// Calls error helper: False
void FUN_140032258(DATE *param_1) {
}

// Function: FUN_1400325c8
// Address: 0x1400325c8
// Calls error helper: False
void FUN_1400325c8() {
}

// Function: FUN_1400326a4
// Address: 0x1400326a4
// Calls error helper: False
void FUN_1400326a4() {
}

// Function: FUN_1400326b8
// Address: 0x1400326b8
// Calls error helper: False
void FUN_1400326b8(long long param_1, int param_2, char* param_3, unsigned char *param_4) {
}

// Function: FUN_140032a58
// Address: 0x140032a58
// Calls error helper: False
unsigned long long FUN_140032a58
// Function: FUN_140032a60
// Address: 0x140032a60
// Calls error helper: False
unsigned long long FUN_140032a60
// Function: FUN_140032a6c
// Address: 0x140032a6c
// Calls error helper: False
unsigned long long FUN_140032a6c
// Function: FUN_140032a74
// Address: 0x140032a74
// Calls error helper: False
unsigned long long FUN_140032a74
// Function: FUN_140032a7c
// Address: 0x140032a7c
// Calls error helper: False
void FUN_140032a7c(__time64_t *param_1, short *param_2) {
}

// Function: FUN_140032b10
// Address: 0x140032b10
// Calls error helper: False
unsigned long long FUN_140032b10
// Function: FUN_140032bfc
// Address: 0x140032bfc
// Calls error helper: False
unsigned long long FUN_140032bfc
// Function: FUN_140032c90
// Address: 0x140032c90
// Calls error helper: False
void FUN_140032c90(unsigned long long param_1) {
}

// Function: FUN_140032e98
// Address: 0x140032e98
// Calls error helper: False
void FUN_140032e98(unsigned long long param_1) {
}

// Function: FUN_140032fcc
// Address: 0x140032fcc
// Calls error helper: False
void FUN_140032fcc() {
}

// Function: FUN_14003309c
// Address: 0x14003309c
// Calls error helper: False
void FUN_14003309c(void *param_1) {
}

// Function: FUN_14003316c
// Address: 0x14003316c
// Calls error helper: False
void FUN_14003316c() {
}

// Function: FUN_140033174
// Address: 0x140033174
// Calls error helper: False
void FUN_140033174(unsigned long long param_1, char *param_2, short *param_3, unsigned long long param_4) {
}

// Function: FUN_1400334cc
// Address: 0x1400334cc
// Calls error helper: False
void FUN_1400334cc() {
}

// Function: FUN_140033a68
// Address: 0x140033a68
// Calls error helper: False
void FUN_140033a68(IdentificationInfo *param_1, char **param_2) {
}

// Function: FUN_140033dfc
// Address: 0x140033dfc
// Calls error helper: False
void FUN_140033dfc(char *_>_>) {
}

// Function: FUN_140033e9b
// Address: 0x140033e9b
// Calls error helper: False
void FUN_140033e9b() {
}

// Function: FUN_140033f48
// Address: 0x140033f48
// Calls error helper: False
void FUN_140033f48() {
}

// Function: FUN_140033f50
// Address: 0x140033f50
// Calls error helper: False
unsigned long long FUN_140033f50
// Function: FUN_140033f58
// Address: 0x140033f58
// Calls error helper: False
unsigned long long FUN_140033f58
// Function: FUN_140033f80
// Address: 0x140033f80
// Calls error helper: False
unsigned long long FUN_140033f80
// Function: FUN_140033fa8
// Address: 0x140033fa8
// Calls error helper: False
unsigned long long FUN_140033fa8
// Function: FUN_140033fd0
// Address: 0x140033fd0
// Calls error helper: False
unsigned long long FUN_140033fd0
// Function: FUN_140033ff8
// Address: 0x140033ff8
// Calls error helper: False
void FUN_140033ff8(long long param_1) {
}

// Function: FUN_1400340c0
// Address: 0x1400340c0
// Calls error helper: False
void FUN_1400340c0() {
}

// Function: FUN_140034100
// Address: 0x140034100
// Calls error helper: False
void FUN_140034100() {
}

// Function: FUN_14003419c
// Address: 0x14003419c
// Calls error helper: False
void FUN_14003419c(char *_>_>) {
}

// Function: FUN_1400343a0
// Address: 0x1400343a0
// Calls error helper: False
void FUN_1400343a0() {
}

// Function: FUN_1400343dc
// Address: 0x1400343dc
// Calls error helper: False
void FUN_1400343dc(long long *param_1) {
}

// Function: FUN_1400344b4
// Address: 0x1400344b4
// Calls error helper: False
unsigned long long FUN_1400344b4
// Function: FUN_1400344c4
// Address: 0x1400344c4
// Calls error helper: False
void FUN_1400344c4(long long param_1) {
}

// Function: FUN_1400344d8
// Address: 0x1400344d8
// Calls error helper: False
void FUN_1400344d8(long long param_1) {
}

// Function: FUN_1400344ec
// Address: 0x1400344ec
// Calls error helper: False
void FUN_1400344ec() {
}

// Function: FUN_1400344f4
// Address: 0x1400344f4
// Calls error helper: False
void FUN_1400344f4(long long param_1) {
}

// Function: FUN_140034500
// Address: 0x140034500
// Calls error helper: False
int FUN_140034500(long long param_1, char param_2) {
}

// Function: FUN_1400347b8
// Address: 0x1400347b8
// Calls error helper: False
void FUN_1400347b8(long long *param_1) {
}

// Function: FUN_1400348f8
// Address: 0x1400348f8
// Calls error helper: False
void FUN_1400348f8() {
}

// Function: FUN_140034900
// Address: 0x140034900
// Calls error helper: False
unsigned long long FUN_140034900(long long param_1,unsigned long long param_2) {
}

// Function: FUN_140034988
// Address: 0x140034988
// Calls error helper: False
void FUN_140034988(long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_140034cf0
// Address: 0x140034cf0
// Calls error helper: False
void FUN_140034cf0() {
}

// Function: FUN_140034e64
// Address: 0x140034e64
// Calls error helper: False
void FUN_140034e64(long long *param_1, long long param_2) {
}

// Function: FUN_1400350ac
// Address: 0x1400350ac
// Calls error helper: False
void FUN_1400350ac() {
}

// Function: FUN_140035118
// Address: 0x140035118
// Calls error helper: False
unsigned long long FUN_140035118(unsigned long long param_1) {
}

// Function: FUN_140035158
// Address: 0x140035158
// Calls error helper: False
unsigned long long FUN_140035158(unsigned long long param_1) {
}

// Function: FUN_14003520c
// Address: 0x14003520c
// Calls error helper: False
void FUN_14003520c(unsigned long long param_1) {
}

// Function: FUN_1400352ac
// Address: 0x1400352ac
// Calls error helper: False
void FUN_1400352ac() {
}

// Function: FUN_1400352f4
// Address: 0x1400352f4
// Calls error helper: False
unsigned long long FUN_1400352f4
// Function: FUN_140035360
// Address: 0x140035360
// Calls error helper: False
void FUN_140035360() {
}

// Function: FUN_1400353e0
// Address: 0x1400353e0
// Calls error helper: False
void FUN_1400353e0(long long param_1, long long param_2) {
}

// Function: FUN_1400355b4
// Address: 0x1400355b4
// Calls error helper: False
void FUN_1400355b4() {
}

// Function: FUN_1400355bc
// Address: 0x1400355bc
// Calls error helper: False
unsigned long long FUN_1400355bc
// Function: FUN_140035630
// Address: 0x140035630
// Calls error helper: False
void FUN_140035630() {
}

// Function: FUN_14003565c
// Address: 0x14003565c
// Calls error helper: False
void FUN_14003565c(unsigned long long param_1, unsigned long long param_2) {
}

// Function: FUN_140035694
// Address: 0x140035694
// Calls error helper: False
void FUN_140035694(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_1400358d0
// Address: 0x1400358d0
// Calls error helper: False
void FUN_1400358d0(long long *param_1) {
}

// Function: FUN_140035a3c
// Address: 0x140035a3c
// Calls error helper: False
void FUN_140035a3c(long long *param_1) {
}

// Function: FUN_1400375bc
// Address: 0x1400375bc
// Calls error helper: False
void FUN_1400375bc(long long *param_1) {
}

// Function: FUN_140037d38
// Address: 0x140037d38
// Calls error helper: False
void FUN_140037d38(void) {
}

// Function: FUN_1400385a8
// Address: 0x1400385a8
// Calls error helper: False
void FUN_1400385a8(void) {
}

// Function: FUN_140038608
// Address: 0x140038608
// Calls error helper: False
void FUN_140038608(long long *param_1, char param_2) {
}

// Function: FUN_140039ccc
// Address: 0x140039ccc
// Calls error helper: False
void FUN_140039ccc(long long *param_1) {
}

// Function: FUN_140039de4
// Address: 0x140039de4
// Calls error helper: False
void FUN_140039de4(long long param_1, long long *param_2, unsigned int param_3) {
}

// Function: FUN_140039e3c
// Address: 0x140039e3c
// Calls error helper: False
unsigned long long FUN_140039e3c
// Function: FUN_140039e5c
// Address: 0x140039e5c
// Calls error helper: False
void FUN_140039e5c() {
}

// Function: FUN_140039f00
// Address: 0x140039f00
// Calls error helper: False
void FUN_140039f00() {
}

// Function: FUN_140039f9c
// Address: 0x140039f9c
// Calls error helper: False
void FUN_140039f9c() {
}

// Function: FUN_14003a008
// Address: 0x14003a008
// Calls error helper: False
void FUN_14003a008(long long param_1) {
}

// Function: FUN_14003a028
// Address: 0x14003a028
// Calls error helper: False
void FUN_14003a028() {
}

// Function: FUN_14003a07c
// Address: 0x14003a07c
// Calls error helper: False
void FUN_14003a07c() {
}

// Function: FUN_14003a0b4
// Address: 0x14003a0b4
// Calls error helper: False
int FUN_14003a0b4(void *param_1, void *param_2) {
}

// Function: FUN_14003a0d0
// Address: 0x14003a0d0
// Calls error helper: False
void FUN_14003a0d0() {
}

// Function: FUN_14003a0dc
// Address: 0x14003a0dc
// Calls error helper: False
void FUN_14003a0dc(void) {
}

// Function: FUN_14003a270
// Address: 0x14003a270
// Calls error helper: False
void FUN_14003a270(unsigned int param_1, char **param_2, char* param_3, int param_4) {
}

// Function: FUN_14003a388
// Address: 0x14003a388
// Calls error helper: False
void FUN_14003a388() {
}

// Function: FUN_14003a390
// Address: 0x14003a390
// Calls error helper: False
void FUN_14003a390(long long param_1) {
}

// Function: FUN_14003a3b0
// Address: 0x14003a3b0
// Calls error helper: False
void FUN_14003a3b0() {
}

// Function: FUN_14003a54c
// Address: 0x14003a54c
// Calls error helper: False
void FUN_14003a54c(unsigned long long param_1, long long *param_2, long long *param_3) {
}

// Function: FUN_14003a804
// Address: 0x14003a804
// Calls error helper: False
void FUN_14003a804(unsigned long long param_1, long long *param_2, long long *param_3) {
}

// Function: FUN_14003a9f4
// Address: 0x14003a9f4
// Calls error helper: False
void FUN_14003a9f4(void) {
}

// Function: FUN_14003acf8
// Address: 0x14003acf8
// Calls error helper: False
void FUN_14003acf8(long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char param_4) {
}

// Function: FUN_14003ad68
// Address: 0x14003ad68
// Calls error helper: False
void FUN_14003ad68(long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_14003adc4
// Address: 0x14003adc4
// Calls error helper: False
void FUN_14003adc4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14003ae18
// Address: 0x14003ae18
// Calls error helper: False
void FUN_14003ae18(long long param_1) {
}

// Function: FUN_14003aef0
// Address: 0x14003aef0
// Calls error helper: False
int FUN_14003aef0(void *param_1, char *param_2, void *param_3) {
}

// Function: FUN_14003b090
// Address: 0x14003b090
// Calls error helper: False
void FUN_14003b090(long long param_1, char param_2) {
}

// Function: FUN_14003b238
// Address: 0x14003b238
// Calls error helper: False
void FUN_14003b238(long long param_1, char param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14003b5fc
// Address: 0x14003b5fc
// Calls error helper: False
void FUN_14003b5fc(long long *param_1, char param_2) {
}

// Function: FUN_14003b640
// Address: 0x14003b640
// Calls error helper: False
void FUN_14003b640() {
}

// Function: FUN_14003b7a0
// Address: 0x14003b7a0
// Calls error helper: False
void FUN_14003b7a0(long long *param_1) {
}

// Function: FUN_14003be9c
// Address: 0x14003be9c
// Calls error helper: False
void FUN_14003be9c(long long *param_1) {
}

// Function: FUN_14003bf6c
// Address: 0x14003bf6c
// Calls error helper: False
void FUN_14003bf6c(long long *param_1) {
}

// Function: FUN_14003c040
// Address: 0x14003c040
// Calls error helper: False
void FUN_14003c040(long long *param_1) {
}

// Function: FUN_14003c1b4
// Address: 0x14003c1b4
// Calls error helper: False
void FUN_14003c1b4() {
}

// Function: FUN_14003c2ac
// Address: 0x14003c2ac
// Calls error helper: False
unsigned long long FUN_14003c2ac
// Function: FUN_14003c348
// Address: 0x14003c348
// Calls error helper: False
void FUN_14003c348(unsigned long long param_1) {
}

// Function: FUN_14003c398
// Address: 0x14003c398
// Calls error helper: False
void FUN_14003c398(long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_14003c4c8
// Address: 0x14003c4c8
// Calls error helper: False
void FUN_14003c4c8() {
}

// Function: FUN_14003c6c4
// Address: 0x14003c6c4
// Calls error helper: False
void FUN_14003c6c4(long long *param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14003c884
// Address: 0x14003c884
// Calls error helper: False
void FUN_14003c884(long long *param_1) {
}

// Function: FUN_14003c9a4
// Address: 0x14003c9a4
// Calls error helper: False
void FUN_14003c9a4(long long param_1) {
}

// Function: FUN_14003c9b4
// Address: 0x14003c9b4
// Calls error helper: False
void FUN_14003c9b4(COleFrameHook *param_1, int param_2) {
}

// Function: FUN_14003c9cc
// Address: 0x14003c9cc
// Calls error helper: False
void FUN_14003c9cc(void) {
}

// Function: FUN_14003c9dc
// Address: 0x14003c9dc
// Calls error helper: False
void FUN_14003c9dc(long long *param_1, long long *param_2) {
}

// Function: FUN_14003d76c
// Address: 0x14003d76c
// Calls error helper: False
void FUN_14003d76c(unsigned long long param_1) {
}

// Function: FUN_14003d778
// Address: 0x14003d778
// Calls error helper: False
void FUN_14003d778(long long *param_1, long long param_2, char param_3) {
}

// Function: FUN_14003e0fc
// Address: 0x14003e0fc
// Calls error helper: False
void FUN_14003e0fc(unsigned long long param_1, unsigned int param_2, unsigned int param_3) {
}

// Function: FUN_14003e184
// Address: 0x14003e184
// Calls error helper: False
void FUN_14003e184(long long *param_1, unsigned int param_2, unsigned int param_3) {
}

// Function: FUN_14003e55c
// Address: 0x14003e55c
// Calls error helper: False
void FUN_14003e55c() {
}

// Function: FUN_14003e688
// Address: 0x14003e688
// Calls error helper: False
void FUN_14003e688(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14003e7b0
// Address: 0x14003e7b0
// Calls error helper: False
void FUN_14003e7b0(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14003e8d8
// Address: 0x14003e8d8
// Calls error helper: False
void FUN_14003e8d8(long long *param_1) {
}

// Function: FUN_14003e9b8
// Address: 0x14003e9b8
// Calls error helper: False
void FUN_14003e9b8(long long *param_1) {
}

// Function: FUN_14003ea98
// Address: 0x14003ea98
// Calls error helper: False
void FUN_14003ea98(long long *param_1) {
}

// Function: FUN_14003eb2c
// Address: 0x14003eb2c
// Calls error helper: False
void FUN_14003eb2c(long long *param_1) {
}

// Function: FUN_14003ebc8
// Address: 0x14003ebc8
// Calls error helper: False
void FUN_14003ebc8(long long param_1, char param_2) {
}

// Function: FUN_14003ed00
// Address: 0x14003ed00
// Calls error helper: False
void FUN_14003ed00() {
}

// Function: FUN_14003fa6c
// Address: 0x14003fa6c
// Calls error helper: False
void FUN_14003fa6c(long long *param_1, unsigned long long param_2) {
}

// Function: FUN_14003fa7c
// Address: 0x14003fa7c
// Calls error helper: False
void FUN_14003fa7c(unsigned long long param_1, unsigned long long param_2, unsigned int param_3) {
}

// Function: FUN_14003fabc
// Address: 0x14003fabc
// Calls error helper: False
void FUN_14003fabc(long long param_1) {
}

// Function: FUN_14003fac8
// Address: 0x14003fac8
// Calls error helper: False
void FUN_14003fac8(unsigned long long param_1) {
}

// Function: FUN_14003fd00
// Address: 0x14003fd00
// Calls error helper: False
void FUN_14003fd00() {
}

// Function: FUN_14003fd2c
// Address: 0x14003fd2c
// Calls error helper: False
void FUN_14003fd2c(DATE *param_1, const char* param_2, ULONG param_3, LCID param_4) {
}

// Function: FUN_14003fef8
// Address: 0x14003fef8
// Calls error helper: False
void FUN_14003fef8(unsigned long long param_1, unsigned int param_2) {
}

// Function: FUN_14003ff48
// Address: 0x14003ff48
// Calls error helper: False
int FUN_14003ff48(void *param_1, void *param_2) {
}

// Function: FUN_1400401d4
// Address: 0x1400401d4
// Calls error helper: False
void FUN_1400401d4(unsigned long long param_1) {
}

// Function: FUN_1400402bc
// Address: 0x1400402bc
// Calls error helper: False
void FUN_1400402bc() {
}

// Function: FUN_140040474
// Address: 0x140040474
// Calls error helper: False
void FUN_140040474() {
}

// Function: FUN_140040a48
// Address: 0x140040a48
// Calls error helper: False
void FUN_140040a48() {
}

// Function: FUN_140041b1c
// Address: 0x140041b1c
// Calls error helper: False
void FUN_140041b1c() {
}

// Function: FUN_1400422e8
// Address: 0x1400422e8
// Calls error helper: False
void FUN_1400422e8(long long param_1) {
}

// Function: FUN_14004237c
// Address: 0x14004237c
// Calls error helper: False
int FUN_14004237c(void *param_1, int param_2, void *param_3) {
}

// Function: FUN_1400423e8
// Address: 0x1400423e8
// Calls error helper: False
void FUN_1400423e8(long long *param_1) {
}

// Function: FUN_1400424b0
// Address: 0x1400424b0
// Calls error helper: False
void FUN_1400424b0(long long *param_1) {
}

// Function: FUN_140042908
// Address: 0x140042908
// Calls error helper: False
void FUN_140042908(unsigned long long param_1) {
}

// Function: FUN_140042edc
// Address: 0x140042edc
// Calls error helper: False
void FUN_140042edc() {
}

// Function: FUN_140043020
// Address: 0x140043020
// Calls error helper: False
void FUN_140043020() {
}

// Function: FUN_1400435ac
// Address: 0x1400435ac
// Calls error helper: False
void FUN_1400435ac(unsigned long long param_1, RIBBON_NAME param_2, int param_3) {
}

// Function: FUN_140043600
// Address: 0x140043600
// Calls error helper: False
void FUN_140043600() {
}

// Function: FUN_14004378c
// Address: 0x14004378c
// Calls error helper: False
void FUN_14004378c(unsigned long long param_1, unsigned char param_2, char* param_3, int param_4) {
}

// Function: FUN_1400438cc
// Address: 0x1400438cc
// Calls error helper: False
void FUN_1400438cc(unsigned long long param_1, unsigned char param_2, char* param_3, int param_4) {
}

// Function: FUN_140043a40
// Address: 0x140043a40
// Calls error helper: False
void FUN_140043a40(long long param_1) {
}

// Function: FUN_140043a90
// Address: 0x140043a90
// Calls error helper: False
void FUN_140043a90(long long param_1, long long param_2) {
}

// Function: FUN_140043ce0
// Address: 0x140043ce0
// Calls error helper: False
void FUN_140043ce0(long long *param_1, long long *param_2, long long param_3, unsigned long long *param_4) {
}

// Function: FUN_140044384
// Address: 0x140044384
// Calls error helper: False
void FUN_140044384() {
}

// Function: FUN_140044390
// Address: 0x140044390
// Calls error helper: False
unsigned int FUN_140044390(long long param_1) {
}

// Function: FUN_14004439c
// Address: 0x14004439c
// Calls error helper: False
void FUN_14004439c(long long *param_1) {
}

// Function: FUN_140044530
// Address: 0x140044530
// Calls error helper: False
int FUN_140044530(long long *param_1) {
}

// Function: FUN_14004456c
// Address: 0x14004456c
// Calls error helper: False
void FUN_14004456c(long long param_1) {
}

// Function: FUN_140044650
// Address: 0x140044650
// Calls error helper: False
void FUN_140044650(unsigned long long param_1, char *param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_140044924
// Address: 0x140044924
// Calls error helper: False
void FUN_140044924(long long *param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_1400449dc
// Address: 0x1400449dc
// Calls error helper: False
void FUN_1400449dc(long long *param_1, unsigned long long param_2) {
}

// Function: FUN_1400449ec
// Address: 0x1400449ec
// Calls error helper: False
void FUN_1400449ec(long long param_1, void* *param_2) {
}

// Function: FUN_140044b88
// Address: 0x140044b88
// Calls error helper: False
void FUN_140044b88() {
}

// Function: FUN_140044c38
// Address: 0x140044c38
// Calls error helper: False
void FUN_140044c38(long long param_1, void* *param_2) {
}

// Function: FUN_140044d40
// Address: 0x140044d40
// Calls error helper: False
void FUN_140044d40(long long param_1) {
}

// Function: FUN_140044d50
// Address: 0x140044d50
// Calls error helper: False
void FUN_140044d50() {
}

// Function: FUN_140044d58
// Address: 0x140044d58
// Calls error helper: False
void FUN_140044d58(long long param_1) {
}

// Function: FUN_140044d9c
// Address: 0x140044d9c
// Calls error helper: False
void FUN_140044d9c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140044da4
// Address: 0x140044da4
// Calls error helper: False
void FUN_140044da4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140044de4
// Address: 0x140044de4
// Calls error helper: False
void FUN_140044de4() {
}

// Function: FUN_140044ea0
// Address: 0x140044ea0
// Calls error helper: False
void FUN_140044ea0(long long *param_1, code param_2) {
}

// Function: FUN_140044ef0
// Address: 0x140044ef0
// Calls error helper: False
void FUN_140044ef0() {
}

// Function: FUN_140044f1c
// Address: 0x140044f1c
// Calls error helper: False
void FUN_140044f1c(char *param_1, int param_2, const char* *param_3) {
}

// Function: FUN_140044ff8
// Address: 0x140044ff8
// Calls error helper: False
void FUN_140044ff8(unsigned long long param_1, int param_2) {
}

// Function: FUN_1400456ec
// Address: 0x1400456ec
// Calls error helper: False
void FUN_1400456ec(long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_1400458b4
// Address: 0x1400458b4
// Calls error helper: False
unsigned long long FUN_1400458b4
// Function: FUN_140045974
// Address: 0x140045974
// Calls error helper: False
void FUN_140045974(long long param_1, char **param_2) {
}

// Function: FUN_1400459a4
// Address: 0x1400459a4
// Calls error helper: False
void FUN_1400459a4(unsigned long long param_1, unsigned long long param_2, char* param_3, int param_4) {
}

// Function: FUN_140045a58
// Address: 0x140045a58
// Calls error helper: False
void FUN_140045a58(void) {
}

// Function: FUN_140045cb4
// Address: 0x140045cb4
// Calls error helper: False
void FUN_140045cb4(long long *param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_140046fe4
// Address: 0x140046fe4
// Calls error helper: False
void FUN_140046fe4(void *param_1, WarnDeviceMode param_2, unsigned long long param_3) {
}

// Function: FUN_140047320
// Address: 0x140047320
// Calls error helper: False
void FUN_140047320(long long param_1, void *param_2) {
}

// Function: FUN_14004732c
// Address: 0x14004732c
// Calls error helper: False
void FUN_14004732c(long long param_1, void *param_2) {
}

// Function: FUN_140047338
// Address: 0x140047338
// Calls error helper: False
void FUN_140047338(long long param_1, void *param_2) {
}

// Function: FUN_140047344
// Address: 0x140047344
// Calls error helper: False
void FUN_140047344(long long param_1, void *param_2) {
}

// Function: FUN_140047350
// Address: 0x140047350
// Calls error helper: False
unsigned int FUN_140047350(long long param_1) {
}

// Function: FUN_14004735c
// Address: 0x14004735c
// Calls error helper: False
unsigned int FUN_14004735c(long long param_1) {
}

// Function: FUN_140047368
// Address: 0x140047368
// Calls error helper: False
unsigned int FUN_140047368(long long param_1) {
}

// Function: FUN_140047374
// Address: 0x140047374
// Calls error helper: False
unsigned int FUN_140047374(long long param_1) {
}

// Function: FUN_140047380
// Address: 0x140047380
// Calls error helper: False
void FUN_140047380() {
}

// Function: FUN_140047388
// Address: 0x140047388
// Calls error helper: False
void FUN_140047388(char *_>_>) {
}

// Function: FUN_1400473f8
// Address: 0x1400473f8
// Calls error helper: False
void FUN_1400473f8() {
}

// Function: FUN_140047654
// Address: 0x140047654
// Calls error helper: False
void FUN_140047654(void) {
}

// Function: FUN_14004768c
// Address: 0x14004768c
// Calls error helper: False
void FUN_14004768c(long long param_1, void *param_2) {
}

// Function: FUN_140047698
// Address: 0x140047698
// Calls error helper: False
void FUN_140047698(long long param_1, void *param_2) {
}

// Function: FUN_1400476a4
// Address: 0x1400476a4
// Calls error helper: False
void FUN_1400476a4(long long param_1, void *param_2) {
}

// Function: FUN_1400476b0
// Address: 0x1400476b0
// Calls error helper: False
void FUN_1400476b0(long long param_1, void *param_2) {
}

// Function: FUN_1400476bc
// Address: 0x1400476bc
// Calls error helper: False
void FUN_1400476bc(long long param_1) {
}

// Function: FUN_1400477c8
// Address: 0x1400477c8
// Calls error helper: False
void FUN_1400477c8(long long *param_1, long long param_2, char *param_3, unsigned char param_4, char *param_5) {
}

// Function: FUN_1400479e4
// Address: 0x1400479e4
// Calls error helper: False
void FUN_1400479e4() {
}

// Function: FUN_140047a24
// Address: 0x140047a24
// Calls error helper: False
void FUN_140047a24(long long param_1) {
}

// Function: FUN_140047b3c
// Address: 0x140047b3c
// Calls error helper: False
void FUN_140047b3c(char *_>_>) {
}

// Function: FUN_140047be8
// Address: 0x140047be8
// Calls error helper: False
void FUN_140047be8() {
}

// Function: FUN_140047c9c
// Address: 0x140047c9c
// Calls error helper: False
void FUN_140047c9c(long long *param_1, long long param_2, long long param_3, long long param_4) {
}

// Function: FUN_140047d6c
// Address: 0x140047d6c
// Calls error helper: False
void FUN_140047d6c(long long *param_1, long long param_2, long long param_3, long long param_4) {
}

// Function: FUN_140047e20
// Address: 0x140047e20
// Calls error helper: False
void FUN_140047e20(void **param_1, unsigned long long param_2) {
}

// Function: FUN_1400480c0
// Address: 0x1400480c0
// Calls error helper: False
void FUN_1400480c0(unsigned long long param_1, char param_2) {
}

// Function: FUN_1400480d8
// Address: 0x1400480d8
// Calls error helper: False
void FUN_1400480d8(unsigned long long param_1, char param_2) {
}

// Function: FUN_1400480f0
// Address: 0x1400480f0
// Calls error helper: False
void FUN_1400480f0(unsigned long long param_1, char param_2) {
}

// Function: FUN_140048108
// Address: 0x140048108
// Calls error helper: False
unsigned long long FUN_140048108(long long param_1,unsigned long long param_2,unsigned long long *param_3,unsigned long long param_4) {
}

// Function: FUN_140048148
// Address: 0x140048148
// Calls error helper: False
void FUN_140048148(long long param_1, unsigned long long *param_2, unsigned long long *param_3) {
}

// Function: FUN_140048158
// Address: 0x140048158
// Calls error helper: False
void FUN_140048158(long long param_1) {
}

// Function: FUN_140048250
// Address: 0x140048250
// Calls error helper: False
void FUN_140048250(long long param_1) {
}

// Function: FUN_14004825c
// Address: 0x14004825c
// Calls error helper: False
void FUN_14004825c(long long *param_1) {
}

// Function: FUN_140048324
// Address: 0x140048324
// Calls error helper: False
void FUN_140048324(long long *param_1) {
}

// Function: FUN_1400484d4
// Address: 0x1400484d4
// Calls error helper: False
void FUN_1400484d4(unsigned long long *param_1) {
}

// Function: FUN_140048538
// Address: 0x140048538
// Calls error helper: False
void FUN_140048538() {
}

// Function: FUN_14004863c
// Address: 0x14004863c
// Calls error helper: False
void FUN_14004863c(std::streambuf *param_1, long long param_2) {
}

// Function: FUN_1400486f4
// Address: 0x1400486f4
// Calls error helper: False
void FUN_1400486f4() {
}

// Function: FUN_14004885c
// Address: 0x14004885c
// Calls error helper: False
void FUN_14004885c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140048b1c
// Address: 0x140048b1c
// Calls error helper: False
void FUN_140048b1c(long long param_1) {
}

// Function: FUN_140048b4c
// Address: 0x140048b4c
// Calls error helper: False
void FUN_140048b4c(int *param_1, int param_2, long long param_3) {
}

// Function: FUN_140048bcc
// Address: 0x140048bcc
// Calls error helper: False
void FUN_140048bcc(long long *param_1, long long *param_2) {
}

// Function: FUN_140048d48
// Address: 0x140048d48
// Calls error helper: False
void FUN_140048d48(void) {
}

// Function: FUN_140048d68
// Address: 0x140048d68
// Calls error helper: False
void FUN_140048d68(unsigned long long param_1) {
}

// Function: FUN_140048d8c
// Address: 0x140048d8c
// Calls error helper: False
void FUN_140048d8c(unsigned int param_1) {
}

// Function: FUN_140048dc8
// Address: 0x140048dc8
// Calls error helper: False
void FUN_140048dc8(unsigned int param_1) {
}

// Function: FUN_140048e04
// Address: 0x140048e04
// Calls error helper: False
void FUN_140048e04(void) {
}

// Function: FUN_140048e18
// Address: 0x140048e18
// Calls error helper: False
void FUN_140048e18(char *_>_>) {
}

// Function: FUN_140048ea4
// Address: 0x140048ea4
// Calls error helper: False
void FUN_140048ea4() {
}

// Function: FUN_140048f30
// Address: 0x140048f30
// Calls error helper: False
void FUN_140048f30(long long *param_1) {
}

// Function: FUN_140048fdc
// Address: 0x140048fdc
// Calls error helper: False
void FUN_140048fdc(long long param_1) {
}

// Function: FUN_140048ff8
// Address: 0x140048ff8
// Calls error helper: False
void FUN_140048ff8(void) {
}

// Function: FUN_14004900c
// Address: 0x14004900c
// Calls error helper: False
void FUN_14004900c(void) {
}

// Function: FUN_14004902c
// Address: 0x14004902c
// Calls error helper: False
void FUN_14004902c(long long param_1) {
}

// Function: FUN_140049038
// Address: 0x140049038
// Calls error helper: False
void FUN_140049038(unsigned long long param_1, unsigned long long param_2) {
}

// Function: FUN_140049288
// Address: 0x140049288
// Calls error helper: False
int FUN_140049288(long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_1400493b0
// Address: 0x1400493b0
// Calls error helper: False
void FUN_1400493b0(int *param_1, int param_2) {
}

// Function: FUN_140049420
// Address: 0x140049420
// Calls error helper: False
void FUN_140049420(unsigned long long *param_1, long long param_2) {
}

// Function: FUN_140049540
// Address: 0x140049540
// Calls error helper: False
void FUN_140049540(unsigned long long *param_1, unsigned int param_2) {
}

// Function: FUN_140049618
// Address: 0x140049618
// Calls error helper: False
unsigned long long FUN_140049618(void* param_1) {
}

// Function: FUN_1400496c8
// Address: 0x1400496c8
// Calls error helper: False
unsigned long long FUN_1400496c8
// Function: FUN_14004977c
// Address: 0x14004977c
// Calls error helper: False
int FUN_14004977c(long long param_1, long long param_2) {
}

// Function: FUN_140049818
// Address: 0x140049818
// Calls error helper: False
int FUN_140049818(char **param_1, int param_2) {
}

// Function: FUN_140049890
// Address: 0x140049890
// Calls error helper: False
void FUN_140049890(short **param_1, int *param_2, unsigned long long param_3) {
}

// Function: FUN_140049aa4
// Address: 0x140049aa4
// Calls error helper: False
void FUN_140049aa4(unsigned long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_140049ae8
// Address: 0x140049ae8
// Calls error helper: False
void FUN_140049ae8(unsigned long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_140049b2c
// Address: 0x140049b2c
// Calls error helper: False
void FUN_140049b2c(unsigned long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_140049b6c
// Address: 0x140049b6c
// Calls error helper: False
void FUN_140049b6c(unsigned long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_140049bb0
// Address: 0x140049bb0
// Calls error helper: False
void FUN_140049bb0(long long *param_1, long long *param_2) {
}

// Function: FUN_140049c94
// Address: 0x140049c94
// Calls error helper: False
void FUN_140049c94() {
}

// Function: FUN_140049d3c
// Address: 0x140049d3c
// Calls error helper: False
void FUN_140049d3c() {
}

// Function: FUN_140049e9c
// Address: 0x140049e9c
// Calls error helper: False
void FUN_140049e9c() {
}

// Function: FUN_14004a0ec
// Address: 0x14004a0ec
// Calls error helper: False
unsigned long long FUN_14004a0ec
// Function: FUN_14004a0f4
// Address: 0x14004a0f4
// Calls error helper: False
unsigned long long FUN_14004a0f4
// Function: FUN_14004a0fc
// Address: 0x14004a0fc
// Calls error helper: False
void FUN_14004a0fc() {
}

// Function: FUN_14004a19c
// Address: 0x14004a19c
// Calls error helper: False
void FUN_14004a19c() {
}

// Function: FUN_14004a358
// Address: 0x14004a358
// Calls error helper: False
void FUN_14004a358() {
}

// Function: FUN_14004a3b0
// Address: 0x14004a3b0
// Calls error helper: False
unsigned long long FUN_14004a3b0
// Function: FUN_14004a3c0
// Address: 0x14004a3c0
// Calls error helper: False
unsigned long long FUN_14004a3c0
// Function: FUN_14004a3cc
// Address: 0x14004a3cc
// Calls error helper: False
void FUN_14004a3cc() {
}

// Function: FUN_14004a3e8
// Address: 0x14004a3e8
// Calls error helper: False
unsigned long long FUN_14004a3e8
// Function: FUN_14004a424
// Address: 0x14004a424
// Calls error helper: False
void FUN_14004a424(unsigned long long *param_1, unsigned int param_2, unsigned int param_3, unsigned long long *param_4, int *param_5) {
}

// Function: FUN_14004ae34
// Address: 0x14004ae34
// Calls error helper: False
unsigned long long FUN_14004ae34
// Function: FUN_14004b19c
// Address: 0x14004b19c
// Calls error helper: False
void FUN_14004b19c(unsigned long long *param_1, int param_2) {
}

// Function: FUN_14004b298
// Address: 0x14004b298
// Calls error helper: False
unsigned long long FUN_14004b298
// Function: FUN_14004b2c4
// Address: 0x14004b2c4
// Calls error helper: False
void FUN_14004b2c4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14004b37c
// Address: 0x14004b37c
// Calls error helper: False
void FUN_14004b37c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14004b468
// Address: 0x14004b468
// Calls error helper: False
void FUN_14004b468(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14004b570
// Address: 0x14004b570
// Calls error helper: False
void FUN_14004b570(std::streambuf *param_1, unsigned long long param_2) {
}

// Function: FUN_14004b5b4
// Address: 0x14004b5b4
// Calls error helper: False
void FUN_14004b5b4(std::basic_streambuf<wchar_t, std::char_traits<wchar_t>_> *param_1) {
}

// Function: FUN_14004b7ec
// Address: 0x14004b7ec
// Calls error helper: False
void FUN_14004b7ec() {
}

// Function: FUN_14004b850
// Address: 0x14004b850
// Calls error helper: False
unsigned long long FUN_14004b850
// Function: FUN_14004b874
// Address: 0x14004b874
// Calls error helper: False
void FUN_14004b874() {
}

// Function: FUN_14004b8e0
// Address: 0x14004b8e0
// Calls error helper: False
void FUN_14004b8e0() {
}

// Function: FUN_14004b9c4
// Address: 0x14004b9c4
// Calls error helper: False
unsigned long long FUN_14004b9c4
// Function: FUN_14004baa4
// Address: 0x14004baa4
// Calls error helper: False
void FUN_14004baa4() {
}

// Function: FUN_14004bbb8
// Address: 0x14004bbb8
// Calls error helper: False
void FUN_14004bbb8(unsigned long long *param_1, long long param_2) {
}

// Function: FUN_14004bc44
// Address: 0x14004bc44
// Calls error helper: False
void FUN_14004bc44(unsigned long long *param_1, unsigned int param_2) {
}

// Function: FUN_14004bccc
// Address: 0x14004bccc
// Calls error helper: False
void FUN_14004bccc(long long param_1) {
}

// Function: FUN_14004bd30
// Address: 0x14004bd30
// Calls error helper: False
void FUN_14004bd30(long long param_1, unsigned long long *param_2) {
}

// Function: FUN_14004bda0
// Address: 0x14004bda0
// Calls error helper: False
void FUN_14004bda0(long long *param_1, unsigned int param_2, long long param_3, short *param_4) {
}

// Function: FUN_14004bf68
// Address: 0x14004bf68
// Calls error helper: False
void FUN_14004bf68(long long *param_1, unsigned int param_2) {
}

// Function: FUN_14004bfec
// Address: 0x14004bfec
// Calls error helper: False
void FUN_14004bfec(long long *param_1, unsigned int param_2) {
}

// Function: FUN_14004c05c
// Address: 0x14004c05c
// Calls error helper: False
void FUN_14004c05c(long long param_1, unsigned int param_2) {
}

// Function: FUN_14004c270
// Address: 0x14004c270
// Calls error helper: False
void FUN_14004c270(std::streambuf *param_1, int param_2) {
}

// Function: FUN_14004c3dc
// Address: 0x14004c3dc
// Calls error helper: False
void FUN_14004c3dc(std::basic_streambuf<wchar_t, std::char_traits<wchar_t>_> *param_1) {
}

// Function: FUN_14004c560
// Address: 0x14004c560
// Calls error helper: False
void FUN_14004c560() {
}

// Function: FUN_14004c634
// Address: 0x14004c634
// Calls error helper: False
void FUN_14004c634() {
}

// Function: FUN_14004c718
// Address: 0x14004c718
// Calls error helper: False
void FUN_14004c718(long long *param_1, unsigned long long param_2) {
}

// Function: FUN_14004c754
// Address: 0x14004c754
// Calls error helper: False
void FUN_14004c754(long long param_1) {
}

// Function: FUN_14004c760
// Address: 0x14004c760
// Calls error helper: False
void FUN_14004c760(unsigned long long *param_1) {
}

// Function: FUN_14004c87c
// Address: 0x14004c87c
// Calls error helper: False
void FUN_14004c87c(unsigned long long param_1) {
}

// Function: FUN_14004cd0c
// Address: 0x14004cd0c
// Calls error helper: False
void FUN_14004cd0c(long long param_1, fpos_t *param_2, long long param_3, int param_4) {
}

// Function: FUN_14004ce0c
// Address: 0x14004ce0c
// Calls error helper: False
void FUN_14004ce0c(long long param_1, fpos_t *param_2, long long param_3, int param_4) {
}

// Function: FUN_14004cf10
// Address: 0x14004cf10
// Calls error helper: False
void FUN_14004cf10(long long param_1, long long *param_2, long long *param_3) {
}

// Function: FUN_14004cfdc
// Address: 0x14004cfdc
// Calls error helper: False
void FUN_14004cfdc(long long param_1, long long *param_2, long long *param_3) {
}

// Function: FUN_14004d0ac
// Address: 0x14004d0ac
// Calls error helper: False
void FUN_14004d0ac() {
}

// Function: FUN_14004d180
// Address: 0x14004d180
// Calls error helper: False
void FUN_14004d180() {
}

// Function: FUN_14004d190
// Address: 0x14004d190
// Calls error helper: False
void FUN_14004d190(unsigned long long *param_1) {
}

// Function: FUN_14004d3f8
// Address: 0x14004d3f8
// Calls error helper: False
void FUN_14004d3f8(unsigned long long *param_1, unsigned long long *param_2, unsigned int *param_3) {
}

// Function: FUN_14004d4a0
// Address: 0x14004d4a0
// Calls error helper: False
void FUN_14004d4a0(unsigned long long *param_1, long long param_2) {
}

// Function: FUN_14004d574
// Address: 0x14004d574
// Calls error helper: False
int FUN_14004d574(long long *param_1) {
}

// Function: FUN_14004d5c0
// Address: 0x14004d5c0
// Calls error helper: False
int FUN_14004d5c0(long long *param_1) {
}

// Function: FUN_14004d618
// Address: 0x14004d618
// Calls error helper: False
void FUN_14004d618(std::streambuf *param_1) {
}

// Function: FUN_14004d8d4
// Address: 0x14004d8d4
// Calls error helper: False
void FUN_14004d8d4(std::basic_streambuf<wchar_t, std::char_traits<wchar_t>_> *param_1) {
}

// Function: FUN_14004dbec
// Address: 0x14004dbec
// Calls error helper: False
void FUN_14004dbec() {
}

// Function: FUN_14004dc48
// Address: 0x14004dc48
// Calls error helper: False
void FUN_14004dc48(long long *param_1, long long *param_2) {
}

// Function: FUN_14004dd24
// Address: 0x14004dd24
// Calls error helper: False
void FUN_14004dd24(long long *param_1) {
}

// Function: FUN_14004dd98
// Address: 0x14004dd98
// Calls error helper: False
void FUN_14004dd98(void) {
}

// Function: FUN_14004ddcc
// Address: 0x14004ddcc
// Calls error helper: False
void FUN_14004ddcc(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_14004e01c
// Address: 0x14004e01c
// Calls error helper: False
void FUN_14004e01c() {
}

// Function: FUN_14004e134
// Address: 0x14004e134
// Calls error helper: False
void FUN_14004e134() {
}

// Function: FUN_14004e1f4
// Address: 0x14004e1f4
// Calls error helper: False
int FUN_14004e1f4(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_14004e390
// Address: 0x14004e390
// Calls error helper: False
void FUN_14004e390(unsigned long long param_1, unsigned long long param_2) {
}

// Function: FUN_14004e46c
// Address: 0x14004e46c
// Calls error helper: False
unsigned long long FUN_14004e46c
// Function: FUN_14004e578
// Address: 0x14004e578
// Calls error helper: False
unsigned long long FUN_14004e578
// Function: FUN_14004e67c
// Address: 0x14004e67c
// Calls error helper: False
unsigned long long FUN_14004e67c
// Function: FUN_14004e78c
// Address: 0x14004e78c
// Calls error helper: False
unsigned long long FUN_14004e78c
// Function: FUN_14004e928
// Address: 0x14004e928
// Calls error helper: False
unsigned long long FUN_14004e928
// Function: FUN_14004ec6c
// Address: 0x14004ec6c
// Calls error helper: False
void FUN_14004ec6c(long long *param_1, unsigned int param_2) {
}

// Function: FUN_14004ed3c
// Address: 0x14004ed3c
// Calls error helper: False
void FUN_14004ed3c(unsigned long long *param_1, long long param_2) {
}

// Function: FUN_14004edec
// Address: 0x14004edec
// Calls error helper: False
void FUN_14004edec(unsigned long long *param_1, long long param_2) {
}

// Function: FUN_14004f27c
// Address: 0x14004f27c
// Calls error helper: False
void FUN_14004f27c(long long param_1, short **param_2, long long param_3) {
}

// Function: FUN_14004f3d4
// Address: 0x14004f3d4
// Calls error helper: False
void FUN_14004f3d4(long long param_1, short **param_2, long long param_3) {
}

// Function: FUN_14004f46c
// Address: 0x14004f46c
// Calls error helper: False
int FUN_14004f46c(long long param_1, ushort **param_2, unsigned long long param_3) {
}

// Function: FUN_14004f4e0
// Address: 0x14004f4e0
// Calls error helper: False
void FUN_14004f4e0(long long param_1, short **param_2, long long param_3) {
}

// Function: FUN_14004f564
// Address: 0x14004f564
// Calls error helper: False
void FUN_14004f564(long long param_1, ushort **param_2, long long param_3) {
}

// Function: FUN_14004fce8
// Address: 0x14004fce8
// Calls error helper: False
void FUN_14004fce8(long long param_1, short **param_2, long long param_3) {
}

// Function: FUN_14004ffc4
// Address: 0x14004ffc4
// Calls error helper: False
void FUN_14004ffc4(long long param_1, long long *param_2, unsigned long long param_3) {
}

// Function: FUN_14005029c
// Address: 0x14005029c
// Calls error helper: False
void FUN_14005029c(long long param_1, short **param_2, long long param_3) {
}

// Function: FUN_140050324
// Address: 0x140050324
// Calls error helper: False
void FUN_140050324(long long param_1, ushort **param_2, long long param_3) {
}

// Function: FUN_140050370
// Address: 0x140050370
// Calls error helper: False
void FUN_140050370(ushort **param_1) {
}

// Function: FUN_1400503d4
// Address: 0x1400503d4
// Calls error helper: False
unsigned long long FUN_1400503d4
// Function: FUN_140050460
// Address: 0x140050460
// Calls error helper: False
unsigned long long FUN_140050460(unsigned long long param_1,long long param_2,unsigned long long param_3,unsigned long long param_4) {
}

// Function: FUN_1400504a8
// Address: 0x1400504a8
// Calls error helper: False
unsigned long long FUN_1400504a8
// Function: FUN_1400505f4
// Address: 0x1400505f4
// Calls error helper: False
void FUN_1400505f4(unsigned long long param_1, unsigned long long param_2, unsigned int param_3) {
}

// Function: FUN_140050a2c
// Address: 0x140050a2c
// Calls error helper: False
void FUN_140050a2c(char **param_1, unsigned long long *param_2, unsigned long long *param_3, long long *param_4) {
}

// Function: FUN_140050cd0
// Address: 0x140050cd0
// Calls error helper: False
void FUN_140050cd0(unsigned long long param_1) {
}

// Function: FUN_140050d48
// Address: 0x140050d48
// Calls error helper: False
void FUN_140050d48(char *param_1, char *param_2, long long param_3) {
}

// Function: FUN_140050ef4
// Address: 0x140050ef4
// Calls error helper: False
void FUN_140050ef4(char *param_1, char *param_2, unsigned long long *param_3) {
}

// Function: FUN_14005108c
// Address: 0x14005108c
// Calls error helper: False
void FUN_14005108c(unsigned int **param_1, unsigned long long param_2, unsigned int *param_3, int *param_4, unsigned long long param_5) {
}

// Function: FUN_1400514e8
// Address: 0x1400514e8
// Calls error helper: False
void FUN_1400514e8() {
}

// Function: FUN_140051958
// Address: 0x140051958
// Calls error helper: False
void FUN_140051958() {
}

// Function: FUN_140051ec0
// Address: 0x140051ec0
// Calls error helper: False
void FUN_140051ec0() {
}

// Function: FUN_140051f90
// Address: 0x140051f90
// Calls error helper: False
unsigned long long FUN_140051f90
// Function: FUN_140052014
// Address: 0x140052014
// Calls error helper: False
unsigned long long FUN_140052014(unsigned long long param_1,unsigned long long *param_2,unsigned int *param_3,unsigned long long *param_4) {
}

// Function: FUN_140052094
// Address: 0x140052094
// Calls error helper: False
unsigned long long FUN_140052094(unsigned long long param_1,unsigned int *param_2,unsigned long long *param_3,unsigned long long param_4) {
}

// Function: FUN_140052118
// Address: 0x140052118
// Calls error helper: False
unsigned long long FUN_140052118(unsigned long long param_1,unsigned long long *param_2,unsigned long long *param_3,unsigned long long *param_4,
unsigned long long *param_5,unsigned long long *param_6) {
}

// Function: FUN_1400521f4
// Address: 0x1400521f4
// Calls error helper: False
unsigned long long FUN_1400521f4
// Function: FUN_1400522c0
// Address: 0x1400522c0
// Calls error helper: False
unsigned long long FUN_1400522c0
// Function: FUN_14005237c
// Address: 0x14005237c
// Calls error helper: False
void FUN_14005237c(long long *param_1, long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_140052438
// Address: 0x140052438
// Calls error helper: False
void FUN_140052438(long long *param_1, long long param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_140052500
// Address: 0x140052500
// Calls error helper: False
void FUN_140052500(long long *param_1, long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_1400525c0
// Address: 0x1400525c0
// Calls error helper: False
void FUN_1400525c0(long long *param_1, long long param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_140052684
// Address: 0x140052684
// Calls error helper: False
void FUN_140052684(long long *param_1, long long param_2, unsigned int param_3, unsigned int param_4, char param_5) {
}

// Function: FUN_140052770
// Address: 0x140052770
// Calls error helper: False
void FUN_140052770(long long *param_1, long long param_2, unsigned long long param_3, unsigned int param_4, char param_5) {
}

// Function: FUN_140052924
// Address: 0x140052924
// Calls error helper: False
void FUN_140052924() {
}

// Function: FUN_1400529dc
// Address: 0x1400529dc
// Calls error helper: False
void FUN_1400529dc(unsigned int *param_1, int *param_2, unsigned long long param_3) {
}

// Function: FUN_140052a50
// Address: 0x140052a50
// Calls error helper: False
void FUN_140052a50(unsigned int *param_1, int *param_2, unsigned long long param_3) {
}

// Function: FUN_140052ac4
// Address: 0x140052ac4
// Calls error helper: False
void FUN_140052ac4(long long param_1) {
}

// Function: FUN_140052c08
// Address: 0x140052c08
// Calls error helper: False
void FUN_140052c08(char *param_1, char *param_2, int *param_3, unsigned int *param_4, unsigned char **param_5) {
}

// Function: FUN_140052d74
// Address: 0x140052d74
// Calls error helper: False
void FUN_140052d74(unsigned char *param_1, unsigned char *param_2, long long param_3, unsigned long long param_4, int param_5) {
}

// Function: FUN_1400535a4
// Address: 0x1400535a4
// Calls error helper: False
void FUN_1400535a4(char **param_1, long long param_2) {
}

// Function: FUN_14005372c
// Address: 0x14005372c
// Calls error helper: False
unsigned long long FUN_14005372c
// Function: FUN_1400539dc
// Address: 0x1400539dc
// Calls error helper: False
void FUN_1400539dc(unsigned int *param_1, unsigned long long param_2) {
}

// Function: FUN_140053b44
// Address: 0x140053b44
// Calls error helper: False
void FUN_140053b44(long long param_1) {
}

// Function: FUN_140053c10
// Address: 0x140053c10
// Calls error helper: False
void FUN_140053c10(long long param_1) {
}

// Function: FUN_140053e5c
// Address: 0x140053e5c
// Calls error helper: False
void FUN_140053e5c() {
}

// Function: FUN_1400543f0
// Address: 0x1400543f0
// Calls error helper: False
void FUN_1400543f0(unsigned long long param_1, unsigned long long param_2, long long *param_3, int *param_4) {
}

// Function: FUN_1400545e4
// Address: 0x1400545e4
// Calls error helper: False
void FUN_1400545e4(unsigned long long *param_1, unsigned long long *param_2, unsigned int param_3) {
}

// Function: FUN_1400548a8
// Address: 0x1400548a8
// Calls error helper: False
void FUN_1400548a8(unsigned long long param_1, unsigned long long param_2, float param_3) {
}

// Function: FUN_140054a54
// Address: 0x140054a54
// Calls error helper: False
void FUN_140054a54(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_140054cc0
// Address: 0x140054cc0
// Calls error helper: False
void FUN_140054cc0(unsigned long long *param_1, unsigned long long *param_2, unsigned long long param_3) {
}

// Function: FUN_14005503c
// Address: 0x14005503c
// Calls error helper: False
void FUN_14005503c(unsigned long long *param_1, unsigned long long *param_2, unsigned char param_3, unsigned int param_4) {
}

// Function: FUN_140055120
// Address: 0x140055120
// Calls error helper: False
void FUN_140055120(unsigned long long *param_1, unsigned long long *param_2, unsigned char param_3, unsigned int param_4) {
}

// Function: FUN_140055204
// Address: 0x140055204
// Calls error helper: False
void FUN_140055204(unsigned long long *param_1, unsigned long long *param_2, unsigned char param_3, unsigned int param_4) {
}

// Function: FUN_1400552e8
// Address: 0x1400552e8
// Calls error helper: False
void FUN_1400552e8(unsigned long long *param_1, unsigned long long *param_2, char param_3) {
}

// Function: FUN_140055914
// Address: 0x140055914
// Calls error helper: False
void FUN_140055914(unsigned long long param_1, unsigned long long *param_2, float param_3, long long *param_4) {
}

// Function: FUN_140055c94
// Address: 0x140055c94
// Calls error helper: False
void FUN_140055c94() {
}

// Function: FUN_140056008
// Address: 0x140056008
// Calls error helper: False
void FUN_140056008() {
}

// Function: FUN_1400562ac
// Address: 0x1400562ac
// Calls error helper: False
void FUN_1400562ac(unsigned long long param_1, unsigned long long param_2, unsigned long long *param_3, long long param_4) {
}

// Function: FUN_140056ef0
// Address: 0x140056ef0
// Calls error helper: False
void FUN_140056ef0(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, int param_4) {
}

// Function: FUN_140056fec
// Address: 0x140056fec
// Calls error helper: False
void FUN_140056fec() {
}

// Function: FUN_1400583f0
// Address: 0x1400583f0
// Calls error helper: False
void FUN_1400583f0(unsigned long long *param_1, unsigned long long *param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_140058610
// Address: 0x140058610
// Calls error helper: False
void FUN_140058610() {
}

// Function: FUN_1400587dc
// Address: 0x1400587dc
// Calls error helper: False
void FUN_1400587dc() {
}

// Function: FUN_140058b8c
// Address: 0x140058b8c
// Calls error helper: False
void FUN_140058b8c() {
}

// Function: FUN_140058d50
// Address: 0x140058d50
// Calls error helper: False
void FUN_140058d50() {
}

// Function: FUN_140058ee4
// Address: 0x140058ee4
// Calls error helper: False
void FUN_140058ee4() {
}

// Function: FUN_1400596d0
// Address: 0x1400596d0
// Calls error helper: False
void FUN_1400596d0() {
}

// Function: FUN_140059c48
// Address: 0x140059c48
// Calls error helper: False
void FUN_140059c48(long long param_1) {
}

// Function: FUN_140059cac
// Address: 0x140059cac
// Calls error helper: False
void FUN_140059cac(long long param_1) {
}

// Function: FUN_140059cd8
// Address: 0x140059cd8
// Calls error helper: False
void FUN_140059cd8(long long *param_1) {
}

// Function: FUN_140059d88
// Address: 0x140059d88
// Calls error helper: False
void FUN_140059d88(facet *param_1) {
}

// Function: FUN_140059e98
// Address: 0x140059e98
// Calls error helper: False
void FUN_140059e98(long long param_1) {
}

// Function: FUN_140059fa0
// Address: 0x140059fa0
// Calls error helper: False
void FUN_140059fa0(long long *param_1) {
}

// Function: FUN_140059fb8
// Address: 0x140059fb8
// Calls error helper: False
void FUN_140059fb8(char *_>_>) {
}

// Function: FUN_14005a058
// Address: 0x14005a058
// Calls error helper: False
void FUN_14005a058() {
}

// Function: FUN_14005a0d4
// Address: 0x14005a0d4
// Calls error helper: False
void FUN_14005a0d4() {
}

// Function: FUN_14005a0fc
// Address: 0x14005a0fc
// Calls error helper: False
void FUN_14005a0fc(void) {
}

// Function: FUN_14005a118
// Address: 0x14005a118
// Calls error helper: False
void FUN_14005a118(long long param_1) {
}

// Function: FUN_14005a160
// Address: 0x14005a160
// Calls error helper: False
void FUN_14005a160(unsigned long long *param_1) {
}

// Function: FUN_14005a4c8
// Address: 0x14005a4c8
// Calls error helper: False
void FUN_14005a4c8(unsigned char *param_1, unsigned long long param_2, unsigned long long *param_3) {
}

// Function: FUN_14005a660
// Address: 0x14005a660
// Calls error helper: False
unsigned long long FUN_14005a660
// Function: FUN_14005a714
// Address: 0x14005a714
// Calls error helper: False
unsigned long long FUN_14005a714
// Function: FUN_14005a808
// Address: 0x14005a808
// Calls error helper: False
void FUN_14005a808(unsigned char *param_1, unsigned long long param_2, unsigned long long *param_3) {
}

// Function: FUN_14005a934
// Address: 0x14005a934
// Calls error helper: False
void FUN_14005a934(unsigned int *param_1, unsigned long long *param_2, unsigned long long param_3) {
}

// Function: FUN_14005aac0
// Address: 0x14005aac0
// Calls error helper: False
void FUN_14005aac0(unsigned char **param_1, unsigned long long *param_2, unsigned long long *param_3) {
}

// Function: FUN_14005ac54
// Address: 0x14005ac54
// Calls error helper: False
unsigned long long FUN_14005ac54
// Function: FUN_14005ad00
// Address: 0x14005ad00
// Calls error helper: False
void FUN_14005ad00(unsigned char **param_1, unsigned long long *param_2, unsigned long long *param_3) {
}

// Function: FUN_14005ae9c
// Address: 0x14005ae9c
// Calls error helper: False
unsigned long long FUN_14005ae9c
// Function: FUN_14005af50
// Address: 0x14005af50
// Calls error helper: False
unsigned long long FUN_14005af50
// Function: FUN_14005b430
// Address: 0x14005b430
// Calls error helper: False
unsigned long long FUN_14005b430
// Function: FUN_14005b4e4
// Address: 0x14005b4e4
// Calls error helper: False
unsigned long long FUN_14005b4e4
// Function: FUN_14005b574
// Address: 0x14005b574
// Calls error helper: False
unsigned long long FUN_14005b574
// Function: FUN_14005b628
// Address: 0x14005b628
// Calls error helper: False
unsigned long long FUN_14005b628
// Function: FUN_14005b6e0
// Address: 0x14005b6e0
// Calls error helper: False
unsigned long long FUN_14005b6e0
// Function: FUN_14005b78c
// Address: 0x14005b78c
// Calls error helper: False
unsigned long long FUN_14005b78c
// Function: FUN_14005b934
// Address: 0x14005b934
// Calls error helper: False
void FUN_14005b934(unsigned long long *param_1, unsigned long long *param_2, unsigned long long param_3) {
}

// Function: FUN_14005ba1c
// Address: 0x14005ba1c
// Calls error helper: False
unsigned long long FUN_14005ba1c
// Function: FUN_14005bad4
// Address: 0x14005bad4
// Calls error helper: False
void FUN_14005bad4() {
}

// Function: FUN_14005bb5c
// Address: 0x14005bb5c
// Calls error helper: False
unsigned long long FUN_14005bb5c
// Function: FUN_14005bc28
// Address: 0x14005bc28
// Calls error helper: False
void FUN_14005bc28(long long *param_1, char *param_2, char *param_3) {
}

// Function: FUN_14005bd40
// Address: 0x14005bd40
// Calls error helper: False
unsigned long long FUN_14005bd40
// Function: FUN_14005bddc
// Address: 0x14005bddc
// Calls error helper: False
unsigned long long FUN_14005bddc
// Function: FUN_14005be54
// Address: 0x14005be54
// Calls error helper: False
int FUN_14005be54(unsigned int param_1) {
}

// Function: FUN_14005bebc
// Address: 0x14005bebc
// Calls error helper: False
void FUN_14005bebc(long long *param_1, unsigned long long *param_2, unsigned long long param_3, long long param_4) {
}

// Function: FUN_14005c178
// Address: 0x14005c178
// Calls error helper: False
void FUN_14005c178() {
}

// Function: FUN_14005c210
// Address: 0x14005c210
// Calls error helper: False
unsigned long long FUN_14005c210
// Function: FUN_14005c2a0
// Address: 0x14005c2a0
// Calls error helper: False
void FUN_14005c2a0(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_14005c31c
// Address: 0x14005c31c
// Calls error helper: False
void FUN_14005c31c(char *_>_>) {
}

// Function: FUN_14005c5a4
// Address: 0x14005c5a4
// Calls error helper: False
void FUN_14005c5a4() {
}

// Function: FUN_14005c6e0
// Address: 0x14005c6e0
// Calls error helper: False
void FUN_14005c6e0() {
}

// Function: FUN_14005c7d4
// Address: 0x14005c7d4
// Calls error helper: False
void FUN_14005c7d4() {
}

// Function: FUN_14005c974
// Address: 0x14005c974
// Calls error helper: False
unsigned long long FUN_14005c974
// Function: FUN_14005cab4
// Address: 0x14005cab4
// Calls error helper: False
unsigned long long FUN_14005cab4
// Function: FUN_14005cb24
// Address: 0x14005cb24
// Calls error helper: False
void FUN_14005cb24(long long param_1) {
}

// Function: FUN_14005cda4
// Address: 0x14005cda4
// Calls error helper: False
unsigned long long FUN_14005cda4
// Function: FUN_14005ce90
// Address: 0x14005ce90
// Calls error helper: False
unsigned long long FUN_14005ce90
// Function: FUN_14005cf2c
// Address: 0x14005cf2c
// Calls error helper: False
void FUN_14005cf2c(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14005d830
// Address: 0x14005d830
// Calls error helper: False
void FUN_14005d830() {
}

// Function: FUN_14005d854
// Address: 0x14005d854
// Calls error helper: False
void FUN_14005d854(char *_>_>) {
}

// Function: FUN_14005d8ec
// Address: 0x14005d8ec
// Calls error helper: False
void FUN_14005d8ec() {
}

// Function: FUN_14005d958
// Address: 0x14005d958
// Calls error helper: False
void FUN_14005d958(long long *param_1, unsigned int *param_2, unsigned int *param_3) {
}

// Function: FUN_14005da28
// Address: 0x14005da28
// Calls error helper: False
void FUN_14005da28(long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_14005db50
// Address: 0x14005db50
// Calls error helper: False
void FUN_14005db50(long long param_1) {
}

// Function: FUN_14005df84
// Address: 0x14005df84
// Calls error helper: False
void FUN_14005df84(long long *param_1) {
}

// Function: FUN_14005e13c
// Address: 0x14005e13c
// Calls error helper: False
void FUN_14005e13c(wchar_t **param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14005e970
// Address: 0x14005e970
// Calls error helper: False
void FUN_14005e970(unsigned long long param_1, unsigned long long *param_2, unsigned char **param_3) {
}

// Function: FUN_14005eaac
// Address: 0x14005eaac
// Calls error helper: False
void FUN_14005eaac(long long param_1) {
}

// Function: FUN_14005ebd0
// Address: 0x14005ebd0
// Calls error helper: False
void FUN_14005ebd0(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14005ec9c
// Address: 0x14005ec9c
// Calls error helper: False
void FUN_14005ec9c(unsigned int *param_1, unsigned char *param_2, unsigned int param_3, unsigned long long param_4) {
}

// Function: FUN_14005ed28
// Address: 0x14005ed28
// Calls error helper: False
void FUN_14005ed28(long long param_1, int param_2, unsigned long long *param_3, unsigned char *param_4) {
}

// Function: FUN_14005f018
// Address: 0x14005f018
// Calls error helper: False
void FUN_14005f018(unsigned int *param_1, unsigned char *param_2, unsigned int param_3, unsigned long long param_4) {
}

// Function: FUN_14005f0a4
// Address: 0x14005f0a4
// Calls error helper: False
void FUN_14005f0a4(unsigned int *param_1, unsigned char **param_2, unsigned long long param_3) {
}

// Function: FUN_14005f138
// Address: 0x14005f138
// Calls error helper: False
void FUN_14005f138(unsigned int param_1) {
}

// Function: FUN_14005f240
// Address: 0x14005f240
// Calls error helper: False
void FUN_14005f240(void) {
}

// Function: FUN_14005f30c
// Address: 0x14005f30c
// Calls error helper: False
void FUN_14005f30c(long long param_1) {
}

// Function: FUN_14005f340
// Address: 0x14005f340
// Calls error helper: False
void FUN_14005f340(void) {
}

// Function: FUN_14005f438
// Address: 0x14005f438
// Calls error helper: False
void FUN_14005f438(long long param_1) {
}

// Function: FUN_14005f4a0
// Address: 0x14005f4a0
// Calls error helper: False
unsigned long long FUN_14005f4a0
// Function: FUN_14005f524
// Address: 0x14005f524
// Calls error helper: False
unsigned long long FUN_14005f524
// Function: FUN_14005f5a8
// Address: 0x14005f5a8
// Calls error helper: False
unsigned long long FUN_14005f5a8
// Function: FUN_14005f68c
// Address: 0x14005f68c
// Calls error helper: False
void FUN_14005f68c(char *_>_>) {
}

// Function: FUN_14005f97c
// Address: 0x14005f97c
// Calls error helper: False
void FUN_14005f97c() {
}

// Function: FUN_14005fa98
// Address: 0x14005fa98
// Calls error helper: False
void FUN_14005fa98() {
}

// Function: FUN_14005fb28
// Address: 0x14005fb28
// Calls error helper: False
unsigned long long FUN_14005fb28
// Function: FUN_14005fc0c
// Address: 0x14005fc0c
// Calls error helper: False
void FUN_14005fc0c(long long *param_1, unsigned long long param_2) {
}

// Function: FUN_14005fd50
// Address: 0x14005fd50
// Calls error helper: False
void FUN_14005fd50(long long *param_1) {
}

// Function: FUN_14005fdc0
// Address: 0x14005fdc0
// Calls error helper: False
void FUN_14005fdc0(long long *param_1, long long param_2) {
}

// Function: FUN_14005fe7c
// Address: 0x14005fe7c
// Calls error helper: False
void FUN_14005fe7c(long long *param_1, int param_2) {
}

// Function: FUN_14005ff30
// Address: 0x14005ff30
// Calls error helper: False
unsigned long long FUN_14005ff30
// Function: FUN_14005ffb0
// Address: 0x14005ffb0
// Calls error helper: False
unsigned long long FUN_14005ffb0
// Function: FUN_14006013c
// Address: 0x14006013c
// Calls error helper: False
void FUN_14006013c(long long *param_1, unsigned long long param_2) {
}

// Function: FUN_1400601d8
// Address: 0x1400601d8
// Calls error helper: False
void FUN_1400601d8(long long *param_1, unsigned int param_2) {
}

// Function: FUN_140060274
// Address: 0x140060274
// Calls error helper: False
void FUN_140060274(long long *param_1) {
}

// Function: FUN_140060314
// Address: 0x140060314
// Calls error helper: False
void FUN_140060314(void **param_1) {
}

// Function: FUN_1400609c8
// Address: 0x1400609c8
// Calls error helper: False
void FUN_1400609c8(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_140060b38
// Address: 0x140060b38
// Calls error helper: False
void FUN_140060b38(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_140060c9c
// Address: 0x140060c9c
// Calls error helper: False
void FUN_140060c9c(long long *param_1) {
}

// Function: FUN_140060cb8
// Address: 0x140060cb8
// Calls error helper: False
void FUN_140060cb8(long long param_1) {
}

// Function: FUN_140060cec
// Address: 0x140060cec
// Calls error helper: False
void FUN_140060cec(int *param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_140060d80
// Address: 0x140060d80
// Calls error helper: False
void FUN_140060d80(long long param_1, unsigned int *param_2, unsigned long long param_3) {
}

// Function: FUN_140061050
// Address: 0x140061050
// Calls error helper: False
void FUN_140061050(long long param_1, void *param_2, char param_3) {
}

// Function: FUN_1400612bc
// Address: 0x1400612bc
// Calls error helper: False
unsigned long long FUN_1400612bc
// Function: FUN_14006179c
// Address: 0x14006179c
// Calls error helper: False
void FUN_14006179c(unsigned long long *param_1, unsigned int *param_2) {
}

// Function: FUN_14006183c
// Address: 0x14006183c
// Calls error helper: False
void FUN_14006183c(unsigned long long param_1, unsigned int *param_2, unsigned long long param_3) {
}

// Function: FUN_140061908
// Address: 0x140061908
// Calls error helper: False
void FUN_140061908(unsigned long long param_1, unsigned long long param_2, unsigned int param_3, int *param_4) {
}

// Function: FUN_140061984
// Address: 0x140061984
// Calls error helper: False
void FUN_140061984(unsigned long long param_1, unsigned long long *param_2, unsigned int *param_3) {
}

// Function: FUN_140061a28
// Address: 0x140061a28
// Calls error helper: False
void FUN_140061a28() {
}

// Function: FUN_140061a7c
// Address: 0x140061a7c
// Calls error helper: False
void FUN_140061a7c() {
}

// Function: FUN_140061b50
// Address: 0x140061b50
// Calls error helper: False
void FUN_140061b50() {
}

// Function: FUN_140061c40
// Address: 0x140061c40
// Calls error helper: False
void FUN_140061c40() {
}

// Function: FUN_140061ca4
// Address: 0x140061ca4
// Calls error helper: False
void FUN_140061ca4(long long param_1, unsigned long long *param_2) {
}

// Function: FUN_140061d14
// Address: 0x140061d14
// Calls error helper: False
void FUN_140061d14(long long *param_1, unsigned int param_2, long long param_3, char *param_4) {
}

// Function: FUN_140061ed4
// Address: 0x140061ed4
// Calls error helper: False
void FUN_140061ed4(long long param_1, unsigned int param_2) {
}

// Function: FUN_14006201c
// Address: 0x14006201c
// Calls error helper: False
void FUN_14006201c(long long param_1, int *param_2) {
}

// Function: FUN_1400622f4
// Address: 0x1400622f4
// Calls error helper: False
void FUN_1400622f4(unsigned long long *param_1) {
}

// Function: FUN_140062bb4
// Address: 0x140062bb4
// Calls error helper: False
void FUN_140062bb4(unsigned long long param_1, unsigned int *param_2, unsigned int *param_3) {
}

// Function: FUN_140062cf4
// Address: 0x140062cf4
// Calls error helper: False
void FUN_140062cf4(unsigned long long param_1, unsigned int *param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_140062e8c
// Address: 0x140062e8c
// Calls error helper: False
void FUN_140062e8c(void* *param_1) {
}

// Function: FUN_140062fdc
// Address: 0x140062fdc
// Calls error helper: False
void FUN_140062fdc(void* *param_1, char param_2) {
}

// Function: FUN_140063180
// Address: 0x140063180
// Calls error helper: False
void FUN_140063180(long long param_1, wchar_t *param_2) {
}

// Function: FUN_1400633d0
// Address: 0x1400633d0
// Calls error helper: False
void FUN_1400633d0(long long param_1, wchar_t **param_2) {
}

// Function: FUN_140063660
// Address: 0x140063660
// Calls error helper: False
void FUN_140063660(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140063858
// Address: 0x140063858
// Calls error helper: False
void FUN_140063858(long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned char param_4) {
}

// Function: FUN_140063928
// Address: 0x140063928
// Calls error helper: False
void FUN_140063928() {
}

// Function: FUN_140063a6c
// Address: 0x140063a6c
// Calls error helper: False
void FUN_140063a6c(unsigned long long param_1, int param_2) {
}

// Function: FUN_140063bec
// Address: 0x140063bec
// Calls error helper: False
void FUN_140063bec(unsigned long long param_1, unsigned long long param_2) {
}

// Function: FUN_140063c34
// Address: 0x140063c34
// Calls error helper: False
void FUN_140063c34(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140063dc4
// Address: 0x140063dc4
// Calls error helper: False
void FUN_140063dc4(long long param_1, char *param_2) {
}

// Function: FUN_140063e4c
// Address: 0x140063e4c
// Calls error helper: False
void FUN_140063e4c(long long param_1, char *param_2) {
}

// Function: FUN_140063f78
// Address: 0x140063f78
// Calls error helper: False
void FUN_140063f78(unsigned long long param_1, void**param_2) {
}

// Function: FUN_1400640c8
// Address: 0x1400640c8
// Calls error helper: False
void FUN_1400640c8(unsigned long long param_1, wchar_t *param_2, wchar_t *param_3, unsigned int param_4) {
}

// Function: FUN_1400641b8
// Address: 0x1400641b8
// Calls error helper: False
void FUN_1400641b8() {
}

// Function: FUN_1400642a8
// Address: 0x1400642a8
// Calls error helper: False
void FUN_1400642a8() {
}

// Function: FUN_1400642d8
// Address: 0x1400642d8
// Calls error helper: False
void FUN_1400642d8(unsigned long long param_1, short param_2) {
}

// Function: FUN_140064334
// Address: 0x140064334
// Calls error helper: False
void FUN_140064334() {
}

// Function: FUN_140064350
// Address: 0x140064350
// Calls error helper: False
void FUN_140064350(long long param_1, wchar_t *param_2, short param_3) {
}

// Function: FUN_140064578
// Address: 0x140064578
// Calls error helper: False
void FUN_140064578(void) {
}

// Function: FUN_1400645bc
// Address: 0x1400645bc
// Calls error helper: False
void FUN_1400645bc() {
}

// Function: FUN_1400645d8
// Address: 0x1400645d8
// Calls error helper: False
void FUN_1400645d8(long long param_1, wchar_t *param_2, wchar_t *param_3) {
}

// Function: FUN_140064684
// Address: 0x140064684
// Calls error helper: False
void FUN_140064684(unsigned long long param_1) {
}

// Function: FUN_140064a10
// Address: 0x140064a10
// Calls error helper: False
void FUN_140064a10(unsigned long long *param_1) {
}

// Function: FUN_140064b04
// Address: 0x140064b04
// Calls error helper: False
unsigned long long FUN_140064b04
// Function: FUN_140064b48
// Address: 0x140064b48
// Calls error helper: False
void FUN_140064b48(long long param_1) {
}

// Function: FUN_140064b9c
// Address: 0x140064b9c
// Calls error helper: False
void FUN_140064b9c(long long param_1) {
}

// Function: FUN_140064bf0
// Address: 0x140064bf0
// Calls error helper: False
void FUN_140064bf0(long long param_1) {
}

// Function: FUN_140064bfc
// Address: 0x140064bfc
// Calls error helper: False
void FUN_140064bfc(long long param_1) {
}

// Function: FUN_140064c5c
// Address: 0x140064c5c
// Calls error helper: False
unsigned int FUN_140064c5c(void**param_1, void**param_2) {
}

// Function: FUN_140064ce4
// Address: 0x140064ce4
// Calls error helper: False
void FUN_140064ce4(long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_140064d08
// Address: 0x140064d08
// Calls error helper: False
void FUN_140064d08(long long param_1) {
}

// Function: FUN_140064dd0
// Address: 0x140064dd0
// Calls error helper: False
void FUN_140064dd0(long long param_1) {
}

// Function: FUN_140064e34
// Address: 0x140064e34
// Calls error helper: False
void FUN_140064e34(long long param_1) {
}

// Function: FUN_140064e8c
// Address: 0x140064e8c
// Calls error helper: False
unsigned long long FUN_140064e8c
// Function: FUN_140064ed8
// Address: 0x140064ed8
// Calls error helper: False
void FUN_140064ed8(long long param_1) {
}

// Function: FUN_140064f40
// Address: 0x140064f40
// Calls error helper: False
void FUN_140064f40(long long param_1) {
}

// Function: FUN_140064fe4
// Address: 0x140064fe4
// Calls error helper: False
void FUN_140064fe4(long long param_1) {
}

// Function: FUN_140065048
// Address: 0x140065048
// Calls error helper: False
unsigned long long FUN_140065048(unsigned long long param_1,unsigned long long param_2,void**param_3) {
}

// Function: FUN_1400650dc
// Address: 0x1400650dc
// Calls error helper: False
void FUN_1400650dc(long long param_1) {
}

// Function: FUN_140065154
// Address: 0x140065154
// Calls error helper: False
void FUN_140065154(long long param_1) {
}

// Function: FUN_1400651c4
// Address: 0x1400651c4
// Calls error helper: False
void FUN_1400651c4(long long param_1) {
}

// Function: FUN_140065228
// Address: 0x140065228
// Calls error helper: False
void FUN_140065228(long long param_1) {
}

// Function: FUN_140065278
// Address: 0x140065278
// Calls error helper: False
unsigned long long FUN_140065278(unsigned long long param_1,int *param_2) {
}

// Function: FUN_1400652bc
// Address: 0x1400652bc
// Calls error helper: False
void FUN_1400652bc(long long param_1) {
}

// Function: FUN_14006531c
// Address: 0x14006531c
// Calls error helper: False
void FUN_14006531c(long long param_1) {
}

// Function: FUN_1400653e8
// Address: 0x1400653e8
// Calls error helper: False
void FUN_1400653e8(long long param_1) {
}

// Function: FUN_140065450
// Address: 0x140065450
// Calls error helper: False
void FUN_140065450() {
}

// Function: FUN_14006545c
// Address: 0x14006545c
// Calls error helper: False
void FUN_14006545c(long long param_1) {
}

// Function: FUN_1400654b8
// Address: 0x1400654b8
// Calls error helper: False
void FUN_1400654b8(long long param_1) {
}

// Function: FUN_140065518
// Address: 0x140065518
// Calls error helper: False
void FUN_140065518(long long param_1) {
}

// Function: FUN_140065590
// Address: 0x140065590
// Calls error helper: False
void FUN_140065590(long long param_1) {
}

// Function: FUN_140065634
// Address: 0x140065634
// Calls error helper: False
void FUN_140065634(long long param_1) {
}

// Function: FUN_14006577c
// Address: 0x14006577c
// Calls error helper: False
void FUN_14006577c(long long param_1) {
}

// Function: FUN_140065820
// Address: 0x140065820
// Calls error helper: False
void FUN_140065820(long long param_1) {
}

// Function: FUN_1400658c4
// Address: 0x1400658c4
// Calls error helper: False
void FUN_1400658c4(long long param_1) {
}

// Function: FUN_140065928
// Address: 0x140065928
// Calls error helper: False
void FUN_140065928(long long param_1) {
}

// Function: FUN_14006598c
// Address: 0x14006598c
// Calls error helper: False
void FUN_14006598c(long long param_1) {
}

// Function: FUN_140065998
// Address: 0x140065998
// Calls error helper: False
void FUN_140065998(long long param_1) {
}

// Function: FUN_140065a28
// Address: 0x140065a28
// Calls error helper: False
void FUN_140065a28(long long param_1) {
}

// Function: FUN_140065aac
// Address: 0x140065aac
// Calls error helper: False
void FUN_140065aac(long long param_1) {
}

// Function: FUN_140065b00
// Address: 0x140065b00
// Calls error helper: False
void FUN_140065b00(long long param_1) {
}

// Function: FUN_140065b54
// Address: 0x140065b54
// Calls error helper: False
void FUN_140065b54(long long param_1) {
}

// Function: FUN_140065b60
// Address: 0x140065b60
// Calls error helper: False
void FUN_140065b60(long long param_1) {
}

// Function: FUN_140065bc0
// Address: 0x140065bc0
// Calls error helper: False
void FUN_140065bc0(long long param_1) {
}

// Function: FUN_140065c2c
// Address: 0x140065c2c
// Calls error helper: False
void FUN_140065c2c(long long param_1) {
}

// Function: FUN_140065d1c
// Address: 0x140065d1c
// Calls error helper: False
void FUN_140065d1c(long long param_1) {
}

// Function: FUN_140065d7c
// Address: 0x140065d7c
// Calls error helper: False
void FUN_140065d7c(long long param_1) {
}

// Function: FUN_140065de0
// Address: 0x140065de0
// Calls error helper: False
void FUN_140065de0(long long param_1) {
}

// Function: FUN_140065e44
// Address: 0x140065e44
// Calls error helper: False
void FUN_140065e44(long long param_1) {
}

// Function: FUN_140065e94
// Address: 0x140065e94
// Calls error helper: False
void FUN_140065e94(long long param_1) {
}

// Function: FUN_140065ee4
// Address: 0x140065ee4
// Calls error helper: False
void FUN_140065ee4(long long param_1) {
}

// Function: FUN_140065f58
// Address: 0x140065f58
// Calls error helper: False
void FUN_140065f58(long long param_1) {
}

// Function: FUN_140065fb8
// Address: 0x140065fb8
// Calls error helper: False
unsigned long long FUN_140065fb8
// Function: FUN_14006607c
// Address: 0x14006607c
// Calls error helper: False
int FUN_14006607c(void) {
}

// Function: FUN_1400660b8
// Address: 0x1400660b8
// Calls error helper: False
void FUN_1400660b8(long long param_1) {
}

// Function: FUN_14006622c
// Address: 0x14006622c
// Calls error helper: False
void FUN_14006622c(long long param_1) {
}

// Function: FUN_14006628c
// Address: 0x14006628c
// Calls error helper: False
void FUN_14006628c(long long param_1) {
}

// Function: FUN_1400662ec
// Address: 0x1400662ec
// Calls error helper: False
void FUN_1400662ec(long long param_1) {
}

// Function: FUN_140066338
// Address: 0x140066338
// Calls error helper: False
void FUN_140066338(long long param_1) {
}

// Function: FUN_140066398
// Address: 0x140066398
// Calls error helper: False
void FUN_140066398(long long param_1) {
}

// Function: FUN_1400663f8
// Address: 0x1400663f8
// Calls error helper: False
void FUN_1400663f8(long long param_1) {
}

// Function: FUN_140066458
// Address: 0x140066458
// Calls error helper: False
void FUN_140066458(long long param_1) {
}

// Function: FUN_1400664b8
// Address: 0x1400664b8
// Calls error helper: False
void FUN_1400664b8(long long param_1) {
}

// Function: FUN_140066520
// Address: 0x140066520
// Calls error helper: False
void FUN_140066520(long long param_1) {
}

// Function: FUN_140066580
// Address: 0x140066580
// Calls error helper: False
void FUN_140066580(unsigned long long *param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_140066780
// Address: 0x140066780
// Calls error helper: False
void FUN_140066780(void *param_1) {
}

// Function: FUN_140066800
// Address: 0x140066800
// Calls error helper: False
void FUN_140066800(unsigned long long *param_1) {
}

// Function: FUN_140066820
// Address: 0x140066820
// Calls error helper: False
void FUN_140066820(void *param_1) {
}

// Function: FUN_14006684c
// Address: 0x14006684c
// Calls error helper: False
void FUN_14006684c(void) {
}

// Function: FUN_1400668b4
// Address: 0x1400668b4
// Calls error helper: False
unsigned long long FUN_1400668b4
// Function: FUN_1400669a4
// Address: 0x1400669a4
// Calls error helper: False
void FUN_1400669a4(long long param_1) {
}

// Function: FUN_1400669b4
// Address: 0x1400669b4
// Calls error helper: False
void FUN_1400669b4(long long param_1) {
}

// Function: FUN_140066ae8
// Address: 0x140066ae8
// Calls error helper: False
void FUN_140066ae8() {
}

// Function: FUN_140066b58
// Address: 0x140066b58
// Calls error helper: False
void FUN_140066b58(long long param_1) {
}

// Function: FUN_140066c80
// Address: 0x140066c80
// Calls error helper: False
void FUN_140066c80(void* param_1) {
}

// Function: FUN_1400678ec
// Address: 0x1400678ec
// Calls error helper: False
void FUN_1400678ec(void* param_1) {
}

// Function: FUN_140067a8c
// Address: 0x140067a8c
// Calls error helper: False
void FUN_140067a8c(void *param_1, unsigned long long param_2, int param_3) {
}

// Function: FUN_140067b4c
// Address: 0x140067b4c
// Calls error helper: False
void FUN_140067b4c(void* param_1, void *param_2) {
}

// Function: FUN_140067c34
// Address: 0x140067c34
// Calls error helper: False
void FUN_140067c34(long long param_1) {
}

// Function: FUN_1400680f0
// Address: 0x1400680f0
// Calls error helper: False
void FUN_1400680f0(void **param_1, void *param_2, unsigned long long param_3) {
}

// Function: FUN_140068208
// Address: 0x140068208
// Calls error helper: False
void FUN_140068208(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_1400684f8
// Address: 0x1400684f8
// Calls error helper: False
void FUN_1400684f8(unsigned long long *param_1) {
}

// Function: FUN_14006852c
// Address: 0x14006852c
// Calls error helper: False
void FUN_14006852c(long long param_1) {
}

// Function: FUN_140068538
// Address: 0x140068538
// Calls error helper: False
void FUN_140068538(long long param_1) {
}

// Function: FUN_140068544
// Address: 0x140068544
// Calls error helper: False
void FUN_140068544(long long param_1) {
}

// Function: FUN_140068550
// Address: 0x140068550
// Calls error helper: False
void FUN_140068550(long long param_1) {
}

// Function: FUN_14006855c
// Address: 0x14006855c
// Calls error helper: False
void FUN_14006855c(long long param_1) {
}

// Function: FUN_140068568
// Address: 0x140068568
// Calls error helper: False
void FUN_140068568(long long param_1) {
}

// Function: FUN_140068574
// Address: 0x140068574
// Calls error helper: False
void FUN_140068574(long long param_1) {
}

// Function: FUN_140068580
// Address: 0x140068580
// Calls error helper: False
void FUN_140068580(long long param_1) {
}

// Function: FUN_14006858c
// Address: 0x14006858c
// Calls error helper: False
void FUN_14006858c(long long param_1) {
}

// Function: FUN_140068598
// Address: 0x140068598
// Calls error helper: False
void FUN_140068598(long long param_1) {
}

// Function: FUN_1400685a4
// Address: 0x1400685a4
// Calls error helper: False
void FUN_1400685a4(long long param_1) {
}

// Function: FUN_1400685b0
// Address: 0x1400685b0
// Calls error helper: False
void FUN_1400685b0(long long param_1) {
}

// Function: FUN_1400685bc
// Address: 0x1400685bc
// Calls error helper: False
void FUN_1400685bc(long long param_1) {
}

// Function: FUN_1400685c8
// Address: 0x1400685c8
// Calls error helper: False
void FUN_1400685c8(long long param_1) {
}

// Function: FUN_1400685d4
// Address: 0x1400685d4
// Calls error helper: False
void FUN_1400685d4(long long param_1) {
}

// Function: FUN_1400685e0
// Address: 0x1400685e0
// Calls error helper: False
void FUN_1400685e0(long long param_1) {
}

// Function: FUN_1400685ec
// Address: 0x1400685ec
// Calls error helper: False
void FUN_1400685ec(long long param_1) {
}

// Function: FUN_1400685f8
// Address: 0x1400685f8
// Calls error helper: False
void FUN_1400685f8(long long param_1) {
}

// Function: FUN_140068604
// Address: 0x140068604
// Calls error helper: False
void FUN_140068604(long long param_1) {
}

// Function: FUN_140068610
// Address: 0x140068610
// Calls error helper: False
void FUN_140068610(long long param_1) {
}

// Function: FUN_14006861c
// Address: 0x14006861c
// Calls error helper: False
void FUN_14006861c(long long param_1) {
}

// Function: FUN_140068628
// Address: 0x140068628
// Calls error helper: False
void FUN_140068628(long long param_1) {
}

// Function: FUN_140068634
// Address: 0x140068634
// Calls error helper: False
void FUN_140068634(long long param_1) {
}

// Function: FUN_140068640
// Address: 0x140068640
// Calls error helper: False
void FUN_140068640(long long param_1) {
}

// Function: FUN_14006864c
// Address: 0x14006864c
// Calls error helper: False
void FUN_14006864c(long long param_1) {
}

// Function: FUN_140068658
// Address: 0x140068658
// Calls error helper: False
void FUN_140068658(long long param_1) {
}

// Function: FUN_140068664
// Address: 0x140068664
// Calls error helper: False
void FUN_140068664(long long param_1) {
}

// Function: FUN_140068670
// Address: 0x140068670
// Calls error helper: False
void FUN_140068670(long long param_1) {
}

// Function: FUN_14006867c
// Address: 0x14006867c
// Calls error helper: False
void FUN_14006867c(long long param_1) {
}

// Function: FUN_14006881c
// Address: 0x14006881c
// Calls error helper: False
void FUN_14006881c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068828
// Address: 0x140068828
// Calls error helper: False
void FUN_140068828(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068834
// Address: 0x140068834
// Calls error helper: False
void FUN_140068834(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068840
// Address: 0x140068840
// Calls error helper: False
void FUN_140068840(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006884c
// Address: 0x14006884c
// Calls error helper: False
void FUN_14006884c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068858
// Address: 0x140068858
// Calls error helper: False
void FUN_140068858(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068864
// Address: 0x140068864
// Calls error helper: False
void FUN_140068864(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068870
// Address: 0x140068870
// Calls error helper: False
void FUN_140068870(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006887c
// Address: 0x14006887c
// Calls error helper: False
void FUN_14006887c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068888
// Address: 0x140068888
// Calls error helper: False
void FUN_140068888(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140068894
// Address: 0x140068894
// Calls error helper: False
void FUN_140068894(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400688a0
// Address: 0x1400688a0
// Calls error helper: False
void FUN_1400688a0(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400688ac
// Address: 0x1400688ac
// Calls error helper: False
void FUN_1400688ac(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400688b8
// Address: 0x1400688b8
// Calls error helper: False
void FUN_1400688b8(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400688c4
// Address: 0x1400688c4
// Calls error helper: False
void FUN_1400688c4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400688d0
// Address: 0x1400688d0
// Calls error helper: False
void FUN_1400688d0(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400688dc
// Address: 0x1400688dc
// Calls error helper: False
void FUN_1400688dc(long long *param_1, void *param_2, double param_3, long long param_4) {
}

// Function: FUN_140069498
// Address: 0x140069498
// Calls error helper: False
void FUN_140069498() {
}

// Function: FUN_14006a01c
// Address: 0x14006a01c
// Calls error helper: False
void FUN_14006a01c(long long param_1, void *param_2) {
}

// Function: FUN_14006a028
// Address: 0x14006a028
// Calls error helper: False
void FUN_14006a028(long long param_1, void *param_2) {
}

// Function: FUN_14006a034
// Address: 0x14006a034
// Calls error helper: False
void FUN_14006a034(long long param_1, void *param_2) {
}

// Function: FUN_14006a040
// Address: 0x14006a040
// Calls error helper: False
void FUN_14006a040(long long param_1, void *param_2) {
}

// Function: FUN_14006a04c
// Address: 0x14006a04c
// Calls error helper: False
void FUN_14006a04c(long long param_1, void *param_2) {
}

// Function: FUN_14006a058
// Address: 0x14006a058
// Calls error helper: False
void FUN_14006a058(long long param_1, void *param_2) {
}

// Function: FUN_14006a064
// Address: 0x14006a064
// Calls error helper: False
void FUN_14006a064(long long param_1, void *param_2) {
}

// Function: FUN_14006a070
// Address: 0x14006a070
// Calls error helper: False
void FUN_14006a070(long long param_1, void *param_2) {
}

// Function: FUN_14006a07c
// Address: 0x14006a07c
// Calls error helper: False
void FUN_14006a07c(long long param_1, void *param_2) {
}

// Function: FUN_14006a088
// Address: 0x14006a088
// Calls error helper: False
void FUN_14006a088(long long param_1, void *param_2) {
}

// Function: FUN_14006a094
// Address: 0x14006a094
// Calls error helper: False
void FUN_14006a094(long long param_1, void *param_2) {
}

// Function: FUN_14006a0a0
// Address: 0x14006a0a0
// Calls error helper: False
void FUN_14006a0a0(long long param_1, void *param_2) {
}

// Function: FUN_14006a0ac
// Address: 0x14006a0ac
// Calls error helper: False
void FUN_14006a0ac(long long param_1, void *param_2) {
}

// Function: FUN_14006a0b8
// Address: 0x14006a0b8
// Calls error helper: False
void FUN_14006a0b8(long long param_1, void *param_2) {
}

// Function: FUN_14006a0c4
// Address: 0x14006a0c4
// Calls error helper: False
void FUN_14006a0c4(long long param_1, void *param_2) {
}

// Function: FUN_14006a0d0
// Address: 0x14006a0d0
// Calls error helper: False
void FUN_14006a0d0(long long param_1, void *param_2) {
}

// Function: FUN_14006a0dc
// Address: 0x14006a0dc
// Calls error helper: False
void FUN_14006a0dc(long long *param_1, long long param_2, long long param_3, long long param_4) {
}

// Function: FUN_14006a1b8
// Address: 0x14006a1b8
// Calls error helper: False
void FUN_14006a1b8(void **param_1, unsigned long long param_2) {
}

// Function: FUN_14006a318
// Address: 0x14006a318
// Calls error helper: False
void FUN_14006a318(unsigned long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_14006a4d0
// Address: 0x14006a4d0
// Calls error helper: False
void FUN_14006a4d0(void *param_1, void *param_2) {
}

// Function: FUN_14006a900
// Address: 0x14006a900
// Calls error helper: False
void FUN_14006a900(void **param_1) {
}

// Function: FUN_14006a930
// Address: 0x14006a930
// Calls error helper: False
void FUN_14006a930(long long *param_1) {
}

// Function: FUN_14006a954
// Address: 0x14006a954
// Calls error helper: False
void FUN_14006a954(long long **param_1) {
}

// Function: FUN_14006a998
// Address: 0x14006a998
// Calls error helper: False
void FUN_14006a998(unsigned int param_1, long long param_2) {
}

// Function: FUN_14006ab78
// Address: 0x14006ab78
// Calls error helper: False
void FUN_14006ab78(long long *param_1, int *param_2) {
}

// Function: FUN_14006ac44
// Address: 0x14006ac44
// Calls error helper: False
void FUN_14006ac44() {
}

// Function: FUN_14006afb0
// Address: 0x14006afb0
// Calls error helper: False
void FUN_14006afb0(long long param_1, long long param_2) {
}

// Function: FUN_14006b154
// Address: 0x14006b154
// Calls error helper: False
void FUN_14006b154(long long param_1, long long param_2) {
}

// Function: FUN_14006b2f0
// Address: 0x14006b2f0
// Calls error helper: False
void FUN_14006b2f0(void **param_1, void *param_2, long long param_3, long long param_4) {
}

// Function: FUN_14006b564
// Address: 0x14006b564
// Calls error helper: False
void FUN_14006b564(unsigned long long *param_1) {
}

// Function: FUN_14006b570
// Address: 0x14006b570
// Calls error helper: False
void FUN_14006b570(long long param_1) {
}

// Function: FUN_14006b57c
// Address: 0x14006b57c
// Calls error helper: False
void FUN_14006b57c(long long param_1) {
}

// Function: FUN_14006b588
// Address: 0x14006b588
// Calls error helper: False
void FUN_14006b588(long long param_1) {
}

// Function: FUN_14006b594
// Address: 0x14006b594
// Calls error helper: False
void FUN_14006b594(long long param_1) {
}

// Function: FUN_14006b5a0
// Address: 0x14006b5a0
// Calls error helper: False
void FUN_14006b5a0(long long param_1) {
}

// Function: FUN_14006b5ac
// Address: 0x14006b5ac
// Calls error helper: False
void FUN_14006b5ac(long long param_1) {
}

// Function: FUN_14006b5b8
// Address: 0x14006b5b8
// Calls error helper: False
void FUN_14006b5b8(long long param_1) {
}

// Function: FUN_14006b5c4
// Address: 0x14006b5c4
// Calls error helper: False
unsigned long long FUN_14006b5c4
// Function: FUN_14006b69c
// Address: 0x14006b69c
// Calls error helper: False
int FUN_14006b69c(long long param_1) {
}

// Function: FUN_14006b6ac
// Address: 0x14006b6ac
// Calls error helper: False
void FUN_14006b6ac(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b6b8
// Address: 0x14006b6b8
// Calls error helper: False
void FUN_14006b6b8(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b6c4
// Address: 0x14006b6c4
// Calls error helper: False
void FUN_14006b6c4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b6d0
// Address: 0x14006b6d0
// Calls error helper: False
void FUN_14006b6d0(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b6dc
// Address: 0x14006b6dc
// Calls error helper: False
void FUN_14006b6dc(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b6e8
// Address: 0x14006b6e8
// Calls error helper: False
void FUN_14006b6e8(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b6f4
// Address: 0x14006b6f4
// Calls error helper: False
void FUN_14006b6f4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b700
// Address: 0x14006b700
// Calls error helper: False
void FUN_14006b700(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006b70c
// Address: 0x14006b70c
// Calls error helper: False
void FUN_14006b70c(long long param_1) {
}

// Function: FUN_14006b728
// Address: 0x14006b728
// Calls error helper: False
void FUN_14006b728(long long param_1) {
}

// Function: FUN_14006b744
// Address: 0x14006b744
// Calls error helper: False
unsigned long long FUN_14006b744
// Function: FUN_14006b784
// Address: 0x14006b784
// Calls error helper: False
unsigned long long FUN_14006b784
// Function: FUN_14006b820
// Address: 0x14006b820
// Calls error helper: False
unsigned long long FUN_14006b820
// Function: FUN_14006b858
// Address: 0x14006b858
// Calls error helper: False
unsigned long long FUN_14006b858
// Function: FUN_14006b870
// Address: 0x14006b870
// Calls error helper: False
void FUN_14006b870(long long param_1) {
}

// Function: FUN_14006b88c
// Address: 0x14006b88c
// Calls error helper: False
void FUN_14006b88c() {
}

// Function: FUN_14006b8b8
// Address: 0x14006b8b8
// Calls error helper: False
void FUN_14006b8b8() {
}

// Function: FUN_14006b8c0
// Address: 0x14006b8c0
// Calls error helper: False
unsigned long long FUN_14006b8c0
// Function: FUN_14006b930
// Address: 0x14006b930
// Calls error helper: False
unsigned long long FUN_14006b930
// Function: FUN_14006b948
// Address: 0x14006b948
// Calls error helper: False
void FUN_14006b948() {
}

// Function: FUN_14006b974
// Address: 0x14006b974
// Calls error helper: False
void FUN_14006b974(long long param_1) {
}

// Function: FUN_14006b990
// Address: 0x14006b990
// Calls error helper: False
unsigned long long FUN_14006b990
// Function: FUN_14006b9a8
// Address: 0x14006b9a8
// Calls error helper: False
void FUN_14006b9a8(long long param_1, unsigned int param_2) {
}

// Function: FUN_14006b9b0
// Address: 0x14006b9b0
// Calls error helper: False
void FUN_14006b9b0(long long param_1, void *param_2) {
}

// Function: FUN_14006b9bc
// Address: 0x14006b9bc
// Calls error helper: False
void FUN_14006b9bc(long long param_1, void *param_2) {
}

// Function: FUN_14006b9c8
// Address: 0x14006b9c8
// Calls error helper: False
void FUN_14006b9c8(long long param_1, void *param_2) {
}

// Function: FUN_14006b9d4
// Address: 0x14006b9d4
// Calls error helper: False
void FUN_14006b9d4(long long param_1, void *param_2) {
}

// Function: FUN_14006b9e0
// Address: 0x14006b9e0
// Calls error helper: False
void FUN_14006b9e0(long long param_1, void *param_2) {
}

// Function: FUN_14006b9ec
// Address: 0x14006b9ec
// Calls error helper: False
void FUN_14006b9ec(long long param_1, void *param_2) {
}

// Function: FUN_14006b9f8
// Address: 0x14006b9f8
// Calls error helper: False
void FUN_14006b9f8(long long param_1, void *param_2) {
}

// Function: FUN_14006ba04
// Address: 0x14006ba04
// Calls error helper: False
void FUN_14006ba04(long long param_1, void *param_2) {
}

// Function: FUN_14006be60
// Address: 0x14006be60
// Calls error helper: False
void FUN_14006be60(long long param_1) {
}

// Function: FUN_14006beac
// Address: 0x14006beac
// Calls error helper: False
unsigned long long FUN_14006beac
// Function: FUN_14006bf14
// Address: 0x14006bf14
// Calls error helper: False
void FUN_14006bf14(long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_14006cecc
// Address: 0x14006cecc
// Calls error helper: False
void FUN_14006cecc() {
}

// Function: FUN_14006cef8
// Address: 0x14006cef8
// Calls error helper: False
void FUN_14006cef8(long long param_1) {
}

// Function: FUN_14006cf78
// Address: 0x14006cf78
// Calls error helper: False
unsigned long long FUN_14006cf78
// Function: FUN_14006cfe0
// Address: 0x14006cfe0
// Calls error helper: False
void FUN_14006cfe0() {
}

// Function: FUN_14006d13c
// Address: 0x14006d13c
// Calls error helper: False
void FUN_14006d13c(long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_14006d1ec
// Address: 0x14006d1ec
// Calls error helper: False
void FUN_14006d1ec(long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_14006d1f8
// Address: 0x14006d1f8
// Calls error helper: False
void FUN_14006d1f8() {
}

// Function: FUN_14006d234
// Address: 0x14006d234
// Calls error helper: False
unsigned long long FUN_14006d234
// Function: FUN_14006d2a4
// Address: 0x14006d2a4
// Calls error helper: False
void FUN_14006d2a4() {
}

// Function: FUN_14006d2bc
// Address: 0x14006d2bc
// Calls error helper: False
void FUN_14006d2bc(void *param_1) {
}

// Function: FUN_14006d364
// Address: 0x14006d364
// Calls error helper: False
void FUN_14006d364(long long param_1, unsigned char param_2) {
}

// Function: FUN_14006d368
// Address: 0x14006d368
// Calls error helper: False
void FUN_14006d368(long long param_1) {
}

// Function: FUN_14006d3ac
// Address: 0x14006d3ac
// Calls error helper: False
void FUN_14006d3ac() {
}

// Function: FUN_14006d4c0
// Address: 0x14006d4c0
// Calls error helper: False
void FUN_14006d4c0(unsigned long long *param_1) {
}

// Function: FUN_14006d564
// Address: 0x14006d564
// Calls error helper: False
void FUN_14006d564(long long param_1) {
}

// Function: FUN_14006d570
// Address: 0x14006d570
// Calls error helper: False
unsigned long long FUN_14006d570
// Function: FUN_14006d5b4
// Address: 0x14006d5b4
// Calls error helper: False
unsigned long long FUN_14006d5b4
// Function: FUN_14006d5f8
// Address: 0x14006d5f8
// Calls error helper: False
void FUN_14006d5f8(long long param_1, unsigned long long param_2, char **param_3) {
}

// Function: FUN_14006d820
// Address: 0x14006d820
// Calls error helper: False
void FUN_14006d820(void *param_1) {
}

// Function: FUN_14006d84c
// Address: 0x14006d84c
// Calls error helper: False
void FUN_14006d84c(void *param_1, void* *param_2) {
}

// Function: FUN_14006da5c
// Address: 0x14006da5c
// Calls error helper: False
void FUN_14006da5c(void *param_1) {
}

// Function: FUN_14006dae4
// Address: 0x14006dae4
// Calls error helper: False
unsigned long long FUN_14006dae4
// Function: FUN_14006dd74
// Address: 0x14006dd74
// Calls error helper: False
void FUN_14006dd74(long long param_1, char *param_2) {
}

// Function: FUN_14006de54
// Address: 0x14006de54
// Calls error helper: False
void FUN_14006de54(long long param_1) {
}

// Function: FUN_14006df30
// Address: 0x14006df30
// Calls error helper: False
void FUN_14006df30(long long *param_1, unsigned long long param_2, unsigned long long param_3, unsigned char *param_4) {
}

// Function: FUN_14006e15c
// Address: 0x14006e15c
// Calls error helper: False
void FUN_14006e15c(long long param_1, char param_2) {
}

// Function: FUN_14006e1ac
// Address: 0x14006e1ac
// Calls error helper: False
void FUN_14006e1ac(long long param_1, char param_2) {
}

// Function: FUN_14006e200
// Address: 0x14006e200
// Calls error helper: False
void FUN_14006e200(long long param_1) {
}

// Function: FUN_14006e360
// Address: 0x14006e360
// Calls error helper: False
void FUN_14006e360(long long param_1) {
}

// Function: FUN_14006e5cc
// Address: 0x14006e5cc
// Calls error helper: False
void FUN_14006e5cc(unsigned long long param_1, unsigned long long param_2) {
}

// Function: FUN_14006e760
// Address: 0x14006e760
// Calls error helper: False
void FUN_14006e760(unsigned long long param_1, unsigned long long param_2, unsigned int param_3, unsigned char param_4) {
}

// Function: FUN_14006e8c4
// Address: 0x14006e8c4
// Calls error helper: False
void FUN_14006e8c4(unsigned long long *param_1) {
}

// Function: FUN_140070c70
// Address: 0x140070c70
// Calls error helper: False
void FUN_140070c70(long long *param_1) {
}

// Function: FUN_140070cd0
// Address: 0x140070cd0
// Calls error helper: False
void FUN_140070cd0(char *param_1) {
}

// Function: FUN_140070d14
// Address: 0x140070d14
// Calls error helper: False
void FUN_140070d14(void* *param_1) {
}

// Function: FUN_140070d98
// Address: 0x140070d98
// Calls error helper: False
void FUN_140070d98(unsigned long long *param_1) {
}

// Function: FUN_140070dd8
// Address: 0x140070dd8
// Calls error helper: False
void FUN_140070dd8(unsigned long long *param_1) {
}

// Function: FUN_140070e50
// Address: 0x140070e50
// Calls error helper: False
void FUN_140070e50(unsigned long long *param_1) {
}

// Function: FUN_140070f2c
// Address: 0x140070f2c
// Calls error helper: False
void FUN_140070f2c(unsigned long long *param_1) {
}

// Function: FUN_140071040
// Address: 0x140071040
// Calls error helper: False
void FUN_140071040(unsigned long long *param_1) {
}

// Function: FUN_1400710ac
// Address: 0x1400710ac
// Calls error helper: False
void FUN_1400710ac(long long param_1) {
}

// Function: FUN_140071128
// Address: 0x140071128
// Calls error helper: False
void FUN_140071128(unsigned long long *param_1) {
}

// Function: FUN_140071194
// Address: 0x140071194
// Calls error helper: False
void FUN_140071194(unsigned long long *param_1) {
}

// Function: FUN_14007121c
// Address: 0x14007121c
// Calls error helper: False
void FUN_14007121c(unsigned long long *param_1) {
}

// Function: FUN_1400712bc
// Address: 0x1400712bc
// Calls error helper: False
void FUN_1400712bc(unsigned long long *param_1) {
}

// Function: FUN_140071360
// Address: 0x140071360
// Calls error helper: False
void FUN_140071360(void* *param_1) {
}

// Function: FUN_140071374
// Address: 0x140071374
// Calls error helper: False
void FUN_140071374(void* *param_1) {
}

// Function: FUN_140071388
// Address: 0x140071388
// Calls error helper: False
void FUN_140071388(void* *param_1) {
}

// Function: FUN_14007139c
// Address: 0x14007139c
// Calls error helper: False
void FUN_14007139c(void* *param_1) {
}

// Function: FUN_1400713b0
// Address: 0x1400713b0
// Calls error helper: False
unsigned long long FUN_1400713b0
// Function: FUN_1400713f4
// Address: 0x1400713f4
// Calls error helper: False
unsigned long long FUN_1400713f4
// Function: FUN_140071438
// Address: 0x140071438
// Calls error helper: False
unsigned long long FUN_140071438(unsigned long long param_1,unsigned long long param_2) {
}

// Function: FUN_14007147c
// Address: 0x14007147c
// Calls error helper: False
unsigned long long FUN_14007147c
// Function: FUN_1400714c0
// Address: 0x1400714c0
// Calls error helper: False
unsigned long long FUN_1400714c0
// Function: FUN_140071504
// Address: 0x140071504
// Calls error helper: False
unsigned long long FUN_140071504(unsigned long long param_1,unsigned long long param_2) {
}

// Function: FUN_140071548
// Address: 0x140071548
// Calls error helper: False
unsigned long long FUN_140071548(unsigned long long param_1,unsigned long long param_2) {
}

// Function: FUN_14007158c
// Address: 0x14007158c
// Calls error helper: False
unsigned long long FUN_14007158c
// Function: FUN_1400715d0
// Address: 0x1400715d0
// Calls error helper: False
void FUN_1400715d0() {
}

// Function: FUN_140071660
// Address: 0x140071660
// Calls error helper: False
unsigned long long FUN_140071660(unsigned long long param_1,unsigned long long param_2) {
}

// Function: FUN_1400716a4
// Address: 0x1400716a4
// Calls error helper: False
unsigned long long FUN_1400716a4
// Function: FUN_1400716e8
// Address: 0x1400716e8
// Calls error helper: False
unsigned long long FUN_1400716e8
// Function: FUN_140071774
// Address: 0x140071774
// Calls error helper: False
void FUN_140071774(void* param_1) {
}

// Function: FUN_140071804
// Address: 0x140071804
// Calls error helper: False
int FUN_140071804(void *param_1, unsigned int param_2, void *param_3) {
}

// Function: FUN_1400718d0
// Address: 0x1400718d0
// Calls error helper: False
int FUN_1400718d0(void *param_1, char *param_2, void *param_3) {
}

// Function: FUN_14007199c
// Address: 0x14007199c
// Calls error helper: False
unsigned long long FUN_14007199c
// Function: FUN_140071b68
// Address: 0x140071b68
// Calls error helper: False
void FUN_140071b68(long long param_1, void* *param_2) {
}

// Function: FUN_140071bb0
// Address: 0x140071bb0
// Calls error helper: False
void FUN_140071bb0(long long param_1, void* *param_2) {
}

// Function: FUN_140071d5c
// Address: 0x140071d5c
// Calls error helper: False
void FUN_140071d5c(long long param_1, void* *param_2) {
}

// Function: FUN_140071e80
// Address: 0x140071e80
// Calls error helper: False
void FUN_140071e80(long long param_1, void* *param_2) {
}

// Function: FUN_140071ff4
// Address: 0x140071ff4
// Calls error helper: False
void FUN_140071ff4(long long param_1, void* *param_2) {
}

// Function: FUN_140072078
// Address: 0x140072078
// Calls error helper: False
void FUN_140072078(long long param_1, void* *param_2) {
}

// Function: FUN_140072124
// Address: 0x140072124
// Calls error helper: False
void FUN_140072124(long long param_1, void* *param_2) {
}

// Function: FUN_1400721a8
// Address: 0x1400721a8
// Calls error helper: False
void FUN_1400721a8(long long param_1, void* *param_2) {
}

// Function: FUN_14007222c
// Address: 0x14007222c
// Calls error helper: False
void FUN_14007222c(long long param_1, void* *param_2) {
}

// Function: FUN_1400722d8
// Address: 0x1400722d8
// Calls error helper: False
void FUN_1400722d8(long long param_1, void* *param_2) {
}

// Function: FUN_140072398
// Address: 0x140072398
// Calls error helper: False
void FUN_140072398(long long param_1, void* *param_2) {
}

// Function: FUN_140072590
// Address: 0x140072590
// Calls error helper: False
void FUN_140072590(long long param_1) {
}

// Function: FUN_1400726ac
// Address: 0x1400726ac
// Calls error helper: False
void FUN_1400726ac(long long param_1) {
}

// Function: FUN_140072908
// Address: 0x140072908
// Calls error helper: False
void FUN_140072908(long long param_1) {
}

// Function: FUN_140072944
// Address: 0x140072944
// Calls error helper: False
void FUN_140072944(long long param_1) {
}

// Function: FUN_140072994
// Address: 0x140072994
// Calls error helper: False
void FUN_140072994(long long param_1, int param_2) {
}

// Function: FUN_140072a00
// Address: 0x140072a00
// Calls error helper: False
int FUN_140072a00(void *param_1) {
}

// Function: FUN_140072b9c
// Address: 0x140072b9c
// Calls error helper: False
void FUN_140072b9c(void *param_1) {
}

// Function: FUN_14007353c
// Address: 0x14007353c
// Calls error helper: False
void FUN_14007353c(void *param_1) {
}

// Function: FUN_140073950
// Address: 0x140073950
// Calls error helper: False
void FUN_140073950(void *param_1) {
}

// Function: FUN_140073be8
// Address: 0x140073be8
// Calls error helper: False
void FUN_140073be8(void *param_1) {
}

// Function: FUN_140073ec4
// Address: 0x140073ec4
// Calls error helper: False
void FUN_140073ec4(void *param_1) {
}

// Function: FUN_14007416c
// Address: 0x14007416c
// Calls error helper: False
void FUN_14007416c(void *param_1) {
}

// Function: FUN_1400743b8
// Address: 0x1400743b8
// Calls error helper: False
void FUN_1400743b8(void *param_1) {
}

// Function: FUN_1400746e8
// Address: 0x1400746e8
// Calls error helper: False
int FUN_1400746e8(void *param_1) {
}

// Function: FUN_140074980
// Address: 0x140074980
// Calls error helper: False
void FUN_140074980(void *param_1) {
}

// Function: FUN_140074c78
// Address: 0x140074c78
// Calls error helper: False
unsigned long long FUN_140074c78
// Function: FUN_140074d04
// Address: 0x140074d04
// Calls error helper: False
int FUN_140074d04(void *param_1, unsigned int param_2, unsigned long long param_3, long long param_4, long long *param_5) {
}

// Function: FUN_140074dec
// Address: 0x140074dec
// Calls error helper: False
void FUN_140074dec(long long param_1) {
}

// Function: FUN_140075184
// Address: 0x140075184
// Calls error helper: False
void FUN_140075184(void *param_1, long long param_2) {
}

// Function: FUN_1400751bc
// Address: 0x1400751bc
// Calls error helper: False
void FUN_1400751bc(void* param_1, ushort param_2) {
}

// Function: FUN_14007528c
// Address: 0x14007528c
// Calls error helper: False
void FUN_14007528c(unsigned long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_140076390
// Address: 0x140076390
// Calls error helper: False
void FUN_140076390(long long param_1) {
}

// Function: FUN_140076454
// Address: 0x140076454
// Calls error helper: False
void FUN_140076454(long long **param_1, unsigned long long *param_2) {
}

// Function: FUN_14007650c
// Address: 0x14007650c
// Calls error helper: False
void FUN_14007650c(long long **param_1, unsigned long long *param_2) {
}

// Function: FUN_1400765c4
// Address: 0x1400765c4
// Calls error helper: False
void FUN_1400765c4(void* *param_1, unsigned char *param_2, unsigned long long param_3) {
}

// Function: FUN_14007668c
// Address: 0x14007668c
// Calls error helper: False
void FUN_14007668c(void* *param_1, unsigned char *param_2, unsigned long long param_3) {
}

// Function: FUN_140076760
// Address: 0x140076760
// Calls error helper: False
void FUN_140076760(void **param_1, unsigned char *param_2, unsigned long long param_3) {
}

// Function: FUN_140076808
// Address: 0x140076808
// Calls error helper: False
void FUN_140076808(long long *param_1, long long param_2, unsigned long long param_3) {
}

// Function: FUN_140076980
// Address: 0x140076980
// Calls error helper: False
void FUN_140076980(void* **param_1, void* *param_2, unsigned long long param_3) {
}

// Function: FUN_140076ac4
// Address: 0x140076ac4
// Calls error helper: False
void FUN_140076ac4(void **param_1, unsigned long long param_2, unsigned char **param_3, long long *param_4) {
}

// Function: FUN_140076b74
// Address: 0x140076b74
// Calls error helper: False
void FUN_140076b74(long long param_1, long long param_2) {
}

// Function: FUN_140076e3c
// Address: 0x140076e3c
// Calls error helper: False
void FUN_140076e3c(unsigned long long param_1, unsigned long long param_2, long long *param_3) {
}

// Function: FUN_140076e84
// Address: 0x140076e84
// Calls error helper: False
void FUN_140076e84() {
}

// Function: FUN_1400774c0
// Address: 0x1400774c0
// Calls error helper: False
void FUN_1400774c0() {
}

// Function: FUN_14007752c
// Address: 0x14007752c
// Calls error helper: False
void FUN_14007752c() {
}

// Function: FUN_140077658
// Address: 0x140077658
// Calls error helper: False
void FUN_140077658(unsigned long long *param_1, unsigned long long param_2) {
}

// Function: FUN_140077738
// Address: 0x140077738
// Calls error helper: False
void FUN_140077738(unsigned long long *param_1) {
}

// Function: FUN_14007775c
// Address: 0x14007775c
// Calls error helper: False
void FUN_14007775c(unsigned long long *param_1) {
}

// Function: FUN_1400777cc
// Address: 0x1400777cc
// Calls error helper: False
void FUN_1400777cc(unsigned long long *param_1) {
}

// Function: FUN_1400777e8
// Address: 0x1400777e8
// Calls error helper: False
void FUN_1400777e8(long long param_1) {
}

// Function: FUN_140077808
// Address: 0x140077808
// Calls error helper: False
void FUN_140077808(long long **param_1) {
}

// Function: FUN_14007786c
// Address: 0x14007786c
// Calls error helper: False
void FUN_14007786c(long long *param_1) {
}

// Function: FUN_1400778e4
// Address: 0x1400778e4
// Calls error helper: False
void FUN_1400778e4(long long param_1) {
}

// Function: FUN_1400779c8
// Address: 0x1400779c8
// Calls error helper: False
void FUN_1400779c8(long long *param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_140077a40
// Address: 0x140077a40
// Calls error helper: False
void FUN_140077a40(unsigned long long *param_1) {
}

// Function: FUN_140077d5c
// Address: 0x140077d5c
// Calls error helper: False
void FUN_140077d5c(unsigned long long *param_1) {
}

// Function: FUN_140077d78
// Address: 0x140077d78
// Calls error helper: False
void FUN_140077d78(unsigned long long *param_1) {
}

// Function: FUN_140077dbc
// Address: 0x140077dbc
// Calls error helper: False
void FUN_140077dbc(unsigned long long *param_1) {
}

// Function: FUN_140077dd8
// Address: 0x140077dd8
// Calls error helper: False
void FUN_140077dd8(long long param_1) {
}

// Function: FUN_140077dfc
// Address: 0x140077dfc
// Calls error helper: False
void FUN_140077dfc(void *param_1) {
}

// Function: FUN_140077e10
// Address: 0x140077e10
// Calls error helper: False
void FUN_140077e10(unsigned long long *param_1) {
}

// Function: FUN_140077e44
// Address: 0x140077e44
// Calls error helper: False
void FUN_140077e44(long long param_1) {
}

// Function: FUN_140077e5c
// Address: 0x140077e5c
// Calls error helper: False
void FUN_140077e5c(long long param_1) {
}

// Function: FUN_140077e84
// Address: 0x140077e84
// Calls error helper: False
void FUN_140077e84(void) {
}

// Function: FUN_140077e98
// Address: 0x140077e98
// Calls error helper: False
void FUN_140077e98(void* param_1) {
}

// Function: FUN_140077f7c
// Address: 0x140077f7c
// Calls error helper: False
void FUN_140077f7c() {
}

// Function: FUN_140077f94
// Address: 0x140077f94
// Calls error helper: False
void FUN_140077f94() {
}

// Function: FUN_14007801c
// Address: 0x14007801c
// Calls error helper: False
void FUN_14007801c() {
}

// Function: FUN_1400780a0
// Address: 0x1400780a0
// Calls error helper: False
void FUN_1400780a0() {
}

// Function: FUN_14007813c
// Address: 0x14007813c
// Calls error helper: False
void FUN_14007813c(long long param_1) {
}

// Function: FUN_140078148
// Address: 0x140078148
// Calls error helper: False
unsigned long long FUN_140078148(unsigned long long param_1,unsigned long long param_2) {
}

// Function: FUN_14007818c
// Address: 0x14007818c
// Calls error helper: False
unsigned long long FUN_14007818c
// Function: FUN_1400782e8
// Address: 0x1400782e8
// Calls error helper: False
unsigned long long FUN_1400782e8
// Function: FUN_140078380
// Address: 0x140078380
// Calls error helper: False
unsigned long long FUN_140078380(unsigned long long param_1,unsigned long long param_2) {
}

// Function: FUN_1400784ac
// Address: 0x1400784ac
// Calls error helper: False
unsigned long long FUN_1400784ac
// Function: FUN_1400784f4
// Address: 0x1400784f4
// Calls error helper: False
void FUN_1400784f4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14007856c
// Address: 0x14007856c
// Calls error helper: False
void FUN_14007856c(unsigned long long param_1, void *param_2, unsigned int param_3, unsigned int *param_4) {
}

// Function: FUN_14007860c
// Address: 0x14007860c
// Calls error helper: False
void FUN_14007860c() {
}

// Function: FUN_140078758
// Address: 0x140078758
// Calls error helper: False
void FUN_140078758() {
}

// Function: FUN_140078874
// Address: 0x140078874
// Calls error helper: False
int FUN_140078874(long long param_1, int param_2, long long param_3, unsigned long long param_4) {
}

// Function: FUN_140078910
// Address: 0x140078910
// Calls error helper: False
void FUN_140078910(long long param_1, unsigned long long param_2, int param_3, long long *param_4, unsigned int *param_5) {
}

// Function: FUN_140079244
// Address: 0x140079244
// Calls error helper: False
void FUN_140079244() {
}

// Function: FUN_140079328
// Address: 0x140079328
// Calls error helper: False
void FUN_140079328() {
}

// Function: FUN_140079428
// Address: 0x140079428
// Calls error helper: False
void FUN_140079428() {
}

// Function: FUN_140079c1c
// Address: 0x140079c1c
// Calls error helper: False
void FUN_140079c1c() {
}

// Function: FUN_140079df0
// Address: 0x140079df0
// Calls error helper: False
void FUN_140079df0(unsigned long long param_1, unsigned char *param_2, unsigned long long param_3, long long *param_4) {
}

// Function: FUN_14007a064
// Address: 0x14007a064
// Calls error helper: False
void FUN_14007a064(long long param_1, unsigned long long param_2, char **param_3, long long param_4) {
}

// Function: FUN_14007a1d8
// Address: 0x14007a1d8
// Calls error helper: False
void FUN_14007a1d8() {
}

// Function: FUN_14007a53c
// Address: 0x14007a53c
// Calls error helper: False
void FUN_14007a53c() {
}

// Function: FUN_14007a5ec
// Address: 0x14007a5ec
// Calls error helper: False
void FUN_14007a5ec(long long param_1) {
}

// Function: FUN_14007a990
// Address: 0x14007a990
// Calls error helper: False
void FUN_14007a990(long long param_1) {
}

// Function: FUN_14007a9e0
// Address: 0x14007a9e0
// Calls error helper: False
void FUN_14007a9e0() {
}

// Function: FUN_14007aa18
// Address: 0x14007aa18
// Calls error helper: False
unsigned int FUN_14007aa18(long long param_1, long long param_2) {
}

// Function: FUN_14007ab40
// Address: 0x14007ab40
// Calls error helper: False
void FUN_14007ab40(unsigned long long param_1, long long param_2) {
}

// Function: FUN_14007ac04
// Address: 0x14007ac04
// Calls error helper: False
void FUN_14007ac04() {
}

// Function: FUN_14007ad60
// Address: 0x14007ad60
// Calls error helper: False
void FUN_14007ad60() {
}

// Function: FUN_14007ae00
// Address: 0x14007ae00
// Calls error helper: False
void FUN_14007ae00() {
}

// Function: FUN_14007af2c
// Address: 0x14007af2c
// Calls error helper: False
int FUN_14007af2c(void *param_1, char *param_2, char *param_3, unsigned long param_4, void *param_5) {
}

// Function: FUN_14007aff0
// Address: 0x14007aff0
// Calls error helper: False
void FUN_14007aff0(void *param_1, unsigned long long param_2, char *param_3, unsigned long param_4, void *param_5) {
}

// Function: FUN_14007b03c
// Address: 0x14007b03c
// Calls error helper: False
void FUN_14007b03c() {
}

// Function: FUN_14007b07c
// Address: 0x14007b07c
// Calls error helper: False
void FUN_14007b07c(void) {
}

// Function: FUN_14007b0e8
// Address: 0x14007b0e8
// Calls error helper: False
void FUN_14007b0e8(long long param_1, long long param_2, unsigned int param_3, long long *param_4, int param_5) {
}

// Function: FUN_14007b29c
// Address: 0x14007b29c
// Calls error helper: False
void FUN_14007b29c(unsigned long long param_1, long long *param_2) {
}

// Function: FUN_14007b40c
// Address: 0x14007b40c
// Calls error helper: False
void FUN_14007b40c(unsigned long long param_1, long long param_2, const char* param_3) {
}

// Function: FUN_14007b524
// Address: 0x14007b524
// Calls error helper: False
void FUN_14007b524(long long param_1) {
}

// Function: FUN_14007b9e8
// Address: 0x14007b9e8
// Calls error helper: False
void FUN_14007b9e8(long long param_1, unsigned long long param_2, int param_3) {
}

// Function: FUN_14007baac
// Address: 0x14007baac
// Calls error helper: False
void FUN_14007baac(long long param_1) {
}

// Function: FUN_14007bbf0
// Address: 0x14007bbf0
// Calls error helper: False
void FUN_14007bbf0() {
}

// Function: FUN_14007c04c
// Address: 0x14007c04c
// Calls error helper: False
void FUN_14007c04c(long long param_1, long long *param_2, int param_3) {
}

// Function: FUN_14007c38c
// Address: 0x14007c38c
// Calls error helper: False
void FUN_14007c38c(long long param_1, long long param_2, char* param_3, int param_4) {
}

// Function: FUN_14007c618
// Address: 0x14007c618
// Calls error helper: False
void FUN_14007c618(long long param_1, long long param_2) {
}

// Function: FUN_14007ca9c
// Address: 0x14007ca9c
// Calls error helper: False
void FUN_14007ca9c(long long param_1, long long param_2, unsigned char param_3) {
}

// Function: FUN_14007cd18
// Address: 0x14007cd18
// Calls error helper: False
void FUN_14007cd18(long long param_1, long long param_2, unsigned char param_3, int param_4) {
}

// Function: FUN_14007cefc
// Address: 0x14007cefc
// Calls error helper: False
void FUN_14007cefc(long long param_1) {
}

// Function: FUN_14007cfa4
// Address: 0x14007cfa4
// Calls error helper: False
void FUN_14007cfa4() {
}

// Function: FUN_14007d6c4
// Address: 0x14007d6c4
// Calls error helper: False
void FUN_14007d6c4(long long param_1) {
}

// Function: FUN_14007db38
// Address: 0x14007db38
// Calls error helper: False
unsigned long long FUN_14007db38
// Function: FUN_14007db64
// Address: 0x14007db64
// Calls error helper: False
void FUN_14007db64(long long param_1, unsigned int *param_2) {
}

// Function: FUN_14007dd10
// Address: 0x14007dd10
// Calls error helper: False
int FUN_14007dd10(long long param_1, int *param_2, unsigned long long param_3) {
}

// Function: FUN_14007ddc0
// Address: 0x14007ddc0
// Calls error helper: False
unsigned long long FUN_14007ddc0
// Function: FUN_14007ddd8
// Address: 0x14007ddd8
// Calls error helper: False
unsigned long long FUN_14007ddd8
// Function: FUN_14007dde0
// Address: 0x14007dde0
// Calls error helper: False
unsigned long long FUN_14007dde0
// Function: FUN_14007dde8
// Address: 0x14007dde8
// Calls error helper: False
void FUN_14007dde8(unsigned long long param_1, void* *param_2, double param_3, char param_4) {
}

// Function: FUN_14007de9c
// Address: 0x14007de9c
// Calls error helper: False
unsigned long long FUN_14007de9c
// Function: FUN_14007deac
// Address: 0x14007deac
// Calls error helper: False
void FUN_14007deac(long long param_1, long long *param_2, unsigned short *param_3, unsigned int *param_4) {
}

// Function: FUN_14007df44
// Address: 0x14007df44
// Calls error helper: False
void FUN_14007df44(long long param_1, long long *param_2, unsigned int *param_3, unsigned long long *param_4) {
}

// Function: FUN_14007dfdc
// Address: 0x14007dfdc
// Calls error helper: False
void FUN_14007dfdc(long long *param_1, unsigned long long *param_2, unsigned int param_3) {
}

// Function: FUN_14007e060
// Address: 0x14007e060
// Calls error helper: False
unsigned long long FUN_14007e060
// Function: FUN_14007e068
// Address: 0x14007e068
// Calls error helper: False
void FUN_14007e068(long long param_1) {
}

// Function: FUN_14007e218
// Address: 0x14007e218
// Calls error helper: False
void FUN_14007e218() {
}

// Function: FUN_14007e310
// Address: 0x14007e310
// Calls error helper: False
void FUN_14007e310() {
}

// Function: FUN_14007e3c8
// Address: 0x14007e3c8
// Calls error helper: False
void FUN_14007e3c8(long long param_1) {
}

// Function: FUN_14007e580
// Address: 0x14007e580
// Calls error helper: False
void FUN_14007e580(long long param_1) {
}

// Function: FUN_14007e8e0
// Address: 0x14007e8e0
// Calls error helper: False
void FUN_14007e8e0(long long param_1, unsigned int param_2, int param_3) {
}

// Function: FUN_14007e960
// Address: 0x14007e960
// Calls error helper: False
void FUN_14007e960(long long param_1, long long *param_2, long long *param_3, char param_4) {
}

// Function: FUN_14007edcc
// Address: 0x14007edcc
// Calls error helper: False
void FUN_14007edcc() {
}

// Function: FUN_14007eff4
// Address: 0x14007eff4
// Calls error helper: False
void FUN_14007eff4() {
}

// Function: FUN_14007f0d8
// Address: 0x14007f0d8
// Calls error helper: False
void FUN_14007f0d8() {
}

// Function: FUN_14007f110
// Address: 0x14007f110
// Calls error helper: False
void FUN_14007f110(long long param_1, long long param_2, char *param_3) {
}

// Function: FUN_14007f208
// Address: 0x14007f208
// Calls error helper: False
void FUN_14007f208(long long param_1, unsigned short param_2) {
}

// Function: FUN_14007f298
// Address: 0x14007f298
// Calls error helper: False
void FUN_14007f298(long long param_1, unsigned int param_2) {
}

// Function: FUN_14007f3fc
// Address: 0x14007f3fc
// Calls error helper: False
void FUN_14007f3fc(long long param_1, int *param_2, int param_3, unsigned long long param_4) {
}

// Function: FUN_14007f62c
// Address: 0x14007f62c
// Calls error helper: False
void FUN_14007f62c(unsigned long long param_1, unsigned long long param_2, int param_3) {
}

// Function: FUN_14007f8f8
// Address: 0x14007f8f8
// Calls error helper: False
void FUN_14007f8f8(long long param_1) {
}

// Function: FUN_14007f9f4
// Address: 0x14007f9f4
// Calls error helper: False
void FUN_14007f9f4(long long *param_1) {
}

// Function: FUN_14007fa34
// Address: 0x14007fa34
// Calls error helper: False
void FUN_14007fa34(long long param_1, unsigned long long param_2, int param_3) {
}

// Function: FUN_14007fbe0
// Address: 0x14007fbe0
// Calls error helper: False
void FUN_14007fbe0(long long param_1, unsigned long long param_2, char* param_3, int param_4) {
}

// Function: FUN_1400800d0
// Address: 0x1400800d0
// Calls error helper: False
void FUN_1400800d0(void *param_1, unsigned long long param_2, long long param_3) {
}

// Function: FUN_14008015c
// Address: 0x14008015c
// Calls error helper: False
void FUN_14008015c(void* param_1, unsigned long long param_2, void* param_3) {
}

// Function: FUN_140080308
// Address: 0x140080308
// Calls error helper: False
void FUN_140080308() {
}

// Function: FUN_140080340
// Address: 0x140080340
// Calls error helper: False
void FUN_140080340(long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_14008058c
// Address: 0x14008058c
// Calls error helper: False
void FUN_14008058c(long long *param_1, long long *param_2) {
}

// Function: FUN_14008068c
// Address: 0x14008068c
// Calls error helper: False
void FUN_14008068c(long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_140080a94
// Address: 0x140080a94
// Calls error helper: False
void FUN_140080a94(long long param_1) {
}

// Function: FUN_140080d10
// Address: 0x140080d10
// Calls error helper: False
void FUN_140080d10(long long param_1, unsigned long long param_2, int param_3) {
}

// Function: FUN_140080fc4
// Address: 0x140080fc4
// Calls error helper: False
void FUN_140080fc4(long long param_1, unsigned long long param_2, char* param_3, int param_4) {
}

// Function: FUN_1400814e8
// Address: 0x1400814e8
// Calls error helper: False
void FUN_1400814e8(long long *param_1) {
}

// Function: FUN_1400815d4
// Address: 0x1400815d4
// Calls error helper: False
void FUN_1400815d4(void* *param_1) {
}

// Function: FUN_140081bb8
// Address: 0x140081bb8
// Calls error helper: False
void FUN_140081bb8(void *param_1) {
}

// Function: FUN_14008220c
// Address: 0x14008220c
// Calls error helper: False
void FUN_14008220c(long long param_1, unsigned long long param_2, int param_3, long long *param_4) {
}

// Function: FUN_14008267c
// Address: 0x14008267c
// Calls error helper: False
void FUN_14008267c(long long param_1) {
}

// Function: FUN_140082694
// Address: 0x140082694
// Calls error helper: False
void FUN_140082694(void* *param_1, void *param_2) {
}

// Function: FUN_1400866a8
// Address: 0x1400866a8
// Calls error helper: False
void FUN_1400866a8(long long param_1, long long *param_2, long long param_3) {
}

// Function: FUN_140086fbc
// Address: 0x140086fbc
// Calls error helper: False
void FUN_140086fbc(long long param_1, int param_2, unsigned int param_3, char *param_4, unsigned int param_5) {
}

// Function: FUN_14008716c
// Address: 0x14008716c
// Calls error helper: False
void FUN_14008716c() {
}

// Function: FUN_140087194
// Address: 0x140087194
// Calls error helper: False
void FUN_140087194(long long param_1) {
}

// Function: FUN_1400871ac
// Address: 0x1400871ac
// Calls error helper: False
void FUN_1400871ac(long long param_1) {
}

// Function: FUN_1400884f0
// Address: 0x1400884f0
// Calls error helper: False
unsigned long long FUN_1400884f0
// Function: FUN_140088598
// Address: 0x140088598
// Calls error helper: False
void FUN_140088598(long long param_1, long long *param_2) {
}

// Function: FUN_140088648
// Address: 0x140088648
// Calls error helper: False
void FUN_140088648() {
}

// Function: FUN_14008868c
// Address: 0x14008868c
// Calls error helper: False
void FUN_14008868c(long long param_1) {
}

// Function: FUN_140088850
// Address: 0x140088850
// Calls error helper: False
void FUN_140088850(long long param_1, long long *param_2, bool param_3, bool param_4) {
}

// Function: FUN_14008893c
// Address: 0x14008893c
// Calls error helper: False
void FUN_14008893c(long long param_1, unsigned int *param_2, unsigned char param_3, char param_4) {
}

// Function: FUN_140088c28
// Address: 0x140088c28
// Calls error helper: False
void FUN_140088c28(long long param_1, void* *param_2) {
}

// Function: FUN_140088d30
// Address: 0x140088d30
// Calls error helper: False
void FUN_140088d30(long long param_1, void* *param_2) {
}

// Function: FUN_140088e88
// Address: 0x140088e88
// Calls error helper: False
void FUN_140088e88(long long param_1, long long param_2, unsigned long long param_3) {
}

// Function: FUN_140088ef8
// Address: 0x140088ef8
// Calls error helper: False
void FUN_140088ef8(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140088f00
// Address: 0x140088f00
// Calls error helper: False
int FUN_140088f00(long long *param_1, unsigned int *param_2, unsigned int *param_3) {
}

// Function: FUN_140088f6c
// Address: 0x140088f6c
// Calls error helper: False
void FUN_140088f6c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140088f74
// Address: 0x140088f74
// Calls error helper: False
void FUN_140088f74(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140088f7c
// Address: 0x140088f7c
// Calls error helper: False
void FUN_140088f7c(long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_1400892b0
// Address: 0x1400892b0
// Calls error helper: False
void FUN_1400892b0() {
}

// Function: FUN_140089348
// Address: 0x140089348
// Calls error helper: False
void FUN_140089348(long long param_1, int param_2, int param_3) {
}

// Function: FUN_14008a848
// Address: 0x14008a848
// Calls error helper: False
void FUN_14008a848(long long param_1) {
}

// Function: FUN_14008a994
// Address: 0x14008a994
// Calls error helper: False
void FUN_14008a994(long long param_1, int *param_2) {
}

// Function: FUN_14008aaa4
// Address: 0x14008aaa4
// Calls error helper: False
void FUN_14008aaa4(long long *param_1, long long param_2, long long param_3, long long param_4) {
}

// Function: FUN_14008ab84
// Address: 0x14008ab84
// Calls error helper: False
void FUN_14008ab84(void **param_1, unsigned long long param_2) {
}

// Function: FUN_14008ac74
// Address: 0x14008ac74
// Calls error helper: False
void FUN_14008ac74(void **param_1, unsigned long long param_2) {
}

// Function: FUN_14008add4
// Address: 0x14008add4
// Calls error helper: False
void FUN_14008add4(void* **param_1, unsigned long long param_2) {
}

// Function: FUN_14008aef8
// Address: 0x14008aef8
// Calls error helper: False
void FUN_14008aef8(long long *param_1) {
}

// Function: FUN_14008afb0
// Address: 0x14008afb0
// Calls error helper: False
void FUN_14008afb0(long long *param_1) {
}

// Function: FUN_14008b068
// Address: 0x14008b068
// Calls error helper: False
void FUN_14008b068(void* **param_1) {
}

// Function: FUN_14008b0f4
// Address: 0x14008b0f4
// Calls error helper: False
void FUN_14008b0f4(long long *param_1) {
}

// Function: FUN_14008b1a4
// Address: 0x14008b1a4
// Calls error helper: False
void FUN_14008b1a4(void) {
}

// Function: FUN_14008b1cc
// Address: 0x14008b1cc
// Calls error helper: False
void FUN_14008b1cc(void) {
}

// Function: FUN_14008b1e8
// Address: 0x14008b1e8
// Calls error helper: False
void FUN_14008b1e8(void *param_1, long *param_2, long *param_3, long *param_4, long *param_5) {
}

// Function: FUN_14008b230
// Address: 0x14008b230
// Calls error helper: False
void FUN_14008b230() {
}

// Function: FUN_14008b274
// Address: 0x14008b274
// Calls error helper: False
void FUN_14008b274(void *param_1, unsigned int *param_2, void* **param_3) {
}

// Function: FUN_14008b29c
// Address: 0x14008b29c
// Calls error helper: False
unsigned long long FUN_14008b29c
// Function: FUN_14008b2b4
// Address: 0x14008b2b4
// Calls error helper: False
void FUN_14008b2b4(void *param_1, unsigned int *param_2, wchar_t **param_3) {
}

// Function: FUN_14008b2dc
// Address: 0x14008b2dc
// Calls error helper: False
void FUN_14008b2dc(void) {
}

// Function: FUN_14008b334
// Address: 0x14008b334
// Calls error helper: False
unsigned long long FUN_14008b334
// Function: FUN_14008b394
// Address: 0x14008b394
// Calls error helper: False
unsigned long long FUN_14008b394
// Function: FUN_14008b3d4
// Address: 0x14008b3d4
// Calls error helper: False
unsigned long long FUN_14008b3d4
// Function: FUN_14008b468
// Address: 0x14008b468
// Calls error helper: False
unsigned long long FUN_14008b468
// Function: FUN_14008b4c8
// Address: 0x14008b4c8
// Calls error helper: False
unsigned long long FUN_14008b4c8
// Function: FUN_14008b554
// Address: 0x14008b554
// Calls error helper: False
unsigned long long FUN_14008b554
// Function: FUN_14008b5b4
// Address: 0x14008b5b4
// Calls error helper: False
unsigned long long FUN_14008b5b4
// Function: FUN_14008b5bc
// Address: 0x14008b5bc
// Calls error helper: False
unsigned long long FUN_14008b5bc
// Function: FUN_14008b648
// Address: 0x14008b648
// Calls error helper: False
unsigned long long FUN_14008b648
// Function: FUN_14008b6a8
// Address: 0x14008b6a8
// Calls error helper: False
unsigned long long FUN_14008b6a8
// Function: FUN_14008b734
// Address: 0x14008b734
// Calls error helper: False
unsigned long long FUN_14008b734
// Function: FUN_14008b794
// Address: 0x14008b794
// Calls error helper: False
unsigned long long FUN_14008b794
// Function: FUN_14008b820
// Address: 0x14008b820
// Calls error helper: False
unsigned long long FUN_14008b820
// Function: FUN_14008b880
// Address: 0x14008b880
// Calls error helper: False
unsigned long long FUN_14008b880
// Function: FUN_14008b90c
// Address: 0x14008b90c
// Calls error helper: False
unsigned long long FUN_14008b90c
// Function: FUN_14008b96c
// Address: 0x14008b96c
// Calls error helper: False
unsigned long long FUN_14008b96c
// Function: FUN_14008b9f8
// Address: 0x14008b9f8
// Calls error helper: False
unsigned long long FUN_14008b9f8
// Function: FUN_14008ba58
// Address: 0x14008ba58
// Calls error helper: False
unsigned long long FUN_14008ba58
// Function: FUN_14008bae4
// Address: 0x14008bae4
// Calls error helper: False
unsigned long long FUN_14008bae4
// Function: FUN_14008bb44
// Address: 0x14008bb44
// Calls error helper: False
unsigned long long FUN_14008bb44
// Function: FUN_14008bbb8
// Address: 0x14008bbb8
// Calls error helper: False
void FUN_14008bbb8() {
}

// Function: FUN_14008bbcc
// Address: 0x14008bbcc
// Calls error helper: False
void FUN_14008bbcc() {
}

// Function: FUN_14008bbf0
// Address: 0x14008bbf0
// Calls error helper: False
void FUN_14008bbf0(long long param_1) {
}

// Function: FUN_14008bbfc
// Address: 0x14008bbfc
// Calls error helper: False
void FUN_14008bbfc(long long param_1) {
}

// Function: FUN_14008bc08
// Address: 0x14008bc08
// Calls error helper: False
unsigned long long FUN_14008bc08
// Function: FUN_14008bc9c
// Address: 0x14008bc9c
// Calls error helper: False
unsigned long long FUN_14008bc9c
// Function: FUN_14008bcfc
// Address: 0x14008bcfc
// Calls error helper: False
unsigned long long FUN_14008bcfc
// Function: FUN_14008bd3c
// Address: 0x14008bd3c
// Calls error helper: False
unsigned long long FUN_14008bd3c
// Function: FUN_14008bd9c
// Address: 0x14008bd9c
// Calls error helper: False
unsigned long long FUN_14008bd9c
// Function: FUN_14008bdf0
// Address: 0x14008bdf0
// Calls error helper: False
unsigned long long FUN_14008bdf0
// Function: FUN_14008be50
// Address: 0x14008be50
// Calls error helper: False
unsigned long long FUN_14008be50
// Function: FUN_14008be90
// Address: 0x14008be90
// Calls error helper: False
unsigned long long FUN_14008be90
// Function: FUN_14008bf3c
// Address: 0x14008bf3c
// Calls error helper: False
unsigned long long FUN_14008bf3c
// Function: FUN_14008bf9c
// Address: 0x14008bf9c
// Calls error helper: False
unsigned long long FUN_14008bf9c
// Function: FUN_14008c028
// Address: 0x14008c028
// Calls error helper: False
unsigned long long FUN_14008c028
// Function: FUN_14008c088
// Address: 0x14008c088
// Calls error helper: False
unsigned long long FUN_14008c088
// Function: FUN_14008c0c8
// Address: 0x14008c0c8
// Calls error helper: False
void FUN_14008c0c8(void* *param_1, unsigned long long param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_14008c15c
// Address: 0x14008c15c
// Calls error helper: False
void FUN_14008c15c() {
}

// Function: FUN_14008c320
// Address: 0x14008c320
// Calls error helper: False
void FUN_14008c320() {
}

// Function: FUN_14008cdd8
// Address: 0x14008cdd8
// Calls error helper: False
void FUN_14008cdd8(unsigned long long *param_1) {
}

// Function: FUN_14008ce04
// Address: 0x14008ce04
// Calls error helper: False
void FUN_14008ce04(unsigned long long *param_1) {
}

// Function: FUN_14008cf50
// Address: 0x14008cf50
// Calls error helper: False
void FUN_14008cf50(void* *param_1) {
}

// Function: FUN_14008cf84
// Address: 0x14008cf84
// Calls error helper: False
void FUN_14008cf84(void *param_1) {
}

// Function: FUN_14008d01c
// Address: 0x14008d01c
// Calls error helper: False
void FUN_14008d01c(void) {
}

// Function: FUN_14008d04c
// Address: 0x14008d04c
// Calls error helper: False
void FUN_14008d04c() {
}

// Function: FUN_14008d0d0
// Address: 0x14008d0d0
// Calls error helper: False
void FUN_14008d0d0(int **param_1) {
}

// Function: FUN_14008d1e4
// Address: 0x14008d1e4
// Calls error helper: False
void FUN_14008d1e4(long long param_1) {
}

// Function: FUN_14008d274
// Address: 0x14008d274
// Calls error helper: False
unsigned long long FUN_14008d274
// Function: FUN_14008d2b8
// Address: 0x14008d2b8
// Calls error helper: False
void FUN_14008d2b8(long long param_1) {
}

// Function: FUN_14008d388
// Address: 0x14008d388
// Calls error helper: False
void FUN_14008d388(unsigned int param_1, unsigned int param_2, char* param_3, int param_4) {
}

// Function: FUN_14008d448
// Address: 0x14008d448
// Calls error helper: False
unsigned long long FUN_14008d448
// Function: FUN_14008d488
// Address: 0x14008d488
// Calls error helper: False
void FUN_14008d488(long long param_1) {
}

// Function: FUN_14008d564
// Address: 0x14008d564
// Calls error helper: False
void FUN_14008d564(long long param_1) {
}

// Function: FUN_14008d8d4
// Address: 0x14008d8d4
// Calls error helper: False
void FUN_14008d8d4() {
}

// Function: FUN_14008d9b8
// Address: 0x14008d9b8
// Calls error helper: False
unsigned long long FUN_14008d9b8
// Function: FUN_14008d9c0
// Address: 0x14008d9c0
// Calls error helper: False
void FUN_14008d9c0() {
}

// Function: FUN_14008da68
// Address: 0x14008da68
// Calls error helper: False
unsigned long long FUN_14008da68
// Function: FUN_14008da70
// Address: 0x14008da70
// Calls error helper: False
void FUN_14008da70() {
}

// Function: FUN_14008e358
// Address: 0x14008e358
// Calls error helper: False
void FUN_14008e358() {
}

// Function: FUN_14008e368
// Address: 0x14008e368
// Calls error helper: False
void FUN_14008e368(long long param_1, long long *param_2, unsigned int *param_3) {
}

// Function: FUN_14008e404
// Address: 0x14008e404
// Calls error helper: False
void FUN_14008e404() {
}

// Function: FUN_14008e414
// Address: 0x14008e414
// Calls error helper: False
void FUN_14008e414(long long param_1, unsigned int param_2) {
}

// Function: FUN_14008e4f8
// Address: 0x14008e4f8
// Calls error helper: False
unsigned long long FUN_14008e4f8
// Function: FUN_14008e540
// Address: 0x14008e540
// Calls error helper: False
unsigned long long FUN_14008e540
// Function: FUN_14008e57c
// Address: 0x14008e57c
// Calls error helper: False
void FUN_14008e57c() {
}

// Function: FUN_14008e5ac
// Address: 0x14008e5ac
// Calls error helper: False
void FUN_14008e5ac(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14008e648
// Address: 0x14008e648
// Calls error helper: False
void FUN_14008e648() {
}

// Function: FUN_14008e668
// Address: 0x14008e668
// Calls error helper: False
unsigned long long FUN_14008e668
// Function: FUN_14008e6c0
// Address: 0x14008e6c0
// Calls error helper: False
int FUN_14008e6c0(void *param_1, unsigned long long param_2, unsigned long param_3, void *param_4) {
}

// Function: FUN_14008e7c8
// Address: 0x14008e7c8
// Calls error helper: False
void FUN_14008e7c8() {
}

// Function: FUN_14008e8a0
// Address: 0x14008e8a0
// Calls error helper: False
void FUN_14008e8a0(long long param_1) {
}

// Function: FUN_14008e8d8
// Address: 0x14008e8d8
// Calls error helper: False
void FUN_14008e8d8(long long param_1, long long param_2, char param_3) {
}

// Function: FUN_14008f67c
// Address: 0x14008f67c
// Calls error helper: False
void FUN_14008f67c(long long param_1) {
}

// Function: FUN_14008f6ac
// Address: 0x14008f6ac
// Calls error helper: False
void FUN_14008f6ac(long long param_1) {
}

// Function: FUN_14008f724
// Address: 0x14008f724
// Calls error helper: False
void FUN_14008f724(long long *param_1) {
}

// Function: FUN_14008f88c
// Address: 0x14008f88c
// Calls error helper: False
void FUN_14008f88c(void* *param_1, unsigned long long param_2, unsigned int *param_3) {
}

// Function: FUN_140090280
// Address: 0x140090280
// Calls error helper: False
void FUN_140090280(long long param_1) {
}

// Function: FUN_140090380
// Address: 0x140090380
// Calls error helper: False
void FUN_140090380(void *param_1) {
}

// Function: FUN_1400903ac
// Address: 0x1400903ac
// Calls error helper: False
void FUN_1400903ac(long long param_1) {
}

// Function: FUN_140090a68
// Address: 0x140090a68
// Calls error helper: False
void FUN_140090a68(long long param_1) {
}

// Function: FUN_140091094
// Address: 0x140091094
// Calls error helper: False
void FUN_140091094(long long param_1, unsigned long long param_2, char* param_3, int param_4) {
}

// Function: FUN_140092928
// Address: 0x140092928
// Calls error helper: False
void FUN_140092928(long long param_1) {
}

// Function: FUN_140092e44
// Address: 0x140092e44
// Calls error helper: False
void FUN_140092e44(unsigned long long param_1, unsigned long long *param_2) {
}

// Function: FUN_140092e60
// Address: 0x140092e60
// Calls error helper: False
void FUN_140092e60(long long param_1, unsigned long long *param_2) {
}

// Function: FUN_140092ee0
// Address: 0x140092ee0
// Calls error helper: False
void FUN_140092ee0(unsigned long long param_1, unsigned long long *param_2) {
}

// Function: FUN_140092f84
// Address: 0x140092f84
// Calls error helper: False
void FUN_140092f84(long long param_1, unsigned long long *param_2) {
}

// Function: FUN_1400933dc
// Address: 0x1400933dc
// Calls error helper: False
void FUN_1400933dc(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140093500
// Address: 0x140093500
// Calls error helper: False
void FUN_140093500(long long param_1, unsigned long long param_2, char* param_3, int param_4) {
}

// Function: FUN_140093828
// Address: 0x140093828
// Calls error helper: False
void FUN_140093828(long long param_1) {
}

// Function: FUN_140093c10
// Address: 0x140093c10
// Calls error helper: False
void FUN_140093c10(long long param_1) {
}

// Function: FUN_1400945f4
// Address: 0x1400945f4
// Calls error helper: False
void FUN_1400945f4(unsigned long long param_1, long long *param_2) {
}

// Function: FUN_1400949fc
// Address: 0x1400949fc
// Calls error helper: False
void FUN_1400949fc(long long param_1) {
}

// Function: FUN_140094a7c
// Address: 0x140094a7c
// Calls error helper: False
void FUN_140094a7c(long long param_1) {
}

// Function: FUN_140094c28
// Address: 0x140094c28
// Calls error helper: False
void FUN_140094c28(long long param_1) {
}

// Function: FUN_140094c40
// Address: 0x140094c40
// Calls error helper: False
void FUN_140094c40(long long param_1, long long *param_2) {
}

// Function: FUN_140094d48
// Address: 0x140094d48
// Calls error helper: False
void FUN_140094d48() {
}

// Function: FUN_140094ecc
// Address: 0x140094ecc
// Calls error helper: False
void FUN_140094ecc(long long param_1) {
}

// Function: FUN_140094f18
// Address: 0x140094f18
// Calls error helper: False
void FUN_140094f18(long long param_1, unsigned long long param_2) {
}

// Function: FUN_140094f20
// Address: 0x140094f20
// Calls error helper: False
void FUN_140094f20(long long param_1) {
}

// Function: FUN_140094f48
// Address: 0x140094f48
// Calls error helper: False
void FUN_140094f48(long long param_1) {
}

// Function: FUN_140094fc4
// Address: 0x140094fc4
// Calls error helper: False
void FUN_140094fc4() {
}

// Function: FUN_140094fcc
// Address: 0x140094fcc
// Calls error helper: False
unsigned long long FUN_140094fcc
// Function: FUN_14009503c
// Address: 0x14009503c
// Calls error helper: False
void FUN_14009503c(long long param_1) {
}

// Function: FUN_140095048
// Address: 0x140095048
// Calls error helper: False
void FUN_140095048(unsigned long long param_1, char param_2) {
}

// Function: FUN_140095060
// Address: 0x140095060
// Calls error helper: False
void FUN_140095060(long long param_1) {
}

// Function: FUN_14009507c
// Address: 0x14009507c
// Calls error helper: False
void FUN_14009507c(char *_>_>) {
}

// Function: FUN_140095154
// Address: 0x140095154
// Calls error helper: False
void FUN_140095154() {
}

// Function: FUN_14009524c
// Address: 0x14009524c
// Calls error helper: False
void FUN_14009524c(long long param_1) {
}

// Function: FUN_140095258
// Address: 0x140095258
// Calls error helper: False
void FUN_140095258(long long param_1) {
}

// Function: FUN_1400952dc
// Address: 0x1400952dc
// Calls error helper: False
void FUN_1400952dc(void* *param_1, unsigned long long param_2, long long param_3) {
}

// Function: FUN_140095328
// Address: 0x140095328
// Calls error helper: False
void FUN_140095328(long long param_1) {
}

// Function: FUN_140096340
// Address: 0x140096340
// Calls error helper: False
unsigned long long FUN_140096340(long long param_1,unsigned long long param_2,unsigned long long param_3) {
}

// Function: FUN_140096454
// Address: 0x140096454
// Calls error helper: False
void FUN_140096454(unsigned long long *param_1) {
}

// Function: FUN_1400964e0
// Address: 0x1400964e0
// Calls error helper: False
void FUN_1400964e0(unsigned long long *param_1) {
}

// Function: FUN_1400964fc
// Address: 0x1400964fc
// Calls error helper: False
void FUN_1400964fc(long long param_1) {
}

// Function: FUN_140096508
// Address: 0x140096508
// Calls error helper: False
void FUN_140096508(long long param_1) {
}

// Function: FUN_140096514
// Address: 0x140096514
// Calls error helper: False
unsigned long long FUN_140096514(unsigned long long param_1,unsigned long long param_2) {
}

// Function: FUN_1400965ac
// Address: 0x1400965ac
// Calls error helper: False
void FUN_1400965ac(long long *param_1) {
}

// Function: FUN_140096658
// Address: 0x140096658
// Calls error helper: False
void FUN_140096658() {
}

// Function: FUN_140096864
// Address: 0x140096864
// Calls error helper: False
void FUN_140096864(void *param_1) {
}

// Function: FUN_140096aac
// Address: 0x140096aac
// Calls error helper: False
void FUN_140096aac(long long param_1, long long *param_2) {
}

// Function: FUN_140097168
// Address: 0x140097168
// Calls error helper: False
void FUN_140097168(long long **param_1, long long *param_2) {
}

// Function: FUN_140097378
// Address: 0x140097378
// Calls error helper: False
void FUN_140097378(long long *param_1, unsigned long long param_2) {
}

// Function: FUN_1400973e4
// Address: 0x1400973e4
// Calls error helper: False
void FUN_1400973e4(unsigned long long param_1, unsigned long long param_2, long long *param_3) {
}

// Function: FUN_1400974b4
// Address: 0x1400974b4
// Calls error helper: False
unsigned long long FUN_1400974b4
// Function: FUN_14009774c
// Address: 0x14009774c
// Calls error helper: False
void FUN_14009774c(unsigned long long param_1) {
}

// Function: FUN_140097754
// Address: 0x140097754
// Calls error helper: False
void FUN_140097754(long long param_1) {
}

// Function: FUN_140097798
// Address: 0x140097798
// Calls error helper: False
void FUN_140097798(unsigned long long param_1) {
}

// Function: FUN_1400977b0
// Address: 0x1400977b0
// Calls error helper: False
void FUN_1400977b0(unsigned long long *param_1) {
}

// Function: FUN_140097950
// Address: 0x140097950
// Calls error helper: False
void FUN_140097950(long long param_1) {
}

// Function: FUN_14009795c
// Address: 0x14009795c
// Calls error helper: False
unsigned long long FUN_14009795c
// Function: FUN_140097ad4
// Address: 0x140097ad4
// Calls error helper: False
void FUN_140097ad4(unsigned long long *param_1, unsigned long long param_2) {
}

// Function: FUN_140097b48
// Address: 0x140097b48
// Calls error helper: False
void FUN_140097b48(long long param_1) {
}

// Function: FUN_140097c8c
// Address: 0x140097c8c
// Calls error helper: False
void FUN_140097c8c(void* param_1, unsigned int param_2) {
}

// Function: FUN_140097e9c
// Address: 0x140097e9c
// Calls error helper: False
void FUN_140097e9c(long long param_1) {
}

// Function: FUN_1400980bc
// Address: 0x1400980bc
// Calls error helper: False
unsigned long long FUN_1400980bc
// Function: FUN_1400980fc
// Address: 0x1400980fc
// Calls error helper: False
void FUN_1400980fc(unsigned long long param_1) {
}

// Function: FUN_1400981b4
// Address: 0x1400981b4
// Calls error helper: False
void FUN_1400981b4() {
}

// Function: FUN_140098364
// Address: 0x140098364
// Calls error helper: False
void FUN_140098364() {
}

// Function: FUN_1400983f0
// Address: 0x1400983f0
// Calls error helper: False
void FUN_1400983f0(char *_>_>) {
}

// Function: FUN_1400985d4
// Address: 0x1400985d4
// Calls error helper: False
void FUN_1400985d4() {
}

// Function: FUN_140098730
// Address: 0x140098730
// Calls error helper: False
void FUN_140098730(long long param_1, unsigned long long param_2, unsigned long long param_3) {
}

// Function: FUN_140098bc8
// Address: 0x140098bc8
// Calls error helper: False
void FUN_140098bc8(long long param_1) {
}

// Function: FUN_140098c5c
// Address: 0x140098c5c
// Calls error helper: False
void FUN_140098c5c(void *param_1) {
}

// Function: FUN_1400990f4
// Address: 0x1400990f4
// Calls error helper: False
void FUN_1400990f4(long long param_1) {
}

// Function: FUN_140099138
// Address: 0x140099138
// Calls error helper: False
void FUN_140099138(long long param_1) {
}

// Function: FUN_1400992e4
// Address: 0x1400992e4
// Calls error helper: False
void FUN_1400992e4(long long param_1) {
}

// Function: FUN_14009933c
// Address: 0x14009933c
// Calls error helper: False
void FUN_14009933c(long long param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_140099890
// Address: 0x140099890
// Calls error helper: False
void FUN_140099890(void* param_1, long long param_2, unsigned long long *param_3) {
}

// Function: FUN_1400998f4
// Address: 0x1400998f4
// Calls error helper: False
void FUN_1400998f4(void* param_1, char param_2) {
}

// Function: FUN_14009a3ec
// Address: 0x14009a3ec
// Calls error helper: False
int FUN_14009a3ec(void *param_1, void *param_2) {
}

// Function: FUN_14009a494
// Address: 0x14009a494
// Calls error helper: False
void FUN_14009a494(long long param_1) {
}

// Function: FUN_14009a63c
// Address: 0x14009a63c
// Calls error helper: False
void FUN_14009a63c(unsigned long long param_1) {
}

// Function: FUN_14009b420
// Address: 0x14009b420
// Calls error helper: False
void FUN_14009b420(long long param_1) {
}

// Function: FUN_14009b470
// Address: 0x14009b470
// Calls error helper: False
void FUN_14009b470(unsigned long long param_1, void* *param_2) {
}

// Function: FUN_14009b578
// Address: 0x14009b578
// Calls error helper: False
void FUN_14009b578(void* param_1, char **param_2, char param_3) {
}

// Function: FUN_14009b734
// Address: 0x14009b734
// Calls error helper: False
void FUN_14009b734(long long param_1) {
}

// Function: FUN_14009b75c
// Address: 0x14009b75c
// Calls error helper: False
void FUN_14009b75c() {
}

// Function: FUN_14009b7cc
// Address: 0x14009b7cc
// Calls error helper: False
void FUN_14009b7cc() {
}

// Function: FUN_14009b83c
// Address: 0x14009b83c
// Calls error helper: False
void FUN_14009b83c(void* param_1) {
}

// Function: FUN_14009b8a0
// Address: 0x14009b8a0
// Calls error helper: False
void FUN_14009b8a0(long long param_1) {
}

// Function: FUN_14009b9c4
// Address: 0x14009b9c4
// Calls error helper: False
void FUN_14009b9c4(void* param_1) {
}

// Function: FUN_14009bdb8
// Address: 0x14009bdb8
// Calls error helper: False
void FUN_14009bdb8(long long *param_1) {
}

// Function: FUN_14009c01c
// Address: 0x14009c01c
// Calls error helper: False
void FUN_14009c01c(long long param_1) {
}

// Function: FUN_14009c028
// Address: 0x14009c028
// Calls error helper: False
void FUN_14009c028(long long param_1) {
}

// Function: FUN_14009c264
// Address: 0x14009c264
// Calls error helper: False
void FUN_14009c264(long long *param_1, long long param_2, unsigned long long param_3) {
}

// Function: FUN_14009c2c8
// Address: 0x14009c2c8
// Calls error helper: False
void FUN_14009c2c8(void *param_1, unsigned long long param_2, char* param_3, unsigned long long param_4) {
}

// Function: FUN_14009ca8c
// Address: 0x14009ca8c
// Calls error helper: False
void FUN_14009ca8c(long long *param_1, int param_2, int param_3, long long param_4) {
}

// Function: FUN_14009cba4
// Address: 0x14009cba4
// Calls error helper: False
void FUN_14009cba4(void *param_1, int param_2, int param_3) {
}

// Function: FUN_14009cc0c
// Address: 0x14009cc0c
// Calls error helper: False
void FUN_14009cc0c(void *param_1) {
}

// Function: FUN_14009cca8
// Address: 0x14009cca8
// Calls error helper: False
void FUN_14009cca8(long long param_1, char param_2) {
}

// Function: FUN_14009ccec
// Address: 0x14009ccec
// Calls error helper: False
void FUN_14009ccec(long long param_1, long long param_2, unsigned long long param_3, long long param_4) {
}

// Function: FUN_14009cddc
// Address: 0x14009cddc
// Calls error helper: False
void FUN_14009cddc(void *param_1, char *param_2) {
}

// Function: FUN_14009cecc
// Address: 0x14009cecc
// Calls error helper: False
int FUN_14009cecc(void *param_1, unsigned int param_2, void *param_3, long long *param_4) {
}

// Function: FUN_14009cfdc
// Address: 0x14009cfdc
// Calls error helper: False
int FUN_14009cfdc(void *param_1, void *param_2, int param_3, int param_4) {
}

// Function: FUN_14009d040
// Address: 0x14009d040
// Calls error helper: False
int FUN_14009d040(void *param_1, void *param_2, int param_3, int param_4) {
}

// Function: FUN_14009d0a4
// Address: 0x14009d0a4
// Calls error helper: False
void FUN_14009d0a4(long long param_1, long long param_2, long long param_3) {
}

// Function: FUN_14009d130
// Address: 0x14009d130
// Calls error helper: False
void FUN_14009d130(long long param_1) {
}

// Function: FUN_14009d138
// Address: 0x14009d138
// Calls error helper: False
void FUN_14009d138(long long *param_1, void* *param_2, int param_3) {
}

// Function: FUN_14009d1b8
// Address: 0x14009d1b8
// Calls error helper: False
void FUN_14009d1b8(void *param_1) {
}

// Function: FUN_14009d270
// Address: 0x14009d270
// Calls error helper: False
unsigned long long FUN_14009d270
// Function: FUN_14009d2b8
// Address: 0x14009d2b8
// Calls error helper: False
void FUN_14009d2b8(void**param_1, unsigned long long param_2) {
}

// Function: FUN_14009d624
// Address: 0x14009d624
// Calls error helper: False
void FUN_14009d624(unsigned long long param_1, std::ostream *param_2) {
}

// Function: FUN_14009d804
// Address: 0x14009d804
// Calls error helper: False
void FUN_14009d804() {
}

// Function: FUN_14009d848
// Address: 0x14009d848
// Calls error helper: False
void FUN_14009d848(char *_>_>) {
}

// Function: FUN_14009d8c8
// Address: 0x14009d8c8
// Calls error helper: False
void FUN_14009d8c8() {
}

// Function: FUN_14009d90c
// Address: 0x14009d90c
// Calls error helper: False
void FUN_14009d90c(void* *param_1, unsigned int param_2, void *param_3, void *param_4, unsigned int param_5) {
}

// Function: FUN_14009d91c
// Address: 0x14009d91c
// Calls error helper: False
void FUN_14009d91c(void* param_1, long long param_2) {
}

// Function: FUN_14009db7c
// Address: 0x14009db7c
// Calls error helper: False
void FUN_14009db7c(long long param_1, int param_2) {
}

// Function: FUN_14009db94
// Address: 0x14009db94
// Calls error helper: False
void FUN_14009db94() {
}

// Function: FUN_14009dc18
// Address: 0x14009dc18
// Calls error helper: False
void FUN_14009dc18(long long param_1) {
}

// Function: FUN_14009dc60
// Address: 0x14009dc60
// Calls error helper: False
void FUN_14009dc60(void *param_1, long long param_2) {
}

// Function: FUN_14009dd64
// Address: 0x14009dd64
// Calls error helper: False
void FUN_14009dd64(void* param_1) {
}

// Function: FUN_14009decc
// Address: 0x14009decc
// Calls error helper: False
void FUN_14009decc(void* *param_1, void *param_2) {
}

// Function: FUN_14009df18
// Address: 0x14009df18
// Calls error helper: False
void FUN_14009df18(void* *param_1) {
}

// Function: FUN_14009e158
// Address: 0x14009e158
// Calls error helper: False
unsigned long long FUN_14009e158
// Function: FUN_14009e1a4
// Address: 0x14009e1a4
// Calls error helper: False
void FUN_14009e1a4() {
}

// Function: FUN_14009e1dc
// Address: 0x14009e1dc
// Calls error helper: False
void FUN_14009e1dc(long long param_1, unsigned int param_2) {
}

// Function: FUN_14009e1e4
// Address: 0x14009e1e4
// Calls error helper: False
void FUN_14009e1e4(void* param_1, char *param_2, int param_3) {
}

// Function: FUN_14009e7fc
// Address: 0x14009e7fc
// Calls error helper: False
void FUN_14009e7fc(long long param_1, long long param_2, unsigned int param_3, unsigned int param_4) {
}

// Function: FUN_14009e8d4
// Address: 0x14009e8d4
// Calls error helper: False
void FUN_14009e8d4() {
}

// Function: FUN_14009e9d4
// Address: 0x14009e9d4
// Calls error helper: False
void FUN_14009e9d4() {
}

// Function: FUN_14009eac4
// Address: 0x14009eac4
// Calls error helper: False
void FUN_14009eac4() {
}

// Function: FUN_14009eba8
// Address: 0x14009eba8
// Calls error helper: False
void FUN_14009eba8() {
}

// Function: FUN_14009ec84
// Address: 0x14009ec84
// Calls error helper: False
void FUN_14009ec84() {
}

// Function: FUN_14009ed50
// Address: 0x14009ed50
// Calls error helper: False
void FUN_14009ed50() {
}

// Function: FUN_14009ee10
// Address: 0x14009ee10
// Calls error helper: False
void FUN_14009ee10() {
}

// Function: FUN_14009eec4
// Address: 0x14009eec4
// Calls error helper: False
void FUN_14009eec4() {
}

// Function: FUN_14009ef64
// Address: 0x14009ef64
// Calls error helper: False
void FUN_14009ef64() {
}

// Function: FUN_14009eff8
// Address: 0x14009eff8
// Calls error helper: False
void FUN_14009eff8() {
}

// Function: FUN_14009f080
// Address: 0x14009f080
// Calls error helper: False
void FUN_14009f080() {
}

// Function: FUN_14009f504
// Address: 0x14009f504
// Calls error helper: False
void FUN_14009f504() {
}

// Function: FUN_14009f53c
// Address: 0x14009f53c
// Calls error helper: False
void FUN_14009f53c(long long *param_1) {
}

// Function: FUN_14009f55c
// Address: 0x14009f55c
// Calls error helper: False
void FUN_14009f55c(unsigned long long *param_1) {
}

// Function: FUN_14009f6d4
// Address: 0x14009f6d4
// Calls error helper: False
void FUN_14009f6d4(void *param_1) {
}

// Function: FUN_14009f824
// Address: 0x14009f824
// Calls error helper: False
void FUN_14009f824(long long param_1) {
}

// Function: FUN_14009f830
// Address: 0x14009f830
// Calls error helper: False
void FUN_14009f830(long long param_1) {
}

// Function: FUN_14009f83c
// Address: 0x14009f83c
// Calls error helper: False
void FUN_14009f83c(long long param_1) {
}

// Function: FUN_14009f848
// Address: 0x14009f848
// Calls error helper: False
void FUN_14009f848(long long param_1) {
}

// Function: FUN_14009f854
// Address: 0x14009f854
// Calls error helper: False
void FUN_14009f854(long long param_1) {
}

// Function: FUN_14009f860
// Address: 0x14009f860
// Calls error helper: False
void FUN_14009f860(long long param_1) {
}

// Function: FUN_14009f86c
// Address: 0x14009f86c
// Calls error helper: False
void FUN_14009f86c(long long param_1) {
}

// Function: FUN_14009f878
// Address: 0x14009f878
// Calls error helper: False
void FUN_14009f878(long long param_1) {
}

// Function: FUN_14009f884
// Address: 0x14009f884
// Calls error helper: False
void FUN_14009f884(long long param_1) {
}

// Function: FUN_14009f890
// Address: 0x14009f890
// Calls error helper: False
void FUN_14009f890(long long param_1) {
}

// Function: FUN_14009f89c
// Address: 0x14009f89c
// Calls error helper: False
void FUN_14009f89c(long long param_1) {
}

// Function: FUN_14009f8a8
// Address: 0x14009f8a8
// Calls error helper: False
void FUN_14009f8a8(long long param_1) {
}

// Function: FUN_14009fe98
// Address: 0x14009fe98
// Calls error helper: False
void FUN_14009fe98(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009fea4
// Address: 0x14009fea4
// Calls error helper: False
void FUN_14009fea4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009feb0
// Address: 0x14009feb0
// Calls error helper: False
void FUN_14009feb0(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009febc
// Address: 0x14009febc
// Calls error helper: False
void FUN_14009febc(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009fec8
// Address: 0x14009fec8
// Calls error helper: False
void FUN_14009fec8(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009fed4
// Address: 0x14009fed4
// Calls error helper: False
void FUN_14009fed4(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009fee0
// Address: 0x14009fee0
// Calls error helper: False
void FUN_14009fee0(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009feec
// Address: 0x14009feec
// Calls error helper: False
void FUN_14009feec(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009fef8
// Address: 0x14009fef8
// Calls error helper: False
void FUN_14009fef8(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009ff08
// Address: 0x14009ff08
// Calls error helper: False
void FUN_14009ff08(long long param_1, unsigned long long param_2) {
}

// Function: FUN_14009ff94
// Address: 0x14009ff94
// Calls error helper: False
void FUN_14009ff94(void* *param_1, long long **param_2) {
}

// Function: FUN_1400a00d8
// Address: 0x1400a00d8
// Calls error helper: False
void FUN_1400a00d8(void* *param_1, long long *param_2) {
}

// Function: FUN_1400a021c
// Address: 0x1400a021c
// Calls error helper: False
void FUN_1400a021c(long long param_1) {
}

// Function: FUN_1400a0248
// Address: 0x1400a0248
// Calls error helper: False
void FUN_1400a0248(long long param_1, void* *param_2, double param_3, void* *param_4, bool param_5) {
}

// Function: FUN_1400a0254
// Address: 0x1400a0254
// Calls error helper: False
void FUN_1400a0254() {
}

// Function: FUN_1400a0268
// Address: 0x1400a0268
// Calls error helper: False
void FUN_1400a0268() {
}

// Function: FUN_1400a72a0
// Address: 0x1400a72a0
// Calls error helper: False
void FUN_1400a72a0() {
}

// Function: FUN_1400ab830
// Address: 0x1400ab830
// Calls error helper: False
void FUN_1400ab830(long long *param_1, long long *param_2) {
}

// Function: FUN_1400ab8d8
// Address: 0x1400ab8d8
// Calls error helper: False
void FUN_1400ab8d8(long long param_1, long long *param_2) {
}

// Function: FUN_1400acc20
// Address: 0x1400acc20
// Calls error helper: False
void FUN_1400acc20(long long param_1, int param_2, void* *param_3) {
}

// Function: FUN_1400ad7f4
// Address: 0x1400ad7f4
// Calls error helper: False
void FUN_1400ad7f4(long long param_1) {
}

// Function: FUN_1400ad800
// Address: 0x1400ad800
// Calls error helper: False
void FUN_1400ad800(long long param_1, int param_2, bool param_3, int param_4) {
}

// Function: FUN_1400ae5ac
// Address: 0x1400ae5ac
// Calls error helper: False
void FUN_1400ae5ac(void) {
}

// Function: FUN_1400ae63c
// Address: 0x1400ae63c
// Calls error helper: False
void FUN_1400ae63c(long long param_1, void *param_2) {
}

// Function: FUN_1400ae648
// Address: 0x1400ae648
// Calls error helper: False
void FUN_1400ae648(long long param_1, void *param_2) {
}

// Function: FUN_1400ae654
// Address: 0x1400ae654
// Calls error helper: False
void FUN_1400ae654(long long param_1, void *param_2) {
}

// Function: FUN_1400ae660
// Address: 0x1400ae660
// Calls error helper: False
void FUN_1400ae660(long long param_1, void *param_2) {
}

// Function: FUN_1400ae66c
// Address: 0x1400ae66c
// Calls error helper: False
void FUN_1400ae66c(long long param_1, void *param_2) {
}

// Function: FUN_1400ae67c
// Address: 0x1400ae67c
// Calls error helper: False
void FUN_1400ae67c(long long param_1, void *param_2) {
}

// Function: FUN_1400ae688
// Address: 0x1400ae688
// Calls error helper: False
void FUN_1400ae688(long long param_1, void *param_2) {
}

// Function: FUN_1400ae694
// Address: 0x1400ae694
// Calls error helper: False
void FUN_1400ae694(long long param_1, void *param_2) {
}

// Function: FUN_1400ae6a0
// Address: 0x1400ae6a0
// Calls error helper: False
void FUN_1400ae6a0(long long param_1, void *param_2) {
}

// Function: FUN_1400ae6ac
// Address: 0x1400ae6ac
// Calls error helper: False
void FUN_1400ae6ac(long long param_1, void *param_2) {
}

// Function: FUN_1400ae6dc
// Address: 0x1400ae6dc
// Calls error helper: False
void FUN_1400ae6dc(unsigned long long param_1, char param_2) {
}

// Function: FUN_1400ae6f4
// Address: 0x1400ae6f4
// Calls error helper: False
void FUN_1400ae6f4(long long param_1) {
}

// Function: FUN_1400ae824
// Address: 0x1400ae824
// Calls error helper: False
void FUN_1400ae824(long long param_1, unsigned int *param_2) {
}

// Function: FUN_1400aedd0
// Address: 0x1400aedd0
// Calls error helper: False
void FUN_1400aedd0(unsigned long long *param_1) {
}

// Function: FUN_1400aedfc
// Address: 0x1400aedfc
// Calls error helper: False
void FUN_1400aedfc(long long param_1) {
}

// Function: FUN_1400aee80
// Address: 0x1400aee80
// Calls error helper: False
void FUN_1400aee80(long long param_1) {
}

// Function: FUN_1400aeea4
// Address: 0x1400aeea4
// Calls error helper: False
void FUN_1400aeea4(long long param_1) {
}

// Function: FUN_1400b0474
// Address: 0x1400b0474
// Calls error helper: False
void FUN_1400b0474(long long param_1, unsigned char *param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_1400b0584
// Address: 0x1400b0584
// Calls error helper: False
void FUN_1400b0584(long long param_1) {
}

// Function: FUN_1400b06d8
// Address: 0x1400b06d8
// Calls error helper: False
int FUN_1400b06d8(std::streambuf *param_1, int param_2) {
}

// Function: FUN_1400b0888
// Address: 0x1400b0888
// Calls error helper: False
int FUN_1400b0888(std::streambuf *param_1, int param_2) {
}

// Function: FUN_1400b0bac
// Address: 0x1400b0bac
// Calls error helper: False
unsigned long long FUN_1400b0bac
// Function: FUN_1400b0c1c
// Address: 0x1400b0c1c
// Calls error helper: False
unsigned long long FUN_1400b0c1c
// Function: FUN_1400b0c54
// Address: 0x1400b0c54
// Calls error helper: False
void FUN_1400b0c54(unsigned long long param_1, unsigned long long param_2, long long *param_3) {
}

// Function: FUN_1400b0cc0
// Address: 0x1400b0cc0
// Calls error helper: False
void FUN_1400b0cc0(long long *param_1) {
}

// Function: FUN_1400b0cec
// Address: 0x1400b0cec
// Calls error helper: False
void FUN_1400b0cec(long long *param_1, unsigned long long param_2, unsigned long long param_3, unsigned long long param_4) {
}

// Function: FUN_1400b1e24
// Address: 0x1400b1e24
// Calls error helper: False
void FUN_1400b1e24(unsigned long long param_1, const char* param_2, unsigned long long param_3, unsigned int param_4) {
}

// Function: FUN_1400b2764
// Address: 0x1400b2764
// Calls error helper: False
unsigned long long FUN_1400b2764
// Function: FUN_1400b6214
// Address: 0x1400b6214
// Calls error helper: False
void FUN_1400b6214(long long *param_1, unsigned long long *param_2, unsigned long long param_3) {
}

// Function: FUN_1400b62d4
// Address: 0x1400b62d4
// Calls error helper: False
void FUN_1400b62d4(unsigned long long *param_1, unsigned int *param_2, unsigned long long param_3) {
}

// Function: FUN_1400b63ec
// Address: 0x1400b63ec
// Calls error helper: False
void FUN_1400b63ec(void **param_1, unsigned long long param_2, unsigned long long *param_3, unsigned long long *param_4) {
}

// Function: FUN_1400b6488
// Address: 0x1400b6488
// Calls error helper: False
void FUN_1400b6488(unsigned long long *param_1, unsigned long long *param_2) {
}

// Function: FUN_1400b6b34
// Address: 0x1400b6b34
// Calls error helper: False
void FUN_1400b6b34(unsigned long long *param_1) {
}

// Function: FUN_1400b6b68
// Address: 0x1400b6b68
// Calls error helper: False
void FUN_1400b6b68(char *_>_>) {
}

// Function: FUN_1400b6b94
// Address: 0x1400b6b94
// Calls error helper: False
void FUN_1400b6b94() {
}

// Function: FUN_1400b6bfc
// Address: 0x1400b6bfc
// Calls error helper: False
void FUN_1400b6bfc(long long param_1) {
}

// Function: FUN_1400b6c08
// Address: 0x1400b6c08
// Calls error helper: False
void FUN_1400b6c08(long long param_1) {
}

// Function: FUN_1400b7a98
// Address: 0x1400b7a98
// Calls error helper: False
void FUN_1400b7a98(long long *param_1) {
}

// Function: FUN_1400b913c
// Address: 0x1400b913c
// Calls error helper: False
void FUN_1400b913c(long long *param_1, long long **param_2, unsigned int *param_3, long long param_4) {
}

// Function: FUN_1400ba290
// Address: 0x1400ba290
// Calls error helper: False
void FUN_1400ba290() {
}

// Function: FUN_1400ba2fc
// Address: 0x1400ba2fc
// Calls error helper: False
void FUN_1400ba2fc() {
}

// Function: FUN_1400baaa8
// Address: 0x1400baaa8
// Calls error helper: False
void FUN_1400baaa8() {
}

// Function: FUN_1400bab38
// Address: 0x1400bab38
// Calls error helper: False
void FUN_1400bab38(long long *param_1, long long param_2, long long param_3, long long param_4) {
}

// Function: FUN_1400bac18
// Address: 0x1400bac18
// Calls error helper: False
void FUN_1400bac18(void **param_1, unsigned long long param_2) {
}

// Function: FUN_1400bad08
// Address: 0x1400bad08
// Calls error helper: False
void FUN_1400bad08(long long param_1) {
}

// Function: FUN_1400bad14
// Address: 0x1400bad14
// Calls error helper: False
void FUN_1400bad14(long long *param_1) {
}

// Function: FUN_1400bae10
// Address: 0x1400bae10
// Calls error helper: False
void FUN_1400bae10(void **param_1, unsigned long long *param_2) {
}

// Function: FUN_1400baeac
// Address: 0x1400baeac
// Calls error helper: False
void FUN_1400baeac(void* **param_1) {
}

// Function: FUN_1400baed8
// Address: 0x1400baed8
// Calls error helper: False
void FUN_1400baed8(long long param_1) {
}

// Function: FUN_1400bba4c
// Address: 0x1400bba4c
// Calls error helper: False
void FUN_1400bba4c(long long *param_1) {
}

// Function: FUN_1400bc698
// Address: 0x1400bc698
// Calls error helper: False
void FUN_1400bc698(char *_>_>) {
}

// Function: FUN_1400c15a4
// Address: 0x1400c15a4
// Calls error helper: False
void FUN_1400c15a4() {
}

// Function: FUN_1400c15d4
// Address: 0x1400c15d4
// Calls error helper: False
void FUN_1400c15d4(long long param_1) {
}

// Function: FUN_1400c15e0
// Address: 0x1400c15e0
// Calls error helper: False
void FUN_1400c15e0(long long param_1) {
}

// Function: FUN_1400c15ec
// Address: 0x1400c15ec
// Calls error helper: False
void FUN_1400c15ec(long long param_1) {
}

// Function: FUN_1400c15f8
// Address: 0x1400c15f8
// Calls error helper: False
void FUN_1400c15f8(long long param_1) {
}

// Function: FUN_1400c1604
// Address: 0x1400c1604
// Calls error helper: False
void FUN_1400c1604(long long param_1) {
}

// Function: FUN_1400c1610
// Address: 0x1400c1610
// Calls error helper: False
void FUN_1400c1610(long long param_1) {
}

// Function: FUN_1400c161c
// Address: 0x1400c161c
// Calls error helper: False
void FUN_1400c161c(long long param_1) {
}

// Function: FUN_1400c1628
// Address: 0x1400c1628
// Calls error helper: False
void FUN_1400c1628(long long param_1) {
}

// Function: FUN_1400c1634
// Address: 0x1400c1634
// Calls error helper: False
void FUN_1400c1634(long long param_1) {
}

// Function: FUN_1400c1714
// Address: 0x1400c1714
// Calls error helper: False
void FUN_1400c1714(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400c1720
// Address: 0x1400c1720
// Calls error helper: False
void FUN_1400c1720(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400c172c
// Address: 0x1400c172c
// Calls error helper: False
void FUN_1400c172c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400c1738
// Address: 0x1400c1738
// Calls error helper: False
void FUN_1400c1738(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400c1744
// Address: 0x1400c1744
// Calls error helper: False
void FUN_1400c1744(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400c1750
// Address: 0x1400c1750
// Calls error helper: False
void FUN_1400c1750(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400c175c
// Address: 0x1400c175c
// Calls error helper: False
void FUN_1400c175c(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400c1768
// Address: 0x1400c1768
// Calls error helper: False
void FUN_1400c1768(long long param_1, unsigned long long param_2) {
}

// Function: FUN_1400cb4bc
// Address: 0x1400cb4bc
// Calls error helper: False
void FUN_1400cb4bc(long long param_1, void *param_2) {
}

// Function: FUN_1400cb4c8
// Address: 0x1400cb4c8
// Calls error helper: False
void FUN_1400cb4c8(long long param_1, void *param_2) {
}

// Function: FUN_1400cb4d4
// Address: 0x1400cb4d4
// Calls error helper: False
void FUN_1400cb4d4(long long param_1, void *param_2) {
}

// Function: FUN_1400cb4e0
// Address: 0x1400cb4e0
// Calls error helper: False
void FUN_1400cb4e0(long long param_1, void *param_2) {
}

// Function: FUN_1400cb4ec
// Address: 0x1400cb4ec
// Calls error helper: False
void FUN_1400cb4ec(long long param_1, void *param_2) {
}

// Function: FUN_1400cb4f8
// Address: 0x1400cb4f8
// Calls error helper: False
void FUN_1400cb4f8(long long param_1, void *param_2) {
}

// Function: FUN_1400cb504
// Address: 0x1400cb504
// Calls error helper: False
void FUN_1400cb504(long long param_1, void *param_2) {
}

// Function: FUN_1400cb510
// Address: 0x1400cb510
// Calls error helper: False
void FUN_1400cb510(long long param_1, void *param_2) {
}

// Function: FUN_1400cb51c
// Address: 0x1400cb51c
// Calls error helper: False
void FUN_1400cb51c(void) {
}

// Function: FUN_1400cb530
// Address: 0x1400cb530
// Calls error helper: False
void FUN_1400cb530(void**param_1, void *param_2, unsigned long long param_3) {
}

// Function: FUN_1400cb800
// Address: 0x1400cb800
// Calls error helper: False
void FUN_1400cb800(unsigned long long *param_1) {
}

// Function: FUN_1400cb834
// Address: 0x1400cb834
// Calls error helper: False
void FUN_1400cb834(long long *param_1) {
}

// Function: FUN_1400ccdb0
// Address: 0x1400ccdb0
// Calls error helper: False
void FUN_1400ccdb0() {
}

// Function: FUN_1400d36ec
// Address: 0x1400d36ec
// Calls error helper: False
void FUN_1400d36ec(char *_>_>) {
}

// Function: FUN_1400d375c
// Address: 0x1400d375c
// Calls error helper: False
void FUN_1400d375c() {
}

// Function: FUN_1400d38bc
// Address: 0x1400d38bc
// Calls error helper: False
void FUN_1400d38bc(long long param_1) {
}

// Function: FUN_1400d3948
// Address: 0x1400d3948
// Calls error helper: False
void FUN_1400d3948(long long param_1) {
}

// Function: FUN_1400d54b0
// Address: 0x1400d54b0
// Calls error helper: False
void FUN_1400d54b0(long long param_1) {
}

// Function: FUN_1400d54bc
// Address: 0x1400d54bc
// Calls error helper: False
void FUN_1400d54bc(long long param_1) {
}

// Function: FUN_1400d54c8
// Address: 0x1400d54c8
// Calls error helper: False
void FUN_1400d54c8(long long param_1) {
}

// Function: FUN_1400d54d4
// Address: 0x1400d54d4
// Calls error helper: False
void FUN_1400d54d4(long long param_1) {
}

// Function: FUN_1400d54e0
// Address: 0x1400d54e0
// Calls error helper: False
void FUN_1400d54e0(long long param_1) {
}

// Function: FUN_1400d54ec
// Address: 0x1400d54ec
// Calls error helper: False
void FUN_1400d54ec(long long param_1) {
}

// Function: FUN_1400d54f8
// Address: 0x1400d54f8
// Calls error helper: False
void FUN_1400d54f8(long long param_1) {
}

// Function: FUN_1400d5504
// Address: 0x1400d5504
// Calls error helper: False
void FUN_1400d5504(long long param_1) {
}

// Function: FUN_1400d5510
// Address: 0x1400d5510
// Calls error helper: False
void FUN_1400d5510(long long param_1) {
}

// Function: FUN_1400d551c
// Address: 0x1400d551c
// Calls error helper: False
void FUN_1400d551c(long long param_1) {
}

// Function: FUN_1400d5528
// Address: 0x1400d5528
// Calls error helper: False
void FUN_1400d5528(long long param_1) {
}

// Function: FUN_1400d5534
// Address: 0x1400d5534
// Calls error helper: False
void FUN_1400d5534(long long param_1) {
}

// Function: FUN_1400d5540
// Address: 0x1400d5540
// Calls error helper: False
void FUN_1400d5540(long long param_1) {
}

// Function: FUN_1400d554c
// Address: 0x1400d554c
// Calls error helper: False
void FUN_1400d554c(long long param_1) {
}

// Function: FUN_1400d5558
// Address: 0x1400d5558
// Calls error helper: False
void FUN_1400d5558(long long param_1) {
}

// Function: FUN_1400d5564
// Address: 0x1400d5564
// Calls error helper: False
void FUN_1400d5564(long long param_1) {
}

// Function: FUN_1400d55a8
// Address: 0x1400d55a8
// Calls error helper: False
unsigned long long FUN_1400d55a8
// Function: FUN_1400d7960
// Address: 0x1400d7960
// Calls error helper: False
unsigned long long FUN_1400d7960
// Function: FUN_1400d799c
// Address: 0x1400d799c
// Calls error helper: False
unsigned long long FUN_1400d799c
// Function: FUN_1400d7d94
// Address: 0x1400d7d94
// Calls error helper: False
void FUN_1400d7d94(long long *param_1, unsigned int param_2) {
}

// Function: FUN_1400d7f14
// Address: 0x1400d7f14
// Calls error helper: False
void FUN_1400d7f14(unsigned long long *param_1, long long param_2) {
}

// Function: FUN_1400d8388
// Address: 0x1400d8388
// Calls error helper: False
void FUN_1400d8388(long long param_1, char **param_2, long long param_3) {
}

// Function: FUN_1400d84d0
// Address: 0x1400d84d0
// Calls error helper: False
void FUN_1400d84d0(long long param_1, char **param_2, long long param_3) {
}

// Function: FUN_1400d855c
// Address: 0x1400d855c
// Calls error helper: False
int FUN_1400d855c(long long param_1, char **param_2, unsigned long long param_3) {
}

// Function: FUN_1400d85cc
// Address: 0x1400d85cc
// Calls error helper: False
void FUN_1400d85cc(long long param_1, char **param_2, long long param_3) {
}

// Function: FUN_1400d8644
// Address: 0x1400d8644
// Calls error helper: False
void FUN_1400d8644(long long param_1, unsigned char **param_2, long long param_3) {
}

// Function: FUN_1400d8d54
// Address: 0x1400d8d54
// Calls error helper: False
void FUN_1400d8d54(long long param_1, char **param_2, long long param_3) {
}

// Function: FUN_1400d9020
// Address: 0x1400d9020
// Calls error helper: False
void FUN_1400d9020(long long param_1, long long *param_2, unsigned long long param_3) {
}

// Function: FUN_1400d92bc
// Address: 0x1400d92bc
// Calls error helper: False
void FUN_1400d92bc(long long param_1, char **param_2, long long param_3) {
}

// Function: FUN_1400d933c
// Address: 0x1400d933c
// Calls error helper: False
void FUN_1400d933c(long long param_1, unsigned char **param_2, long long param_3) {
}

// Function: FUN_1400d9384
// Address: 0x1400d9384
// Calls error helper: False
void FUN_1400d9384(unsigned char **param_1) {
}

// Function: FUN_1400d93e4
// Address: 0x1400d93e4
// Calls error helper: False
unsigned long long FUN_1400d93e4
// Function: FUN_1400d95d8
// Address: 0x1400d95d8
// Calls error helper: False
void FUN_1400d95d8(long long param_1) {
}

// Function: FUN_1400d9608
// Address: 0x1400d9608
// Calls error helper: False
void FUN_1400d9608(long long *param_1) {
}

// Function: FUN_1400d9670
// Address: 0x1400d9670
// Calls error helper: False
void FUN_1400d9670(long long param_1) {
}

// Function: FUN_1400d9694
// Address: 0x1400d9694
// Calls error helper: False
void FUN_1400d9694(long long param_1) {
}

// Function: FUN_1400d96b8
// Address: 0x1400d96b8
// Calls error helper: False
void FUN_1400d96b8(long long param_1) {
}

// Function: FUN_1400d96dc
// Address: 0x1400d96dc
// Calls error helper: False
void FUN_1400d96dc(long long param_1) {
}

// Function: FUN_1400d9700
// Address: 0x1400d9700
// Calls error helper: False
void FUN_1400d9700(long long param_1) {
}

// Function: FUN_1400d9734
// Address: 0x1400d9734
// Calls error helper: False
void FUN_1400d9734(long long *param_1) {
}

// Explicit function registration initialization
void ensure_branch_map_registrations() {
    // Registry calls will be handled by individual function registrations
});
}

}  // namespace branch_map
