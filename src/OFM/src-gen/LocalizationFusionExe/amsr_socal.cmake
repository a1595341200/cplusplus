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
  "${CMAKE_CURRENT_LIST_DIR}/src/localizationfusionsi_out/localizationfusionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/localizationfusionsi_out/localizationfusionsi_out_skeleton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_camstsout/perceptionsi_camstsout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_camstsout/perceptionsi_camstsout_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_laneout/perceptionsi_laneout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_laneout/perceptionsi_laneout_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_locsensorinfosi/tosoca_locsensorinfosi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/ara/com/runtime_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/localizationfusionsi_out/localizationfusionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/localizationfusionsi_out/localizationfusionsi_out_skeleton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_camstsout/perceptionsi_camstsout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_camstsout/perceptionsi_camstsout_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_laneout/perceptionsi_laneout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_laneout/perceptionsi_laneout_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/perceptionsi_out/perceptionsi_out_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_infomationsi/tosoca_infomationsi_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_locsensorinfosi/tosoca_locsensorinfosi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.cpp"
  PROPERTIES GENERATED 1
)

# Add generated header file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/LocalizationFusionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/LocalizationFusionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/localizationfusionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/localizationfusionsi_out_skeleton.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/perceptionsi_camstsout_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/perceptionsi_laneout_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/perceptionsi_laneout_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/tosoca_locsensorinfosi_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/socal/internal/lifecycle_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/LocalizationFusionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_impl_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/LocalizationFusionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/localizationfusionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/localizationfusionsi_out/localizationfusionsi_out_skeleton.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/perceptionsi_camstsout_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/PerceptionSI_LaneOut_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/perceptionsi_laneout_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_laneout/perceptionsi_laneout_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/PerceptionSI_Out_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/perceptionsi_out/perceptionsi_out_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/ToSOCA_InfomationSI_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_infomationsi/tosoca_infomationsi_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_backend_interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_update_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/tosoca_locsensorinfosi_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.h"
  PROPERTIES GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE # No public interface for executables
  "${CMAKE_CURRENT_LIST_DIR}/include"
)

