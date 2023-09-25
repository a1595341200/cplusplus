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
/**        \file  PerceptionExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_binding.cpp
 *        \brief  IpcBinding skeleton binding of service 'PerceptionSI_LaneOut'
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_binding.h"
#include <utility>

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_laneout {

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProvidedIpcServiceInstance::OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProvidedIpcServiceInstance::OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardSubscribeEventOutput PerceptionSI_LaneOutProvidedIpcServiceInstance::OnSubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) {
  ::ara::core::Optional<::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr> init_field{};
  ::amsr::ipc_binding_core::internal::ForwardOutput ack{false};

  // Get event ID from header for dispatching to a concrete event manager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{subscribe_request.event_id_};


  switch (event_id) {
    case PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrLe::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrRi::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeLe::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeRi::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEvent::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEventGroup::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneMkrTemp::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsLe::kEventId: {
      ack = true;
      break;
    }
    case PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsRi::kEventId: {
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


::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) {
  static_cast<void>(unsubscribe_request);
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'FusedCam_Bus_LaneMkrLe'
PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrLe* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerFusedCam_Bus_LaneMkrLe() noexcept {
  return &event_FusedCam_Bus_LaneMkrLe_;
}
// Event 'FusedCam_Bus_LaneMkrRi'
PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrRi* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerFusedCam_Bus_LaneMkrRi() noexcept {
  return &event_FusedCam_Bus_LaneMkrRi_;
}
// Event 'FrntCam_Bus_RoadEdgeLe'
PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeLe* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_RoadEdgeLe() noexcept {
  return &event_FrntCam_Bus_RoadEdgeLe_;
}
// Event 'FrntCam_Bus_RoadEdgeRi'
PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeRi* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerFrntCam_Bus_RoadEdgeRi() noexcept {
  return &event_FrntCam_Bus_RoadEdgeRi_;
}
// Event 'Cam_Bus_LaneEvent'
PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEvent* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerCam_Bus_LaneEvent() noexcept {
  return &event_Cam_Bus_LaneEvent_;
}
// Event 'Cam_Bus_LaneEventGroup'
PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEventGroup* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerCam_Bus_LaneEventGroup() noexcept {
  return &event_Cam_Bus_LaneEventGroup_;
}
// Event 'Cam_Bus_LaneMkrTemp'
PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneMkrTemp* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerCam_Bus_LaneMkrTemp() noexcept {
  return &event_Cam_Bus_LaneMkrTemp_;
}
// Event 'FusedCam_Bus_LaneMkrSecClsLe'
PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsLe* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerFusedCam_Bus_LaneMkrSecClsLe() noexcept {
  return &event_FusedCam_Bus_LaneMkrSecClsLe_;
}
// Event 'FusedCam_Bus_LaneMkrSecClsRi'
PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsRi* PerceptionSI_LaneOutProvidedIpcServiceInstance::GetEventManagerFusedCam_Bus_LaneMkrSecClsRi() noexcept {
  return &event_FusedCam_Bus_LaneMkrSecClsRi_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace perceptionsi_laneout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

