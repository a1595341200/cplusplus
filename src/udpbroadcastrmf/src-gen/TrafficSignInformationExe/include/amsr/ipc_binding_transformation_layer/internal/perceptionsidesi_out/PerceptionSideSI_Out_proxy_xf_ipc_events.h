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
/**        \file  TrafficSignInformationExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'PerceptionSideSI_Out'
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PROXY_XF_IPC_EVENTS_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_VisObjIDT_20/impl_type_array_visobjidt_20.h"
#include "CameraStatusIDT/impl_type_camerastatusidt.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsidesi_out/events/deserializer_FLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsidesi_out/events/deserializer_FRCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsidesi_out/events/deserializer_PerceptionSide_Bus_CameraStatus.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsidesi_out/events/deserializer_RLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsidesi_out/events/deserializer_RRCam_Bus_VisnObj.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "perceptionsidesi_out/perceptionsidesi_out_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsidesi_out {

// Forward-declaration for back-reference
class PerceptionSideSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class PerceptionSideSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'FRCam_Bus_VisnObj'.
 */
struct ProxyXfIpcEventConfigurationFRCam_Bus_VisnObj {
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
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsidesi_out::events::DeserializerFRCam_Bus_VisnObj;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FRCam_Bus_VisnObj'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendFRCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFRCam_Bus_VisnObj::SampleType,
     ProxyXfIpcEventConfigurationFRCam_Bus_VisnObj::SampleDeserializerType, ProxyXfIpcEventConfigurationFRCam_Bus_VisnObj::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFRCam_Bus_VisnObj::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FLCam_Bus_VisnObj'.
 */
struct ProxyXfIpcEventConfigurationFLCam_Bus_VisnObj {
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
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsidesi_out::events::DeserializerFLCam_Bus_VisnObj;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FLCam_Bus_VisnObj'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendFLCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFLCam_Bus_VisnObj::SampleType,
     ProxyXfIpcEventConfigurationFLCam_Bus_VisnObj::SampleDeserializerType, ProxyXfIpcEventConfigurationFLCam_Bus_VisnObj::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFLCam_Bus_VisnObj::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'RLCam_Bus_VisnObj'.
 */
struct ProxyXfIpcEventConfigurationRLCam_Bus_VisnObj {
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
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsidesi_out::events::DeserializerRLCam_Bus_VisnObj;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RLCam_Bus_VisnObj'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendRLCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRLCam_Bus_VisnObj::SampleType,
     ProxyXfIpcEventConfigurationRLCam_Bus_VisnObj::SampleDeserializerType, ProxyXfIpcEventConfigurationRLCam_Bus_VisnObj::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRLCam_Bus_VisnObj::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'RRCam_Bus_VisnObj'.
 */
struct ProxyXfIpcEventConfigurationRRCam_Bus_VisnObj {
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
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsidesi_out::events::DeserializerRRCam_Bus_VisnObj;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RRCam_Bus_VisnObj'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendRRCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRRCam_Bus_VisnObj::SampleType,
     ProxyXfIpcEventConfigurationRRCam_Bus_VisnObj::SampleDeserializerType, ProxyXfIpcEventConfigurationRRCam_Bus_VisnObj::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRRCam_Bus_VisnObj::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'PerceptionSide_Bus_CameraStatus'.
 */
struct ProxyXfIpcEventConfigurationPerceptionSide_Bus_CameraStatus {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::CameraStatusIDT::CameraStatusIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsidesi_out::events::DeserializerPerceptionSide_Bus_CameraStatus;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'PerceptionSide_Bus_CameraStatus'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendPerceptionSide_Bus_CameraStatus =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationPerceptionSide_Bus_CameraStatus::SampleType,
     ProxyXfIpcEventConfigurationPerceptionSide_Bus_CameraStatus::SampleDeserializerType, ProxyXfIpcEventConfigurationPerceptionSide_Bus_CameraStatus::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationPerceptionSide_Bus_CameraStatus::kIsFieldEvent>;


}  // namespace perceptionsidesi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PROXY_XF_IPC_EVENTS_H_

