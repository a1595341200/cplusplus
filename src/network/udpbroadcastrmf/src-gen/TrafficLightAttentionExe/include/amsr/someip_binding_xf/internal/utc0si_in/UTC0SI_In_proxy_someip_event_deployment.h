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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_binding_xf/internal/utc0si_in/UTC0SI_In_proxy_someip_event_deployment.h
 *        \brief  SOME/IP proxy event deployment info for events and field notifications of service 'UTC0SI_In'
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_UTC0SI_IN_UTC0SI_IN_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_UTC0SI_IN_UTC0SI_IN_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/utc0si_in/events/deserializer_OSM2_Bus_VehTiAndData.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_utc0si_in {


namespace events {
namespace proxy {
namespace OSM2_Bus_VehTiAndData {

// ---- Event 'OSM2_Bus_VehTiAndData' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'OSM2_Bus_VehTiAndData'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/DateTi30_2IDT
   */
  using SampleType = ::DateTi30_2IDT::DateTi30_2IDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::utc0si_in::events::DeserializerOSM2_Bus_VehTiAndData;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace OSM2_Bus_VehTiAndData
}  // namespace proxy
}  // namespace events


}  // namespace gen_utc0si_in
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_UTC0SI_IN_UTC0SI_IN_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

