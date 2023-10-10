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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_event_manager.h
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'ObjectFusionModelSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FourDRadarECUSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FrontFourDRadarSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets_11.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets_22.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FusedTargets_32.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_FrntRdrObjE2Efail.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_FrntRdrObjTO.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_SOCFusedSts.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h"
#include "someip_binding/internal/e2e/e2e_wrapper.h"
#include "someip_binding/internal/inactive_session_handler.h"
#include "someip_binding/internal/session_handler.h"
#include "someip_binding_transformation_layer/internal/someip_skeleton_event_manager.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

namespace objectfusionmodelsi_out {


// ---- Event 'OFM_Bus_FusedTargets_11' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets_11'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_11 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x92B2};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ObjGroup2Vccs_11
   */
  using SampleType = ::ObjGroup2Vccs_11::ObjGroup2Vccs_11;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets_11;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FusedTargets_11'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_11 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_11>;


// ---- Event 'OFM_St_SOCFusedSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_St_SOCFusedSts'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9115};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/SOCFusedSts
   */
  using SampleType = ::SOCFusedSts::SOCFusedSts;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_SOCFusedSts;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_St_SOCFusedSts'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts>;


// ---- Event 'OFM_Bus_FourDRadarECUSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FourDRadarECUSts'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarECUSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9116};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarECUSts
   */
  using SampleType = ::FourDRadarECUSts::FourDRadarECUSts;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FourDRadarECUSts;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FourDRadarECUSts'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarECUSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarECUSts>;


// ---- Event 'OFM_Bus_FrontFourDRadarSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FrontFourDRadarSts'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FrontFourDRadarSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9117};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
   */
  using SampleType = ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FrontFourDRadarSts;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FrontFourDRadarSts'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FrontFourDRadarSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FrontFourDRadarSts>;


// ---- Event 'OFM_Bus_FusedTargets_22' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets_22'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_22 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x92B3};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ObjGroup2Vccs_11
   */
  using SampleType = ::ObjGroup2Vccs_11::ObjGroup2Vccs_11;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets_22;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FusedTargets_22'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_22 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_22>;


// ---- Event 'OFM_Bus_FusedTargets_32' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_Bus_FusedTargets_32'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_32 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x92B4};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ObjGroup2Vccs_10
   */
  using SampleType = ::ObjGroup2Vccs_10::ObjGroup2Vccs_10;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_Bus_FusedTargets_32;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_Bus_FusedTargets_32'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_32 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_32>;


// ---- Event 'OFM_St_FrntRdrObjE2Efail' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_St_FrntRdrObjE2Efail'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_FrntRdrObjE2Efail {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x92E3};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrntRdrObjE2Efail
   */
  using SampleType = ::FrntRdrObjE2Efail::FrntRdrObjE2Efail;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_FrntRdrObjE2Efail;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_St_FrntRdrObjE2Efail'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjE2Efail =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_FrntRdrObjE2Efail>;


// ---- Event 'OFM_St_FrntRdrObjTO' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'OFM_St_FrntRdrObjTO'.
 */
struct ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_FrntRdrObjTO {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x92E4};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FrntRdrObjTO
   */
  using SampleType = ::FrntRdrObjTO::FrntRdrObjTO;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::objectfusionmodelsi_out::events::SerializerOFM_St_FrntRdrObjTO;

  /*!
   * \brief Used session handler.
   * \details Session handling is enabled for the event.
   * \trace CREQ-SomeIpBinding-SessionHandling
   */
  using SessionHandler = ::amsr::someip_binding::internal::SessionHandler;

  /*!
   * \brief E2E profile configuration.
   * \details No E2E protection configured for the event.
   */
  using E2eProfileConfig = void;
};

/*!
 * \brief SOME/IP Skeleton event manager type for event 'OFM_St_FrntRdrObjTO'.
 */
using ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjTO =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_FrntRdrObjTO>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace objectfusionmodelsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

