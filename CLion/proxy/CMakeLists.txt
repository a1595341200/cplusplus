cmake_minimum_required(VERSION 3.21)
project(proxy)

set(CMAKE_CXX_STANDARD 17)

add_executable(proxy main.cpp Proxy.h Factory.h test.h test.cpp test2.c)
