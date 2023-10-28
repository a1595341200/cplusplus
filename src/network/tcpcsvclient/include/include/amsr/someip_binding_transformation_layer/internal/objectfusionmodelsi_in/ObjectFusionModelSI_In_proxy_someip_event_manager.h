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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_in/ObjectFusionModelSI_In_proxy_someip_event_manager.h
 *        \brief  SOME/IP proxy event handling for events and field notifications of service 'ObjectFusionModelSI_In'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_in/events/deserializer_OSM2_Bus_AsyDataWithCmpSafeChkd.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_in/events/deserializer_OSM2_Bus_VehCfgPrmInt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_in/events/deserializer_OSM2_Bus_VehSpdLgtSafeGroupChkd.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_in/events/deserializer_OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_in/events/deserializer_OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_in/events/deserializer_OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt.h"
#include "objectfusionmodelsi_in/objectfusionmodelsi_in_common.h"
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

namespace objectfusionmodelsi_in {

/*!
 * \brief Configuration for Event 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt'.
 */
struct ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x22U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x911CU};
  
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
  using SampleType = ::DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_in::events::DeserializerOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_InProxySomeIpEventManagerOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForAxleDstReToVehFrnt>;

/*!
 * \brief Configuration for Event 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt'.
 */
struct ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x22U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x911DU};
  
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
  using SampleType = ::DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_in::events::DeserializerOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_InProxySomeIpEventManagerOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForCamLongDistToVehFrnt>;

/*!
 * \brief Configuration for Event 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt'.
 */
struct ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x22U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x911EU};
  
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
  using SampleType = ::DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_in::events::DeserializerOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_InProxySomeIpEventManagerOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Prm_DynCalPrmForCamLatDistToVehFrnt>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_VehCfgPrmInt'.
 */
struct ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Bus_VehCfgPrmInt {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_VehCfgPrmInt"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x22U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x911FU};
  
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
  using SampleType = ::VehCfgPrmInt1Vcc::VehCfgPrmInt1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_in::events::DeserializerOSM2_Bus_VehCfgPrmInt;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_VehCfgPrmInt'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_InProxySomeIpEventManagerOSM2_Bus_VehCfgPrmInt =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Bus_VehCfgPrmInt>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_VehSpdLgtSafeGroupChkd'.
 */
struct ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Bus_VehSpdLgtSafeGroupChkd {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_VehSpdLgtSafeGroupChkd"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x22U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9120U};
  
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
  using SampleType = ::VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_in::events::DeserializerOSM2_Bus_VehSpdLgtSafeGroupChkd;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_VehSpdLgtSafeGroupChkd'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_InProxySomeIpEventManagerOSM2_Bus_VehSpdLgtSafeGroupChkd =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Bus_VehSpdLgtSafeGroupChkd>;

/*!
 * \brief Configuration for Event 'OSM2_Bus_AsyDataWithCmpSafeChkd'.
 */
struct ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Bus_AsyDataWithCmpSafeChkd {
  /*!
   * \brief Event Short name.
   */
  static constexpr vac::container::CStringView kEventName{"OSM2_Bus_AsyDataWithCmpSafeChkd"_sv};

  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x22U};

  /*!
   * \brief SOME/IP event identifier for this event.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9121U};
  
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
  using SampleType = ::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd;

  /*!
   * \brief Deserializer for event payload.
   */
  using PayloadDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_in::events::DeserializerOSM2_Bus_AsyDataWithCmpSafeChkd;

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
 * \brief SOME/IP Proxy event manager for event 'OSM2_Bus_AsyDataWithCmpSafeChkd'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_InProxySomeIpEventManagerOSM2_Bus_AsyDataWithCmpSafeChkd =
    ::amsr::someip_binding_transformation_layer::internal::SomeipProxyEventManager<ObjectFusionModelSI_InProxySomeIpEventConfigurationOSM2_Bus_AsyDataWithCmpSafeChkd>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace objectfusionmodelsi_in


#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_SOMEIP_EVENT_MANAGER_H_

