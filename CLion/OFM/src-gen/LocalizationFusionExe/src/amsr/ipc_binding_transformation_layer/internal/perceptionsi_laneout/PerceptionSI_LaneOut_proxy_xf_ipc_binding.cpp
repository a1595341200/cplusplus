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
/**        \file  LocalizationFusionExe/src/amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_xf_ipc_binding.cpp
 *        \brief  Frame for IPC binding service instance class of service 'PerceptionSI_LaneOut'
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_xf_ipc_binding.h"
#include <utility>
#include "ipc_binding_core/internal/logging/ara_com_logger.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_laneout {


void PerceptionSI_LaneOutProxyXf::EmplaceEventBackends() {
  static_cast<void>(event_backend_table_.emplace(event_backend_FusedCam_Bus_LaneMkrLe_.GetEventId(), &event_backend_FusedCam_Bus_LaneMkrLe_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_FusedCam_Bus_LaneMkrRi_.GetEventId(), &event_backend_FusedCam_Bus_LaneMkrRi_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_FrntCam_Bus_RoadEdgeLe_.GetEventId(), &event_backend_FrntCam_Bus_RoadEdgeLe_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_FrntCam_Bus_RoadEdgeRi_.GetEventId(), &event_backend_FrntCam_Bus_RoadEdgeRi_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_Cam_Bus_LaneEvent_.GetEventId(), &event_backend_Cam_Bus_LaneEvent_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_Cam_Bus_LaneEventGroup_.GetEventId(), &event_backend_Cam_Bus_LaneEventGroup_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_Cam_Bus_LaneMkrTemp_.GetEventId(), &event_backend_Cam_Bus_LaneMkrTemp_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_FusedCam_Bus_LaneMkrSecClsLe_.GetEventId(), &event_backend_FusedCam_Bus_LaneMkrSecClsLe_ ));
  static_cast<void>(event_backend_table_.emplace(event_backend_FusedCam_Bus_LaneMkrSecClsRi_.GetEventId(), &event_backend_FusedCam_Bus_LaneMkrSecClsRi_ ));

}

void PerceptionSI_LaneOutProxyXf::Start() noexcept { is_active_ = true; }

void PerceptionSI_LaneOutProxyXf::Stop() noexcept { is_active_ = false; }

// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_STL_exceptions
// VECTOR NC AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_STL_exceptions
::ara::core::Result<void> PerceptionSI_LaneOutProxyXf::RequestService() noexcept {
  if(++proxy_count_ == 1) {
      client_id_ = client_binding_manager_.RequestNextClientId();
      IpcProxyBindingIdentity const proxy_instance_identity{
          kDeployment.service_id_, instance_id_, kDeployment.service_interface_version_.major_version_, client_id_};
      client_binding_manager_.RegisterProxyIpcBindingInstance(proxy_instance_identity, this->shared_from_this());
  }
  return ::ara::core::Result<void>{};
}

// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_STL_exceptions
// VECTOR NC AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_STL_exceptions
void  PerceptionSI_LaneOutProxyXf::ReleaseService() noexcept {
  if(--proxy_count_ == 0) {
    IpcProxyBindingIdentity const proxy_instance_identity{
          kDeployment.service_id_, instance_id_, kDeployment.service_interface_version_.major_version_, client_id_};
    client_binding_manager_.DeRegisterProxyIpcBindingInstance(proxy_instance_identity);
  }
}

::amsr::ipc_binding_core::internal::ForwardOutput  PerceptionSI_LaneOutProxyXf::RouteRequest(
      ::amsr::ipc_binding_core::internal::ipc_protocol::RequestMessage&& request) {
  bool forwarded{false};
  forwarded = client_binding_manager_.RouteRequest(std::move(request), this->shared_from_this());
  return forwarded;
}

::amsr::ipc_binding_core::internal::ForwardOutput  PerceptionSI_LaneOutProxyXf::RouteRequest(
      ::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) {
  bool forwarded{false};
  forwarded = client_binding_manager_.RouteRequest(std::move(request));
  return forwarded;
}

::amsr::ipc_binding_core::internal::ForwardOutput  PerceptionSI_LaneOutProxyXf::RouteSubscribeMessage(
      ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader&& header) {
  return client_binding_manager_.SubscribeEvent(std::move(header), this->shared_from_this());
}

::amsr::ipc_binding_core::internal::ForwardOutput  PerceptionSI_LaneOutProxyXf::RouteUnsubscribeMessage(
      ::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader&& header) {
   return client_binding_manager_.UnsubscribeEvent(std::move(header), this->shared_from_this());
}

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProxyXf::OnResponseReceived(::amsr::ipc_binding_core::internal::ipc_protocol::ResponseMessage&& response) {
  ::amsr::ipc_binding_core::internal::ForwardOutput forwarded{false};
  // Get method ID from response header for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::MethodId const method_id{response.GetMessageHeader().method_id_};

  // Based on the method id -> dispatching to a concrete MethodManager based on method id -> deserialization.
  switch (method_id) {
    default: {
      break;
    }
  }

  return forwarded;
}


::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProxyXf::OnNotificationReceived(::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr notification) {
  ::amsr::ipc_binding_core::internal::ForwardOutput forwarded{false};
  // Get event ID from notification header for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{notification->GetMessageHeader().event_id_};
  
  EventBankendMap::iterator const it{event_backend_table_.find(event_id)};
  if(it != event_backend_table_.end()){
    forwarded = it->second->OnNotificationReceived(notification);
  }

  return forwarded;
}

void PerceptionSI_LaneOutProxyXf::OnServiceInstanceDown() {
  EventBankendMap::iterator it;
  for(it=event_backend_table_.begin(); it!=event_backend_table_.end(); it++) {
    it->second->OnServiceInstanceDown();
  }
}

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProxyXf::OnSubscribeAckReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventAckMessageHeader const& ack_response) {
  ::amsr::ipc_binding_core::internal::ForwardOutput accepted{false};
  // Get event ID from ack_response for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{ack_response.event_id_};
  
  EventBankendMap::iterator const it{event_backend_table_.find(event_id)};

  if(it != event_backend_table_.end()){
    accepted = it->second->OnSubscribeAckReceived(ack_response);
  }
  return accepted;
}

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProxyXf::OnSubscribeNAckReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventNAckMessageHeader const& nack_response) {
  ::amsr::ipc_binding_core::internal::ForwardOutput accepted{false};
  // Get event ID from response header for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{nack_response.event_id_};
  
  EventBankendMap::iterator const it{event_backend_table_.find(event_id)};
  if(it != event_backend_table_.end()){
    accepted = it->second->OnSubscribeNAckReceived(nack_response);
  }

  return accepted;
}

::amsr::ipc_binding_core::internal::ForwardOutput PerceptionSI_LaneOutProxyXf::OnApplicationErrorReceived(::amsr::ipc_binding_core::internal::ipc_protocol::ApplicationErrorMessage&& message) {
  ::amsr::ipc_binding_core::internal::ForwardOutput forwarded{false};
  // Get method ID from response header for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::MethodId const method_id{message.GetMessageHeader().method_id_};

  // Based on the method id -> dispatching to a concrete MethodManager based on method id -> deserialization.
  switch (method_id) {
    default: {
      break;
    }
  }

  return forwarded;
}

void PerceptionSI_LaneOutProxyXf::OnErrorResponseReceived(::amsr::ipc_binding_core::internal::ipc_protocol::ErrorResponseMessage&& message) {
  // Get method ID from response header for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::MethodId const method_id{message.GetMessageHeader().method_id_};

  // Based on the method id -> dispatching to a concrete MethodManager based on method id -> deserialization.
  switch (method_id) {
    default: {
      break;
    }
  }
}

}  // namespace perceptionsi_laneout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr
