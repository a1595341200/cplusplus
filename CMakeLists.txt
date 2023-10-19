cmake_minimum_required(VERSION 3.10)

set(PROJECT_N cplusplus)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(
    ${CMAKE_SOURCE_DIR}/utils/include
    ${CMAKE_SOURCE_DIR}/external
)
add_subdirectory(utils)
add_subdirectory(multi-objective-fusion)
add_subdirectory(src)
