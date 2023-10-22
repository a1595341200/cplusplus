cmake_minimum_required(VERSION 3.10)

set(PROJECT_N boost)
project(${PROJECT_N} VERSION 1.0)

add_subdirectory(asio)
add_subdirectory(serialization)
add_subdirectory(type_index)
add_subdirectory(uuid)
add_subdirectory(circular_buffer)
add_subdirectory(boosttcpudp)
