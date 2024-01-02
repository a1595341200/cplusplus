cmake_minimum_required(VERSION 3.10)

if (CMAKE_HOST_WIN32)
elseif (CMAKE_HOST_APPLE)
    message("mac")
#    set(CMAKE_TOOLCHAIN_FILE "/Users/xieyao/vcpkg/scripts/buildsystems/vcpkg.cmake")
elseif (CMAKE_HOST_UNIX)
    message("linux")
    set(CMAKE_TOOLCHAIN_FILE "/home/user/vcpkg-2023.08.09/scripts/buildsystems/vcpkg.cmake")
endif ()

set(PROJECT_N cplusplus)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(
    ${CMAKE_SOURCE_DIR}/utils/include
    ${CMAKE_SOURCE_DIR}/external
    ${CMAKE_SOURCE_DIR}/external/json/include
)
add_subdirectory(utils)
add_subdirectory(multi-objective-fusion)
add_subdirectory(src)
