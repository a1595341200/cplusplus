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
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager_xf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_xf_ipc_binding.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager_xf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_binding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_xf_ipc_binding.cpp"
  PROPERTIES
  GENERATED 1
)

# Add generated header file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_xf_ipc_events.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_xf_ipc_binding.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_xf_ipc_events.h"
  PROPERTIES
  GENERATED 1
)

# Add all generated files that may be installed to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/etc/ipcbinding_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/ipcbinding_config.json.validation"
)

# Add all generated files that may be installed to target property INTERFACE_SOURCES
target_sources(${target} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/ipcbinding_config.json>"
  "$<INSTALL_INTERFACE:etc/ipcbinding_config.json>"
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/ipcbinding_config.json.validation>"
  "$<INSTALL_INTERFACE:etc/ipcbinding_config.json.validation>"
)

# Mark installable file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/etc/ipcbinding_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/ipcbinding_config.json.validation"
  PROPERTIES
  GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include"
)


