cmake_minimum_required(VERSION 3.20)
project(OpenDesign LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_TESTING "Enable building tests" ON)

add_library(opendesign STATIC
    src/app/Application.cpp
    src/app/Initialization.cpp
    src/ui/html/HtmlUI.cpp
    src/ui/ribbon/RibbonBar.cpp
    src/ui/ribbon/RibbonCommands.cpp
    src/ui/statusbar/StatusBar.cpp
    src/ui/printpreview/PrintPreview.cpp
    src/ui/grid/Grid.cpp
    src/framework/CommandBus.cpp
    src/framework/FunctionRegistry.cpp
    src/cad/Document.cpp
    src/db/Database.cpp
    src/render/Viewport.cpp
    src/io/Settings.cpp
    src/compat/win/Window.cpp
    src/compat/win/Menu.cpp
    src/compat/win/Accel.cpp
    src/compat/mfc/Dialogs.cpp
    src/compat/mfc/Ribbon.cpp
    src/compat/mfc/UpdateUI.cpp
    src/plugins/PluginManager.cpp
)

set_target_properties(opendesign PROPERTIES EXPORT_COMPILE_COMMANDS ON)

target_include_directories(opendesign
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
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
