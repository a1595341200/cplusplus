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
/**        \file  TrafficLightAttentionExe/include/amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'ObjectFusionModelSI_Out'
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_ObjGroup2VccIDT_8/impl_type_array_objgroup2vccidt_8.h"
#include "FourDRadarStatusIDT/impl_type_fourdradarstatusidt.h"
#include "PerceptionLaneInfoIDT/impl_type_perceptionlaneinfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FourDRadarStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets01.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets02.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets03.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets04.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_LaneInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_St_SOCFusedSts.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"
#include "uint16IDT/impl_type_uint16idt.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

// Forward-declaration for back-reference
class ObjectFusionModelSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class ObjectFusionModelSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'OFM_Bus_FusedTargets01'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets01 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FusedTargets01;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FusedTargets01'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FusedTargets01 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets01::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets01::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets01::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets01::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_FusedTargets02'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets02 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FusedTargets02;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FusedTargets02'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FusedTargets02 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets02::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets02::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets02::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets02::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_FusedTargets03'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets03 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FusedTargets03;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FusedTargets03'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FusedTargets03 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets03::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets03::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets03::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets03::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_FusedTargets04'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets04 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FusedTargets04;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FusedTargets04'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FusedTargets04 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets04::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets04::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets04::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets04::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_St_SOCFusedSts'.
 */
struct ProxyXfIpcEventConfigurationOFM_St_SOCFusedSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::uint16IDT::uint16IDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_St_SOCFusedSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_St_SOCFusedSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_St_SOCFusedSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_St_SOCFusedSts::SampleType,
     ProxyXfIpcEventConfigurationOFM_St_SOCFusedSts::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_St_SOCFusedSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_St_SOCFusedSts::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_FourDRadarStatus'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarStatus {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarStatusIDT::FourDRadarStatusIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FourDRadarStatus;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FourDRadarStatus'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FourDRadarStatus =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarStatus::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarStatus::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarStatus::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarStatus::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_LaneInfo'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_LaneInfo {
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
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_LaneInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_LaneInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_LaneInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_LaneInfo::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_LaneInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_LaneInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_LaneInfo::kIsFieldEvent>;


}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_XF_IPC_EVENTS_H_

