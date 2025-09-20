#pragma once

#include <string>
#include <unordered_map>
#include <memory>

namespace assets {
namespace critical {

// Forward declarations
class RequestBaseNativeDTO;
class QueryParameterNativeDTO;
class ICallbackBaseNative;

// Critical Asset Management Functions
bool HighLevelCore_dll();
bool Workbox_DLL();
bool OCA_dll();
bool ActionSpec_dll();
bool CoreTevent_dll();
bool basetool_dll();
bool BaseToolsM_dll();
bool Compusoft_CloudServicesGateway_Client_Bridge_dll();
bool Compusoft_CloudServicesGateway_Callback_Bridge_dll();
bool ShowCloudOptionsDialog();
bool GetCloudMaterialManager();
bool IsCloud2();
bool IsCloud3();
bool OnCloudMigration();
bool OnUpdateCloudMigration();
bool NotifyOnUpdateCloudDimensions();
bool NotifyOnUpdateCloudDimensions_2();
bool ICloudPlatformCallbackNative();

// API DLL Functions
bool Api2020Base_dll();
bool API2020Interface_dll();
bool API2020Managed_dll();
bool APIManaged_dll();
bool GetData_dll();
bool CatService_dll();

// Windows CRT DLL Functions
bool api_ms_win_crt_runtime_l1_1_0_dll();
bool api_ms_win_crt_string_l1_1_0_dll();
bool api_ms_win_crt_stdio_l1_1_0_dll();
bool api_ms_win_crt_filesystem_l1_1_0_dll();
bool api_ms_win_crt_heap_l1_1_0_dll();
bool api_ms_win_crt_convert_l1_1_0_dll();
bool api_ms_win_crt_environment_l1_1_0_dll();
bool api_ms_win_crt_time_l1_1_0_dll();
bool api_ms_win_crt_math_l1_1_0_dll();
bool api_ms_win_crt_locale_l1_1_0_dll();
bool api_ms_win_crt_multibyte_l1_1_0_dll();
bool api_ms_win_crt_utility_l1_1_0_dll();
bool api_ms_win_crt_process_l1_1_0_dll();

// Windows System DLLs
bool USER32_dll();
bool ADVAPI32_dll();
bool advapi32_dll();
bool SHLWAPI_dll();
bool IPHLPAPI_DLL();
bool api_ms_win_core_registry_l1_1_0_dll();

// Additional Cloud Services
bool Compusoft_CloudServicesGateway_Client_Bridge_dll_2();
bool Compusoft_CloudServicesGateway_Callback_Bridge_dll_2();
bool cic3_services_dll();
bool LesWebServices_dll();
bool lsapiw64_dll();
bool Api2020Base_dll_2();
bool API2020Interface_dll_2();
bool API2020Managed_dll_2();
bool APIManaged_dll_2();
bool GetData_dll_2();
bool Compusoft_CloudServicesGateway_Client_Bridge_dll_3();
bool Compusoft_CloudServicesGateway_Callback_Bridge_dll_3();
bool LesWebServices_dll_2();
bool cic3_services_dll_2();

// Cloud DTO Functions
bool CompusoftCloudServicesGatewayRequestDataTypes_RequestBaseNativeDTO___vecDelDtor();
bool CompusoftCloudServicesGatewayRequestDataTypes_RequestBaseNativeDTO__dtor_();

// Additional DLL Functions
bool Graphics_dll();
bool DesignVisualManager_dll();
bool AppType_dll();
bool AppTypeRender_dll();
bool ModuleMgr_dll();

// DTO and Interface Functions
bool RequestBaseNativeDTO_Function();
bool QueryParameterNativeDTO_Function();
bool ICallbackBaseNative();

// Additional DLL variants
bool Graphics_dll_2();
bool DesignVisualManager_dll_2();
bool QueryParameterNativeDTO_Function_2();

}  // namespace critical
}  // namespace assets