// VECTOR Same Line AutosarC++17_10-A1.1.1: MD_IPCBINDING_AutosarC++17_10-A1.1.1_external_identifiers
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
/**        \file  PerceptionExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_ipc_binding.cpp
 *        \brief  IpcBinding skeleton binding of service 'PerceptionSI_FreeSpaceOut'
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

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_ipc_binding.h"
#include <utility>

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_freespaceout {

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void PerceptionSI_FreeSpaceOutProvidedIpcServiceInstance::OnRequestReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&&) {} // COV_IpcBinding_FunctionCallCoverage_no_methods_configured

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void PerceptionSI_FreeSpaceOutProvidedIpcServiceInstance::OnRequestNoReturnReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&&) {} // COV_IpcBinding_FunctionCallCoverage_no_fire_and_forget_methods_configured

::amsr::ipc_binding_core::internal::ForwardNotificationMessage PerceptionSI_FreeSpaceOutProvidedIpcServiceInstance::OnSubscribeEventReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) {
  ::amsr::core::Optional<::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessage> initial_field_notification{};
  ::amsr::ipc_binding_core::internal::ForwardOutput ack{false};

  // Get event ID from header for dispatching to a concrete event manager.
  EventId const event_id{subscribe_request.event_id_};

// VCA_IPCB_STD_FUNCTION_CALLED
  if (event_id_set_.find(event_id) != event_id_set_.cend()) {
    ack = true;
  } else {
    // Event implementation is missing.
  }

  return {ack, initial_field_notification};
}

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_FreeSpaceOutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const&) {
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'FusedCam_Bus_FreeSpace'
PerceptionSI_FreeSpaceOutSkeletonIpcEventManagerFusedCam_Bus_FreeSpace* PerceptionSI_FreeSpaceOutProvidedIpcServiceInstance::GetEventManagerFusedCam_Bus_FreeSpace() noexcept {
  return &event_FusedCam_Bus_FreeSpace_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace perceptionsi_freespaceout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

// COV_JUSTIFICATION_BEGIN
// \ID COV_IpcBinding_FunctionCallCoverage_no_methods_configured
//   \ACCEPT  XX
//   \REASON  The API has a dummy implementation if there are no methods configured in the model.
//            A coverage gap is reported for the API which is not possible to test in component/multi unit tests.
//            The API is tested by unit tests. And no component or multi unit function call coverage needs to be achieved.
//
// \ID COV_IpcBinding_FunctionCallCoverage_no_fire_and_forget_methods_configured
//   \ACCEPT  XX
//   \REASON  The API has a dummy implementation if there are no fire and forget methods configured in the model.
//            A coverage gap is reported for the API which is not possible to test in component/multi unit tests.
//            The API is tested by unit tests. And no component or multi unit function call coverage needs to be achieved.
//
// \ID COV_IpcBinding_FunctionCallCoverage_no_event_or_field_notification_configured
//   \ACCEPT  XX
//   \REASON  The API has a dummy implementation if there are no event or field notifications configured in the model.
//            A coverage gap is reported for the API which is not possible to test in the component/multi unit tests.
//            The API is tested by unit tests. And no component or multi unit function call coverage needs to be achieved.
// COV_JUSTIFICATION_END

