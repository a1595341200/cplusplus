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
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeoFences.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeofennceJudge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneConnectivitys.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneSpeedLimits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkCurvatures.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkInfos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_MergePoints.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_NOAInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_Nodes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_TrafficSigns.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeoFences.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeofennceJudge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneConnectivitys.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneSpeedLimits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkCurvatures.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkInfos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_MergePoints.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_NOAInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_Nodes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_TrafficSigns.cpp"
  PROPERTIES GENERATED 1
)

# Add generated header file(s) to target property SOURCES
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeoFences.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeofennceJudge.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneConnectivitys.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneSpeedLimits.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkCurvatures.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkInfos.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_MergePoints.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_NOAInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_Nodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_TrafficSigns.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/AllMergePoint/serializer_AllMergePoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/CurvPoint/serializer_CurvPoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/GeoFence/serializer_GeoFence.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/GeofennceJudge/serializer_GeofennceJudge.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/GeometryPoint/serializer_GeometryPoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneCurvature/serializer_LaneCurvature.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneInfo/serializer_LaneInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneSlope/serializer_LaneSlope.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneSpeedLimit/serializer_LaneSpeedLimit.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneWidth1/serializer_LaneWidth1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinearObject/serializer_LinearObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinkCurvature/serializer_LinkCurvature.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinkInfo/serializer_LinkInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinkSlope/serializer_LinkSlope.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/MergePoint/serializer_MergePoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/NOAInfo/serializer_NOAInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PairConnectivity/serializer_PairConnectivity.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PairOfId/serializer_PairOfId.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PathNode/serializer_PathNode.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PathTrafficSigns/serializer_PathTrafficSigns.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/SlopePoint/serializer_SlopePoint.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeoFences.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_GeofennceJudge.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneConnectivitys.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneSpeedLimits.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkCurvatures.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkInfos.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_MergePoints.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_NOAInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_Nodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_TrafficSigns.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/AllMergePoint/serializer_AllMergePoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/CurvPoint/serializer_CurvPoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/GeoFence/serializer_GeoFence.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/GeofennceJudge/serializer_GeofennceJudge.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/GeometryPoint/serializer_GeometryPoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneCurvature/serializer_LaneCurvature.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneInfo/serializer_LaneInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneSlope/serializer_LaneSlope.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneSpeedLimit/serializer_LaneSpeedLimit.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LaneWidth1/serializer_LaneWidth1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinearObject/serializer_LinearObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinkCurvature/serializer_LinkCurvature.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinkInfo/serializer_LinkInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/LinkSlope/serializer_LinkSlope.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/MergePoint/serializer_MergePoint.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/NOAInfo/serializer_NOAInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PairConnectivity/serializer_PairConnectivity.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PairOfId/serializer_PairOfId.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PathNode/serializer_PathNode.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/PathTrafficSigns/serializer_PathTrafficSigns.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_serialization/SlopePoint/serializer_SlopePoint.h"
  PROPERTIES GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE # No public interface for executables
  "${CMAKE_CURRENT_LIST_DIR}/include"
)

