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

# Add generated source file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_binding_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/life_cycle_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding_init.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_event_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_binding_init.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_event_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_xf.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_binding_init.h"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/life_cycle_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding_init.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_event_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_binding_init.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_event_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_xf.cpp"
  PROPERTIES GENERATED 1
)

# Add generated header file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_event_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_methods.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_someip_skeleton_factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_methods.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_event_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_xf.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_someip_proxy_factory.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_event_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_methods.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_someip_skeleton_factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_methods.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_event_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_xf.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_someip_proxy_factory.h"
  PROPERTIES GENERATED 1
)
# Add all generated files that may be installed to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/etc/someip_config.json"
)

# Add all generated files that may be installed to target property INTERFACE_SOURCES
target_sources(${target} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/someip_config.json>"
  "$<INSTALL_INTERFACE:etc/someip_config.json>"
)

# Mark installable file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/etc/someip_config.json"
  PROPERTIES GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE # No public interface for executables
  "${CMAKE_CURRENT_LIST_DIR}/include"
)

