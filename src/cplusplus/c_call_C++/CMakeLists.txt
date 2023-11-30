cmake_minimum_required(VERSION 3.10)

set(PROJECT_N c_call_C++)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp  ${PROJECT_SOURCE_DIR}/src/*.c)

message("src files:")
foreach (file ${SRCS})
    message(STATUS ${file})
endforeach ()
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(${PROJECT_N} ${SRCS})

target_include_directories(${PROJECT_N} PUBLIC ${PROJECT_SOURCE_DIR}/include)
