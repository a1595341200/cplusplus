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
/**        \file  TrafficLightAttentionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_binding.h
 *        \brief  Frame for IPC binding service instance class of service 'PerceptionRearSI_Out'
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PROXY_XF_IPC_BINDING_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PROXY_XF_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <map>
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_events.h"
#include "amsr/timer/timer_manager.h"
#include "ipc_binding_core/internal/client_manager_sync_interface.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_core/internal/provided_service_instance_id.h"
#include "ipc_binding_core/internal/runtime_configuration/service_config.h"
#include "ipc_binding_core/internal/service_discovery/service_discovery_proxy_interface.h"
#include "ipc_binding_transformation_layer/internal/binding_client.h"
#include "ipc_binding_transformation_layer/internal/remote_server.h"
#include "ipc_binding_transformation_layer/internal/remote_server_manager.h"
#include "perceptionrearsi_out/PerceptionRearSI_Out_proxy_backend_interface.h"
#include "perceptionrearsi_out/perceptionrearsi_out_proxy.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionrearsi_out {

/*!
 * \brief Type alias for the client manager thread synchronizer.
 */
using ClientManagerSyncType = ::amsr::ipc_binding_core::internal::ClientManagerSyncInterface;

/*!
 * \brief Type definition for pointer of LocalEventSink.
 */
using LocalEventSinkPtr = std::add_pointer<::amsr::ipc_binding_core::internal::LocalEventSink>::type;

// VECTOR Next Construct Metric-OO.WMC.One: MD_IPCBINDING_Metric-OO.WMC.Generated_Code_One_methods_per_class
/*!
 * \brief Required service interface deployment of service interface 'PerceptionRearSI_Out'.
 * \unit  ProxyInstance
 */
class PerceptionRearSI_OutProxyXf final
    : public ::perceptionrearsi_out::internal::PerceptionRearSI_OutProxyBackendInterface,
      public ::amsr::ipc_binding_core::internal::LocalClientSink {
 public:
  /*!
   * \brief Type alias for the ServiceDiscoveryProxy.
   */
  using ServiceDiscoveryProxy = ::amsr::ipc_binding_core::internal::service_discovery::ServiceDiscoveryProxyInterface;

  /*!
   * \brief Type alias for a service instance identifier.
   */
  using ServiceInstanceIdentifier =
      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier;

  /*!
   * \brief Type alias for RuntimeProcessingMode.
   */
  using RuntimeProcessingMode = ::amsr::ipc_binding_core::internal::runtime_configuration::RuntimeProcessingMode;

  /*!
   * \brief         Constructor of ProxyXf for service 'PerceptionRearSI_Out'.
   * \param[in,out] ipc_binding_client_manager_sync IPC binding client manager sync.
   * \param[in,out] sd_proxy                        Reference to the ServiceDiscoveryProxy. The object must be valid for
   *                                                PerceptionRearSI_OutProxyXf's entire life time.
   * \param[in,out] remote_server_manager           RemoteServerManagerInterface reference.
   * \param[in,out] timer_manager                   Reference to the TimerManager.
   * \param[in]     runtime_processing_mode         The used runtime processig mode.
   * \param[in]     service_instance_id             The service instance ID.
   * \param[in]     integrity_level                 The integrity level for the required service instance.
   * \param[in]     service_config                  The runtime service config for this service.
   * \context       App
   */
   PerceptionRearSI_OutProxyXf(
    ClientManagerSyncType& ipc_binding_client_manager_sync,
	ServiceDiscoveryProxy& sd_proxy,
	RemoteServerManagerInterface& remote_server_manager,
	::amsr::timer::ThreadSafeTimerManager& timer_manager,
	RuntimeProcessingMode const runtime_processing_mode,
	::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const service_instance_id,
	::amsr::ipc::IntegrityLevel const integrity_level,
	::amsr::ipc_binding_core::internal::runtime_configuration::ServiceConfig const& service_config);

  /*!
   * \brief       Destructor.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  ~PerceptionRearSI_OutProxyXf() noexcept final;

  PerceptionRearSI_OutProxyXf(PerceptionRearSI_OutProxyXf const &) = delete;
  PerceptionRearSI_OutProxyXf &operator=(PerceptionRearSI_OutProxyXf const &) = delete;
  PerceptionRearSI_OutProxyXf(PerceptionRearSI_OutProxyXf &&) = delete;
  PerceptionRearSI_OutProxyXf &operator=(PerceptionRearSI_OutProxyXf &&) = delete;

  /*!
   * \brief       Subscribe to an event.
   * \details     This method is being invoked by an EventManager. The call contains a pointer to this object, where the
   *              notifications shall be routed to after successful subscription.
   *
   * \param[in,out] header IPC event subscription request header
   * \return        true if subscription was successful, false otherwise.
   *
   * \pre         -
   * \context     App
   * \threadsafe  TRUE
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput RouteSubscribeMessage(
      ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader&& header);

  /*!
   * \brief         Unsubscribe from an event.
   * \param[in,out] header IPC event unsubscription request header from the client to the server.
   * \return        true if the unsubscription could be forwarded, false otherwise.
   *
   * \pre         -
   * \context     App
   * \threadsafe  TRUE
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput RouteUnsubscribeMessage(
      ::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader&& header);

  /*!
   * \brief         The reception path is realized for a concrete service interface deployment.
   * \details       TODO :  AMSR-26825 - Will be removed when proxyxf is no more method sink.
   * \return        Whether this response could be forwarded or not.
   *
   * \pre         -
   * \context     Reactor
   * \threadsafe  TRUE
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnResponseReceived(
      ::amsr::ipc_binding_core::internal::ipc_protocol::ResponseMessage&&) final;

  /*!
   * \brief         The reception path is realized for a concrete service interface deployment.
   * \details       Reception path: PacketRouter -> BindingClient -> ProxyXf -> EventManager
   * \param[in,out] notification  Notification message to be forwarded.
   * \return        True if this notification could be forwarded, false otherwise.
   *
   * \pre         -
   * \context       Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnNotificationReceived(
      ::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessage& notification) final;

  /*!
   * \brief         The reception path is realized for a concrete service interface deployment.
   * \details       TODO :  AMSR-26825 - Will be removed when proxyxf is no more method sink.
   * \return        Whether this application error could be forwarded or not.
   * \pre           -
   * \context       Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnApplicationErrorReceived(
      ::amsr::ipc_binding_core::internal::ipc_protocol::ApplicationErrorMessage&&) final;

  /*!
  * \brief         The reception path is realized for a concrete service interface deployment.
  * \details       TODO :  AMSR-26825 - Will be removed when proxyxf is no more method sink.
  * \pre           -
  * \context       Reactor
  */
  void OnErrorResponseReceived(::amsr::ipc_binding_core::internal::ipc_protocol::ErrorResponseMessage&&) final;

  /*!
   * \brief     Forward a subscription ACK from the the skeleton to the proxy.
   * \param[in] ack_response The ACK response forwarded to event backend.
   * \return    true if the concrete LocalClientSink accepts the subscribe ACK, false if the client id in message
   *            header is different then of this instance.
   * \pre       -
   * \context   Reactor
   * \trace     SPEC-5951439 (Call SubscriptionStateChangeHandler with kSubscribed)
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnSubscribeAckReceived(
      ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventAckMessageHeader const& ack_response) final;

  /*!
   * \brief     Forward an unsubscription message to a provided service instance.
   * \param[in] nack_response The NACK response forwarded to event backend.
   * \return    true if the concrete LocalClientSink accepts the subscribe NACK, false if the client id in message
   *            header is different then of this instance.
   * \pre         -
   * \context   Reactor
   * \trace     SPEC-5951482 (Call SubscriptionStateChangeHandler with kSubscriptionPending).
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnSubscribeNAckReceived(
      ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventNAckMessageHeader const& nack_response) final;

  /*!
   * \brief  Get the connection state between proxy and skeleton.
   * \return Current connection state.
   *
   * \pre        -
   * \context    App
   * \threadsafe FALSE
   * \reentrant  FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  ::amsr::socal::SkeletonConnectionState ReadSkeletonConnectionState() noexcept final;

 // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief       Getter function for the event 'PerceptionRear_Bus_LaneInfo'.
   * \return      A reference to a valid event backend.
   *
   * \pre         -
   * \context     App
   */
  PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_LaneInfo& GetEventBackendPerceptionRear_Bus_LaneInfo() noexcept final;

  /*!
   * \brief       Getter function for the event 'PerceptionRear_Bus_CameraStatus'.
   * \return      A reference to a valid event backend.
   *
   * \pre         -
   * \context     App
   */
  PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_CameraStatus& GetEventBackendPerceptionRear_Bus_CameraStatus() noexcept final;

  /*!
   * \brief       Getter function for the event 'PerceptionRear_Bus_VisnObj'.
   * \return      A reference to a valid event backend.
   *
   * \pre         -
   * \context     App
   */
  PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_VisnObj& GetEventBackendPerceptionRear_Bus_VisnObj() noexcept final;

  // ---- Events ---------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------

  // ---- Methods ----------

  // ---- Methods ----------


  // ---- Fields ----------

  // ---- Fields ----------


 private:
  /*!
   * \brief Type alias for ProvidedServiceInstanceId.
   */
  using ProvidedServiceInstanceId = ::amsr::ipc_binding_core::internal::ProvidedServiceInstanceId;

  /*!
   * \brief Type alias for Client ID.
   */
  using ClientId = ::amsr::ipc_binding_core::internal::ipc_protocol::ClientId;

  /*!
   * \brief Provided service instance ID of this proxy instance.
   */
  ProvidedServiceInstanceId const provided_service_instance_id_;

  /*!
   * \brief The client ID of the ProxyXf instance.
   */
  ClientId const client_id_;

  /*!
   * \brief Reference to the IPC binding client interface for registration of this IPC proxy instance and to forward
   *        method requests.
   */
  ClientManagerSyncType& ipc_binding_client_manager_sync_;

  /*!
   * \brief Reference to the ServiceDiscoveryProxy.
   */
  ServiceDiscoveryProxy& sd_proxy_;

  /*!
   * \brief A shared pointer to the RemoteServer.
   */
  std::shared_ptr<RemoteServer> remote_server_;

  /*!
   * \brief Reference to the used timer manager.
   */
  ::amsr::timer::ThreadSafeTimerManager& timer_manager_;

  /*!
   * \brief The used runtime processing mode.
   */
  RuntimeProcessingMode const runtime_processing_mode_;

  /*!
   * \brief   Function to emplace all event backends to the event backend table.
   * \pre -
   * \context Init
   * \spec requires true; \endspec
   */
  void EmplaceEventBackends();

  // ---- Methods ----------
  // ---- Methods ----------

  // ---- Events ----------

  /*!
   * \brief Event backend for proxy event 'PerceptionRear_Bus_LaneInfo'.
   */
  PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_LaneInfo event_backend_PerceptionRear_Bus_LaneInfo_;

  /*!
   * \brief Event backend for proxy event 'PerceptionRear_Bus_CameraStatus'.
   */
  PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_CameraStatus event_backend_PerceptionRear_Bus_CameraStatus_;

  /*!
   * \brief Event backend for proxy event 'PerceptionRear_Bus_VisnObj'.
   */
  PerceptionRearSI_OutProxyXfEventBackendPerceptionRear_Bus_VisnObj event_backend_PerceptionRear_Bus_VisnObj_;

  // ---- Fields ----------
  // ---- Fields ------------------------------------------------------------------------------------------

  /*!
   * \brief An alias to the map of event id and corresponding event backend.
   */
  using EventBackendMap = std::map<::amsr::ipc_binding_core::internal::ipc_protocol::EventId::type, LocalEventSinkPtr>;

  /*!
   * \brief A map of event id and corresponding event backend.
   */
  EventBackendMap event_backend_table_{};

  /*!
   * \brief Alias for binding client
   */
  using BindingClient = ::amsr::ipc_binding_transformation_layer::internal::BindingClient;

  /*!
   * \brief A shared pointer to the binding client.
   */
  std::shared_ptr<BindingClient> client_{std::make_shared<BindingClient>(*this)};
};

}  // namespace perceptionrearsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PROXY_XF_IPC_BINDING_H_

