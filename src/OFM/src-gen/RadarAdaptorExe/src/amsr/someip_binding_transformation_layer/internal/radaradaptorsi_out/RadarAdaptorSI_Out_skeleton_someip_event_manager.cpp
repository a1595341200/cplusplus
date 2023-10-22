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
/**        \file  RadarAdaptorExe/src/amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_event_manager.cpp
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'RadarAdaptorSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_event_manager.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {
namespace radaradaptorsi_out {


// ---- Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
::amsr::someip_protocol::internal::EventId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kEventId;

// ---- Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
::amsr::someip_protocol::internal::EventId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kEventId;

// ---- Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
::amsr::someip_protocol::internal::EventId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kEventId;

// ---- Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
::amsr::someip_protocol::internal::EventId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kEventId;

// ---- Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
::amsr::someip_protocol::internal::EventId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kEventId;

// ---- Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05' -------------------------------------------

/*!
 * \brief Definition of the service ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kServiceId;

/*!
 * \brief Definition of the event ID of the skeleton event configuration for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
::amsr::someip_protocol::internal::EventId constexpr RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kEventId;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace radaradaptorsi_out

