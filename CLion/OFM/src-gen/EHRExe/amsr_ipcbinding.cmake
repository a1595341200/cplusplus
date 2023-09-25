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
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding/internal/compile_time_configurator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding/internal/compile_time_configurator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager.cpp"
  PROPERTIES GENERATED 1
)

# Add generated header file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_method_manager.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_method_manager.h"
  PROPERTIES GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE # No public interface for executables
  "${CMAKE_CURRENT_LIST_DIR}/include"
)

