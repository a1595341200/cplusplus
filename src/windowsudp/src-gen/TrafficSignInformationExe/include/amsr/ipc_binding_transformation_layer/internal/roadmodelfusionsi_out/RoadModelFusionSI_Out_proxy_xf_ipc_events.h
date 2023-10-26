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
/**        \file  TrafficSignInformationExe/include/amsr/ipc_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'RoadModelFusionSI_Out'
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PositionIDT/impl_type_positionidt.h"
#include "RMFInfoIDT/impl_type_rmfinfoidt.h"
#include "RMFMapInfoIDT/impl_type_rmfmapinfoidt.h"
#include "VectorMapInfoIDT/impl_type_vectormapinfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/roadmodelfusionsi_out/events/deserializer_RMF_Bus_MapInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/roadmodelfusionsi_out/events/deserializer_RMF_Bus_Position.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/roadmodelfusionsi_out/events/deserializer_RMF_Bus_RMFInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/roadmodelfusionsi_out/events/deserializer_RMF_Bus_VectorMapInfo.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace roadmodelfusionsi_out {

// Forward-declaration for back-reference
class RoadModelFusionSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class RoadModelFusionSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'RMF_Bus_RMFInfo'.
 */
struct ProxyXfIpcEventConfigurationRMF_Bus_RMFInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::RMFInfoIDT::RMFInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::roadmodelfusionsi_out::events::DeserializerRMF_Bus_RMFInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RoadModelFusionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RMF_Bus_RMFInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RoadModelFusionSI_OutProxyXfEventBackendRMF_Bus_RMFInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRMF_Bus_RMFInfo::SampleType,
     ProxyXfIpcEventConfigurationRMF_Bus_RMFInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationRMF_Bus_RMFInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRMF_Bus_RMFInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'RMF_Bus_MapInfo'.
 */
struct ProxyXfIpcEventConfigurationRMF_Bus_MapInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::RMFMapInfoIDT::RMFMapInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::roadmodelfusionsi_out::events::DeserializerRMF_Bus_MapInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RoadModelFusionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RMF_Bus_MapInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RoadModelFusionSI_OutProxyXfEventBackendRMF_Bus_MapInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRMF_Bus_MapInfo::SampleType,
     ProxyXfIpcEventConfigurationRMF_Bus_MapInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationRMF_Bus_MapInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRMF_Bus_MapInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'RMF_Bus_VectorMapInfo'.
 */
struct ProxyXfIpcEventConfigurationRMF_Bus_VectorMapInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::VectorMapInfoIDT::VectorMapInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::roadmodelfusionsi_out::events::DeserializerRMF_Bus_VectorMapInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RoadModelFusionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RMF_Bus_VectorMapInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RoadModelFusionSI_OutProxyXfEventBackendRMF_Bus_VectorMapInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRMF_Bus_VectorMapInfo::SampleType,
     ProxyXfIpcEventConfigurationRMF_Bus_VectorMapInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationRMF_Bus_VectorMapInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRMF_Bus_VectorMapInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'RMF_Bus_Position'.
 */
struct ProxyXfIpcEventConfigurationRMF_Bus_Position {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::PositionIDT::PositionIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::roadmodelfusionsi_out::events::DeserializerRMF_Bus_Position;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  RoadModelFusionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RMF_Bus_Position'.
 * \details Handles event subscriptions and notification deserialization.
 */
using RoadModelFusionSI_OutProxyXfEventBackendRMF_Bus_Position =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRMF_Bus_Position::SampleType,
     ProxyXfIpcEventConfigurationRMF_Bus_Position::SampleDeserializerType, ProxyXfIpcEventConfigurationRMF_Bus_Position::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRMF_Bus_Position::kIsFieldEvent>;


}  // namespace roadmodelfusionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_XF_IPC_EVENTS_H_

