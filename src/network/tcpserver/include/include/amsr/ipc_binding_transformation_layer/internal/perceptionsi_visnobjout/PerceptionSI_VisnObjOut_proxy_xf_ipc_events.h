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
/**        \file  ObjectFusionModelExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'PerceptionSI_VisnObjOut'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_XF_IPC_EVENTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_visnobjout/events/deserializer_FrntCam_Bus_VisnObj.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_visnobjout {

// Forward-declaration for back-reference
class PerceptionSI_VisnObjOutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class PerceptionSI_VisnObjOutProxyXf;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_VisnObj'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_VisnObj {
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
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_visnobjout::events::DeserializerFrntCam_Bus_VisnObj;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_VisnObjOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_VisnObj'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_VisnObjOutProxyXfEventBackendFrntCam_Bus_VisnObj =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_VisnObj::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_VisnObj::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_VisnObj::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_VisnObj::kIsFieldEvent>;


}  // namespace perceptionsi_visnobjout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_XF_IPC_EVENTS_H_

