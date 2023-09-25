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
/**        \file  RadarAdaptorExe/src/amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_binding.cpp
 *        \brief  IpcBinding skeleton binding of service 'RadarAdaptorSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_binding.h"
#include <utility>

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace radaradaptorsi_out {

::amsr::ipc_binding_core::internal::ForwardOutput RadarAdaptorSI_OutProvidedIpcServiceInstance::OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardOutput RadarAdaptorSI_OutProvidedIpcServiceInstance::OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) {
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

::amsr::ipc_binding_core::internal::ForwardSubscribeEventOutput RadarAdaptorSI_OutProvidedIpcServiceInstance::OnSubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) {
  ::ara::core::Optional<::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr> init_field{};
  ::amsr::ipc_binding_core::internal::ForwardOutput ack{false};

  // Get event ID from header for dispatching to a concrete event manager.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{subscribe_request.event_id_};


  switch (event_id) {
    case RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::kEventId: {
      ack = true;
      break;
    }
    case RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::kEventId: {
      ack = true;
      break;
    }
    case RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::kEventId: {
      ack = true;
      break;
    }
    case RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::kEventId: {
      ack = true;
      break;
    }
    case RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::kEventId: {
      ack = true;
      break;
    }
    case RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::kEventId: {
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


::amsr::ipc_binding_core::internal::ForwardOutput RadarAdaptorSI_OutProvidedIpcServiceInstance::OnUnsubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) {
  static_cast<void>(unsubscribe_request);
  return false;
}

// ---- Events -----------------------------------------------------------------------------------------------------
// Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'
RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts* RadarAdaptorSI_OutProvidedIpcServiceInstance::GetEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts() noexcept {
  return &event_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts_;
}
// Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'
RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01* RadarAdaptorSI_OutProvidedIpcServiceInstance::GetEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01() noexcept {
  return &event_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01_;
}
// Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'
RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02* RadarAdaptorSI_OutProvidedIpcServiceInstance::GetEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02() noexcept {
  return &event_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02_;
}
// Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'
RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03* RadarAdaptorSI_OutProvidedIpcServiceInstance::GetEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03() noexcept {
  return &event_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03_;
}
// Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'
RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04* RadarAdaptorSI_OutProvidedIpcServiceInstance::GetEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04() noexcept {
  return &event_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04_;
}
// Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'
RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05* RadarAdaptorSI_OutProvidedIpcServiceInstance::GetEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05() noexcept {
  return &event_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

