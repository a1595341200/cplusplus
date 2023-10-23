# cmake 版本
cmake_minimum_required(VERSION 3.5.1)

include(${CMAKE_CURRENT_SOURCE_DIR}/Code/tools/CMakeLists.cmake)
# inner variables
## project name

set(PROJECT_NAME ObjectFusionModelExe)
set(BINARY_NAME  ObjectFusionModelExe)
set(CMAKE_CXX_STANDARD_REQUIRED 14)

set(CMAKE_CXX_FLAGS "-O0 -g")
## define
#add_definitions(-D AMSR_LOGUTI_IS_AMSR_LOGGING)
#add_definitions(-D ASIO_HAS_STD_STRING_VIEW)
## include directories
set(INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/Code/core/include
    ${CMAKE_CURRENT_SOURCE_DIR}/Code/adapter/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src-gen/ObjectFusionModelExe/include
    ${CMAKE_CURRENT_SOURCE_DIR}/
)


## source files
file(GLOB current_files  "Code/adapter/src/*.cpp" "Code/adapter/src/*.c" "Code/core/src/*.cpp" "Code/core/src/*.c")
message(">> current_files        : ${current_files}")
set(SOURCE_FILE
    ${current_files}
    main.cpp
)



## flags
set(C_FLAGS            "")
set(C_FLAGS_DEBUG      "-g")
set(C_FLAGS_RELEASE    "")
set(CXX_FLAGS          "")
set(CXX_FLAGS_DEBUG    "-g")
set(CXX_FLAGS_RELEASE  "")

# output messages
message(">> project name         : ${PROJECT_NAME}")
message(">> CC                   : ${CMAKE_C_COMPILER}")
message(">> CXX                  : ${CMAKE_CXX_COMPILER}")
message(">> SYSROOT              : ${CMAKE_SYSROOT}")

message(">> AP_DEVEL_LIBS        : ${CMAKE_AP_DEVEL_LIBS}")
message(">> AP_DEVEL_PATH        : ${CMAKE_AP_DEVEL_PATH}")
message(">> AP_MODEL_GEN_PATH    : ${CMAKE_BINARY_SRC_GEN_PATH}")

message(">> include directories  : ${INCLUDE_DIRECTORIES}")
message(">> link directories     : ${LINK_DIRECTORIES}")
message(">> source files         : ${SOURCE_FILE}")
message(">> link library         : ${LINK_LIBRARIES}")

# build
set(CMAKE_C_FLAGS                "${C_FLAGS}")
set(CMAKE_C_FLAGS_DEBUG          "${C_FLAGS_DEBUG}")
set(CMAKE_C_FLAGS_RELEASE        "${C_FLAGS_RELEASE}")
set(CMAKE_CXX_FLAGS              "${CXX_FLAGS}")
set(CMAKE_CXX_FLAGS_DEBUG        "${CXX_FLAGS_DEBUG}")
set(CMAKE_CXX_FLAGS_RELEASE      "${CXX_FLAGS_RELEASE}")

project(${BINARY_NAME})

include_directories(${INCLUDE_DIRECTORIES})
link_directories(${LINK_DIRECTORIES})
add_executable(${BINARY_NAME} ${SOURCE_FILE})
target_link_libraries(${BINARY_NAME} ${LINK_LIBRARIES} pthread)

# include model
set(target ${BINARY_NAME})
