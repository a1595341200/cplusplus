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
  "${CMAKE_CURRENT_LIST_DIR}/src/ara/com/runtime_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/dtc/dtc_provide.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/dtc/dtc_provide_skeleton.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/ara/com/runtime_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/dtc/dtc_provide.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/dtc/dtc_provide_skeleton.cpp"
  PROPERTIES GENERATED 1
)

# Add generated header file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_Provide.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_Provide_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_Provide_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_provide_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_provide_skeleton.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_Provide.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_Provide_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_Provide_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_provide_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/dtc/dtc_provide_skeleton.h"
  PROPERTIES GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE # No public interface for executables
  "${CMAKE_CURRENT_LIST_DIR}/include"
)

