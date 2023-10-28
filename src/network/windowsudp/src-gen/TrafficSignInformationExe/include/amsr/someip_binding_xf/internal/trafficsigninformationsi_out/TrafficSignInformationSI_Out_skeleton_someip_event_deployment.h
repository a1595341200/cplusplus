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
/**        \file  TrafficSignInformationExe/include/amsr/someip_binding_xf/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_skeleton_someip_event_deployment.h
 *        \brief  SOME/IP skeleton event deployment info for events and field notifications of service 'TrafficSignInformationSI_Out'
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/s2s_serializer_wrapper.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/trafficsigninformationsi_out/events/serializer_TSI_Bus_HMIData.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_trafficsigninformationsi_out {


namespace events {
namespace skeleton {
namespace TSI_Bus_HMIData {

// ---- Event 'TSI_Bus_HMIData' -------------------------------------------

/*!
 * \brief Skeleton-side deployment configuration struct for event 'TSI_Bus_HMIData'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/TsiHmiData1VccIDT
   */
  using SampleType = ::TsiHmiData1VccIDT::TsiHmiData1VccIDT;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::trafficsigninformationsi_out::events::SerializerTSI_Bus_HMIData;

  /*!
   * \brief Payload serializer wrapper.
   */
  using SerializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::SerializerWrapper<SampleType, PayloadSerializer>;
};

}  // namespace TSI_Bus_HMIData
}  // namespace skeleton
}  // namespace events


}  // namespace gen_trafficsigninformationsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_SKELETON_SOMEIP_EVENT_DEPLOYMENT_H_

