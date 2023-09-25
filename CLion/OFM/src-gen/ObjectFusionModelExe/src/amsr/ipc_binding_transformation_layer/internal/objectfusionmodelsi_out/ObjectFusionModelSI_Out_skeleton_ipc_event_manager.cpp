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
/**        \file  ObjectFusionModelExe/src/amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_event_manager.cpp
 *        \brief  IPC skeleton event handling for events and field notifications of service 'ObjectFusionModelSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_binding.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

// ---- Event 'OFM_Bus_FusedTargets_11' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_Bus_FusedTargets_11'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_11::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_Bus_FusedTargets_11'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_11::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_Bus_FusedTargets_11'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_11::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_Bus_FusedTargets_11'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_11::kMajorVersion;
// ---- Event 'OFM_St_SOCFusedSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_St_SOCFusedSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_St_SOCFusedSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_St_SOCFusedSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_St_SOCFusedSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_St_SOCFusedSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_St_SOCFusedSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_St_SOCFusedSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_St_SOCFusedSts::kMajorVersion;
// ---- Event 'OFM_Bus_FourDRadarECUSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_Bus_FourDRadarECUSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_Bus_FourDRadarECUSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_Bus_FourDRadarECUSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_Bus_FourDRadarECUSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_Bus_FourDRadarECUSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_Bus_FourDRadarECUSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_Bus_FourDRadarECUSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_Bus_FourDRadarECUSts::kMajorVersion;
// ---- Event 'OFM_Bus_FrontFourDRadarSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_Bus_FrontFourDRadarSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_Bus_FrontFourDRadarSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_Bus_FrontFourDRadarSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_Bus_FrontFourDRadarSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::kMajorVersion;
// ---- Event 'OFM_Bus_FusedTargets_22' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_Bus_FusedTargets_22'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_22::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_Bus_FusedTargets_22'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_22::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_Bus_FusedTargets_22'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_22::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_Bus_FusedTargets_22'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_22::kMajorVersion;
// ---- Event 'OFM_Bus_FusedTargets_32' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_Bus_FusedTargets_32'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_32::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_Bus_FusedTargets_32'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_32::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_Bus_FusedTargets_32'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_32::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_Bus_FusedTargets_32'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_Bus_FusedTargets_32::kMajorVersion;
// ---- Event 'OFM_St_FrntRdrObjE2Efail' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_St_FrntRdrObjE2Efail'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_St_FrntRdrObjE2Efail'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_St_FrntRdrObjE2Efail'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_St_FrntRdrObjE2Efail'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::kMajorVersion;
// ---- Event 'OFM_St_FrntRdrObjTO' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'OFM_St_FrntRdrObjTO'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjTO::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'OFM_St_FrntRdrObjTO'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjTO::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'OFM_St_FrntRdrObjTO'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjTO::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'OFM_St_FrntRdrObjTO'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationOFM_St_FrntRdrObjTO::kMajorVersion;

}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

