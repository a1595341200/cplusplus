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
/**        \file  PerceptionExe/include/amsr/someip_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_someip_event_manager.h
 *        \brief  SOME/IP skeleton event handling for events and field notifications of service 'PerceptionSI_VisnObjOut'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_SOMEIP_EVENT_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_visnobjout/events/serializer_FrntCam_Bus_VisnObj.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut_types.h"
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

namespace perceptionsi_visnobjout {


// ---- Event 'FrntCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Skeleton-side configuration struct for event 'FrntCam_Bus_VisnObj'.
 */
struct PerceptionSI_VisnObjOutSkeletonSomeIpEventConfigurationFrntCam_Bus_VisnObj {
  /*!
   * \brief SOME/IP service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x5D};

  /*!
   * \brief SOME/IP major version.
   */
  static constexpr ::amsr::someip_protocol::internal::InterfaceVersion kMajorVersion{1};

  /*!
   * \brief SOME/IP event ID.
   */
  static constexpr ::amsr::someip_protocol::internal::EventId kEventId{0x9124};
  
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
  using PayloadSerializer = ::amsr::someip_protocol::internal::dataprototype_serializer::perceptionsi_visnobjout::events::SerializerFrntCam_Bus_VisnObj;

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
 * \brief SOME/IP Skeleton event manager type for event 'FrntCam_Bus_VisnObj'.
 */
using PerceptionSI_VisnObjOutSkeletonSomeIpEventManagerFrntCam_Bus_VisnObj =
    ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventManager<PerceptionSI_VisnObjOutSkeletonSomeIpEventConfigurationFrntCam_Bus_VisnObj>;


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace perceptionsi_visnobjout

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_SOMEIP_EVENT_MANAGER_H_

