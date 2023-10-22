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
/**        \file  RoadModelFusionExe/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'EHRSI_Out'
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_GeoFences.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_GeofennceJudge.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LaneConnectivitys.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LaneSpeedLimits.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkCurvatures.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkInfos.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkSlopes.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_MergePoints.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_NOAInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_Nodes.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_TrafficSigns.h"
#include "ehrsi_out/ehrsi_out_common.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace ehrsi_out {

// Forward-declaration for back-reference
class EHRSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class EHRSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'EHR_Bus_NOAInfo'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_NOAInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::NOAInfo::NOAInfo;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_NOAInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_NOAInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_NOAInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_NOAInfo::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_NOAInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_NOAInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_NOAInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_LaneConnectivitys'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_LaneConnectivitys {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneConnectivitys::LaneConnectivitys;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_LaneConnectivitys;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_LaneConnectivitys'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_LaneConnectivitys =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_LaneConnectivitys::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_LaneConnectivitys::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_LaneConnectivitys::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_LaneConnectivitys::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_Nodes'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_Nodes {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Nodes::Nodes;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_Nodes;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_Nodes'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_Nodes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_Nodes::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_Nodes::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_Nodes::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_Nodes::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_TrafficSigns'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_TrafficSigns {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::TrafficSigns::TrafficSigns;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_TrafficSigns;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_TrafficSigns'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_TrafficSigns =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_TrafficSigns::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_TrafficSigns::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_TrafficSigns::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_TrafficSigns::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_GeoFences'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_GeoFences {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::GeoFences::GeoFences;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_GeoFences;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_GeoFences'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_GeoFences =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_GeoFences::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_GeoFences::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_GeoFences::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_GeoFences::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_LinkCurvatures'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_LinkCurvatures {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LinkCurvatures::LinkCurvatures;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_LinkCurvatures;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_LinkCurvatures'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_LinkCurvatures =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_LinkCurvatures::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_LinkCurvatures::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_LinkCurvatures::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_LinkCurvatures::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_LinkSlopes'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_LinkSlopes {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LinkSlopes::LinkSlopes;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_LinkSlopes;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_LinkSlopes'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_LinkSlopes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_LinkSlopes::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_LinkSlopes::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_LinkSlopes::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_LinkSlopes::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_LaneSpeedLimits'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_LaneSpeedLimits {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneSpeedLimits::LaneSpeedLimits;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_LaneSpeedLimits;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_LaneSpeedLimits'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_LaneSpeedLimits =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_LaneSpeedLimits::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_LaneSpeedLimits::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_LaneSpeedLimits::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_LaneSpeedLimits::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_LinkInfos'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_LinkInfos {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LinkInfos::LinkInfos;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_LinkInfos;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_LinkInfos'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_LinkInfos =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_LinkInfos::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_LinkInfos::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_LinkInfos::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_LinkInfos::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_MergePoints'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_MergePoints {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::AllMergePoints::AllMergePoints;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_MergePoints;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_MergePoints'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_MergePoints =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_MergePoints::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_MergePoints::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_MergePoints::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_MergePoints::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_GeofennceJudge'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_GeofennceJudge {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::GeofennceJudge::GeofennceJudge;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_GeofennceJudge;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_GeofennceJudge'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_GeofennceJudge =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_GeofennceJudge::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_GeofennceJudge::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_GeofennceJudge::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_GeofennceJudge::kIsFieldEvent>;


}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_PROXY_XF_IPC_EVENTS_H_

