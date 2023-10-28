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
/**        \file  LocalizationFusionExe/include/amsr/someip_binding_xf/internal/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_someip_event_deployment.h
 *        \brief  SOME/IP skeleton event deployment info for events and field notifications of service 'LocalizationFusionSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/s2s_serializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/localizationfusionsi_out/events/serializer_LFM_Bus_MapErrorSts.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_localizationfusionsi_out {


namespace events {
namespace skeleton {
namespace LFM_Bus_MapErrorSts {

// ---- Event 'LFM_Bus_MapErrorSts' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'LFM_Bus_MapErrorSts'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/MapErrorStsIDT
   */
  using SampleType = ::MapErrorStsIDT::MapErrorStsIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::localizationfusionsi_out::events::SerializerLFM_Bus_MapErrorSts;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace LFM_Bus_MapErrorSts
}  // namespace skeleton
}  // namespace events


}  // namespace gen_localizationfusionsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

