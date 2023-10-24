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
/**        \file  EHRExe/src/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.cpp
 *        \brief  IpcBinding skeleton binding of service 'EHRSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.h"
#include <utility>

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace ehrsi_out {

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void EHRSI_OutProvidedIpcServiceInstance::OnRequestReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&&) {} // COV_IpcBinding_FunctionCallCoverage_no_methods_configured

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void EHRSI_OutProvidedIpcServiceInstance::OnRequestNoReturnReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&&) {} // COV_IpcBinding_FunctionCallCoverage_no_fire_and_forget_methods_configured

::amsr::ipc_binding_core::internal::ForwardNotificationMessage EHRSI_OutProvidedIpcServiceInstance::OnSubscribeEventReceived(
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

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const&) {
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'EHR_Bus_NOAInfo'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_NOAInfo* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_NOAInfo() noexcept {
  return &event_EHR_Bus_NOAInfo_;
}
// Event 'EHR_Bus_LaneConnectivitys'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneConnectivitys* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_LaneConnectivitys() noexcept {
  return &event_EHR_Bus_LaneConnectivitys_;
}
// Event 'EHR_Bus_Nodes'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_Nodes* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_Nodes() noexcept {
  return &event_EHR_Bus_Nodes_;
}
// Event 'EHR_Bus_TrafficSigns'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_TrafficSigns* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_TrafficSigns() noexcept {
  return &event_EHR_Bus_TrafficSigns_;
}
// Event 'EHR_Bus_GeoFences'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeoFences* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_GeoFences() noexcept {
  return &event_EHR_Bus_GeoFences_;
}
// Event 'EHR_Bus_LinkCurvatures'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkCurvatures* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_LinkCurvatures() noexcept {
  return &event_EHR_Bus_LinkCurvatures_;
}
// Event 'EHR_Bus_LinkSlopes'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkSlopes* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_LinkSlopes() noexcept {
  return &event_EHR_Bus_LinkSlopes_;
}
// Event 'EHR_Bus_LaneSpeedLimits'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneSpeedLimits* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_LaneSpeedLimits() noexcept {
  return &event_EHR_Bus_LaneSpeedLimits_;
}
// Event 'EHR_Bus_LinkInfos'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkInfos* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_LinkInfos() noexcept {
  return &event_EHR_Bus_LinkInfos_;
}
// Event 'EHR_Bus_AllMergePoints'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_AllMergePoints* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_AllMergePoints() noexcept {
  return &event_EHR_Bus_AllMergePoints_;
}
// Event 'EHR_Bus_LinearObjects'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinearObjects* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_LinearObjects() noexcept {
  return &event_EHR_Bus_LinearObjects_;
}
// Event 'EHR_Bus_FormOfWays'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_FormOfWays* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_FormOfWays() noexcept {
  return &event_EHR_Bus_FormOfWays_;
}
// Event 'EHR_Bus_SequenceId'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_SequenceId* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_SequenceId() noexcept {
  return &event_EHR_Bus_SequenceId_;
}
// Event 'EHR_Bus_LaneWidthes'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneWidthes* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_LaneWidthes() noexcept {
  return &event_EHR_Bus_LaneWidthes_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace ehrsi_out

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

