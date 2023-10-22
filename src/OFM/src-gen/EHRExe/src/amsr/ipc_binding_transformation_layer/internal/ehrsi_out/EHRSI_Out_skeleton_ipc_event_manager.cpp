// VECTOR Same Line AutosarC++17_10-A1.1.1: MD_IPCBINDING_AutosarC++17_10-A1.1.1_external_identifiers
/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2023 by Vector Informatik GmbH. All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  EHRExe/src/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.cpp
 *        \brief  IPC skeleton event handling for events and field notifications of service 'EHRSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_ipcbinding
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace ehrsi_out {

// ---- Event 'EHR_Bus_NOAInfo' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_NOAInfo'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_NOAInfo::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_NOAInfo'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_NOAInfo::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_NOAInfo'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_NOAInfo::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_NOAInfo'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_NOAInfo::kMajorVersion;
// ---- Event 'EHR_Bus_LaneConnectivitys' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_LaneConnectivitys'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_LaneConnectivitys'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_LaneConnectivitys'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_LaneConnectivitys'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneConnectivitys::kMajorVersion;
// ---- Event 'EHR_Bus_Nodes' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_Nodes'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_Nodes::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_Nodes'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_Nodes::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_Nodes'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_Nodes::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_Nodes'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_Nodes::kMajorVersion;
// ---- Event 'EHR_Bus_TrafficSigns' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_TrafficSigns'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_TrafficSigns'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_TrafficSigns'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_TrafficSigns'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_TrafficSigns::kMajorVersion;
// ---- Event 'EHR_Bus_GeoFences' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_GeoFences'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_GeoFences::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_GeoFences'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_GeoFences::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_GeoFences'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_GeoFences::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_GeoFences'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_GeoFences::kMajorVersion;
// ---- Event 'EHR_Bus_LinkCurvatures' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_LinkCurvatures'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_LinkCurvatures'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_LinkCurvatures'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_LinkCurvatures'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkCurvatures::kMajorVersion;
// ---- Event 'EHR_Bus_LinkSlopes' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_LinkSlopes'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_LinkSlopes'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_LinkSlopes'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_LinkSlopes'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkSlopes::kMajorVersion;
// ---- Event 'EHR_Bus_LaneSpeedLimits' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_LaneSpeedLimits'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_LaneSpeedLimits'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_LaneSpeedLimits'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_LaneSpeedLimits'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_LaneSpeedLimits::kMajorVersion;
// ---- Event 'EHR_Bus_LinkInfos' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_LinkInfos'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkInfos::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_LinkInfos'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkInfos::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_LinkInfos'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkInfos::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_LinkInfos'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_LinkInfos::kMajorVersion;
// ---- Event 'EHR_Bus_MergePoints' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_MergePoints'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_MergePoints::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_MergePoints'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_MergePoints::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_MergePoints'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_MergePoints::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_MergePoints'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_MergePoints::kMajorVersion;
// ---- Event 'EHR_Bus_GeofennceJudge' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'EHR_Bus_GeofennceJudge'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationEHR_Bus_GeofennceJudge::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'EHR_Bus_GeofennceJudge'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationEHR_Bus_GeofennceJudge::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'EHR_Bus_GeofennceJudge'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationEHR_Bus_GeofennceJudge::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'EHR_Bus_GeofennceJudge'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationEHR_Bus_GeofennceJudge::kMajorVersion;

}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

