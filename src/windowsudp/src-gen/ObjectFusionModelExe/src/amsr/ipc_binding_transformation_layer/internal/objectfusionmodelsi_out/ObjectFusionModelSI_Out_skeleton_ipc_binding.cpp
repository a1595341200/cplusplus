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
/**        \file  ObjectFusionModelExe/src/amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_binding.cpp
 *        \brief  IpcBinding skeleton binding of service 'ObjectFusionModelSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_binding.h"
#include <utility>

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnRequestReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&&) {} // COV_IpcBinding_FunctionCallCoverage_no_methods_configured

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnRequestNoReturnReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&&) {} // COV_IpcBinding_FunctionCallCoverage_no_fire_and_forget_methods_configured

::amsr::ipc_binding_core::internal::ForwardNotificationMessage ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnSubscribeEventReceived(
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

::amsr::ipc_binding_core::internal::ForwardOutput ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const&) {
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'OFM_Bus_FusedTargets01'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets01* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FusedTargets01() noexcept {
  return &event_OFM_Bus_FusedTargets01_;
}
// Event 'OFM_Bus_FusedTargets02'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets02* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FusedTargets02() noexcept {
  return &event_OFM_Bus_FusedTargets02_;
}
// Event 'OFM_Bus_FusedTargets03'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets03* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FusedTargets03() noexcept {
  return &event_OFM_Bus_FusedTargets03_;
}
// Event 'OFM_Bus_FusedTargets04'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets04* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FusedTargets04() noexcept {
  return &event_OFM_Bus_FusedTargets04_;
}
// Event 'OFM_St_SOCFusedSts'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_SOCFusedSts* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_St_SOCFusedSts() noexcept {
  return &event_OFM_St_SOCFusedSts_;
}
// Event 'OFM_Bus_FourDRadarStatus'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FourDRadarStatus* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FourDRadarStatus() noexcept {
  return &event_OFM_Bus_FourDRadarStatus_;
}
// Event 'OFM_Bus_LaneInfo'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_LaneInfo* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_LaneInfo() noexcept {
  return &event_OFM_Bus_LaneInfo_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace objectfusionmodelsi_out

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

