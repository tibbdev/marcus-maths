cmake_minimum_required(VERSION 3.22)

project(marcus_maths)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

#############################################################
#                                                           #
# Library & Application                                     #
#                                                           #
#############################################################

add_subdirectory(marcus_maths)
add_subdirectory(app)

include(marcus_maths/marcus_maths.cmake)

target_link_libraries(${CMAKE_PROJECT_NAME} ${MARCUS_MATHS_LIB_NAME})

#############################################################
#                                                           #
# Unit Testing...                                           #
#                                                           #
#############################################################

set(TEST_EXE_NAME ${MARCUS_MATHS_LIB_NAME}_tests)

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
    # tests/src/hello_tests.cpp
    tests/src/marcus_maths_tests.cpp
)

target_link_libraries(${TEST_EXE_NAME}
    ${MARCUS_MATHS_LIB_NAME}
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${TEST_EXE_NAME})
