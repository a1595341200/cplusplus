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
/**        \file  PerceptionExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_event_manager.cpp
 *        \brief  IPC skeleton event handling for events and field notifications of service 'PerceptionSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_binding.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

// ---- Event 'FrntCam_Bus_RoadSign' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_RoadSign'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadSign::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_RoadSign'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadSign::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_RoadSign'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadSign::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_RoadSign'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_RoadSign::kMajorVersion;
// ---- Event 'FrntCam_Bus_TrfcSign' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_TrfcSign'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcSign::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_TrfcSign'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcSign::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_TrfcSign'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcSign::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_TrfcSign'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcSign::kMajorVersion;
// ---- Event 'FrntCam_Bus_StopLine' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_StopLine'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_StopLine::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_StopLine'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_StopLine::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_StopLine'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_StopLine::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_StopLine'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_StopLine::kMajorVersion;
// ---- Event 'FrntCam_Bus_Crosswalk' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_Crosswalk'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_Crosswalk::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_Crosswalk'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_Crosswalk::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_Crosswalk'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_Crosswalk::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_Crosswalk'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_Crosswalk::kMajorVersion;
// ---- Event 'FrntCam_Bus_TrfcLi' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_TrfcLi'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_TrfcLi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_TrfcLi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_TrfcLi'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_TrfcLi::kMajorVersion;
// ---- Event 'FrntCam_Bus_ExtInfo' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_ExtInfo'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_ExtInfo'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_ExtInfo'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_ExtInfo'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_ExtInfo::kMajorVersion;
// ---- Event 'FrntCam_Bus_LsrObj' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FrntCam_Bus_LsrObj'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFrntCam_Bus_LsrObj::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FrntCam_Bus_LsrObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_LsrObj::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FrntCam_Bus_LsrObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFrntCam_Bus_LsrObj::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FrntCam_Bus_LsrObj'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFrntCam_Bus_LsrObj::kMajorVersion;

}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

