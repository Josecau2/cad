#pragma once

#include <string>
#include <vector>

namespace ui::factory {

// Creation & Factory Functions
// These functions handle object creation and factory patterns

// Basic Create functions
bool Create();
bool Create_2();
bool Create_3();
bool Create_4();
bool Create_5();
bool Create_6();
bool Create_7();
bool Create_8();
bool Create_9();
bool Create_10();
bool Create_11();
bool Create_12();
bool Create_13();
bool Create_14();
bool Create_15();

// Extended Create functions
bool CreateEx();
bool CreateEx_2();
bool CreateEx_3();
bool CreateEx_4();
bool CreateEx_5();
bool CreateEx_6();
bool CreateEx_7();
bool CreateEx_8();
bool CreateEx_9();
bool CreateEx_10();

// Specialized creation functions
bool CreateAccessibleProxy();
bool CreateClient();
bool CreateCommon();
bool CreateControl();
bool CreateControlContainer();
bool CreateControlSite();
bool CreateControlSite_2();
bool CreateIndirect();
bool CreateIndirect_2();

// Dialog creation functions
bool CreateAutoDesignCabinetsDlg();
bool CreateAutoDesignEnhancersDlg();
bool CreateCeilingFloor();
bool CreateElevation();
bool CreateElevation_2();
bool CreateElevationOnZones();
bool CreateFloorPlanViewport();

}  // namespace ui::factory