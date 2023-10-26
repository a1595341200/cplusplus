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
/**        \file  PerceptionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_binding.h
 *        \brief  IPC binding of service skeleton for service 'PerceptionSI_Out'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_BINDING_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_method_manager.h"
#include "ipc_binding_core/internal/ipc_protocol/message.h"
#include "ipc_binding_core/internal/provided_service_instance_id.h"
#include "ipc_binding_core/internal/runtime_configuration/service_config.h"
#include "ipc_binding_transformation_layer/internal/ipc_skeleton_event_manager_interface.h"
#include "ipc_binding_transformation_layer/internal/methods/skeleton_fire_and_forget_method_xf_interface.h"
#include "ipc_binding_transformation_layer/internal/methods/skeleton_method_xf_interface.h"
#include "perceptionsi_out/PerceptionSI_Out_skeleton_backend_interface.h"
#include "perceptionsi_out/PerceptionSI_Out_skeleton_impl_interface.h"
#include "perceptionsi_out/perceptionsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

/*!
 * \brief Type alias for the server manager.
 */
using ServerManager = ::amsr::ipc_binding_core::internal::ServerManagerSyncInterface;

/*!
 * \brief Provided service interface deployment of service interface 'PerceptionSI_Out'.
 * \unit  SkeletonInstance
 */
 // VECTOR NC AutosarC++17_10-A10.1.1: MD_IPCBINDING_AutosarC++17_10-A10.1.1_multiple_inheritance
 // VCA_IPCB_CLASS_DECLARATION
class PerceptionSI_OutProvidedIpcServiceInstance final
    : public ::amsr::ipc_binding_core::internal::LocalServerSink,
      public ::perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface {
 public:

  /*!
   * \brief Type-alias for the EventId type definition.
   */
  using EventId = ::amsr::ipc_binding_core::internal::ipc_protocol::EventId;

  /*!
   * \brief Type-alias for the IpcSkeletonEventManagerInterface type definition.
   */
  using IpcSkeletonEventManagerInterface =
      ::amsr::ipc_binding_transformation_layer::internal::IpcSkeletonEventManagerInterface;

  /*!
   * \brief Type definition for the NotifierIdMap.
   */
  using NotifierIdMap = std::unordered_map<EventId, IpcSkeletonEventManagerInterface&,
                                           ipc_binding_core::internal::runtime_configuration::EventIdHash>;

 /*!
   * \brief Type definition for the EventIdSet.
   */
  using EventIdSet = std::unordered_set<EventId, ipc_binding_core::internal::runtime_configuration::EventIdHash>;

  /*!
   * \brief Type-alias for the MethodId type definition.
   */
  using MethodId = ::amsr::ipc_binding_core::internal::ipc_protocol::MethodId;

  /*!
   * \brief Type-alias for the SkeletonMethodXfInterface type definition.
   */
  using SkeletonMethodXfInterface =
      ::amsr::ipc_binding_transformation_layer::internal::methods::SkeletonMethodXfInterface;

  /*!
   * \brief Type definition for the MethodIdMap.
   */
  using MethodIdMap = std::unordered_map<MethodId, SkeletonMethodXfInterface&,
                                         ipc_binding_core::internal::runtime_configuration::MethodIdHash>;

  /*!
   * \brief Type-alias for the SkeletonFireAndForgetMethodXfInterface type definition.
   */
  using SkeletonFireAndForgetMethodXfInterface =
      ::amsr::ipc_binding_transformation_layer::internal::methods::SkeletonFireAndForgetMethodXfInterface;

  /*!
   * \brief Type definition for the MethodFireForgetIdMap.
   */
  using MethodFireForgetIdMap = std::unordered_map<MethodId, SkeletonFireAndForgetMethodXfInterface&,
                                                   ipc_binding_core::internal::runtime_configuration::MethodIdHash>;

  /*!
   * \brief         Constructor of ProvidedIpcServiceInstance for service 'PerceptionSI_Out'.
   * \param[in,out] skeleton                Reference to the skeleton. The reference must be valid for PerceptionSI_OutProvidedIpcServiceInstance entire life time.
   * \param[in,out] server_binding_manager  Server binding manager. The reference must be valid for PerceptionSI_OutProvidedIpcServiceInstance entire life time.
   * \param[in]     instance_id             The instance ID.
   * \param[in]     method_id               Method deployment ID.
   * \param[in]     service_config          The runtime service config for this service.
   *
   * \context       App
   * \synchronous   TRUE
   */
  PerceptionSI_OutProvidedIpcServiceInstance(::perceptionsi_out::internal::PerceptionSI_OutSkeletonBackendInterface& skeleton,
                                   ServerManager& server_binding_manager,
                                  ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const instance_id,
                                  ::amsr::ipc_binding_core::internal::runtime_configuration::ServiceConfig const& service_config)
      : ::amsr::ipc_binding_core::internal::LocalServerSink{},
        server_binding_manager_{server_binding_manager},
        instance_id_{service_config.GetId(), instance_id, service_config.GetMajorVersion()},
        logger_{::amsr::ipc_binding_core::internal::logging::kIpcLoggerContextId,
                ::amsr::ipc_binding_core::internal::logging::kIpcLoggerContextDescription,
                // VCA_IPCB_BASICSTRING_CONSTRUCTOR
                ::amsr::core::StringView{"PerceptionSI_OutProvidedIpcServiceInstance"}},
        event_Perception_Bus_LaneInfo_{
            server_binding_manager,
            service_config.GetId(),
            service_config.GetMajorVersion(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            EventId{service_config.GetEventOf(ipc_binding_core::internal::runtime_configuration::Shortname{"Perception_Bus_LaneInfo"}).GetId().value},
            instance_id,
            false},
        event_Perception_Bus_FrntCamInfo_{
            server_binding_manager,
            service_config.GetId(),
            service_config.GetMajorVersion(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            EventId{service_config.GetEventOf(ipc_binding_core::internal::runtime_configuration::Shortname{"Perception_Bus_FrntCamInfo"}).GetId().value},
            instance_id,
            false},
        event_FrntCam_Bus_TrafficInfo_{
            server_binding_manager,
            service_config.GetId(),
            service_config.GetMajorVersion(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            EventId{service_config.GetEventOf(ipc_binding_core::internal::runtime_configuration::Shortname{"FrntCam_Bus_TrafficInfo"}).GetId().value},
            instance_id,
            false},
        event_FrntCam_Bus_TrfcLi_{
            server_binding_manager,
            service_config.GetId(),
            service_config.GetMajorVersion(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            EventId{service_config.GetEventOf(ipc_binding_core::internal::runtime_configuration::Shortname{"FrntCam_Bus_TrfcLi"}).GetId().value},
            instance_id,
            false},
        event_FrntCam_Bus_LineSignGroup_{
            server_binding_manager,
            service_config.GetId(),
            service_config.GetMajorVersion(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            EventId{service_config.GetEventOf(ipc_binding_core::internal::runtime_configuration::Shortname{"FrntCam_Bus_LineSignGroup"}).GetId().value},
            instance_id,
            false},
        event_FrntCam_Bus_ExtInfo_{
            server_binding_manager,
            service_config.GetId(),
            service_config.GetMajorVersion(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            EventId{service_config.GetEventOf(ipc_binding_core::internal::runtime_configuration::Shortname{"FrntCam_Bus_ExtInfo"}).GetId().value},
            instance_id,
            false},
        event_id_set_{  // VCA_IPCB_STD_CONSTRUCTOR_CALLED
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            service_config.GetEventOf({"Perception_Bus_LaneInfo"}).GetId(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            service_config.GetEventOf({"Perception_Bus_FrntCamInfo"}).GetId(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            service_config.GetEventOf({"FrntCam_Bus_TrafficInfo"}).GetId(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            service_config.GetEventOf({"FrntCam_Bus_TrfcLi"}).GetId(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            service_config.GetEventOf({"FrntCam_Bus_LineSignGroup"}).GetId(),
            // VCA_IPCB_STD_BASICSTRING_CONSTRUCTOR
            service_config.GetEventOf({"FrntCam_Bus_ExtInfo"}).GetId()}  {
      static_cast<void>(skeleton);
      // VCA_IPCB_SERVER_MANAGER_REGISTER_SKELETON_FUNCTION, VCA_IPCB_VALID_SERVER_BINDING_MANAGER
      static_cast<void>(server_binding_manager_.RegisterSkeletonIpcBindingInstance(instance_id_, this));
  }

  PerceptionSI_OutProvidedIpcServiceInstance(PerceptionSI_OutProvidedIpcServiceInstance const& ) noexcept = delete;
  PerceptionSI_OutProvidedIpcServiceInstance(PerceptionSI_OutProvidedIpcServiceInstance&& ) noexcept = delete;
  PerceptionSI_OutProvidedIpcServiceInstance& operator=(PerceptionSI_OutProvidedIpcServiceInstance const& ) noexcept = delete;
  PerceptionSI_OutProvidedIpcServiceInstance& operator=(PerceptionSI_OutProvidedIpcServiceInstance&& ) noexcept = delete;

  /*!
   * \brief On destruction, this skeleton object must be de-registered in the server manager.
   *
   * \context App
   *
   * \internal
   *  - Deregister the skeleton binding instance from the server manager.
   * \endinternal
   */
  // VCA_IPCB_COMPILER_GENERATED_DESTRUCTOR
  ~PerceptionSI_OutProvidedIpcServiceInstance() noexcept final {
    // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS, VCA_IPCB_VALID_SERVER_BINDING_MANAGER
    server_binding_manager_.DeRegisterSkeletonIpcBindingInstance(instance_id_);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION

  /*!
   * \brief         Forwards a response message to the server manager.
   * \details       This method is being invoked by a method manager for sending a response message.
   *                Send path: MethodManager -> ProvidedIpcServiceInstance -> ServerManager -> PacketRouter.
   * \param[in,out] response  The message to be forwarded.
   *
   * \pre       -
   * \context   App
   *
   * \internal
   *  - Forward the response message to the server manager.
   * \endinternal
   */
  void RouteResponse(::amsr::ipc_binding_core::internal::ipc_protocol::LocalResponseMessage&& response) {
    // Forward to server_binding_manager_
    // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS, VCA_IPCB_VALID_SERVER_BINDING_MANAGER
    server_binding_manager_.RouteResponse(std::move(response));
  }

  /*!
   * \brief         Forwards an error response message to the server manager.
   * \details       This method is being invoked by a method manager for sending an error response message.
   *                Send path: MethodManager -> ProvidedIpcServiceInstance -> ServerManager -> PacketRouter.
   * \param[in,out] error_response The message to be forwarded.
   *
   * \pre     -
   * \context App
   *
   * \internal
   *  - Forward the error response message to the server manager.
   * \endinternal
   */
  void RouteErrorResponse(
      ::amsr::ipc_binding_core::internal::ipc_protocol::LocalErrorResponseMessage&& error_response) {
    // Forward to server_binding_manager_
    // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS, VCA_IPCB_VALID_SERVER_BINDING_MANAGER
    server_binding_manager_.RouteErrorResponse(std::move(error_response));
  }

  /*!
   * \brief     Forwards an application error message to the server manager.
   * \details   This method is being invoked by a method manager for sending a response message.
   *            Send path: MethodManager -> ProvidedIpcServiceInstance -> ServerManager -> PacketRouter.
   * \param[in] response The application error to forward.
   *
   * \pre     -
   * \context App
   *
   * \internal
   *  - Forward the application error message to the server manager.
   * \endinternal
   */
  void RouteApplicationError(
      ::amsr::ipc_binding_core::internal::ipc_protocol::LocalApplicationErrorMessage&& response) {
    // Forward to server_binding_manager_
    // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS, VCA_IPCB_VALID_SERVER_BINDING_MANAGER
    server_binding_manager_.RouteApplicationError(std::move(response));
  }

  // VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
  /*!
   * \brief Realization to forward a method to the method managers.
   *
   * \param[in,out] request  The request, which is going to be dispatched to a method manager for deserialization
   *                         and processing.
   *
   * \pre     -
   * \context Reactor
   */
  void OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) final;

  // VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
  /*!
   * \brief Realization to forward a fire & forget method to the method managers.
   *
   * \param[in, out] request  The request, which is going to be dispatched to a method manager for deserialization
   *                          and processing.
   * \pre         -
   * \context Reactor
   */
  // VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
  void OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) final;

  /*!
   * \brief Realization to forward a subscribe request from the client and forward it to the designated event / field notification manager.
   *
   * \param[in] subscribe_request The subscription message header from the client.
   *
   * \return A tuple containing:
             first:  Boolean flag indicating if the event subscription request was accepted (valid event)
             second: Optional NotificationMessage containing the serialized initial field notification message.
   * \pre     -
   * \context Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardNotificationMessage OnSubscribeEventReceived(
      ::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) final;

  /*!
   * \brief Realization to forward an unsubscribe request from the client and forward it to the designated event / field notification manager.
   *
   * \param[in] unsubscribe_request The unsubscription message header from the client.
   *
   * \return The forward status as an extensible structure.
   * \pre     -
   * \context Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnUnsubscribeEventReceived(
      ::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) final;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'Perception_Bus_LaneInfo'.
   *
   * \details Event sample type: ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerPerception_Bus_LaneInfo* GetEventManagerPerception_Bus_LaneInfo() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'Perception_Bus_FrntCamInfo'.
   *
   * \details Event sample type: ::FrntCamInfoIDT::FrntCamInfoIDT.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerPerception_Bus_FrntCamInfo* GetEventManagerPerception_Bus_FrntCamInfo() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_TrafficInfo'.
   *
   * \details Event sample type: ::TrafficInfoIDT::TrafficInfoIDT.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrafficInfo* GetEventManagerFrntCam_Bus_TrafficInfo() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_TrfcLi'.
   *
   * \details Event sample type: ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi* GetEventManagerFrntCam_Bus_TrfcLi() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_LineSignGroup'.
   *
   * \details Event sample type: ::LineSignGroupIDT::LineSignGroupIDT.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LineSignGroup* GetEventManagerFrntCam_Bus_LineSignGroup() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_ExtInfo'.
   *
   * \details Event sample type: ::ExtInfoIDT::ExtInfoIDT.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo* GetEventManagerFrntCam_Bus_ExtInfo() noexcept final;
  // ---- Events --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields --------------------------------------------------------------------------------------------------

 private:
   /*!
   * \brief Type alias for the user logger.
   */
  using Logger = ::amsr::ipc_binding_core::internal::logging::AraComLogger;

  /*!
   * \brief Type alias for IpcSkeletonBindingIdentity.
   */
  using IpcSkeletonBindingIdentity = typename ServerManager::IpcSkeletonBindingIdentity;

  /*!
   * \brief A reference to the server_binding_interface. The server binding is used to:
   * 1. Register this skeleton instance on construction.
   * 2. De-register this skeleton instance at destruction.
   * 3. Forward method responses and event notifications.
   */
  ServerManager& server_binding_manager_;

  /*!
   * \brief IPC instance id of this service instance.
   */
  IpcSkeletonBindingIdentity instance_id_;

  /*!
   * \brief Logger to print out debug & error messages.
   */
  Logger logger_;

  // ---- MethodManagers -------------------------------------------------------------------------------------------
  // ---- MethodXfs ------------------------------------------------------------------------------------------

  // ---- EventManagers --------------------------------------------------------------------------------------------
  /*!
   * \brief Event manager for skeleton event 'Perception_Bus_LaneInfo'
   */
  PerceptionSI_OutSkeletonIpcEventManagerPerception_Bus_LaneInfo event_Perception_Bus_LaneInfo_;

  /*!
   * \brief Event manager for skeleton event 'Perception_Bus_FrntCamInfo'
   */
  PerceptionSI_OutSkeletonIpcEventManagerPerception_Bus_FrntCamInfo event_Perception_Bus_FrntCamInfo_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_TrafficInfo'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrafficInfo event_FrntCam_Bus_TrafficInfo_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_TrfcLi'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi event_FrntCam_Bus_TrfcLi_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_LineSignGroup'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LineSignGroup event_FrntCam_Bus_LineSignGroup_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_ExtInfo'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo event_FrntCam_Bus_ExtInfo_;

  // ---- EventManagers -------------------------------------------------------------------------------------------

  // ---- FieldManagers --------------------------------------------------------------------------------------------
  // ---- FieldManagers -------------------------------------------------------------------------------------------

  /*!
   * \brief Set of event ids.
   */
  EventIdSet event_id_set_;
};

}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_BINDING_H_

