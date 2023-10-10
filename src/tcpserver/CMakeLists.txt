cmake_minimum_required(VERSION 3.10)

set(PROJECT_N tcp)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_FLAGS "-O0 -g3")

add_definitions(-DMSGPACK_NO_BOOST)
set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED true)

set(SERVER_SRC
    ${PROJECT_SOURCE_DIR}/src/OFM_TCPServer.cpp
    ${PROJECT_SOURCE_DIR}/server.cpp
)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/include
    ${PROJECT_SOURCE_DIR}/msgpack-c/include
)

link_libraries(pthread utils)

add_executable(server ${SERVER_SRC})
