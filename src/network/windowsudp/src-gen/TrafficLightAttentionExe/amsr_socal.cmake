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
  "${CMAKE_CURRENT_LIST_DIR}/src/objectfusionmodelsi_out/objectfusionmodelsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionrearsi_out/perceptionrearsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionrearsi_out/perceptionrearsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsidesi_out/perceptionsidesi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsidesi_out/perceptionsidesi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/trafficlightattentionsi_out/trafficlightattentionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/trafficlightattentionsi_out/trafficlightattentionsi_out_skeleton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/utc0si_in/utc0si_in.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/utc0si_in/utc0si_in_proxy.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/com/internal/runtime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/socal/internal/runtime_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/objectfusionmodelsi_out/objectfusionmodelsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionrearsi_out/perceptionrearsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionrearsi_out/perceptionrearsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsidesi_out/perceptionsidesi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsidesi_out/perceptionsidesi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/trafficlightattentionsi_out/trafficlightattentionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/trafficlightattentionsi_out/trafficlightattentionsi_out_skeleton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/utc0si_in/utc0si_in.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/utc0si_in/utc0si_in_proxy.cpp"
  PROPERTIES
  GENERATED 1
)

# Add generated header file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/perceptionrearsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/perceptionrearsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/perceptionsidesi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/perceptionsidesi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/trafficlightattentionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/trafficlightattentionsi_out_skeleton.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/utc0si_in_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/utc0si_in_proxy.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/PerceptionRearSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/perceptionrearsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionrearsi_out/perceptionrearsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/PerceptionSideSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/perceptionsidesi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsidesi_out/perceptionsidesi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/trafficlightattentionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/trafficlightattentionsi_out/trafficlightattentionsi_out_skeleton.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In_datatypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/UTC0SI_In_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/utc0si_in_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/utc0si_in/utc0si_in_proxy.h"
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


