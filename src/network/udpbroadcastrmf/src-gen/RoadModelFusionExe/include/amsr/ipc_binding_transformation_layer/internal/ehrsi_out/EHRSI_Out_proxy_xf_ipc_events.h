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
 *         Commit ID: 9519b950801d42a5bc7a25dd6db848903642b9ba
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_FormOfWayIDT_Vector/impl_type_array_formofwayidt_vector.h"
#include "Array_GeoFenceIDT_Vector/impl_type_array_geofenceidt_vector.h"
#include "Array_LaneSpeedLimitIDT_Vector/impl_type_array_lanespeedlimitidt_vector.h"
#include "Array_LaneWidthIDT_Vector/impl_type_array_lanewidthidt_vector.h"
#include "Array_LinearObjectIDT_Vector/impl_type_array_linearobjectidt_vector.h"
#include "Array_LinkCurvatureIDT_Vector/impl_type_array_linkcurvatureidt_vector.h"
#include "Array_LinkInfoIDT_Vector/impl_type_array_linkinfoidt_vector.h"
#include "Array_LinkMergePointIDT_Vector/impl_type_array_linkmergepointidt_vector.h"
#include "Array_LinkSlopeIDT_Vector/impl_type_array_linkslopeidt_vector.h"
#include "Array_PairConnectivityIDT_Vector/impl_type_array_pairconnectivityidt_vector.h"
#include "Array_PathNodeIDT_Vector/impl_type_array_pathnodeidt_vector.h"
#include "Array_PathTrafficSignsIDT_Vector/impl_type_array_pathtrafficsignsidt_vector.h"
#include "NOAInfoIDT/impl_type_noainfoidt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_AllMergePoints.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_FormOfWays.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_GeoFences.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LaneConnectivitys.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LaneSpeedLimits.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LaneWidthes.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinearObjects.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkCurvatures.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkInfos.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkSlopes.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_NOAInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_Nodes.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_SequenceId.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_TrafficSigns.h"
#include "ehrsi_out/ehrsi_out_common.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "uint64IDT/impl_type_uint64idt.h"

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
  using SampleType = ::NOAInfoIDT::NOAInfoIDT;

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
  using SampleType = ::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector;

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
  using SampleType = ::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector;

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
  using SampleType = ::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector;

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
  using SampleType = ::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector;

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
  using SampleType = ::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector;

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
  using SampleType = ::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector;

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
  using SampleType = ::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector;

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
  using SampleType = ::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector;

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
 * \brief Configuration for Event 'EHR_Bus_AllMergePoints'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_AllMergePoints {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_AllMergePoints;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_AllMergePoints'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_AllMergePoints =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_AllMergePoints::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_AllMergePoints::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_AllMergePoints::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_AllMergePoints::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_LinearObjects'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_LinearObjects {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_LinearObjects;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_LinearObjects'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_LinearObjects =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_LinearObjects::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_LinearObjects::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_LinearObjects::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_LinearObjects::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_FormOfWays'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_FormOfWays {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_FormOfWays;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_FormOfWays'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_FormOfWays =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_FormOfWays::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_FormOfWays::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_FormOfWays::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_FormOfWays::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_SequenceId'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_SequenceId {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::uint64IDT::uint64IDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_SequenceId;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_SequenceId'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_SequenceId =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_SequenceId::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_SequenceId::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_SequenceId::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_SequenceId::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'EHR_Bus_LaneWidthes'.
 */
struct ProxyXfIpcEventConfigurationEHR_Bus_LaneWidthes {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::ehrsi_out::events::DeserializerEHR_Bus_LaneWidthes;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EHRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EHR_Bus_LaneWidthes'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EHRSI_OutProxyXfEventBackendEHR_Bus_LaneWidthes =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEHR_Bus_LaneWidthes::SampleType,
     ProxyXfIpcEventConfigurationEHR_Bus_LaneWidthes::SampleDeserializerType, ProxyXfIpcEventConfigurationEHR_Bus_LaneWidthes::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEHR_Bus_LaneWidthes::kIsFieldEvent>;


}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_PROXY_XF_IPC_EVENTS_H_

