cmake_minimum_required(VERSION 3.20)
project(OpenDesign LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_TESTING "Enable building tests" ON)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Sql)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_library(opendesign STATIC
    src/app/Application.cpp
    src/app/Initialization.cpp
    src/app/AppSpecial.cpp
    src/app/AppLicense.cpp
    src/app/AppDeps.cpp
    src/ui/html/HtmlUI.cpp
    src/ui/mainwindow/MainWindow.cpp
    src/ui/ribbon/RibbonBar.cpp
    src/ui/ribbon/RibbonCommands.cpp
    src/ui/UICommands.cpp
    src/ui/UIComponents.cpp
    src/ui/UICore.cpp
    src/ui/UIDialogs.cpp
    src/ui/UIFactories.cpp
    src/ui/UIStatus.cpp
    src/ui/UIInteraction.cpp
    src/ui/UITextExt.cpp
    src/ui/UIButtonSpecial.cpp
    src/ui/statusbar/StatusBar.cpp
    src/ui/printpreview/PrintPreview.cpp
    src/ui/grid/Grid.cpp
    src/framework/CommandBus.cpp
    src/framework/FeatureGate.cpp
    src/framework/FunctionRegistry.cpp
    src/cad/Document.cpp
    src/cad/Modeling.cpp
    src/cad/Geometry.cpp
    src/db/Database.cpp
    src/cad/Analysis.cpp
    src/cad/Advanced.cpp
    src/cad/Core.cpp
    src/cad/Utilities.cpp
    src/cad/IO.cpp
    src/cad/Extensions.cpp
    src/cad/Collaboration.cpp
    src/cad/Documentation.cpp
    src/cad/External.cpp
    src/cad/Interface.cpp
    src/render/Viewport.cpp
    src/render/Rendering.cpp
    src/io/Settings.cpp
    src/assets/CriticalAssets.cpp
    src/compat/win/Window.cpp
    src/compat/win/Menu.cpp
    src/compat/win/Accel.cpp
    src/compat/mfc/Dialogs.cpp
    src/compat/mfc/Ribbon.cpp
    src/compat/mfc/UpdateUI.cpp
    src/plugins/PluginManager.cpp
    src/branch_map/BranchMapStubs_minimal.cpp
    # Header-only files for geometry system
    src/cad/GeometryTypes.h
    src/cad/GeometryManager.h
)

set_target_properties(opendesign PROPERTIES EXPORT_COMPILE_COMMANDS ON)

target_include_directories(opendesign
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(opendesign
    PUBLIC
        Qt5::Core
        Qt5::Widgets
        Qt5::Sql
)

target_compile_definitions(opendesign
    PRIVATE
        OPEN_DESIGN_BUILD
)

add_executable(opendesign_app src/app/main.cpp)

target_link_libraries(opendesign_app PRIVATE opendesign)

if(BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()
