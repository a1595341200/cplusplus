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
/**        \file  RoadModelFusionExe/include/amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_manager.h
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'RoadModelFusionSI_Out'
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_ExtractedMapInf.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_LaneModel.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_MapOdd.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RefLinePoints.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RefLineSpeedInf.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RefPathGlobal.h"
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out_types.h"
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

namespace roadmodelfusionsi_out {


// ---- Event 'RMF_Bus_ExtractedMapInf' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_ExtractedMapInf'.
 */
struct RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_ExtractedMapInf {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x30};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9250};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ExtractedMapInf
   */
  using SampleType = ::ExtractedMapInf::ExtractedMapInf;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_ExtractedMapInf;

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
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_ExtractedMapInf'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_ExtractedMapInf =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_ExtractedMapInf>;


// ---- Event 'RMF_Bus_RefPathGlobal' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_RefPathGlobal'.
 */
struct RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefPathGlobal {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x30};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9251};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RefPathGlobals
   */
  using SampleType = ::RefPathGlobals::RefPathGlobals;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_RefPathGlobal;

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
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_RefPathGlobal'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefPathGlobal =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefPathGlobal>;


// ---- Event 'RMF_Bus_LaneModel' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_LaneModel'.
 */
struct RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_LaneModel {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x30};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9252};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/ExtractedLanes
   */
  using SampleType = ::ExtractedLanes::ExtractedLanes;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_LaneModel;

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
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_LaneModel'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_LaneModel =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_LaneModel>;


// ---- Event 'RMF_Bus_RefLineSpeedInf' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_RefLineSpeedInf'.
 */
struct RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefLineSpeedInf {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x30};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9253};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RefLineSpeedInf
   */
  using SampleType = ::RefLineSpeedInf::RefLineSpeedInf;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_RefLineSpeedInf;

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
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_RefLineSpeedInf'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLineSpeedInf =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefLineSpeedInf>;


// ---- Event 'RMF_Bus_RefLinePoints' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_RefLinePoints'.
 */
struct RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefLinePoints {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x30};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9254};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/BusRefLinePoints
   */
  using SampleType = ::BusRefLinePoints::BusRefLinePoints;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_RefLinePoints;

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
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_RefLinePoints'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLinePoints =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefLinePoints>;


// ---- Event 'RMF_Bus_MapOdd' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'RMF_Bus_MapOdd'.
 */
struct RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_MapOdd {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x30};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9255};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/MapOdd
   */
  using SampleType = ::MapOdd::MapOdd;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::roadmodelfusionsi_out::events::SerializerRMF_Bus_MapOdd;

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
 * \brief SOME/IP Skeleton event manager type for event 'RMF_Bus_MapOdd'.
 */
using RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_MapOdd =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_MapOdd>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace roadmodelfusionsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

