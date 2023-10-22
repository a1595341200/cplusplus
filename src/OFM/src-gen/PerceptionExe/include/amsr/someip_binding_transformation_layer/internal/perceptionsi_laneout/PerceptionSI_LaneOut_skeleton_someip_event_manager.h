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
/**        \file  PerceptionExe/include/amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_event_manager.h
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'PerceptionSI_LaneOut'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_SOMEIP_EVENT_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEvent.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneEventGroup.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_Cam_Bus_LaneMkrTemp.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeLe.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FrntCam_Bus_RoadEdgeRi.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrLe.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrRi.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsLe.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_laneout/events/serializer_FusedCam_Bus_LaneMkrSecClsRi.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_types.h"
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

namespace perceptionsi_laneout {


// ---- Event 'FusedCam_Bus_LaneMkrLe' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrLe'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrLe {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91ED};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1Le
   */
  using SampleType = ::LaneMkrCam1Le::LaneMkrCam1Le;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrLe;

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
 * \brief SOME/IP Skeleton event manager type for event 'FusedCam_Bus_LaneMkrLe'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrLe =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrLe>;


// ---- Event 'FusedCam_Bus_LaneMkrRi' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrRi'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrRi {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91EE};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1Ri
   */
  using SampleType = ::LaneMkrCam1Ri::LaneMkrCam1Ri;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrRi;

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
 * \brief SOME/IP Skeleton event manager type for event 'FusedCam_Bus_LaneMkrRi'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrRi =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrRi>;


// ---- Event 'FrntCam_Bus_RoadEdgeLe' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_RoadEdgeLe'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeLe {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91F0};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RoadEdge1VccLe
   */
  using SampleType = ::RoadEdge1VccLe::RoadEdge1VccLe;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFrntCam_Bus_RoadEdgeLe;

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
 * \brief SOME/IP Skeleton event manager type for event 'FrntCam_Bus_RoadEdgeLe'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeLe =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeLe>;


// ---- Event 'FrntCam_Bus_RoadEdgeRi' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_RoadEdgeRi'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeRi {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91F1};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/RoadEdge1VccRi
   */
  using SampleType = ::RoadEdge1VccRi::RoadEdge1VccRi;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFrntCam_Bus_RoadEdgeRi;

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
 * \brief SOME/IP Skeleton event manager type for event 'FrntCam_Bus_RoadEdgeRi'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeRi =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeRi>;


// ---- Event 'Cam_Bus_LaneEvent' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'Cam_Bus_LaneEvent'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEvent {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91F7};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneEvent
   */
  using SampleType = ::LaneEvent::LaneEvent;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerCam_Bus_LaneEvent;

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
 * \brief SOME/IP Skeleton event manager type for event 'Cam_Bus_LaneEvent'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEvent =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEvent>;


// ---- Event 'Cam_Bus_LaneEventGroup' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'Cam_Bus_LaneEventGroup'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEventGroup {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91F8};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneEventGroups
   */
  using SampleType = ::LaneEventGroups::LaneEventGroups;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerCam_Bus_LaneEventGroup;

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
 * \brief SOME/IP Skeleton event manager type for event 'Cam_Bus_LaneEventGroup'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEventGroup =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEventGroup>;


// ---- Event 'Cam_Bus_LaneMkrTemp' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'Cam_Bus_LaneMkrTemp'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneMkrTemp {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91F9};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrTempCam1Vcc
   */
  using SampleType = ::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerCam_Bus_LaneMkrTemp;

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
 * \brief SOME/IP Skeleton event manager type for event 'Cam_Bus_LaneMkrTemp'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneMkrTemp =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneMkrTemp>;


// ---- Event 'FusedCam_Bus_LaneMkrSecClsLe' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsLe {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91FC};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1SecClsLe
   */
  using SampleType = ::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrSecClsLe;

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
 * \brief SOME/IP Skeleton event manager type for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsLe =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsLe>;


// ---- Event 'FusedCam_Bus_LaneMkrSecClsRi' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
struct PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsRi {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x61};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x91FD};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/LaneMkrCam1SecClsRi
   */
  using SampleType = ::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_laneout::events::SerializerFusedCam_Bus_LaneMkrSecClsRi;

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
 * \brief SOME/IP Skeleton event manager type for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
using PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsRi =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsRi>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace perceptionsi_laneout

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

