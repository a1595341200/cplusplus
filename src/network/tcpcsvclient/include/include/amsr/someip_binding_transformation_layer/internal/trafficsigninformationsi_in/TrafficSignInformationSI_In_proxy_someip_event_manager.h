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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_transformation_layer/internal/trafficsigninformationsi_in/TrafficSignInformationSI_In_proxy_someip_event_manager.h
 *        \brief  SOME/IP proxy event handling for events and field notifications of service 'TrafficSignInformationSI_In'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Bus_AccFusnTrfcReq.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Bus_BltLockStAtDrvr.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Bus_IndcrTurnReq.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Bus_RoadSgnInfoActv.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Bus_SpdAlrmActvForRoadSgnInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Ena_TrfcSignInfoEna.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_Req_OffsForSpdWarnSetgReq.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_DoorLeReSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_DoorPassSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_DoorRiReSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_HoodSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_HznSplyElectcSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_RoadMiscSgnInfoSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_TrSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/trafficsigninformationsi_in/events/deserializer_OSM2_St_TsiFaultSts.h"
#include "someip-protocol/internal/marshalling.h"
#include "someip_binding/internal/e2e/e2e_wrapper.h"
#include "someip_binding_transformation_layer/internal/proxy_event_xf.h"
#include "someip_binding_transformation_layer/internal/someip_proxy_event_manager.h"
#include "trafficsigninformationsi_in/trafficsigninformationsi_in_common.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace trafficsigninformationsi_in {

/*!
 * \brief Configuration for Event 'OSM2_Ena_TrfcSignInfoEna'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Ena_TrfcSignInfoEna {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Ena_TrfcSignInfoEna"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9232U};
  
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
  using SampleType = ::TrfcSignInfoEna::OnOff1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Ena_TrfcSignInfoEna;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Ena_TrfcSignInfoEna'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Ena_TrfcSignInfoEna =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Ena_TrfcSignInfoEna>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_RoadSgnInfoActv'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_RoadSgnInfoActv {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_RoadSgnInfoActv"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9233U};
  
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
  using SampleType = ::RoadSgnInfoActv0::RoadSgnInfoActv0;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Bus_RoadSgnInfoActv;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_RoadSgnInfoActv'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Bus_RoadSgnInfoActv =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_RoadSgnInfoActv>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_SpdAlrmActvForRoadSgnInfo {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_SpdAlrmActvForRoadSgnInfo"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9234U};
  
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
  using SampleType = ::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Bus_SpdAlrmActvForRoadSgnInfo;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Bus_SpdAlrmActvForRoadSgnInfo =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_SpdAlrmActvForRoadSgnInfo>;

/*!
 * \brief Configuration for Event 'OSM2_St_RoadMiscSgnInfoSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_RoadMiscSgnInfoSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_RoadMiscSgnInfoSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9235U};
  
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
  using SampleType = ::RoadMiscSgnInfoSts::RoadMiscSgnInfoSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_RoadMiscSgnInfoSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_RoadMiscSgnInfoSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_RoadMiscSgnInfoSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_RoadMiscSgnInfoSts>;

/*!
 * \brief Configuration for Event 'OSM2_St_DoorPassSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_DoorPassSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_DoorPassSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9236U};
  
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
  using SampleType = ::DoorPassSts::DoorPassSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_DoorPassSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_DoorPassSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_DoorPassSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_DoorPassSts>;

/*!
 * \brief Configuration for Event 'OSM2_St_DoorLeReSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_DoorLeReSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_DoorLeReSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9237U};
  
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
  using SampleType = ::DoorLeReSts::DoorLeReSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_DoorLeReSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_DoorLeReSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_DoorLeReSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_DoorLeReSts>;

/*!
 * \brief Configuration for Event 'OSM2_St_DoorRiReSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_DoorRiReSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_DoorRiReSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9238U};
  
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
  using SampleType = ::DoorRiReSts::DoorRiReSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_DoorRiReSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_DoorRiReSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_DoorRiReSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_DoorRiReSts>;

/*!
 * \brief Configuration for Event 'OSM2_St_HoodSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_HoodSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_HoodSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9239U};
  
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
  using SampleType = ::HoodSts::HoodSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_HoodSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_HoodSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_HoodSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_HoodSts>;

/*!
 * \brief Configuration for Event 'OSM2_St_TrSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_TrSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_TrSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x923AU};
  
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
  using SampleType = ::TrSts::TrSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_TrSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_TrSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_TrSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_TrSts>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_BltLockStAtDrvr'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_BltLockStAtDrvr {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_BltLockStAtDrvr"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x923BU};
  
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
  using SampleType = ::BltLockStFrnt::BltLockStFrnt;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Bus_BltLockStAtDrvr;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_BltLockStAtDrvr'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Bus_BltLockStAtDrvr =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_BltLockStAtDrvr>;

/*!
 * \brief Configuration for Event 'OSM2_St_HznSplyElectcSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_HznSplyElectcSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_HznSplyElectcSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x923DU};
  
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
  using SampleType = ::HznSplyElectcSts1::HznSplyElectcSts1;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_HznSplyElectcSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_HznSplyElectcSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_HznSplyElectcSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_HznSplyElectcSts>;

/*!
 * \brief Configuration for Event 'OSM2_St_TsiFaultSts'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_TsiFaultSts {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_St_TsiFaultSts"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x923EU};
  
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
  using SampleType = ::TsiFaultSts::TsiFaultSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_St_TsiFaultSts;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_St_TsiFaultSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_St_TsiFaultSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_St_TsiFaultSts>;

/*!
 * \brief Configuration for Event 'OSM2_Req_OffsForSpdWarnSetgReq'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Req_OffsForSpdWarnSetgReq {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Req_OffsForSpdWarnSetgReq"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x923FU};
  
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
  using SampleType = ::OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Req_OffsForSpdWarnSetgReq;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Req_OffsForSpdWarnSetgReq'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Req_OffsForSpdWarnSetgReq =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Req_OffsForSpdWarnSetgReq>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_AccFusnTrfcReq'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_AccFusnTrfcReq {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_AccFusnTrfcReq"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9240U};
  
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
  using SampleType = ::AccFusnTrfcReq::AccFusnTrfcReq;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Bus_AccFusnTrfcReq;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_AccFusnTrfcReq'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Bus_AccFusnTrfcReq =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_AccFusnTrfcReq>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9122U};
  
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
  using SampleType = ::ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_IndcrTurnReq'.
 */
struct TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_IndcrTurnReq {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_IndcrTurnReq"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x2EU};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9212U};
  
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
  using SampleType = ::IndcrTurnReq::IndcrTurnReq;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::trafficsigninformationsi_in::events::DeserializerOSM2_Bus_IndcrTurnReq;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_IndcrTurnReq'.
 * \details Handles event subscriptions and notification deserialization.
 */
using TrafficSignInformationSI_InProxySomeIpEventManagerOSM2_Bus_IndcrTurnReq =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<TrafficSignInformationSI_InProxySomeIpEventConfigurationOSM2_Bus_IndcrTurnReq>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace trafficsigninformationsi_in


#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_

