cmake_minimum_required(VERSION 3.20)

project(stupid_maths)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

add_subdirectory(mt_maths)
add_subdirectory(app)

target_link_libraries(${CMAKE_PROJECT_NAME} lib_mt_maths)
