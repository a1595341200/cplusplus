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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_transformation_layer/internal/localizationfusionsi_in/LocalizationFusionSI_In_proxy_someip_event_manager.h
 *        \brief  SOME/IP proxy event handling for events and field notifications of service 'LocalizationFusionSI_In'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_EgoMotionData.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_GNSSinf1.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_GNSSinf2.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_IMUinf.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_INSinf.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_LOCSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_LaneChgSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_SteerWhlSnsr.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_Vin.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Bus_WhlInfoGroup.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Fl_VehInLaneChg.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Prm_DynCalPrmForVehTyp.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_St_HWASts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_St_NGPSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/localizationfusionsi_in/events/deserializer_OSM2_Ti_TimeStamp.h"
#include "localizationfusionsi_in/localizationfusionsi_in_common.h"
#include "someip-protocol/internal/marshalling.h"
#include "someip_binding/internal/e2e/e2e_wrapper.h"
#include "someip_binding_transformation_layer/internal/proxy_event_xf.h"
#include "someip_binding_transformation_layer/internal/someip_proxy_event_manager.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace localizationfusionsi_in {

/*!
 * \brief Configuration for Event 'OSM2_Bus_GNSSinf1'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_GNSSinf1 {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_GNSSinf1"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x927AU};
  
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
  using SampleType = ::GNSSinf1Vcc::GNSSinf1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_GNSSinf1;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_GNSSinf1'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_GNSSinf1 =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_GNSSinf1>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_GNSSinf2'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_GNSSinf2 {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_GNSSinf2"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x927BU};
  
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
  using SampleType = ::GNSSinf2Vcc::GNSSinf2Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_GNSSinf2;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_GNSSinf2'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_GNSSinf2 =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_GNSSinf2>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_IMUinf'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_IMUinf {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_IMUinf"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x927CU};
  
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
  using SampleType = ::IMUInf1Vcc::IMUInf1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_IMUinf;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_IMUinf'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_IMUinf =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_IMUinf>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_INSinf'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_INSinf {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_INSinf"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x927DU};
  
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
  using SampleType = ::INSinf1Vcc::INSinf1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_INSinf;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_INSinf'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_INSinf =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_INSinf>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_LaneChgSts'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_LaneChgSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_LaneChgSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x927EU};
  
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
  using SampleType = ::LppLaneChgSts::LppLaneChgSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_LaneChgSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_LaneChgSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_LaneChgSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_LaneChgSts>;

/*!
 * \brief Configuration for Event 'OSM2_Fl_VehInLaneChg'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Fl_VehInLaneChg {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Fl_VehInLaneChg"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x927FU};
  
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
  using SampleType = ::OSM2_Fl_VehInLaneChg::OSM2_Fl_VehInLaneChg;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Fl_VehInLaneChg;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Fl_VehInLaneChg'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Fl_VehInLaneChg =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Fl_VehInLaneChg>;

/*!
 * \brief Configuration for Event 'OSM2_Prm_DynCalPrmForVehTyp'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForVehTyp {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Prm_DynCalPrmForVehTyp"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9280U};
  
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
  using SampleType = ::DynCalPrmForVehTyp::DynCalPrmForVehTyp;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Prm_DynCalPrmForVehTyp;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Prm_DynCalPrmForVehTyp'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Prm_DynCalPrmForVehTyp =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForVehTyp>;

/*!
 * \brief Configuration for Event 'OSM2_St_NGPSts'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_St_NGPSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_NGPSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9281U};
  
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
  using SampleType = ::NgpSts1::NgpSts1;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_St_NGPSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_NGPSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_St_NGPSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_St_NGPSts>;

/*!
 * \brief Configuration for Event 'OSM2_St_HWASts'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_St_HWASts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_HWASts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9282U};
  
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
  using SampleType = ::TjaSts::TjaSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_St_HWASts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_HWASts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_St_HWASts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_St_HWASts>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_SteerWhlSnsr'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_SteerWhlSnsr {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_SteerWhlSnsr"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x923CU};
  
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
  using SampleType = ::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_SteerWhlSnsr;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_SteerWhlSnsr'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_SteerWhlSnsr =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_SteerWhlSnsr>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_WhlInfoGroup'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_WhlInfoGroup {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_WhlInfoGroup"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9213U};
  
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
  using SampleType = ::WhlInfoGroup::WhlInfoGroup;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_WhlInfoGroup;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_WhlInfoGroup'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_WhlInfoGroup =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_WhlInfoGroup>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_Vin'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_Vin {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_Vin"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9283U};
  
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
  using SampleType = ::Vin1Vcc::Vin1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_Vin;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_Vin'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_Vin =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_Vin>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_LOCSts'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_LOCSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_LOCSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9284U};
  
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
  using SampleType = ::LOCSts1Vcc::LOCSts1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_LOCSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_LOCSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_LOCSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_LOCSts>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_EgoMotionData'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_EgoMotionData {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_EgoMotionData"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9123U};
  
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
  using SampleType = ::EgoMotion::EgoMotion;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Bus_EgoMotionData;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_EgoMotionData'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Bus_EgoMotionData =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Bus_EgoMotionData>;

/*!
 * \brief Configuration for Event 'OSM2_Ti_TimeStamp'.
 */
struct LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Ti_TimeStamp {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Ti_TimeStamp"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x36U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9215U};
  
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
  using SampleType = ::OSM2TimeStamp::OSM2TimeStamp;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::localizationfusionsi_in::events::DeserializerOSM2_Ti_TimeStamp;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Ti_TimeStamp'.
 * \details Handles event subscriptions and notification deserialization.
 */
using LocalizationFusionSI_InProxySomeIpEventManagerOSM2_Ti_TimeStamp =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<LocalizationFusionSI_InProxySomeIpEventConfigurationOSM2_Ti_TimeStamp>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace localizationfusionsi_in


#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_

