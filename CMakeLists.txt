cmake_minimum_required(VERSION 3.16)

project(cad_branchmap LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(branchmap STATIC
  opendesign/src/branch_map/BranchMapStubs.cpp
  opendesign/src/framework/FunctionRegistry.cpp
)

target_compile_definitions(branchmap PRIVATE CAD_SOURCE_DIR="${CMAKE_SOURCE_DIR}")

target_include_directories(branchmap PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/opendesign/src
)

add_executable(compile_check examples/compile_check.cpp)
target_link_libraries(compile_check PRIVATE branchmap)
