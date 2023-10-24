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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_xf/internal/tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_proxy_someip_event_deployment.h
 *        \brief  SOME/IP proxy event deployment info for events and field notifications of service 'TOSOCA_SideRdrFusedTargetsSI'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_siderdrfusedtargetssi/events/deserializer_OSM2_TOSOCA_SideRdrFusedTargets1.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_siderdrfusedtargetssi/events/deserializer_OSM2_TOSOCA_SideRdrFusedTargets2.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_siderdrfusedtargetssi/events/deserializer_OSM2_TOSOCA_SideRdrFusedTargets3.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_siderdrfusedtargetssi/events/deserializer_OSM2_TOSOCA_SideRdrFusedTargets4.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_tosoca_siderdrfusedtargetssi {


namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets1 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets1' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'OSM2_TOSOCA_SideRdrFusedTargets1'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_TOSOCATFMObjGroupIDT_8
   */
  using SampleType = ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::tosoca_siderdrfusedtargetssi::events::DeserializerOSM2_TOSOCA_SideRdrFusedTargets1;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets1
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets2 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets2' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'OSM2_TOSOCA_SideRdrFusedTargets2'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_TOSOCATFMObjGroupIDT_8
   */
  using SampleType = ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::tosoca_siderdrfusedtargetssi::events::DeserializerOSM2_TOSOCA_SideRdrFusedTargets2;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets2
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets3 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets3' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'OSM2_TOSOCA_SideRdrFusedTargets3'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_TOSOCATFMObjGroupIDT_8
   */
  using SampleType = ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::tosoca_siderdrfusedtargetssi::events::DeserializerOSM2_TOSOCA_SideRdrFusedTargets3;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets3
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets4 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets4' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'OSM2_TOSOCA_SideRdrFusedTargets4'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/Array_TOSOCATFMObjGroupIDT_8
   */
  using SampleType = ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::tosoca_siderdrfusedtargetssi::events::DeserializerOSM2_TOSOCA_SideRdrFusedTargets4;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets4
}  // namespace proxy
}  // namespace events


}  // namespace gen_tosoca_siderdrfusedtargetssi
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

