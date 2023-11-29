cmake_minimum_required(VERSION 3.10)

set(PROJECT_N hungarianMatcher)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(Boost_USE_STATIC_LIBS ON)
file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/include/*.cpp)
find_package(Boost COMPONENTS  system REQUIRED)

# using said macro.
include_directories(
  ${PROJECT_SOURCE_DIR}/include
)

message("src files:")
foreach(file ${SRCS})
        message(STATUS ${file})
endforeach()

message("include directories:")
foreach(dir ${INCLUDES})
        message(STATUS ${dir})
endforeach()


macro(BUILD curdir)
  file(GLOB children ${curdir}/*.cpp)
  foreach(child ${children})
  get_filename_component(FILENAME ${child} NAME_WE)
  add_executable(${FILENAME} ${child} ${SRCS})
  target_link_libraries(${FILENAME} ${Boost_LIBRARIES} pthread utils)
  endforeach()
endmacro()

BUILD(src)
