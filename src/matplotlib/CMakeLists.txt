cmake_minimum_required(VERSION 3.10)

set(PROJECT_N matplotlib)
project(${PROJECT_N} VERSION 1.0)

# find_path(MATPLOTLIB_CPP_INCLUDE_DIRS "matplotlibcpp.h")
set(MATPLOTLIB_CPP_INCLUDE_DIRS "/home/user/Desktop/Parallels Shared Folders/Home/work/cplusplus/submodule/matplotlib")
file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)


message("src files:")
foreach (file ${SRCS})
    message(STATUS ${file})
endforeach ()

include_directories(
        include
        ${MATPLOTLIB_CPP_INCLUDE_DIRS}
        "/usr/include/python3.8"
)
link_libraries(
  python3.8
)
macro(BUILD curdir)
  file(GLOB children ${curdir}/*.cpp)
  foreach(child ${children})
  get_filename_component(FILENAME ${child} NAME_WE)
  add_executable(${FILENAME} ${child})
  endforeach()
endmacro()

BUILD(src)
