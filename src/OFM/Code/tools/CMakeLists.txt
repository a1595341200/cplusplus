cmake_minimum_required(VERSION 3.10)

set(PROJECT_N client)
project(${PROJECT_N} VERSION 1.0)

file(GLOB_RECURSE CLIENT_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/include
)
add_executable(client ${CLIENT_SRC})

