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
/**        \file  LocalizationFusionExe/include/amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_event_manager.h
 *        \brief  SOME/IP proxy event handling for events and field notifications of service 'ToSOCA_LocSensorInfoSI'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_SOMEIP_EVENT_MANAGER_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_locsensorinfosi/events/deserializer_OSM2_Bus_LocSensorInfo.h"
#include "someip-protocol/internal/marshalling.h"
#include "someip_binding/internal/e2e/e2e_wrapper.h"
#include "someip_binding_transformation_layer/internal/proxy_event_xf.h"
#include "someip_binding_transformation_layer/internal/someip_proxy_event_manager.h"
#include "tosoca_locsensorinfosi/tosoca_locsensorinfosi_common.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace tosoca_locsensorinfosi {

/*!
 * \brief Configuration for Event 'OSM2_Bus_LocSensorInfo'.
 */
struct ToSOCA_LocSensorInfoSIProxySomeIpEventConfigurationOSM2_Bus_LocSensorInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_LocSensorInfo"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0xA2U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x934AU};
  
  /*!
   * \brief Message type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static constexpr bool kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LocSensorInfo1VCC::LocSensorInfo1VCC;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::tosoca_locsensorinfosi::events::DeserializerOSM2_Bus_LocSensorInfo;

  /*!
   * \brief E2E profile configuration
   */
  using E2eProfileConfig = void; // No E2E

  /*!
   * \brief Flag to indicate if E2E check shall be done.
   *        true = NO E2E Check (skip E2E header), false (default) = Do E2E check.
   */
  static bool constexpr kE2eCheckDisabled{false};
};

/*!
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_LocSensorInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ToSOCA_LocSensorInfoSIProxySomeIpEventManagerOSM2_Bus_LocSensorInfo =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<ToSOCA_LocSensorInfoSIProxySomeIpEventConfigurationOSM2_Bus_LocSensorInfo>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace tosoca_locsensorinfosi


#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_SOMEIP_EVENT_MANAGER_H_

