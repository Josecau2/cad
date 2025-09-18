set(TEST_SOURCES
    unit/test_application.cpp
    unit/test_initialization.cpp
    unit/test_function_coverage.cpp
    unit/test_database.cpp
    unit/test_ui_commands.cpp
    unit/test_features.cpp
)

add_executable(opendesign_tests ${TEST_SOURCES})

target_link_libraries(opendesign_tests PRIVATE opendesign)

target_include_directories(opendesign_tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/unit
)

add_test(NAME opendesign_tests COMMAND opendesign_tests)
