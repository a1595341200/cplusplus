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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
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

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProvidedIpcServiceInstance::OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProvidedIpcServiceInstance::OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardSubscribeEventOutput EHRSI_OutProvidedIpcServiceInstance::OnSubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) {
  ::ara::core::Optional<::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr> init_field{};
  ::amsr::ipc_binding_core::internal::ForwardOutput ack{false};

  // Get event ID from header for dispatching to a concrete event manager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{subscribe_request.event_id_};


  switch (event_id) {
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_NOAInfo::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneConnectivitys::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_Nodes::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_TrafficSigns::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeoFences::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkCurvatures::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkSlopes::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneSpeedLimits::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkInfos::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_MergePoints::kEventId: {
      ack = true;
      break;
    }
    case EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeofennceJudge::kEventId: {
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


::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) {
  static_cast<void>(unsubscribe_request);
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
// Event 'EHR_Bus_MergePoints'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_MergePoints* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_MergePoints() noexcept {
  return &event_EHR_Bus_MergePoints_;
}
// Event 'EHR_Bus_GeofennceJudge'
EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeofennceJudge* EHRSI_OutProvidedIpcServiceInstance::GetEventManagerEHR_Bus_GeofennceJudge() noexcept {
  return &event_EHR_Bus_GeofennceJudge_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

