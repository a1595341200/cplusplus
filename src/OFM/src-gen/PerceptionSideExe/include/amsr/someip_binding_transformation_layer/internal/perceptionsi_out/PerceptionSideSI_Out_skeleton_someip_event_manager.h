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
/**        \file  PerceptionSideExe/include/amsr/someip_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_someip_event_manager.h
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'PerceptionSideSI_Out'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FLCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FRCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FRCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RLCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RRCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_RRCam_Bus_VisnObj.h"
#include "perceptionsi_out/PerceptionSideSI_Out_types.h"
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

namespace perceptionsi_out {


// ---- Event 'FLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FLCam_Bus_VisnObj'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFLCam_Bus_VisnObj {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9125};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFLCam_Bus_VisnObj;

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
 * \brief SOME/IP Skeleton event manager type for event 'FLCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_VisnObj =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFLCam_Bus_VisnObj>;


// ---- Event 'FRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FRCam_Bus_VisnObj'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFRCam_Bus_VisnObj {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9126};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFRCam_Bus_VisnObj;

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
 * \brief SOME/IP Skeleton event manager type for event 'FRCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_VisnObj =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFRCam_Bus_VisnObj>;


// ---- Event 'RLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RLCam_Bus_VisnObj'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRLCam_Bus_VisnObj {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9127};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRLCam_Bus_VisnObj;

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
 * \brief SOME/IP Skeleton event manager type for event 'RLCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_VisnObj =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRLCam_Bus_VisnObj>;


// ---- Event 'RRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RRCam_Bus_VisnObj'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRRCam_Bus_VisnObj {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9128};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/VisObjs
   */
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRRCam_Bus_VisnObj;

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
 * \brief SOME/IP Skeleton event manager type for event 'RRCam_Bus_VisnObj'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_VisnObj =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRRCam_Bus_VisnObj>;


// ---- Event 'FLCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FLCam_Bus_CamSts'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFLCam_Bus_CamSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9129};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFLCam_Bus_CamSts;

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
 * \brief SOME/IP Skeleton event manager type for event 'FLCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_CamSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFLCam_Bus_CamSts>;


// ---- Event 'FRCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FRCam_Bus_CamSts'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFRCam_Bus_CamSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x912A};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerFRCam_Bus_CamSts;

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
 * \brief SOME/IP Skeleton event manager type for event 'FRCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_CamSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFRCam_Bus_CamSts>;


// ---- Event 'RLCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RLCam_Bus_CamSts'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRLCam_Bus_CamSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x912B};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRLCam_Bus_CamSts;

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
 * \brief SOME/IP Skeleton event manager type for event 'RLCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_CamSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRLCam_Bus_CamSts>;


// ---- Event 'RRCam_Bus_CamSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RRCam_Bus_CamSts'.
 */
struct PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRRCam_Bus_CamSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x75};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x912C};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/CamSts1Vcc
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_out::events::SerializerRRCam_Bus_CamSts;

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
 * \brief SOME/IP Skeleton event manager type for event 'RRCam_Bus_CamSts'.
 */
using PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_CamSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRRCam_Bus_CamSts>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace perceptionsi_out

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

