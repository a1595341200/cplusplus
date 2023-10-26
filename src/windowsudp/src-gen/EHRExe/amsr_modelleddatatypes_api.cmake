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
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_CurvPointIDT_Vector/impl_type_array_curvpointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_FormOfWayIDT_Vector/impl_type_array_formofwayidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_GeoFenceIDT_Vector/impl_type_array_geofenceidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_GeometryPointIDT_Vector/impl_type_array_geometrypointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LaneInfoIDT_Vector/impl_type_array_laneinfoidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LaneSpeedLimitIDT_Vector/impl_type_array_lanespeedlimitidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LaneWidthIDT_Vector/impl_type_array_lanewidthidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinearObjectIDT_Vector/impl_type_array_linearobjectidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkCurvatureIDT_Vector/impl_type_array_linkcurvatureidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkInfoIDT_Vector/impl_type_array_linkinfoidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkMergePointIDT_Vector/impl_type_array_linkmergepointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkSlopeIDT_Vector/impl_type_array_linkslopeidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_MergePointIDT_Vector/impl_type_array_mergepointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PairConnectivityIDT_Vector/impl_type_array_pairconnectivityidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PairOfIdIDT_Vector/impl_type_array_pairofididt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PathNodeIDT_Vector/impl_type_array_pathnodeidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PathTrafficSignsIDT_Vector/impl_type_array_pathtrafficsignsidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_SlopePointIDT_Vector/impl_type_array_slopepointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/AvailableIDT/impl_type_availableidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/CurvPointIDT/impl_type_curvpointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/DirectionIDT/impl_type_directionidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/FormOfWay1IDT/impl_type_formofway1idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/FormOfWayIDT/impl_type_formofwayidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/GeoFenceIDT/impl_type_geofenceidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/GeofenceTypeIDT/impl_type_geofencetypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/GeometryPointIDT/impl_type_geometrypointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneAppTypeIDT/impl_type_laneapptypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneInfoIDT/impl_type_laneinfoidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneSpeedLimitIDT/impl_type_lanespeedlimitidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneTypeIDT/impl_type_lanetypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneWidthIDT/impl_type_lanewidthidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectColourIDT/impl_type_linearobjectcolouridt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectCurveTypeIDT/impl_type_linearobjectcurvetypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectIDT/impl_type_linearobjectidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectIsBoldIDT/impl_type_linearobjectisboldidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectTypeIDT/impl_type_linearobjecttypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectmarkingIDT/impl_type_linearobjectmarkingidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkCurvatureIDT/impl_type_linkcurvatureidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkInfoIDT/impl_type_linkinfoidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkMergePointIDT/impl_type_linkmergepointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkSlopeIDT/impl_type_linkslopeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/MatchingStatusIDT/impl_type_matchingstatusidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/MergePointIDT/impl_type_mergepointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/NOAInfoIDT/impl_type_noainfoidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/NavigationStatusIDT/impl_type_navigationstatusidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PairConnectivityIDT/impl_type_pairconnectivityidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PairOfIdIDT/impl_type_pairofididt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PathNodeIDT/impl_type_pathnodeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PathTrafficSignsIDT/impl_type_pathtrafficsignsidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/RightOfWayIDT/impl_type_rightofwayidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SlopePointIDT/impl_type_slopepointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SpeedLimitUnitIDT/impl_type_speedlimitunitidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SwitchLaneDirectionIDT/impl_type_switchlanedirectionidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SwitchLaneReasonIDT/impl_type_switchlanereasonidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/TrafficSignShapeIDT/impl_type_trafficsignshapeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/TrafficSignTypeIDT/impl_type_trafficsigntypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/TransitIDT/impl_type_transitidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/float32IDT/impl_type_float32idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/sint32IDT/impl_type_sint32idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/sint8IDT/impl_type_sint8idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint16IDT/impl_type_uint16idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint32IDT/impl_type_uint32idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint64IDT/impl_type_uint64idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint8IDT/impl_type_uint8idt.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_CurvPointIDT_Vector/impl_type_array_curvpointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_FormOfWayIDT_Vector/impl_type_array_formofwayidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_GeoFenceIDT_Vector/impl_type_array_geofenceidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_GeometryPointIDT_Vector/impl_type_array_geometrypointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LaneInfoIDT_Vector/impl_type_array_laneinfoidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LaneSpeedLimitIDT_Vector/impl_type_array_lanespeedlimitidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LaneWidthIDT_Vector/impl_type_array_lanewidthidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinearObjectIDT_Vector/impl_type_array_linearobjectidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkCurvatureIDT_Vector/impl_type_array_linkcurvatureidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkInfoIDT_Vector/impl_type_array_linkinfoidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkMergePointIDT_Vector/impl_type_array_linkmergepointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_LinkSlopeIDT_Vector/impl_type_array_linkslopeidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_MergePointIDT_Vector/impl_type_array_mergepointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PairConnectivityIDT_Vector/impl_type_array_pairconnectivityidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PairOfIdIDT_Vector/impl_type_array_pairofididt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PathNodeIDT_Vector/impl_type_array_pathnodeidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_PathTrafficSignsIDT_Vector/impl_type_array_pathtrafficsignsidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/Array_SlopePointIDT_Vector/impl_type_array_slopepointidt_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/AvailableIDT/impl_type_availableidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/CurvPointIDT/impl_type_curvpointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/DirectionIDT/impl_type_directionidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/FormOfWay1IDT/impl_type_formofway1idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/FormOfWayIDT/impl_type_formofwayidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/GeoFenceIDT/impl_type_geofenceidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/GeofenceTypeIDT/impl_type_geofencetypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/GeometryPointIDT/impl_type_geometrypointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneAppTypeIDT/impl_type_laneapptypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneInfoIDT/impl_type_laneinfoidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneSpeedLimitIDT/impl_type_lanespeedlimitidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneTypeIDT/impl_type_lanetypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LaneWidthIDT/impl_type_lanewidthidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectColourIDT/impl_type_linearobjectcolouridt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectCurveTypeIDT/impl_type_linearobjectcurvetypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectIDT/impl_type_linearobjectidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectIsBoldIDT/impl_type_linearobjectisboldidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectTypeIDT/impl_type_linearobjecttypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinearObjectmarkingIDT/impl_type_linearobjectmarkingidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkCurvatureIDT/impl_type_linkcurvatureidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkInfoIDT/impl_type_linkinfoidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkMergePointIDT/impl_type_linkmergepointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/LinkSlopeIDT/impl_type_linkslopeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/MatchingStatusIDT/impl_type_matchingstatusidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/MergePointIDT/impl_type_mergepointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/NOAInfoIDT/impl_type_noainfoidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/NavigationStatusIDT/impl_type_navigationstatusidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PairConnectivityIDT/impl_type_pairconnectivityidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PairOfIdIDT/impl_type_pairofididt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PathNodeIDT/impl_type_pathnodeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/PathTrafficSignsIDT/impl_type_pathtrafficsignsidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/RightOfWayIDT/impl_type_rightofwayidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SlopePointIDT/impl_type_slopepointidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SpeedLimitUnitIDT/impl_type_speedlimitunitidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SwitchLaneDirectionIDT/impl_type_switchlanedirectionidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/SwitchLaneReasonIDT/impl_type_switchlanereasonidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/TrafficSignShapeIDT/impl_type_trafficsignshapeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/TrafficSignTypeIDT/impl_type_trafficsigntypeidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/TransitIDT/impl_type_transitidt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/float32IDT/impl_type_float32idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/sint32IDT/impl_type_sint32idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/sint8IDT/impl_type_sint8idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint16IDT/impl_type_uint16idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint32IDT/impl_type_uint32idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint64IDT/impl_type_uint64idt.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/uint8IDT/impl_type_uint8idt.h"
  PROPERTIES
  GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include"
)


