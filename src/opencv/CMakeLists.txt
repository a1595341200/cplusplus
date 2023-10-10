cmake_minimum_required(VERSION 3.10)

set(PROJECT_N opencv)
project(${PROJECT_N} VERSION 1.0)
find_package(OpenCV REQUIRED)

if (CMAKE_HOST_WIN32)
    set(WINDOWS 1)
elseif (CMAKE_HOST_APPLE)
find_package(Qt6 COMPONENTS Core Widgets REQUIRED)
elseif (CMAKE_HOST_UNIX)
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)
endif ()

# QT
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

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
add_executable(${PROJECT_N} ${SRCS})
# link qt

if (CMAKE_HOST_WIN32)
    set(WINDOWS 1)
elseif (CMAKE_HOST_APPLE)
target_link_libraries(${PROJECT_N} ${OpenCV_LIBS} Qt6::Core Qt6::Widgets utils)
elseif (CMAKE_HOST_UNIX)
target_link_libraries(${PROJECT_N} ${OpenCV_LIBS} Qt5::Core Qt5::Widgets utils)
endif ()

target_include_directories(${PROJECT_N} PUBLIC include /usr/include/opencv4)
