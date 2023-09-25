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


# Add generated header file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/DataValid/impl_type_datavalid.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/DateTi30_2/impl_type_dateti30_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Day/impl_type_day.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Hr1/impl_type_hr1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Mins1/impl_type_mins1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Mins1/impl_type_sec1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Mth1/impl_type_mth1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Yr1/impl_type_yr1.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/DataValid/impl_type_datavalid.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/DateTi30_2/impl_type_dateti30_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Day/impl_type_day.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Hr1/impl_type_hr1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Mins1/impl_type_mins1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Mins1/impl_type_sec1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Mth1/impl_type_mth1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Yr1/impl_type_yr1.h"
  PROPERTIES GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE # No public interface for executables
  "${CMAKE_CURRENT_LIST_DIR}/include"
)

