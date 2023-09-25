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
/**        \file  PerceptionSideExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_binding.cpp
 *        \brief  IpcBinding skeleton binding of service 'PerceptionSideSI_Out'
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

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_binding.h"
#include <utility>

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSideSI_OutProvidedIpcServiceInstance::OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) {
  ::amsr::ipc_binding_core::internal::ForwardOutput forwarded{false};

  // Get method ID from header for dispatching to a concrete MethodManager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::MethodId const method_id{request.GetMessageHeader().method_id_};

  // clang-format off
  // VECTOR NC AutosarC++17_10-M6.4.3, VectorC++-V5.0.1: MD_IPCBINDING_AutosarC++17_10-M6.4.3_Switch_statement_with_no_case_clauses
  // VECTOR NC AutosarC++17_10-A6.4.1, VectorC++-V5.0.1: MD_IPCBINDING_AutosarC++17_10-A6.4.1_Switch_statement_with_no_case_clauses
  // clang-format on
  switch (method_id) {

    default: {
       // Method implementation is missing.
       // Send an error response if it's no fire & forget method.
      break;
    }
  }

  return forwarded;
}

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSideSI_OutProvidedIpcServiceInstance::OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) {
  ::amsr::ipc_binding_core::internal::ForwardOutput forwarded{false};

  // Get method ID from header for dispatching to a concrete method manager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::MethodId const method_id{request.GetMessageHeader().method_id_};
  // clang-format off
  // VECTOR NC AutosarC++17_10-M6.4.3, VectorC++-V5.0.1: MD_IPCBINDING_AutosarC++17_10-M6.4.3_Switch_statement_with_no_case_clauses
  // VECTOR NC AutosarC++17_10-A6.4.1, VectorC++-V5.0.1: MD_IPCBINDING_AutosarC++17_10-A6.4.1_Switch_statement_with_no_case_clauses
  // clang-format on
  switch (method_id) {
    default: {
      // Method implementation is missing.
      //   No error response is sent for fire & forget methods.
      break;
    }
  }

  return forwarded;
}

::amsr::ipc_binding_core::internal::ForwardSubscribeEventOutput PerceptionSideSI_OutProvidedIpcServiceInstance::OnSubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) {
  ::ara::core::Optional<::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr> init_field{};
  ::amsr::ipc_binding_core::internal::ForwardOutput ack{false};

  // Get event ID from header for dispatching to a concrete event manager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{subscribe_request.event_id_};


  switch (event_id) {
    case PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_VisnObj::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_VisnObj::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_VisnObj::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_VisnObj::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_CamSts::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_CamSts::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_CamSts::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_CamSts::kEventId: {
      ack = true;
      break;
    }
    default: {
      // Event implementation is missing.
      break;
    }
  }

  return {ack, init_field};
}


::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSideSI_OutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) {
  static_cast<void>(unsubscribe_request);
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'FLCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_VisnObj* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerFLCam_Bus_VisnObj() noexcept {
  return &event_FLCam_Bus_VisnObj_;
}
// Event 'FRCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_VisnObj* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerFRCam_Bus_VisnObj() noexcept {
  return &event_FRCam_Bus_VisnObj_;
}
// Event 'RLCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_VisnObj* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerRLCam_Bus_VisnObj() noexcept {
  return &event_RLCam_Bus_VisnObj_;
}
// Event 'RRCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_VisnObj* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerRRCam_Bus_VisnObj() noexcept {
  return &event_RRCam_Bus_VisnObj_;
}
// Event 'FLCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_CamSts* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerFLCam_Bus_CamSts() noexcept {
  return &event_FLCam_Bus_CamSts_;
}
// Event 'FRCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_CamSts* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerFRCam_Bus_CamSts() noexcept {
  return &event_FRCam_Bus_CamSts_;
}
// Event 'RLCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_CamSts* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerRLCam_Bus_CamSts() noexcept {
  return &event_RLCam_Bus_CamSts_;
}
// Event 'RRCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_CamSts* PerceptionSideSI_OutProvidedIpcServiceInstance::GetEventManagerRRCam_Bus_CamSts() noexcept {
  return &event_RRCam_Bus_CamSts_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

