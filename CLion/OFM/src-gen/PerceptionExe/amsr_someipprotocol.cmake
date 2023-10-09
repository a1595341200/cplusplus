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
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_camstsout/events/serializer_FrntCam_Bus_CamSts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_freespaceout/events/serializer_FusedCam_Bus_FreeSpace.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEventGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneMkrTemp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeLe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeRi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrLe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrRi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsLe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsRi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_Crosswalk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_ExtInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LsrObj.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_RoadSign.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_StopLine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcSign.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_staticobjout/events/serializer_FrntCam_Bus_StaticObj.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_visnobjout/events/serializer_FrntCam_Bus_VisnObj.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_camstsout/events/serializer_FrntCam_Bus_CamSts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_freespaceout/events/serializer_FusedCam_Bus_FreeSpace.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEventGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneMkrTemp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeLe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeRi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrLe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrRi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsLe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsRi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_Crosswalk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_ExtInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LsrObj.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_RoadSign.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_StopLine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcSign.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_staticobjout/events/serializer_FrntCam_Bus_StaticObj.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_visnobjout/events/serializer_FrntCam_Bus_VisnObj.cpp"
  PROPERTIES GENERATED 1
)

# Add generated header file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_camstsout/events/serializer_FrntCam_Bus_CamSts.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_freespaceout/events/serializer_FusedCam_Bus_FreeSpace.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEventGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneMkrTemp.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_Crosswalk.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_ExtInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LsrObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_RoadSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_StopLine.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_staticobjout/events/serializer_FrntCam_Bus_StaticObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_visnobjout/events/serializer_FrntCam_Bus_VisnObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ALgtStdFromWhlSpdSafe1Chkd/deserializer_ALgtStdFromWhlSpdSafe1Chkd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccFusnTrfcReq/deserializer_AccFusnTrfcReq.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccrPedlPsd0/deserializer_AccrPedlPsd0.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AmbTRaw/deserializer_AmbTRaw.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AsyDataWithCmpSafe1Chkd/deserializer_AsyDataWithCmpSafe1Chkd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BltLockStFrnt/deserializer_BltLockStFrnt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BrkPedlPsdRec/deserializer_BrkPedlPsdRec.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EgoMotion/deserializer_EgoMotion.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/IndcrTurnReq/deserializer_IndcrTurnReq.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgSts/deserializer_LppLaneChgSts.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/PinionSteerAgGroup/deserializer_PinionSteerAgGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/RoadSgnInfoActv0/deserializer_RoadSgnInfoActv0.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SpdAlrmActvForRoadSgnInfo0/deserializer_SpdAlrmActvForRoadSgnInfo0.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SteerWhlSnsrSafe1/deserializer_SteerWhlSnsrSafe1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCC/deserializer_ToSOCA_COMInfo1VCC.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_FunctionInfo1VCC/deserializer_ToSOCA_FunctionInfo1VCC.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrfcLiActvSts/deserializer_TrfcLiActvSts.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrsmParkLockd/deserializer_TrsmParkLockd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehBattU1Vcc/deserializer_VehBattU1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1/deserializer_VehMNomRecsts_1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehModMngtGlbSafe1/deserializer_VehModMngtGlbSafe1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMtnStSafeGroup1/deserializer_VehMtnStSafeGroup1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdIndcd1/deserializer_VehSpdIndcd1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdLgtSafe1Chkd/deserializer_VehSpdLgtSafe1Chkd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/Vin1Vcc/deserializer_Vin1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WhlInfoGroup/deserializer_WhlInfoGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WipgInfoGroup/deserializer_WipgInfoGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/CamSts1Vcc/serializer_CamSts1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/Crosswalk/serializer_Crosswalk.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/ExtInfo/serializer_ExtInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/FreeSpace/serializer_FreeSpace.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneEvent/serializer_LaneEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneEventGroup/serializer_LaneEventGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1Le/serializer_LaneMkrCam1Le.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1Ri/serializer_LaneMkrCam1Ri.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsLe/serializer_LaneMkrCam1SecClsLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsRi/serializer_LaneMkrCam1SecClsRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrTempCam1Vcc/serializer_LaneMkrTempCam1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LsrObj/serializer_LsrObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccLe/serializer_RoadEdge1VccLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccRi/serializer_RoadEdge1VccRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/RoadSign/serializer_RoadSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/StaticObj/serializer_StaticObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/StopLine/serializer_StopLine.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/TrfcLi1Vcc/serializer_TrfcLi1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/TrfcSign/serializer_TrfcSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/VisObj/serializer_VisObj.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_camstsout/events/serializer_FrntCam_Bus_CamSts.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_freespaceout/events/serializer_FusedCam_Bus_FreeSpace.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEventGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneMkrTemp.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_Crosswalk.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_ExtInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LsrObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_RoadSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_StopLine.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_staticobjout/events/serializer_FrntCam_Bus_StaticObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_visnobjout/events/serializer_FrntCam_Bus_VisnObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ALgtStdFromWhlSpdSafe1Chkd/deserializer_ALgtStdFromWhlSpdSafe1Chkd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccFusnTrfcReq/deserializer_AccFusnTrfcReq.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccrPedlPsd0/deserializer_AccrPedlPsd0.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AmbTRaw/deserializer_AmbTRaw.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AsyDataWithCmpSafe1Chkd/deserializer_AsyDataWithCmpSafe1Chkd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BltLockStFrnt/deserializer_BltLockStFrnt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BrkPedlPsdRec/deserializer_BrkPedlPsdRec.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EgoMotion/deserializer_EgoMotion.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/IndcrTurnReq/deserializer_IndcrTurnReq.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgSts/deserializer_LppLaneChgSts.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/PinionSteerAgGroup/deserializer_PinionSteerAgGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/RoadSgnInfoActv0/deserializer_RoadSgnInfoActv0.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SpdAlrmActvForRoadSgnInfo0/deserializer_SpdAlrmActvForRoadSgnInfo0.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SteerWhlSnsrSafe1/deserializer_SteerWhlSnsrSafe1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCC/deserializer_ToSOCA_COMInfo1VCC.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_FunctionInfo1VCC/deserializer_ToSOCA_FunctionInfo1VCC.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrfcLiActvSts/deserializer_TrfcLiActvSts.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrsmParkLockd/deserializer_TrsmParkLockd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehBattU1Vcc/deserializer_VehBattU1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1/deserializer_VehMNomRecsts_1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehModMngtGlbSafe1/deserializer_VehModMngtGlbSafe1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMtnStSafeGroup1/deserializer_VehMtnStSafeGroup1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdIndcd1/deserializer_VehSpdIndcd1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdLgtSafe1Chkd/deserializer_VehSpdLgtSafe1Chkd.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/Vin1Vcc/deserializer_Vin1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WhlInfoGroup/deserializer_WhlInfoGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WipgInfoGroup/deserializer_WipgInfoGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/CamSts1Vcc/serializer_CamSts1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/Crosswalk/serializer_Crosswalk.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/ExtInfo/serializer_ExtInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/FreeSpace/serializer_FreeSpace.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneEvent/serializer_LaneEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneEventGroup/serializer_LaneEventGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1Le/serializer_LaneMkrCam1Le.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1Ri/serializer_LaneMkrCam1Ri.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsLe/serializer_LaneMkrCam1SecClsLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsRi/serializer_LaneMkrCam1SecClsRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneMkrTempCam1Vcc/serializer_LaneMkrTempCam1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LsrObj/serializer_LsrObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccLe/serializer_RoadEdge1VccLe.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccRi/serializer_RoadEdge1VccRi.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/RoadSign/serializer_RoadSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/StaticObj/serializer_StaticObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/StopLine/serializer_StopLine.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/TrfcLi1Vcc/serializer_TrfcLi1Vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/TrfcSign/serializer_TrfcSign.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/VisObj/serializer_VisObj.h"
  PROPERTIES GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE # No public interface for executables
  "${CMAKE_CURRENT_LIST_DIR}/include"
)
