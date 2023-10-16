cmake_minimum_required(VERSION 3.10)

set(PROJECT_N utils)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3")

list(APPEND CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/external/backward-cpp)

find_package(glog REQUIRED)
find_package(Protobuf REQUIRED)
find_package(Boost REQUIRED COMPONENTS system filesystem thread)
find_package(Backward REQUIRED)

file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE TEST_SRCS ${PROJECT_SOURCE_DIR}/test/*tests.cpp)
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

link_libraries(
    glog::glog
    GTest::gtest
    GTest::gmock
    ${Protobuf_LIBRARIES}
    ${Boost_LIBRARIES}
    dl
    Backward::Backward
)

add_library(${PROJECT_N} SHARED ${SRCS}  ${BACKWARD_ENABLE})

set_target_properties(${PROJECT_N} PROPERTIES
    DEBUG_POSTFIX "_debug"
    RELEASE_POSTFIX "_release"
)

target_include_directories(${PROJECT_N} PUBLIC include)

set(UNIT_TEST ON)

if (UNIT_TEST)
enable_testing()
find_package(GTest CONFIG REQUIRED)

add_executable(test_${PROJECT_N} 
    ${TEST_SRCS}
    ${SRCS}
    ${BOOSTSRC}
)

target_link_libraries(test_${PROJECT_N} PUBLIC
GTest::gtest
GTest::gmock
${Protobuf_LIBRARIES}
${Boost_LIBRARIES}
dl
Backward::Backward
)
endif()
