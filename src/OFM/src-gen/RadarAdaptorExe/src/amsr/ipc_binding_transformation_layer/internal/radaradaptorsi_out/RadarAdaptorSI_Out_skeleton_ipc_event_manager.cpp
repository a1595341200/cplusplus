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
/**        \file  RadarAdaptorExe/src/amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_event_manager.cpp
 *        \brief  IPC skeleton event handling for events and field notifications of service 'RadarAdaptorSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_binding.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace radaradaptorsi_out {

// ---- Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kMajorVersion;
// ---- Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kMajorVersion;
// ---- Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kMajorVersion;
// ---- Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kMajorVersion;
// ---- Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kMajorVersion;
// ---- Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05' -------------------------------------------

/*!
 * \brief Definition of the Event name of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
vac::container::CStringView constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kEventName;

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::EventId constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kEventId;

/*!
 * \brief Definition of the major version of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion constexpr SkeletonIpcEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kMajorVersion;

}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

