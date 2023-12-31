cmake_minimum_required(VERSION 3.10)

set(PROJECT_N chrono)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(Boost_USE_STATIC_LIBS ON)
file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)
find_package(Boost COMPONENTS  system REQUIRED)
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


macro(BUILD curdir)
  file(GLOB children ${curdir}/*.cpp)
  foreach(child ${children})
  get_filename_component(FILENAME ${child} NAME_WE)
  add_executable(${FILENAME} ${child})
  target_link_libraries(${FILENAME} ${Boost_LIBRARIES} pthread utils)
  endforeach()
endmacro()

BUILD(src)
