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
/**        \file  PerceptionExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_event_manager.cpp
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSI_LaneOut'
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_binding.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_laneout {

// ---- Event 'FusedCam_Bus_LaneMkrLe' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrLe'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrLe::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrLe::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrLe::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrLe::kMajorVersion;
// ---- Event 'FusedCam_Bus_LaneMkrRi' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrRi'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrRi::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrRi::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrRi::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrRi::kMajorVersion;
// ---- Event 'FrntCam_Bus_RoadEdgeLe' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeLe'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::kMajorVersion;
// ---- Event 'FrntCam_Bus_RoadEdgeRi' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeRi'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::kMajorVersion;
// ---- Event 'Cam_Bus_LaneEvent' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'Cam_Bus_LaneEvent'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEvent::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'Cam_Bus_LaneEvent'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEvent::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'Cam_Bus_LaneEvent'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEvent::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'Cam_Bus_LaneEvent'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEvent::kMajorVersion;
// ---- Event 'Cam_Bus_LaneEventGroup' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'Cam_Bus_LaneEventGroup'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEventGroup::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'Cam_Bus_LaneEventGroup'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEventGroup::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'Cam_Bus_LaneEventGroup'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEventGroup::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'Cam_Bus_LaneEventGroup'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationCam_Bus_LaneEventGroup::kMajorVersion;
// ---- Event 'Cam_Bus_LaneMkrTemp' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'Cam_Bus_LaneMkrTemp'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationCam_Bus_LaneMkrTemp::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'Cam_Bus_LaneMkrTemp'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationCam_Bus_LaneMkrTemp::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'Cam_Bus_LaneMkrTemp'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationCam_Bus_LaneMkrTemp::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'Cam_Bus_LaneMkrTemp'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationCam_Bus_LaneMkrTemp::kMajorVersion;
// ---- Event 'FusedCam_Bus_LaneMkrSecClsLe' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::kMajorVersion;
// ---- Event 'FusedCam_Bus_LaneMkrSecClsRi' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::kMajorVersion;

}  // namespace perceptionsi_laneout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

