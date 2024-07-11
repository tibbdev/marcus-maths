cmake_minimum_required(VERSION 3.20)

project(stupid_maths)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

add_subdirectory(mt_maths)
add_subdirectory(app)

target_link_libraries(${CMAKE_PROJECT_NAME} lib_mt_maths)

set(TEST_EXE_NAME ${CMAKE_PROJECT_NAME}_tests)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

include_directories(${CMAKE_SOURCE_DIR})

add_executable(${TEST_EXE_NAME}
    tests/src/hello_tests.cpp
    tests/src/mtmaths_tests.cpp
)

target_link_libraries(${TEST_EXE_NAME}
    lib_mt_maths
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${TEST_EXE_NAME})
