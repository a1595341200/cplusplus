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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FourDRadarECUSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FrontFourDRadarSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets_11.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets_22.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets_32.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_St_FrntRdrObjE2Efail.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_St_FrntRdrObjTO.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_St_SOCFusedSts.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

// Forward-declaration for back-reference
class ObjectFusionModelSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class ObjectFusionModelSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'OFM_Bus_FusedTargets_11'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_11 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::ObjGroup2Vccs_11::ObjGroup2Vccs_11;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FusedTargets_11;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FusedTargets_11'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FusedTargets_11 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_11::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_11::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_11::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_11::kIsFieldEvent>;


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
  using SampleType = ::SOCFusedSts::SOCFusedSts;

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
 * \brief Configuration for Event 'OFM_Bus_FourDRadarECUSts'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarECUSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FourDRadarECUSts::FourDRadarECUSts;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FourDRadarECUSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FourDRadarECUSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FourDRadarECUSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarECUSts::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarECUSts::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarECUSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FourDRadarECUSts::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_FrontFourDRadarSts'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FrontFourDRadarSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FrontFourDRadarSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FrontFourDRadarSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FrontFourDRadarSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FrontFourDRadarSts::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_FusedTargets_22'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_22 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::ObjGroup2Vccs_11::ObjGroup2Vccs_11;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FusedTargets_22;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FusedTargets_22'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FusedTargets_22 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_22::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_22::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_22::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_22::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_Bus_FusedTargets_32'.
 */
struct ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_32 {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::ObjGroup2Vccs_10::ObjGroup2Vccs_10;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_Bus_FusedTargets_32;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_Bus_FusedTargets_32'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_Bus_FusedTargets_32 =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_32::SampleType,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_32::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_32::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_Bus_FusedTargets_32::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_St_FrntRdrObjE2Efail'.
 */
struct ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjE2Efail {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FrntRdrObjE2Efail::FrntRdrObjE2Efail;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_St_FrntRdrObjE2Efail;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_St_FrntRdrObjE2Efail'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_St_FrntRdrObjE2Efail =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::SampleType,
     ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjE2Efail::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'OFM_St_FrntRdrObjTO'.
 */
struct ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjTO {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::FrntRdrObjTO::FrntRdrObjTO;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::objectfusionmodelsi_out::events::DeserializerOFM_St_FrntRdrObjTO;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  ObjectFusionModelSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'OFM_St_FrntRdrObjTO'.
 * \details Handles event subscriptions and notification deserialization.
 */
using ObjectFusionModelSI_OutProxyXfEventBackendOFM_St_FrntRdrObjTO =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjTO::SampleType,
     ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjTO::SampleDeserializerType, ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjTO::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationOFM_St_FrntRdrObjTO::kIsFieldEvent>;


}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_XF_IPC_EVENTS_H_

