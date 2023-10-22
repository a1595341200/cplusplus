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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
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

::amsr::ipc_binding_core::internal::ForwardOutput ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardOutput ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardSubscribeEventOutput ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnSubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) {
  ::ara::core::Optional<::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr> init_field{};
  ::amsr::ipc_binding_core::internal::ForwardOutput ack{false};

  // Get event ID from header for dispatching to a concrete event manager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{subscribe_request.event_id_};


  switch (event_id) {
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_11::kEventId: {
      ack = true;
      break;
    }
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_SOCFusedSts::kEventId: {
      ack = true;
      break;
    }
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FourDRadarECUSts::kEventId: {
      ack = true;
      break;
    }
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FrontFourDRadarSts::kEventId: {
      ack = true;
      break;
    }
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_22::kEventId: {
      ack = true;
      break;
    }
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_32::kEventId: {
      ack = true;
      break;
    }
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjE2Efail::kEventId: {
      ack = true;
      break;
    }
    case ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjTO::kEventId: {
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


::amsr::ipc_binding_core::internal::ForwardOutput ObjectFusionModelSI_OutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) {
  static_cast<void>(unsubscribe_request);
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'OFM_Bus_FusedTargets_11'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_11* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FusedTargets_11() noexcept {
  return &event_OFM_Bus_FusedTargets_11_;
}
// Event 'OFM_St_SOCFusedSts'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_SOCFusedSts* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_St_SOCFusedSts() noexcept {
  return &event_OFM_St_SOCFusedSts_;
}
// Event 'OFM_Bus_FourDRadarECUSts'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FourDRadarECUSts* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FourDRadarECUSts() noexcept {
  return &event_OFM_Bus_FourDRadarECUSts_;
}
// Event 'OFM_Bus_FrontFourDRadarSts'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FrontFourDRadarSts* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FrontFourDRadarSts() noexcept {
  return &event_OFM_Bus_FrontFourDRadarSts_;
}
// Event 'OFM_Bus_FusedTargets_22'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_22* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FusedTargets_22() noexcept {
  return &event_OFM_Bus_FusedTargets_22_;
}
// Event 'OFM_Bus_FusedTargets_32'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_32* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_Bus_FusedTargets_32() noexcept {
  return &event_OFM_Bus_FusedTargets_32_;
}
// Event 'OFM_St_FrntRdrObjE2Efail'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjE2Efail* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_St_FrntRdrObjE2Efail() noexcept {
  return &event_OFM_St_FrntRdrObjE2Efail_;
}
// Event 'OFM_St_FrntRdrObjTO'
ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjTO* ObjectFusionModelSI_OutProvidedIpcServiceInstance::GetEventManagerOFM_St_FrntRdrObjTO() noexcept {
  return &event_OFM_St_FrntRdrObjTO_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

