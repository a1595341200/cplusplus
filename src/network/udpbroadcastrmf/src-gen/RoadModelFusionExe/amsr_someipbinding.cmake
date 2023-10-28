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
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/binding_xf_initializer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/configuration/roadmodelfusionsi_out/RoadModelFusionSI_Out_config_validation_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_payload_serializer_factory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_design.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_xf.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/binding_xf_initializer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/configuration/roadmodelfusionsi_out/RoadModelFusionSI_Out_config_validation_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_payload_serializer_factory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_design.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_xf.cpp"
  PROPERTIES
  GENERATED 1
)

# Add generated header file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding/internal/configuration/roadmodelfusionsi_out/RoadModelFusionSI_Out_config_validation_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_payload_serializer_factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_deployment.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_design.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_methods.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_xf.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding/internal/configuration/roadmodelfusionsi_out/RoadModelFusionSI_Out_config_validation_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_payload_serializer_factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_deployment.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_design.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_methods.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_xf.h"
  PROPERTIES
  GENERATED 1
)

# Add all generated files that may be installed to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/etc/someip_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/someipbinding_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/someipbinding_config.json.validation"
)

# Add all generated files that may be installed to target property INTERFACE_SOURCES
target_sources(${target} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/someip_config.json>"
  "$<INSTALL_INTERFACE:etc/someip_config.json>"
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/someipbinding_config.json>"
  "$<INSTALL_INTERFACE:etc/someipbinding_config.json>"
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/etc/someipbinding_config.json.validation>"
  "$<INSTALL_INTERFACE:etc/someipbinding_config.json.validation>"
)

# Mark installable file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/etc/someip_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/someipbinding_config.json"
  "${CMAKE_CURRENT_LIST_DIR}/etc/someipbinding_config.json.validation"
  PROPERTIES
  GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include"
)


