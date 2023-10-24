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
/**        \file  RoadModelFusionExe/src/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_proxy_xf_ipc_binding.cpp
 *        \brief  Frame for IPC binding service instance class of service 'EHRSI_Out'
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
#include "amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_proxy_xf_ipc_binding.h"
#include <utility>
#include "ipc_binding_core/internal/logging/ara_com_logger.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {
namespace ehrsi_out {

EHRSI_OutProxyXf::EHRSI_OutProxyXf(
  ClientManagerSyncType& ipc_binding_client_manager_sync,
  ServiceDiscoveryProxy& sd_proxy,
  RemoteServerManagerInterface& remote_server_manager,
  ::amsr::timer::ThreadSafeTimerManager& timer_manager,
  RuntimeProcessingMode const runtime_processing_mode,
  ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const service_instance_id,
  ::amsr::ipc::IntegrityLevel const integrity_level,
  ::amsr::ipc_binding_core::internal::runtime_configuration::ServiceConfig const& service_config)
    : provided_service_instance_id_{service_config.GetId(), service_instance_id,
                                    service_config.GetMajorVersion(),
                                    service_config.GetMinorVersion()},
      client_id_{ClientId{ipc_binding_client_manager_sync.RequestNextClientId()}}, // VCA_IPCB_VALID_PARAMETER_REFERENCE
      ipc_binding_client_manager_sync_{ipc_binding_client_manager_sync},
      sd_proxy_{sd_proxy},
      // VCA_IPCB_VALID_PARAMETER_REFERENCE
      remote_server_{remote_server_manager.RequestRemoteServer(provided_service_instance_id_, integrity_level)},
      timer_manager_{timer_manager},
      runtime_processing_mode_{runtime_processing_mode},
      event_backend_EHR_Bus_NOAInfo_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_NOAInfo"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_LaneConnectivitys_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_LaneConnectivitys"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_Nodes_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_Nodes"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_TrafficSigns_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_TrafficSigns"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_GeoFences_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_GeoFences"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_LinkCurvatures_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_LinkCurvatures"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_LinkSlopes_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_LinkSlopes"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_LaneSpeedLimits_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_LaneSpeedLimits"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_LinkInfos_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_LinkInfos"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_AllMergePoints_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_AllMergePoints"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_LinearObjects_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_LinearObjects"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_FormOfWays_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_FormOfWays"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_SequenceId_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_SequenceId"}).GetId(),
          client_id_},
      event_backend_EHR_Bus_LaneWidthes_{
          *this, sd_proxy, timer_manager,
          runtime_processing_mode, provided_service_instance_id_,
          // VCA_IPCB_BASICSTRING_CONSTRUCTOR
          service_config.GetEventOf({"EHR_Bus_LaneWidthes"}).GetId(),
          client_id_} {
  EmplaceEventBackends();
  // VCA_IPCB_SERVICE_INTERFACE_PROXY_XF_SAFE_UNDEFINED_FUNCTION
  remote_server_->Request();
}


EHRSI_OutProxyXf::~EHRSI_OutProxyXf() noexcept { // VCA_IPCB_MOLE_1298
  // VCA_IPCB_SERVICE_INTERFACE_PROXY_XF_SAFE_UNDEFINED_FUNCTION
  remote_server_->Release();

  ::amsr::ipc_binding_core::internal::ReactorSyncTask<bool> release_local_client_sink_task{
      &timer_manager_, runtime_processing_mode_, [this] {
        // VCA_IPCB_VALID_MEMBER_REFERENCE
        sd_proxy_.ReleaseLocalClientSink(client_);
        return true; // dummy return value
      }};
  // Ignore dummy return value.
  static_cast<void>(release_local_client_sink_task());
}; // VCA_IPCB_STD_SHARED_POINTER_CONSTRUCTOR, VCA_IPCB_STD_MAP_DESTRUCTOR



// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M9.3.3: MD_IPCBINDING_AutosarC++17_10_M9.3.3_config_variant
void EHRSI_OutProxyXf::EmplaceEventBackends() {
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_NOAInfo_.GetEventId().value, &event_backend_EHR_Bus_NOAInfo_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_LaneConnectivitys_.GetEventId().value, &event_backend_EHR_Bus_LaneConnectivitys_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_Nodes_.GetEventId().value, &event_backend_EHR_Bus_Nodes_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_TrafficSigns_.GetEventId().value, &event_backend_EHR_Bus_TrafficSigns_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_GeoFences_.GetEventId().value, &event_backend_EHR_Bus_GeoFences_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_LinkCurvatures_.GetEventId().value, &event_backend_EHR_Bus_LinkCurvatures_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_LinkSlopes_.GetEventId().value, &event_backend_EHR_Bus_LinkSlopes_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_LaneSpeedLimits_.GetEventId().value, &event_backend_EHR_Bus_LaneSpeedLimits_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_LinkInfos_.GetEventId().value, &event_backend_EHR_Bus_LinkInfos_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_AllMergePoints_.GetEventId().value, &event_backend_EHR_Bus_AllMergePoints_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_LinearObjects_.GetEventId().value, &event_backend_EHR_Bus_LinearObjects_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_FormOfWays_.GetEventId().value, &event_backend_EHR_Bus_FormOfWays_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_SequenceId_.GetEventId().value, &event_backend_EHR_Bus_SequenceId_ ));
  // VCA_IPCB_STD_FUNCTION_CALLED
  static_cast<void>(event_backend_table_.emplace(event_backend_EHR_Bus_LaneWidthes_.GetEventId().value, &event_backend_EHR_Bus_LaneWidthes_ ));

}

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProxyXf::RouteSubscribeMessage(
      ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader&& header) {
  // VCA_IPCB_STD_SHARED_POINTER_DESTRUCTOR, VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS, VCA_IPCB_VALID_CLIENT_MANAGER_OBJECT
  return ipc_binding_client_manager_sync_.SubscribeEvent(std::move(header), client_);
}

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProxyXf::RouteUnsubscribeMessage(
      ::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader&& header) {
   // VCA_IPCB_STD_SHARED_POINTER_DESTRUCTOR, VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS, VCA_IPCB_VALID_CLIENT_MANAGER_OBJECT
   return ipc_binding_client_manager_sync_.UnsubscribeEvent(std::move(header), client_);
}

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProxyXf::OnResponseReceived(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ResponseMessage&&) {
  return true;
}  // COV_IpcBinding_FunctionCallCoverage_unused_functionality

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProxyXf::OnNotificationReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessage& notification) {
  ::amsr::ipc_binding_core::internal::ForwardOutput forwarded{false};
  // Get event ID from notification header for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{notification.GetMessageHeader().event_id_};

  EventBackendMap::iterator const it{event_backend_table_.find(event_id.value)};
  if(it != event_backend_table_.end()){
    // VCA_IPCB_EVENT_BACKEND_OBJECT_LIFECYCLE
    forwarded = it->second->OnNotificationReceived(notification);
  }

  return forwarded;
}


::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProxyXf::OnSubscribeAckReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventAckMessageHeader const& ack_response) {
  ::amsr::ipc_binding_core::internal::ForwardOutput accepted{false};
  // Get event ID from ack_response for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{ack_response.event_id_};

  EventBackendMap::iterator const it{event_backend_table_.find(event_id.value)};

  if(it != event_backend_table_.end()){
    // VCA_IPCB_EVENT_BACKEND_OBJECT_LIFECYCLE
    accepted = it->second->OnSubscribeAckReceived(ack_response);
  }
  return accepted;
}

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProxyXf::OnSubscribeNAckReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventNAckMessageHeader const& nack_response) {
  ::amsr::ipc_binding_core::internal::ForwardOutput accepted{false};
  // Get event ID from response header for dispatching.
  ::amsr::ipc_binding_core::internal::ipc_protocol::EventId const event_id{nack_response.event_id_};

  EventBackendMap::iterator const it{event_backend_table_.find(event_id.value)};
  if(it != event_backend_table_.end()){
    // VCA_IPCB_EVENT_BACKEND_OBJECT_LIFECYCLE
    accepted = it->second->OnSubscribeNAckReceived(nack_response);
  }

  return accepted;
}

::amsr::ipc_binding_core::internal::ForwardOutput EHRSI_OutProxyXf::OnApplicationErrorReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::ApplicationErrorMessage&&) {
  return true;
}  // COV_IpcBinding_FunctionCallCoverage_unused_functionality

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
void EHRSI_OutProxyXf::OnErrorResponseReceived(
    ::amsr::ipc_binding_core::internal::ipc_protocol::ErrorResponseMessage&&) {
}  // COV_IpcBinding_FunctionCallCoverage_unused_functionality

::amsr::socal::SkeletonConnectionState EHRSI_OutProxyXf::ReadSkeletonConnectionState() noexcept {
  // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS
  return (remote_server_->IsConnected() ? ::amsr::socal::SkeletonConnectionState::kConnected
                                        : ::amsr::socal::SkeletonConnectionState::kDisconnected);
}


// ---- Events ---------------------------------------------------------------------------------------------------
EHRSI_OutProxyXfEventBackendEHR_Bus_NOAInfo& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_NOAInfo() noexcept {
  return event_backend_EHR_Bus_NOAInfo_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_LaneConnectivitys& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_LaneConnectivitys() noexcept {
  return event_backend_EHR_Bus_LaneConnectivitys_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_Nodes& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_Nodes() noexcept {
  return event_backend_EHR_Bus_Nodes_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_TrafficSigns& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_TrafficSigns() noexcept {
  return event_backend_EHR_Bus_TrafficSigns_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_GeoFences& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_GeoFences() noexcept {
  return event_backend_EHR_Bus_GeoFences_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_LinkCurvatures& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_LinkCurvatures() noexcept {
  return event_backend_EHR_Bus_LinkCurvatures_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_LinkSlopes& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_LinkSlopes() noexcept {
  return event_backend_EHR_Bus_LinkSlopes_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_LaneSpeedLimits& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_LaneSpeedLimits() noexcept {
  return event_backend_EHR_Bus_LaneSpeedLimits_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_LinkInfos& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_LinkInfos() noexcept {
  return event_backend_EHR_Bus_LinkInfos_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_AllMergePoints& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_AllMergePoints() noexcept {
  return event_backend_EHR_Bus_AllMergePoints_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_LinearObjects& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_LinearObjects() noexcept {
  return event_backend_EHR_Bus_LinearObjects_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_FormOfWays& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_FormOfWays() noexcept {
  return event_backend_EHR_Bus_FormOfWays_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_SequenceId& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_SequenceId() noexcept {
  return event_backend_EHR_Bus_SequenceId_;
}
EHRSI_OutProxyXfEventBackendEHR_Bus_LaneWidthes& EHRSI_OutProxyXf::GetEventBackendEHR_Bus_LaneWidthes() noexcept {
  return event_backend_EHR_Bus_LaneWidthes_;
}
// ---- Events ---------------------------------------------------------------------------------------------------

// ---- Fields ---------------------------------------------------------------------------------------------------
// ---- Fields ---------------------------------------------------------------------------------------------------

// ---- Methods ----------
// ---- Methods ----------

// ---- Fields ----------
// ---- Fields ----------


}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

// COV_JUSTIFICATION_BEGIN
// \ID COV_IpcBinding_FunctionCallCoverage_no_event_or_field_notification_configured
//   \ACCEPT  XX
//   \REASON  The API has a dummy implementations if there are no event or field notifications are configured in the model.
//            A coverage gap is reported for the API which is not possible to test in the component/multi unit tests.
//            The API is tested by unit tests. And no component or multi unit function call coverage needs to be achieved.
//
// \ID COV_IpcBinding_FunctionCallCoverage_unused_functionality
//   \ACCEPT  XX
//   \REASON  The API implementation is required to fulfill the interface contract of the client sink.
//            A coverage gap is reported for the API which is never used by the product.
//            The API is verified with unit tests.Therefore no further component or multi unit tests are necessary.
// COV_JUSTIFICATION_END

