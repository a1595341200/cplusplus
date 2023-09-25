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
/**        \file  PerceptionExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_binding.cpp
 *        \brief  IpcBinding skeleton binding of service 'PerceptionSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_binding.h"
#include <utility>

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_OutProvidedIpcServiceInstance::OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_OutProvidedIpcServiceInstance::OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardSubscribeEventOutput PerceptionSI_OutProvidedIpcServiceInstance::OnSubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) {
  ::ara::core::Optional<::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr> init_field{};
  ::amsr::ipc_binding_core::internal::ForwardOutput ack{false};

  // Get event ID from header for dispatching to a concrete event manager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{subscribe_request.event_id_};


  switch (event_id) {
    case PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_RoadSign::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcSign::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_StopLine::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_Crosswalk::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LsrObj::kEventId: {
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


::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_OutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) {
  static_cast<void>(unsubscribe_request);
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'FrntCam_Bus_RoadSign'
PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_RoadSign* PerceptionSI_OutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_RoadSign() noexcept {
  return &event_FrntCam_Bus_RoadSign_;
}
// Event 'FrntCam_Bus_TrfcSign'
PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcSign* PerceptionSI_OutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_TrfcSign() noexcept {
  return &event_FrntCam_Bus_TrfcSign_;
}
// Event 'FrntCam_Bus_StopLine'
PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_StopLine* PerceptionSI_OutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_StopLine() noexcept {
  return &event_FrntCam_Bus_StopLine_;
}
// Event 'FrntCam_Bus_Crosswalk'
PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_Crosswalk* PerceptionSI_OutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_Crosswalk() noexcept {
  return &event_FrntCam_Bus_Crosswalk_;
}
// Event 'FrntCam_Bus_TrfcLi'
PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi* PerceptionSI_OutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_TrfcLi() noexcept {
  return &event_FrntCam_Bus_TrfcLi_;
}
// Event 'FrntCam_Bus_ExtInfo'
PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo* PerceptionSI_OutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_ExtInfo() noexcept {
  return &event_FrntCam_Bus_ExtInfo_;
}
// Event 'FrntCam_Bus_LsrObj'
PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LsrObj* PerceptionSI_OutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_LsrObj() noexcept {
  return &event_FrntCam_Bus_LsrObj_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

