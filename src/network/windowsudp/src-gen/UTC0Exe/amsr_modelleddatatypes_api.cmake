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


# Add generated header file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/DateTi30_2IDT/impl_type_dateti30_2idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/NoYes1VccIDT/impl_type_noyes1vccidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint8IDT/impl_type_uint8idt.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/DateTi30_2IDT/impl_type_dateti30_2idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/NoYes1VccIDT/impl_type_noyes1vccidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint8IDT/impl_type_uint8idt.h"
  PROPERTIES
  GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include"
)


