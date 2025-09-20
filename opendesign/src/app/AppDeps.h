#pragma once

#include <string>
#include <vector>

namespace app::deps {

// DLL Dependencies Functions
// These functions handle initialization and runtime dependencies

// Generic function implementations
void FUN_1401eeae0(long long param_1);
void* FUN_140193544(long long param_1, int param_2);

// Runtime class functions
void* CChildFrame__GetRuntimeClass();
void* EditAttrLiteDlg__GetRuntimeClass();
void* CTWTACADImportWizard__GetRuntimeClass();

// Casting and dynamic functions
void* AfxDynamicDownCast(void* param_1);
void* __RTDynamicCast(void* param_1);

// Delay load functions
void* DelayLoad_CTWTACADImportWizard();
void* DelayLoad_CcountertopMainDlg();
void* DelayLoad_ComparisonMainDlg();
void* DelayLoad_SketchUpSDI();
void* DelayLoad_SpecACADBlockChild();

// Registration functions
void RegisterCustomRibbonSubButton2_2();
void RegisterShellFileTypes();
void* AfxRegisterWndClass(void* param_1);
void* AfxOleRegisterTypeLib(void* param_1);

// Notification functions
void UnregisterNotified();
void UnregisterOCA();
void UnregisterQualifierNetwork();
void UnregisterTaskbarTab();

// CRT functions
void _CrtImplementationDetails__ThrowModuleLoadException();
void _CrtImplementationDetails__LanguageSupport_DomainUnload();
void _CrtImplementationDetails__RegisterModuleUninitializer();

// ATL functions
void ATL__CStringT__LoadStringA();

// Error handling functions
void CErrorShow_LoadStrRes();

// Additional registration functions
void RegisterCustomRibbonSubButton2_3();
void RegisterCustomRibbonSubButton2_4();

// Writer functions
void Writer_Constructor_or_Destructor();

// Generic functions
void FUN_14017eb95();
void FUN_14017ec5d();
void FUN_14017f69b();

// Standard library functions
void std_bad_cast__ctor_();
void std__Throw_bad_cast();
void std_bad_cast__dtor_();

}  // namespace app::deps