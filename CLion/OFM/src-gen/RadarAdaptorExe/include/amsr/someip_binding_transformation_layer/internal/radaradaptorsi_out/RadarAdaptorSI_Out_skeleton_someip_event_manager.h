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
/**        \file  RadarAdaptorExe/include/amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_event_manager.h
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'RadarAdaptorSI_Out'
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

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04.h"
#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_types.h"
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

namespace radaradaptorsi_out {


// ---- Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
struct RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x3C};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x933F};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarECUStsGrpSts
   */
  using SampleType = ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts;

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
 * \brief SOME/IP Skeleton event manager type for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
 */
using RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts>;


// ---- Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
struct RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x3C};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x933A};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp01_10
   */
  using SampleType = ::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01;

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
 * \brief SOME/IP Skeleton event manager type for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
 */
using RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01>;


// ---- Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
struct RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x3C};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x933B};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp11_20
   */
  using SampleType = ::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02;

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
 * \brief SOME/IP Skeleton event manager type for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
 */
using RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02>;


// ---- Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
struct RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x3C};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x933C};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp21_30
   */
  using SampleType = ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03;

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
 * \brief SOME/IP Skeleton event manager type for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
 */
using RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03>;


// ---- Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
struct RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x3C};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x933D};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp31_40
   */
  using SampleType = ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04;

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
 * \brief SOME/IP Skeleton event manager type for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
 */
using RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04>;


// ---- Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
struct RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x3C};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x933E};
  
  /*!
   * \brief Deserializer type for this event
   */
  static constexpr  ::amsr::someipd_app_protocol::internal::MessageType kMessageType{::amsr::someipd_app_protocol::internal::MessageType::kSomeIp};

  /*!
   * \brief Datatype of the event sample.
   * \details AsrPath: /CppImplementationDataTypes/FourDRadarObjStsGrp41_42
   */
  using SampleType = ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42;

  /*!
   * \brief Serializer for event payload.
   */
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::radaradaptorsi_out::events::SerializerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05;

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
 * \brief SOME/IP Skeleton event manager type for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
 */
using RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace radaradaptorsi_out

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

