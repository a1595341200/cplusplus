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
/**        \file  RVDCExe/include/amsr/ipc_binding_transformation_layer/internal/edrsi_out/EDRSI_Out_proxy_xf_ipc_events.h
 *        \brief  IPC proxy event handling for events and field notifications of service 'EDRSI_Out'
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

#ifndef RVDCEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EDRSI_OUT_EDRSI_OUT_PROXY_XF_IPC_EVENTS_H_
#define RVDCEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EDRSI_OUT_EDRSI_OUT_PROXY_XF_IPC_EVENTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_out/events/deserializer_EDR_Bus_EDRInfo.h"
#include "edrsi_out/edrsi_out_common.h"
#include "ipc_binding_transformation_layer/internal/ipc_proxy_event_backend.h"
#include "s_EDRInfo_tIDT/impl_type_s_edrinfo_tidt.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace edrsi_out {

// Forward-declaration for back-reference
class EDRSI_OutRequiredIpcServiceInstance;

// Forward-declaration for back-reference
class EDRSI_OutProxyXf;


/*!
 * \brief Configuration for Event 'EDR_Bus_EDRInfo'.
 */
struct ProxyXfIpcEventConfigurationEDR_Bus_EDRInfo {
  /*!
   * \brief true if this event corresponds to Field notifier, false otherwise.
   */
  static bool constexpr kIsFieldEvent{false};

  /*!
   * \brief Datatype of the event sample.
   */
  using SampleType = ::s_EDRInfo_tIDT::s_EDRInfo_tIDT;

  /*!
   * \brief Deserializer for event payload.
   */
  using SampleDeserializerType = ::amsr::someip_protocol::internal::dataprototype_deserializer::edrsi_out::events::DeserializerEDR_Bus_EDRInfo;
  
  /*!
   * \brief Type of proxy binding used for event subscription handling.
   */
  using RequiredIpcServiceInstance =  EDRSI_OutProxyXf;
};

/*!
 * \brief IPC Proxy event backend for event 'EDR_Bus_EDRInfo'.
 * \details Handles event subscriptions and notification deserialization.
 */
using EDRSI_OutProxyXfEventBackendEDR_Bus_EDRInfo =
    ::amsr::ipc_binding_transformation_layer::internal::IpcProxyEventBackend<ProxyXfIpcEventConfigurationEDR_Bus_EDRInfo::SampleType,
     ProxyXfIpcEventConfigurationEDR_Bus_EDRInfo::SampleDeserializerType, ProxyXfIpcEventConfigurationEDR_Bus_EDRInfo::RequiredIpcServiceInstance,
     ProxyXfIpcEventConfigurationEDR_Bus_EDRInfo::kIsFieldEvent>;


}  // namespace edrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // RVDCEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EDRSI_OUT_EDRSI_OUT_PROXY_XF_IPC_EVENTS_H_

