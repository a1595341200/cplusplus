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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_Crosswalk.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_ExtInfo.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_LsrObj.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_RoadSign.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_StopLine.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_TrfcLi.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_TrfcSign.h"
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
 * \brief Configuration for Event 'FrntCam_Bus_RoadSign'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_RoadSign {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::RoadSigns::RoadSigns;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_RoadSign;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_RoadSign'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_RoadSign =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_RoadSign::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_RoadSign::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_RoadSign::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_RoadSign::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_TrfcSign'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcSign {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::TrfcSigns::TrfcSigns;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_TrfcSign;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_TrfcSign'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_TrfcSign =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcSign::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcSign::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcSign::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_TrfcSign::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_StopLine'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_StopLine {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::StopLine::StopLine;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_StopLine;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_StopLine'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_StopLine =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_StopLine::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_StopLine::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_StopLine::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_StopLine::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_Crosswalk'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_Crosswalk {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::Crosswalk::Crosswalk;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_Crosswalk;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_Crosswalk'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_Crosswalk =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_Crosswalk::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_Crosswalk::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_Crosswalk::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_Crosswalk::kIsFieldEvent>;


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
  using SampleType = ::TrfcLi1Vccs::TrfcLi1Vccs;

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
  using SampleType = ::ExtInfo::ExtInfo;

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


/*!
 * \brief Configuration for Event 'FrntCam_Bus_LsrObj'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_LsrObj {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LsrObj::LsrObj;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_out::events::DeserializerFrntCam_Bus_LsrObj;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_LsrObj'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_OutProxyXfEventBackendFrntCam_Bus_LsrObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_LsrObj::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_LsrObj::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_LsrObj::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_LsrObj::kIsFieldEvent>;


}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_XF_IPC_EVENTS_H_

