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
/**        \file  PerceptionExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_event_manager.cpp
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'PerceptionSI_LaneOut'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_event_manager.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {
namespace perceptionsi_laneout {


// ---- Event 'FusedCam_Bus_LaneMkrLe' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrLe'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrLe::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrLe'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrLe::kEventId;

// ---- Event 'FusedCam_Bus_LaneMkrRi' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrRi'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrRi::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrRi'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrRi::kEventId;

// ---- Event 'FrntCam_Bus_RoadEdgeLe' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeLe'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeLe::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeLe'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeLe::kEventId;

// ---- Event 'FrntCam_Bus_RoadEdgeRi' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeRi'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeRi::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_RoadEdgeRi'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeRi::kEventId;

// ---- Event 'Cam_Bus_LaneEvent' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'Cam_Bus_LaneEvent'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEvent::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'Cam_Bus_LaneEvent'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEvent::kEventId;

// ---- Event 'Cam_Bus_LaneEventGroup' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'Cam_Bus_LaneEventGroup'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEventGroup::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'Cam_Bus_LaneEventGroup'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEventGroup::kEventId;

// ---- Event 'Cam_Bus_LaneMkrTemp' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'Cam_Bus_LaneMkrTemp'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneMkrTemp::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'Cam_Bus_LaneMkrTemp'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneMkrTemp::kEventId;

// ---- Event 'FusedCam_Bus_LaneMkrSecClsLe' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::kEventId;

// ---- Event 'FusedCam_Bus_LaneMkrSecClsRi' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
::amsr::someip_protocol::internal::EventId constexpr PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::kEventId;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace perceptionsi_laneout

