cmake_minimum_required(VERSION 3.10)

set(PROJECT_N cplusplus)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(
    "utils/include"
)
add_subdirectory(utils)
add_subdirectory(src)
