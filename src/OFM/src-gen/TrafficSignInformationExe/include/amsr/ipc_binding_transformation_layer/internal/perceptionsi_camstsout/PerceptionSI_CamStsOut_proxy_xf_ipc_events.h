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
/**        \file  TrafficSignInformationExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'PerceptionSI_CamStsOut'
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_XF_IPC_EVENTS_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_camstsout/events/deserializer_FrntCam_Bus_CamSts.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_common.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_camstsout {

// Forward-declaration for back-reference
class PerceptionSI_CamStsOutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class PerceptionSI_CamStsOutProxyXf;


/*!
 * \brief Configuration for Event 'FrntCam_Bus_CamSts'.
 */
struct ProxyXfIpcEventConfigurationFrntCam_Bus_CamSts {
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
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::perceptionsi_camstsout::events::DeserializerFrntCam_Bus_CamSts;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  PerceptionSI_CamStsOutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'FrntCam_Bus_CamSts'.
 * \details Handles event subscriptions and notification deserialization.
 */
using PerceptionSI_CamStsOutProxyXfEventBackendFrntCam_Bus_CamSts =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationFrntCam_Bus_CamSts::SampleType,
     ProxyXfIpcEventConfigurationFrntCam_Bus_CamSts::SampleDeserializerType, ProxyXfIpcEventConfigurationFrntCam_Bus_CamSts::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationFrntCam_Bus_CamSts::kIsFieldEvent>;


}  // namespace perceptionsi_camstsout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_XF_IPC_EVENTS_H_

