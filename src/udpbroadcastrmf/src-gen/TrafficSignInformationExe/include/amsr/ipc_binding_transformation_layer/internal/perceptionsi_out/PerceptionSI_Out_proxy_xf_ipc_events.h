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
/**        \file  TrafficSignInformationExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'PerceptionSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_ipcbinding
 *         Commit ID: 9519b950801d42a5bc7a25dd6db848903642b9ba
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_TrfcLi1VccIDT_8/impl_type_array_trfcli1vccidt_8.h"
#include "ExtInfoIDT/impl_type_extinfoidt.h"
#include "FrntCamInfoIDT/impl_type_frntcaminfoidt.h"
#include "LineSignGroupIDT/impl_type_linesigngroupidt.h"
#include "PerceptionLaneInfoIDT/impl_type_perceptionlaneinfoidt.h"
#include "TrafficInfoIDT/impl_type_trafficinfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_ExtInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_LineSignGroup.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_TrafficInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_TrfcLi.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_Perception_Bus_FrntCamInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_Perception_Bus_LaneInfo.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "perceptionsi_out/perceptionsi_out_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

// Forward-declaration for back-reference
class PerceptionSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class PerceptionSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'Perception_Bus_LaneInfo'.
 */
struct ProxyXfIpcEventConfigurationPerception_Bus_LaneInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerPerception_Bus_LaneInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'Perception_Bus_LaneInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendPerception_Bus_LaneInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationPerception_Bus_LaneInfo::SampleType,
     ProxyXfIpcEventConfigurationPerception_Bus_LaneInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationPerception_Bus_LaneInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationPerception_Bus_LaneInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'Perception_Bus_FrntCamInfo'.
 */
struct ProxyXfIpcEventConfigurationPerception_Bus_FrntCamInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FrntCamInfoIDT::FrntCamInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerPerception_Bus_FrntCamInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'Perception_Bus_FrntCamInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendPerception_Bus_FrntCamInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationPerception_Bus_FrntCamInfo::SampleType,
     ProxyXfIpcEventConfigurationPerception_Bus_FrntCamInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationPerception_Bus_FrntCamInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationPerception_Bus_FrntCamInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_TrafficInfo'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_TrafficInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::TrafficInfoIDT::TrafficInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_TrafficInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_TrafficInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_TrafficInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_TrafficInfo::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_TrafficInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_TrafficInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_TrafficInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_TrfcLi'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcLi {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_TrfcLi;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_TrfcLi'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_TrfcLi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcLi::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcLi::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcLi::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcLi::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_LineSignGroup'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_LineSignGroup {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LineSignGroupIDT::LineSignGroupIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_LineSignGroup;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_LineSignGroup'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_LineSignGroup =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_LineSignGroup::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_LineSignGroup::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_LineSignGroup::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_LineSignGroup::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_ExtInfo'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_ExtInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::ExtInfoIDT::ExtInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_ExtInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_ExtInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_ExtInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_ExtInfo::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_ExtInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_ExtInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_ExtInfo::kIsFieldEvent>;


}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_XF_IPC_EVENTS_H_

