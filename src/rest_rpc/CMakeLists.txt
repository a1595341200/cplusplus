cmake_minimum_required(VERSION 3.10)

set(PROJECT_N circularly_ordered_array)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(Boost_USE_STATIC_LIBS ON)
file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)

include_directories(
  include
  ${CMAKE_SOURCE_DIR}/submodule/rest_rpc/include
  ${CMAKE_SOURCE_DIR}/submodule/rest_rpc/thirdparty/msgpack-c/include
  ${CMAKE_SOURCE_DIR}/submodule/rest_rpc/thirdparty/asio
)

macro(BUILD curdir)
  file(GLOB children ${curdir}/*.cpp)
  foreach(child ${children})
  get_filename_component(FILENAME ${child} NAME_WE)
  add_executable(${FILENAME} ${child})
  target_link_libraries(${FILENAME} ${Boost_LIBRARIES} pthread utils)
  endforeach()
endmacro()

BUILD(src)
