cmake_minimum_required(VERSION 3.10)

set(PROJECT_N example)
project(${PROJECT_N} VERSION 1.0)
add_compile_definitions(BOOST_ASIO_SEPARATE_COMPILATION)
set(CMAKE_CXX_FLAGS  "-fPIC")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
include_directories(
  /usr/include/python3.8
)
link_libraries(
  pthread
  python3.8
  boost_python38
)

file(GLOB SRC src/*.cpp)
add_library(${PROJECT_N} SHARED ${SRC})
