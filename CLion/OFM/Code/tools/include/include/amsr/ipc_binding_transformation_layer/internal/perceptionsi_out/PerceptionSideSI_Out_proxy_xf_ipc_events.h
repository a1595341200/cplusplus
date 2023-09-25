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
/**        \file  ObjectFusionModelExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'PerceptionSideSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_XF_IPC_EVENTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FLCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FRCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FRCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_RLCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_RLCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_RRCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_RRCam_Bus_VisnObj.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "perceptionsi_out/perceptionsidesi_out_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

// Forward-declaration for back-reference
class PerceptionSideSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class PerceptionSideSI_OutProxyXf;


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
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFLCam_Bus_VisnObj;
  
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
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFRCam_Bus_VisnObj;
  
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
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerRLCam_Bus_VisnObj;
  
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
  using SampleType = ::VisObjs::VisObjs;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerRRCam_Bus_VisnObj;
  
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
 * \brief Configuration for Event 'FLCam_Bus_CamSts'.
 */
struct ProxyXfIpcEventConfigurationFLCam_Bus_CamSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFLCam_Bus_CamSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FLCam_Bus_CamSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendFLCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFLCam_Bus_CamSts::SampleType,
     ProxyXfIpcEventConfigurationFLCam_Bus_CamSts::SampleDeserializerType, ProxyXfIpcEventConfigurationFLCam_Bus_CamSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFLCam_Bus_CamSts::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FRCam_Bus_CamSts'.
 */
struct ProxyXfIpcEventConfigurationFRCam_Bus_CamSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFRCam_Bus_CamSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FRCam_Bus_CamSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendFRCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFRCam_Bus_CamSts::SampleType,
     ProxyXfIpcEventConfigurationFRCam_Bus_CamSts::SampleDeserializerType, ProxyXfIpcEventConfigurationFRCam_Bus_CamSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFRCam_Bus_CamSts::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'RLCam_Bus_CamSts'.
 */
struct ProxyXfIpcEventConfigurationRLCam_Bus_CamSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerRLCam_Bus_CamSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RLCam_Bus_CamSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendRLCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRLCam_Bus_CamSts::SampleType,
     ProxyXfIpcEventConfigurationRLCam_Bus_CamSts::SampleDeserializerType, ProxyXfIpcEventConfigurationRLCam_Bus_CamSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRLCam_Bus_CamSts::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'RRCam_Bus_CamSts'.
 */
struct ProxyXfIpcEventConfigurationRRCam_Bus_CamSts {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::CamSts1Vcc::CamSts1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerRRCam_Bus_CamSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSideSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'RRCam_Bus_CamSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSideSI_OutProxyXfEventBackendRRCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationRRCam_Bus_CamSts::SampleType,
     ProxyXfIpcEventConfigurationRRCam_Bus_CamSts::SampleDeserializerType, ProxyXfIpcEventConfigurationRRCam_Bus_CamSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationRRCam_Bus_CamSts::kIsFieldEvent>;


}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_XF_IPC_EVENTS_H_

