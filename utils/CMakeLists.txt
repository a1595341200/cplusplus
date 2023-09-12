cmake_minimum_required(VERSION 3.10)

set(PROJECT_N utils)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "-O0 -g3")

file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)

# a macro that gets all of the header containing directories. 
MACRO(header_directories return_list includes_base_folder extention )
    FILE(GLOB_RECURSE new_list ${includes_base_folder}/*.${extention})
    SET(dir_list "")
    FOREACH(file_path ${new_list})
        GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
        SET(dir_list ${dir_list} ${dir_path})
    ENDFOREACH()
    LIST(REMOVE_DUPLICATES dir_list)
    SET(${return_list} ${dir_list})
ENDMACRO()

# using said macro.
header_directories(INCLUDES ${PROJECT_SOURCE_DIR}/include/ hpp)

message("src files:")
foreach(file ${SRCS})
        message(STATUS ${file})
endforeach()

message("include directories:")
foreach(dir ${INCLUDES})
        message(STATUS ${dir})
endforeach()
# add_executable(${PROJECT_N} ${SRCS})
include_directories(
    include
)
add_library(${PROJECT_N} SHARED ${SRCS})
target_include_directories(${PROJECT_N} PUBLIC include)

set(UNIT_TEST ON)

if (UNIT_TEST)
enable_testing()
find_package(GTest CONFIG REQUIRED)
add_executable(test_${PROJECT_N} 
    ${PROJECT_SOURCE_DIR}/test/Utils_tests.cpp 
    ${SRCS}
)

target_link_libraries(test_${PROJECT_N}
GTest::gtest
GTest::gmock
)
endif()
