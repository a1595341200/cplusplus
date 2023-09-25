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
/**        \file  PerceptionSideExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_event_manager.cpp
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSideSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_binding.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

// ---- Event 'FLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FLCam_Bus_VisnObj'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFLCam_Bus_VisnObj::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FLCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFLCam_Bus_VisnObj::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FLCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFLCam_Bus_VisnObj::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FLCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFLCam_Bus_VisnObj::kMajorVersion;
// ---- Event 'FRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FRCam_Bus_VisnObj'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFRCam_Bus_VisnObj::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FRCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFRCam_Bus_VisnObj::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FRCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFRCam_Bus_VisnObj::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FRCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFRCam_Bus_VisnObj::kMajorVersion;
// ---- Event 'RLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'RLCam_Bus_VisnObj'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationRLCam_Bus_VisnObj::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'RLCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationRLCam_Bus_VisnObj::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'RLCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationRLCam_Bus_VisnObj::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'RLCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationRLCam_Bus_VisnObj::kMajorVersion;
// ---- Event 'RRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'RRCam_Bus_VisnObj'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationRRCam_Bus_VisnObj::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'RRCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationRRCam_Bus_VisnObj::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'RRCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationRRCam_Bus_VisnObj::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'RRCam_Bus_VisnObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationRRCam_Bus_VisnObj::kMajorVersion;
// ---- Event 'FLCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FLCam_Bus_CamSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFLCam_Bus_CamSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FLCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFLCam_Bus_CamSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FLCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFLCam_Bus_CamSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FLCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFLCam_Bus_CamSts::kMajorVersion;
// ---- Event 'FRCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FRCam_Bus_CamSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFRCam_Bus_CamSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FRCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFRCam_Bus_CamSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FRCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFRCam_Bus_CamSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FRCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFRCam_Bus_CamSts::kMajorVersion;
// ---- Event 'RLCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'RLCam_Bus_CamSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationRLCam_Bus_CamSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'RLCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationRLCam_Bus_CamSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'RLCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationRLCam_Bus_CamSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'RLCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationRLCam_Bus_CamSts::kMajorVersion;
// ---- Event 'RRCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'RRCam_Bus_CamSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationRRCam_Bus_CamSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'RRCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationRRCam_Bus_CamSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'RRCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationRRCam_Bus_CamSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'RRCam_Bus_CamSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationRRCam_Bus_CamSts::kMajorVersion;

}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

