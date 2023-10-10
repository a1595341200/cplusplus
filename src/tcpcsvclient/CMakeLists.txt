cmake_minimum_required(VERSION 3.5)

set(PROJECT_N tcp)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

file(GLOB_RECURSE SRCS "${PROJECT_SOURCE_DIR}/src/*.cpp")
message(${PROJECT_SOURCE_DIR})
include_directories(
    ${PROJECT_SOURCE_DIR}/
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/include
)

add_executable(${PROJECT_N} ${SRCS})
target_link_libraries(
    ${PROJECT_N} PUBLIC
    pthread
    utils
)
