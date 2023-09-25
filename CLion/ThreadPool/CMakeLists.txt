cmake_minimum_required(VERSION 3.16)
project(ThreadPool)

set(CMAKE_CXX_STANDARD 14)
link_libraries(pthread glog)
add_executable(ThreadPool main.cpp ThreadPool.cpp ThreadPool.h Log.cpp Log.h)
