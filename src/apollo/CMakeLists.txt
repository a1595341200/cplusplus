cmake_minimum_required(VERSION 3.10)

set(PROJECT_N apollo)
project(${PROJECT_N} VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
find_package(absl REQUIRED)
find_package(gflags REQUIRED)
find_package(Protobuf REQUIRED)
file(GLOB_RECURSE SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE FUSION ${PROJECT_SOURCE_DIR}/modules/perception/fusion/*.cc)
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
# #设置输出路径
# set(MESSAGE_DIR ${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto)
# message(${MESSAGE_DIR})
# if(EXISTS "${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto" AND IS_DIRECTORY "${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto")
#         SET(DST_DIR ${MESSAGE_DIR})
# else()
#         file(MAKE_DIRECTORY ${MESSAGE_DIR})
#         SET(DST_DIR ${MESSAGE_DIR})
# endif()

# #设置protoc的搜索路径
# LIST(APPEND PROTO_FLAGS -I${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto)

# #获取需要编译的proto文件
# file(GLOB_RECURSE MSG_PROTOS ${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto/*.proto)

# set(MESSAGE_SRC "")
# set(MESSAGE_HDRS "")
# foreach(msg ${MSG_PROTOS})
#         message(${msg})
#         get_filename_component(FIL_WE ${msg} NAME_WE)

#         list(APPEND MESSAGE_SRC "${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto/${FIL_WE}.pb.cc")
#         list(APPEND MESSAGE_HDRS "${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto/${FIL_WE}.pb.h")
        
#         # # 生成源码
#         # execute_process(
#         #     COMMAND ${PROTOBUF_PROTOC_EXECUTABLE} ${PROTO_FLAGS} --cpp_out=${DST_DIR} ${msg}
#         # )
#         # 使用自定义命令
#         add_custom_command(
#           OUTPUT "${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto/${FIL_WE}.pb.cc"
#                  "${PROJECT_SOURCE_DIR}/modules/perception/pipeline/proto/${FIL_WE}.pb.h"
#           COMMAND  ${PROTOBUF_PROTOC_EXECUTABLE}
#           ARGS ${PROTO_FLAGS} 
#                 --cpp_out  ${DST_DIR} ${msg}
#           DEPENDS ${msg}
#           COMMENT "Running C++ protocol buffer compiler on ${msg}"
#           VERBATIM
#         )
# endforeach()
# set_source_files_properties(${MESSAGE_SRC} ${MESSAGE_HDRS} PROPERTIES GENERATED TRUE)
# add_custom_target(generate_message ALL
#                 DEPENDS ${MESSAGE_SRC} ${MESSAGE_HDRS}
#                 COMMENT "generate message target"
#                 VERBATIM
#                 )
# using said macro.
header_directories(INCLUDES ${PROJECT_SOURCE_DIR}/include/ hpp)
include_directories(
    ${MESSAGE_HDRS}
)
message("src files:")
foreach(file ${SRCS})
        message(STATUS ${file})
endforeach()

message("include directories:")
foreach(dir ${INCLUDES})
        message(STATUS ${dir})
endforeach()
add_executable(${PROJECT_N} ${SRCS} ${FUSION}
/media/psf/Home/Desktop/work/cplusplus/src/apollo/modules/perception/fusion/base/scene.cc
/media/psf/Home/Desktop/work/cplusplus/src/apollo/modules/perception/lib/config_manager/config_manager.cc
/media/psf/Home/Desktop/work/cplusplus/src/apollo/cyber/binary.cc
/media/psf/Home/Desktop/work/cplusplus/src/apollo/modules/perception/common/sensor_manager/sensor_manager.cc
/media/psf/Home/Desktop/work/cplusplus/src/apollo/modules/perception/base/object.cc
/media/psf/Home/Desktop/work/cplusplus/src/apollo/modules/perception/common/graph/connected_component_analysis.cc
/media/psf/Home/Desktop/work/cplusplus/src/apollo/modules/perception/common/perception_gflags.cc
/media/psf/Home/Desktop/work/cplusplus/src/apollo/cyber/common/file.cc
)

target_include_directories(${PROJECT_N} PUBLIC include
"${PROJECT_SOURCE_DIR}/"
)
target_link_libraries(${PROJECT_N} utils absl_strings absl_log_entry
gflags
protobuf
absl::string_view
)
