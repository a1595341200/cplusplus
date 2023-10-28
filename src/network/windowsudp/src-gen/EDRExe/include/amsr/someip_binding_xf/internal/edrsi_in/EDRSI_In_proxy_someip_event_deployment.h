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
/**        \file  EDRExe/include/amsr/someip_binding_xf/internal/edrsi_in/EDRSI_In_proxy_someip_event_deployment.h
 *        \brief  SOME/IP proxy event deployment info for events and field notifications of service 'EDRSI_In'
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

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_EDRSI_IN_EDRSI_IN_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_EDRSI_IN_EDRSI_IN_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_in/events/deserializer_OSM2_Bus_EDR_Data.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_edrsi_in {


namespace events {
namespace proxy {
namespace OSM2_Bus_EDR_Data {

// ---- Event 'OSM2_Bus_EDR_Data' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'OSM2_Bus_EDR_Data'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/EDRDataGroupIDT
   */
  using SampleType = ::EDRDataGroupIDT::EDRDataGroupIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::edrsi_in::events::DeserializerOSM2_Bus_EDR_Data;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace OSM2_Bus_EDR_Data
}  // namespace proxy
}  // namespace events


}  // namespace gen_edrsi_in
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_EDRSI_IN_EDRSI_IN_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

