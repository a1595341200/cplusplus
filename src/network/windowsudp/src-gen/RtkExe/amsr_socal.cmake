#[=======================================================================[
Copyright (c) by Vector Informatik GmbH. All rights reserved.

This software is copyright protected and proprietary to Vector Informatik GmbH.
Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
All other rights remain with Vector Informatik GmbH.

Attention:
----------
The ${target} property settings in this file only take effect if this file is
set as an expected OUTPUT of dvacgf_file_gen().

File description:
-----------------
This is a generated CMake build-configuration file, modifications get lost.
#]=======================================================================]


# Add generated source file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/com/internal/runtime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/socal/internal/runtime_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_p/rtk_provide.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_p/rtk_provide_skeleton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_r/rtk_receive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_r/rtk_receive_proxy.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/com/internal/runtime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/socal/internal/runtime_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_p/rtk_provide.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_p/rtk_provide_skeleton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_r/rtk_receive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/rtk_r/rtk_receive_proxy.cpp"
  PROPERTIES
  GENERATED 1
)

# Add generated header file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_skeleton_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/rtk_provide_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/rtk_provide_skeleton.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/rtk_receive_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/rtk_receive_proxy.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_skeleton_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/Rtk_Provide_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/rtk_provide_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_p/rtk_provide_skeleton.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/Rtk_Receive_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/rtk_receive_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/rtk_r/rtk_receive_proxy.h"
  PROPERTIES
  GENERATED 1
)

# Add all generated files that may be installed to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/etc/socal_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/socal_config.json.validation"
)

# Add all generated files that may be installed to target property INTERFACE_SOURCES
target_sources(${target} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/socal_config.json>"
  "$<INSTALL_INTERFACE:etc/socal_config.json>"
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/socal_config.json.validation>"
  "$<INSTALL_INTERFACE:etc/socal_config.json.validation>"
)

# Mark installable file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/etc/socal_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/socal_config.json.validation"
  PROPERTIES
  GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include"
)


