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
/**        \file  LocalizationFusionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'PerceptionSI_LaneOut'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_XF_IPC_EVENTS_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_Cam_Bus_LaneEvent.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_Cam_Bus_LaneEventGroup.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_Cam_Bus_LaneMkrTemp.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FrntCam_Bus_RoadEdgeLe.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FrntCam_Bus_RoadEdgeRi.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FusedCam_Bus_LaneMkrLe.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FusedCam_Bus_LaneMkrRi.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FusedCam_Bus_LaneMkrSecClsLe.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FusedCam_Bus_LaneMkrSecClsRi.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "perceptionsi_laneout/perceptionsi_laneout_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_laneout {

// Forward-declaration for back-reference
class PerceptionSI_LaneOutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class PerceptionSI_LaneOutProxyXf;


/*!
 * \brief Configuration for Event 'FusedCam_Bus_LaneMkrLe'.
 */
struct ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrLe {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneMkrCam1Le::LaneMkrCam1Le;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerFusedCam_Bus_LaneMkrLe;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FusedCam_Bus_LaneMkrLe'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendFusedCam_Bus_LaneMkrLe =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrLe::SampleType,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrLe::SampleDeserializerType, ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrLe::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrLe::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FusedCam_Bus_LaneMkrRi'.
 */
struct ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrRi {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneMkrCam1Ri::LaneMkrCam1Ri;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerFusedCam_Bus_LaneMkrRi;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FusedCam_Bus_LaneMkrRi'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendFusedCam_Bus_LaneMkrRi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrRi::SampleType,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrRi::SampleDeserializerType, ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrRi::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrRi::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_RoadEdgeLe'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeLe {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::RoadEdge1VccLe::RoadEdge1VccLe;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerFrntCam_Bus_RoadEdgeLe;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_RoadEdgeLe'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendFrntCam_Bus_RoadEdgeLe =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeLe::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_RoadEdgeRi'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeRi {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::RoadEdge1VccRi::RoadEdge1VccRi;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerFrntCam_Bus_RoadEdgeRi;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_RoadEdgeRi'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendFrntCam_Bus_RoadEdgeRi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_RoadEdgeRi::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'Cam_Bus_LaneEvent'.
 */
struct ProxyXfIpcEventConfigurationCam_Bus_LaneEvent {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneEvent::LaneEvent;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerCam_Bus_LaneEvent;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'Cam_Bus_LaneEvent'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendCam_Bus_LaneEvent =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationCam_Bus_LaneEvent::SampleType,
     ProxyXfIpcEventConfigurationCam_Bus_LaneEvent::SampleDeserializerType, ProxyXfIpcEventConfigurationCam_Bus_LaneEvent::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationCam_Bus_LaneEvent::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'Cam_Bus_LaneEventGroup'.
 */
struct ProxyXfIpcEventConfigurationCam_Bus_LaneEventGroup {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneEventGroups::LaneEventGroups;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerCam_Bus_LaneEventGroup;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'Cam_Bus_LaneEventGroup'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendCam_Bus_LaneEventGroup =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationCam_Bus_LaneEventGroup::SampleType,
     ProxyXfIpcEventConfigurationCam_Bus_LaneEventGroup::SampleDeserializerType, ProxyXfIpcEventConfigurationCam_Bus_LaneEventGroup::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationCam_Bus_LaneEventGroup::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'Cam_Bus_LaneMkrTemp'.
 */
struct ProxyXfIpcEventConfigurationCam_Bus_LaneMkrTemp {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerCam_Bus_LaneMkrTemp;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'Cam_Bus_LaneMkrTemp'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendCam_Bus_LaneMkrTemp =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationCam_Bus_LaneMkrTemp::SampleType,
     ProxyXfIpcEventConfigurationCam_Bus_LaneMkrTemp::SampleDeserializerType, ProxyXfIpcEventConfigurationCam_Bus_LaneMkrTemp::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationCam_Bus_LaneMkrTemp::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FusedCam_Bus_LaneMkrSecClsLe'.
 */
struct ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerFusedCam_Bus_LaneMkrSecClsLe;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FusedCam_Bus_LaneMkrSecClsLe'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendFusedCam_Bus_LaneMkrSecClsLe =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::SampleType,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::SampleDeserializerType, ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsLe::kIsFieldEvent>;


/*!
 * \brief Configuration for Event 'FusedCam_Bus_LaneMkrSecClsRi'.
 */
struct ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_laneout::events::DeserializerFusedCam_Bus_LaneMkrSecClsRi;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_LaneOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FusedCam_Bus_LaneMkrSecClsRi'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_LaneOutProxyXfEventBackendFusedCam_Bus_LaneMkrSecClsRi =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::SampleType,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::SampleDeserializerType, ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFusedCam_Bus_LaneMkrSecClsRi::kIsFieldEvent>;


}  // namespace perceptionsi_laneout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_XF_IPC_EVENTS_H_

