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
/**        \file  LocalizationFusionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'PerceptionRearSI_Out'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_VisObjIDT_20/impl_type_array_visobjidt_20.h"
#include "PerceptionRearLaneInfoIDT/impl_type_perceptionrearlaneinfoidt.h"
#include "RearCamSts1VccIDT/impl_type_rearcamsts1vccidt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionrearsi_out/events/deserializer_PerceptionRear_Bus_CameraStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionrearsi_out/events/deserializer_PerceptionRear_Bus_LaneInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionrearsi_out/events/deserializer_PerceptionRear_Bus_VisnObj.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "perceptionrearsi_out/perceptionrearsi_out_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionrearsi_out {

// Forward-declaration for back-reference
class PerceptionRearSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class PerceptionRearSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'PerceptionRear_Bus_LaneInfo'.
 */
struct ProxyXfIpcEventConfigurationPerceptionRear_Bus_LaneInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionrearsi_out::events::DeserializerPerceptionRear_Bus_LaneInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionRearSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'PerceptionRear_Bus_LaneInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_LaneInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationPerceptionRear_Bus_LaneInfo::SampleType,
     ProxyXfIpcEventConfigurationPerceptionRear_Bus_LaneInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationPerceptionRear_Bus_LaneInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationPerceptionRear_Bus_LaneInfo::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'PerceptionRear_Bus_CameraStatus'.
 */
struct ProxyXfIpcEventConfigurationPerceptionRear_Bus_CameraStatus {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::RearCamSts1VccIDT::RearCamSts1VccIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionrearsi_out::events::DeserializerPerceptionRear_Bus_CameraStatus;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionRearSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'PerceptionRear_Bus_CameraStatus'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_CameraStatus =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationPerceptionRear_Bus_CameraStatus::SampleType,
     ProxyXfIpcEventConfigurationPerceptionRear_Bus_CameraStatus::SampleDeserializerType, ProxyXfIpcEventConfigurationPerceptionRear_Bus_CameraStatus::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationPerceptionRear_Bus_CameraStatus::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'PerceptionRear_Bus_VisnObj'.
 */
struct ProxyXfIpcEventConfigurationPerceptionRear_Bus_VisnObj {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Array_VisObjIDT_20::Array_VisObjIDT_20;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionrearsi_out::events::DeserializerPerceptionRear_Bus_VisnObj;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionRearSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'PerceptionRear_Bus_VisnObj'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationPerceptionRear_Bus_VisnObj::SampleType,
     ProxyXfIpcEventConfigurationPerceptionRear_Bus_VisnObj::SampleDeserializerType, ProxyXfIpcEventConfigurationPerceptionRear_Bus_VisnObj::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationPerceptionRear_Bus_VisnObj::kIsFieldEvent>;


}  // namespace perceptionrearsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PROXY_XF_IPC_EVENTS_H_

