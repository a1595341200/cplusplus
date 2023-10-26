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
/**        \file  RtkExe/include/amsr/someip_binding_xf/internal/rtk_r/Rtk_Receive_proxy_someip_event_deployment.h
 *        \brief  SOME/IP proxy event deployment info for events and field notifications of service 'Rtk_Receive'
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

#ifndef RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_
#define RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_AgnssData_receive.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_GgaData_receive.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_VIN.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace gen_rtk_r {


namespace events {
namespace proxy {
namespace GgaData_receive {

// ---- Event 'GgaData_receive' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'GgaData_receive'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/GgaData
   */
  using SampleType = ::SOMEIP::ValidationKey::GgaData;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::rtk_r::events::DeserializerGgaData_receive;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace GgaData_receive
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace VIN {

// ---- Event 'VIN' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'VIN'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/RtkVIN
   */
  using SampleType = ::SOMEIP::ValidationKey::RtkVIN;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::rtk_r::events::DeserializerVIN;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace VIN
}  // namespace proxy
}  // namespace events


namespace events {
namespace proxy {
namespace AgnssData_receive {

// ---- Event 'AgnssData_receive' -------------------------------------------

/*!
 * \brief Proxy-side deployment configuration struct for event 'AgnssData_receive'
 */
struct EventDeploymentInfo {
  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /AUTOSAR/RTK/RtkVIN
   */
  using SampleType = ::SOMEIP::ValidationKey::RtkVIN;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializer = ::amsr::someip_protocol::internal::dataprototype_deserializer::rtk_r::events::DeserializerAgnssData_receive;

  /*!
   * \brief Payload deserializer wrapper.
   */
  using DeserializerWrapper = ::amsr::someip_binding_xf::internal::ser_deser::DeserializerWrapper<SampleType, PayloadDeserializer>;
};

}  // namespace AgnssData_receive
}  // namespace proxy
}  // namespace events


}  // namespace gen_rtk_r
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_RTK_R_RTK_RECEIVE_PROXY_SOMEIP_EVENT_DEPLOYMENT_H_

