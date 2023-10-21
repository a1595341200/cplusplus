cmake_minimum_required(VERSION 3.10)

set(PROJECT_N cplusplus)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(
    ${CMAKE_SOURCE_DIR}/utils/include
    ${CMAKE_SOURCE_DIR}/external
)
set(VCPKG "/home/user/vcpkg-2023.08.09/installed/x64-linux/")

LIST(APPEND CMAKE_PREFIX_PATH 
    ${VCPKG}/share
)

add_subdirectory(utils)
add_subdirectory(multi-objective-fusion)
add_subdirectory(src)
