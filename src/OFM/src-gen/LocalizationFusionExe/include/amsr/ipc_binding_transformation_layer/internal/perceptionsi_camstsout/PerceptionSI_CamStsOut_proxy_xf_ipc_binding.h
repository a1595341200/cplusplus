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
/**        \file  LocalizationFusionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_xf_ipc_binding.h
 *        \brief  Frame for IPC binding service instance class of service 'PerceptionSI_CamStsOut'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_XF_IPC_BINDING_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_XF_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <map>
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_xf_ipc_events.h"
#include "amsr/timer/timer_manager.h"
#include "ipc_binding_core/internal/ipc_protocol/ipc_protocol_types.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/ipc_binding_deployment.h"
#include "perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_backend_interface.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_camstsout {

/*!
 * \brief Parameterization of the IPC deployment information for service interface 'PerceptionSI_CamStsOutProxy'.
 */
using PerceptionSI_CamStsOutRequiredIpcDeployment =
    ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceDeploymentElement<// Abstract service interface reference
                                         ::perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy,
                                         // Service ID
                                         ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId(100U),
                                         // Major and minor version of the service used.
                                         ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceVersionTemplate<1U, 0U>>;

/*!
 * \brief Type alias for the client manager.
 */
using ClientManager = ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration::ClientManagerType;

/*!
  * \brief Type definition for pointer of LocalEventSink.
  */
using LocalEventSinkPtr = std::add_pointer<::amsr::ipc_binding_core::internal::LocalEventSink>::type;

/*!
 * \brief Required service interface deployment of service interface 'PerceptionSI_CamStsOut'.
 */
class PerceptionSI_CamStsOutProxyXf final
    : public ::perceptionsi_camstsout::internal::PerceptionSI_CamStsOutProxyBackendInterface,
      public ::amsr::ipc_binding_core::internal::LocalClientSink,
      public std::enable_shared_from_this< PerceptionSI_CamStsOutProxyXf> {
 public:

  /*!
   * \brief         Constructor of ProxyXf for service 'PerceptionSI_CamStsOut'.
   * \param[in,out] timer_manager            Timer manager.
   * \param[in,out] client_binding_manager   Client binding manager.
   * \param[in]     runtime_processing_mode  Runtime processing mode.
   * \param[in]     service_instance_id      The service instance id.
   * \context       Init
   */
   PerceptionSI_CamStsOutProxyXf(
      ::amsr::timer::ThreadSafeTimerManager& timer_manager,
      ClientManager& client_binding_manager,
      ::amsr::ipc_binding_core::internal::RuntimeProcessingMode const runtime_processing_mode,
      ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const service_instance_id)
      : client_binding_manager_{client_binding_manager},
        client_id_{0},
        proxy_count_{0},
        is_active_{false},
        instance_id_{service_instance_id}
      , event_backend_FrntCam_Bus_CamSts_{
            *this, kDeployment.service_id_, kDeployment.service_interface_version_.major_version_,
            ::amsr::ipc_binding_core::internal::ipc_protocol::EventId{4501}, timer_manager, runtime_processing_mode}
 {
    EmplaceEventBackends();
  }

  /*!
   * \brief   Function to emplace all event backends to the event backend table.
   *
   * \context Init
   */
  void EmplaceEventBackends();

  /*!
   * \brief Sets the active state to true, indicating that the service is now up and the requests coming from SOCAL
   * shall be forwarded to the binding.
   *
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \synchronous FALSE
   */
  void Start() noexcept;

  /*!
   * \brief Sets the active state to false, indicating that the service is now down and the requests coming from SOCAL
   * shall not be forwarded to the binding.
   *
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \synchronous FALSE
   */
  void Stop() noexcept;

  /*!
   * \brief Requests one client ID from the realized client binding interface and registers itself as an instance.
   *
   * \return      Result containing no value or an error.
   * \error       ComErrc::kGrantEnforcementError If the request is refused by IAM.
   * \pre         -
   * \context     App
   * \threadsafe  TRUE
   * \synchronous TRUE
   */
  ::ara::core::Result<void> RequestService() noexcept final ;

  /*!
   * \brief De-registers the required service instance from getting any incoming notifications from the ClientManager.
   *
   * \pre         -
   * \context     App
   * \threadsafe  TRUE
   * \synchronous TRUE
   */
  void ReleaseService() noexcept final ;

  /*!
   * \brief   This getter will be used in method requests to fill in the request header.
   * \return  The service ID of the deployed service interface.
   *
   * \pre         -
   * \context    ANY
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId GetServiceId() noexcept {
    return kDeployment.service_id_;
  }

  /*!l
   * \brief   This getter will be used in method requests to fill in the request header.
   * \return  The major version of the deployed service interface.
   *
   * \pre         -
   * \context    ANY
   */
  static ::amsr::ipc_binding_core::internal::ipc_protocol::MajorVersion GetMajorVersion() noexcept {
    return kDeployment.service_interface_version_.major_version_;
  }

  /*!
   * \brief This getter will be used in method requests to fill in the request header.
   * \return The client of of the deployed service interface
   *
   * \pre        -
   * \context    ANY
   */
  ::amsr::ipc_binding_core::internal::ipc_protocol::ClientId GetClientId() const noexcept { return client_id_; }

  /*!
   * \brief This getter will be used in method requests to fill the request header.
   * \return The instance id of the deployed service interface
   *
   * \pre         -
   * \context    ANY
   */
  ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId GetInstanceId() const noexcept { return instance_id_; }

  /*!
    * \brief       Forward a method request to the realized client interface.
    * \details     Send path: Concrete method manager -> RequiredIpcServiceInstance -> ClientManager -> PacketRouter
    *
    * \param[in,out] request  Message to send to the server.
    * \return        Whether this request could be forwarded or not.
    *
    * \pre         -
    * \context     App
    * \threadsafe  TRUE
    */
  ::amsr::ipc_binding_core::internal::ForwardOutput RouteRequest(
      ::amsr::ipc_binding_core::internal::ipc_protocol::RequestMessage&& request);

  /*!
   * \brief       Forward a method request (no return) to the realized client interface.
   * \details     Send path: Concrete MethodManager -> RequiredIpcServiceInstance -> ClientManager -> PacketRouter
   *
   * \param[in,out] request Message to send to the server.
   * \return        Whether this request could be forwarded or not.
   *
   * \pre         -
   * \context     App
   * \threadsafe  TRUE
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput RouteRequest(
      ::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request);

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
   * \details       Reception path: PacketRouter -> ProxyXf -> MethodManager
   * \param[in,out] response  Response message to be forwarded.
   * \return        Whether this response could be forwarded or not.
   *
   * \pre         -
   * \context     Reactor
   * \threadsafe  TRUE
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnResponseReceived(::amsr::ipc_binding_core::internal::ipc_protocol::ResponseMessage&& response) final;

  /*!
   * \brief         The reception path is realized for a concrete service interface deployment.
   * \details       Reception path: PacketRouter -> ProxyXf -> EventManager
   * \param[in,out] notification  Notification message to be forwarded.
   * \return        True if this notification could be forwarded, false otherwise.
   *
   * \pre         -
   * \context       Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnNotificationReceived(::amsr::ipc_binding_core::internal::ipc_protocol::NotificationMessagePtr notification) final;

  /*!
   * \brief         The reception path is realized for a concrete service interface deployment.
   * \details       Reception path: PacketRouter -> ProxyXf -> MethodManager
   * \param[in,out] message Application error message to be forwarded.
   * \return        Whether this application error could be forwarded or not.
   * \pre           -
   * \context       Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnApplicationErrorReceived(::amsr::ipc_binding_core::internal::ipc_protocol::ApplicationErrorMessage&& message) final;

  /*!
  * \brief         The reception path is realized for a concrete service interface deployment.
  * \details       Reception path: PacketRouter -> ProxyXf -> MethodManager
  * \param[in,out] message Request error message to be forwarded.
  * \pre           -
  * \context       Reactor
  */
  void OnErrorResponseReceived(::amsr::ipc_binding_core::internal::ipc_protocol::ErrorResponseMessage&& message) final;

  /*!
   * \brief     Forward a subscription ACK from the the skeleton to the proxy.
   * \param[in] ack_response The ACK response forwarded to event backend.
   * \return    true if the concrete LocalClientSink accepts the subscribe ACK, false if the client id in message
   *            header is different then of this instance.
   * \pre       -
   * \context   Reactor
   * \trace     SPEC-5951439 (Call SubscriptionStateChangeHandler with kSubscribed)
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnSubscribeAckReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventAckMessageHeader const& ack_response) final;

  /*!
   * \brief     Forward an unsubscription message to a provided service instance.
   * \param[in] nack_response The NACK response forwarded to event backend.
   * \return    true if the concrete LocalClientSink accepts the subscribe NACK, false if the client id in message
   *            header is different then of this instance.
   * \pre         -
   * \context   Reactor
   * \trace     SPEC-5951482 (Call SubscriptionStateChangeHandler with kSubscriptionPending).
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnSubscribeNAckReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventNAckMessageHeader const& nack_response) final;

  /*!
   * \brief   Notify subscription state update when the provided service goes down.
   *
   * \pre         -
   * \context Reactor
   * \trace   SPEC-5951482 (Call SubscriptionStateChangeHandler with kSubscriptionPending)
   */
  void OnServiceInstanceDown() final;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief       Getter function for the event 'FrntCam_Bus_CamSts'.
   * \return      A reference to a valid event backend.
   *
   * \pre         -
   * \context     App
   */
  PerceptionSI_CamStsOutProxyXfEventBackendFrntCam_Bus_CamSts& GetEventBackendFrntCam_Bus_CamSts() noexcept final {
    return event_backend_FrntCam_Bus_CamSts_;
  }

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------

 private:

  /*!
   * \brief Type alias for IpcProxyBindingIdentity.
   */
  using IpcProxyBindingIdentity = typename ClientManager::IpcProxyBindingIdentity;

  /*!
   * \brief Deployment element containing service id, interface version.
   */
  static constexpr IpcServiceInterfaceDeployment kDeployment{PerceptionSI_CamStsOutRequiredIpcDeployment::kDeployment};

  /*!
   * \brief Reference to the IPC binding client interface for registration of this IPC proxy instance and to forward
   *        method requests.
   */
  ClientManager& client_binding_manager_;

  /*!
   * \brief Client identification of this required service instance.
   * \details This client ID is mandatory as multiple proxies may use one provided service in parallel.
   */
  std::atomic<::amsr::ipc_binding_core::internal::ipc_protocol::ClientId> client_id_;

  /*!
   * \brief Proxy xf use counter.
   * \details This client ID is mandatory as multiple proxies may use one provided service in parallel.
   */
  std::atomic<std::uint16_t> proxy_count_;

  /*!
   * \brief Flag indicating the active state of the Proxy_xf.
   */
  std::atomic<bool> is_active_;

  /*!
   * \brief IPC instance identifier of the required IPC service instance.
   */
  ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId instance_id_;
  
  
  // ---- Methods ----------
  // ---- Methods ----------

  // ---- Events ----------

  /*!
   * \brief Event backend for proxy event 'FrntCam_Bus_CamSts'.
   */
  PerceptionSI_CamStsOutProxyXfEventBackendFrntCam_Bus_CamSts event_backend_FrntCam_Bus_CamSts_;

  // ---- Fields ----------
  // ---- Fields ------------------------------------------------------------------------------------------
    
 /*!
  * \brief An alias to the map of event id and corresponding event backend.
  */
  using EventBankendMap = std::map<::amsr::ipc_binding_core::internal::ipc_protocol::EventId, LocalEventSinkPtr>;

 /*!
  * \brief A map of event id and corresponding event backend.
  */
  EventBankendMap event_backend_table_{};
};

}  // namespace perceptionsi_camstsout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_XF_IPC_BINDING_H_

