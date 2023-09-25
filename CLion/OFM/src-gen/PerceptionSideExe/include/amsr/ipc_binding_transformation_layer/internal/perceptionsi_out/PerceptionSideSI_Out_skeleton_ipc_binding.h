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
/**        \file  PerceptionSideExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_binding.h
 *        \brief  IPC binding of service skeleton for service 'PerceptionSideSI_Out'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_BINDING_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_method_manager.h"
#include "ipc_binding_core/internal/ipc_protocol/message.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/ipc_binding_deployment.h"
#include "ipc_binding_transformation_layer/internal/provided_ipc_service_instance.h"
#include "perceptionsi_out/PerceptionSideSI_Out_skeleton_impl_interface.h"
#include "perceptionsi_out/perceptionsidesi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

/*!
 * \brief Parameterization of the IPC deployment information for service interface 'PerceptionSideSI_OutSkeleton'.
 */
using PerceptionSideSI_OutProvidedIpcDeployment =
    ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceDeploymentElement<// Abstract service interface reference
                                         ::perceptionsi_out::skeleton::PerceptionSideSI_OutSkeleton,
                                         ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId(118U),
                                         ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceVersionTemplate<1U, 0U>>;

/*!
 * \brief Type alias for the server manager.
 */
using ServerManager = ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration::ServerManagerType;

/*!
 * \brief Provided service interface deployment of service interface 'PerceptionSideSI_Out'.
 */
class PerceptionSideSI_OutProvidedIpcServiceInstance final
    : public ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<PerceptionSideSI_OutProvidedIpcDeployment, ServerManager>,
      public ::perceptionsi_out::internal::PerceptionSideSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Type-alias for the Base class.
   */
  using Base = ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<PerceptionSideSI_OutProvidedIpcDeployment, ServerManager>;

  /*!
   * \brief         Constructor of ProvidedIpcServiceInstance for service 'PerceptionSideSI_Out'.
   * \param[in,out] skeleton                Reference to the skeleton.
   * \param[in,out] server_binding_manager  Server binding manager.
   * \param[in]     instance_id             The service instance ID.
   * \param[in]     method_id               Method deployment ID.

   * \context       App
   * \synchronous   TRUE
   */
  PerceptionSideSI_OutProvidedIpcServiceInstance(ServiceInterfaceRef& skeleton,
                                   ServerManager& server_binding_manager,
                                   ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const instance_id)
      : Base{skeleton, server_binding_manager, instance_id},
        event_FLCam_Bus_VisnObj_{*this},
        event_FRCam_Bus_VisnObj_{*this},
        event_RLCam_Bus_VisnObj_{*this},
        event_RRCam_Bus_VisnObj_{*this},
        event_FLCam_Bus_CamSts_{*this},
        event_FRCam_Bus_CamSts_{*this},
        event_RLCam_Bus_CamSts_{*this},
        event_RRCam_Bus_CamSts_{*this} {}

  /*!
   * \brief Realization to forward a method to the method managers.
   *
   * \param[in,out] request  The request, which is going to be dispatched to a method manager for deserialization
   *                         and processing.
   *
   * \return The forward status as an extensible struct.
   *
   * \pre     -
   * \context Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnRequestReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RemoteRequestMessage&& request) final;

  /*!
   * \brief Realization to forward a fire & forget method to the method managers.
   *
   * \param[in, out] request  The request, which is going to be dispatched to a method manager for deserialization
   *                          and processing.
   *
   * \return The forward status as an extensible struct.
   * \pre         -
   * \context Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnRequestNoReturnReceived(::amsr::ipc_binding_core::internal::ipc_protocol::RequestNoReturnMessage&& request) final;

  /*!
   * \brief Realization to forward a subscribe request from the client and forward it to the designated event / field notification manager.
   *
   * \param[in] subscribe_request The subscription message header from the client.
   *
   * \return The forward status as an extensible structure.
   * \pre     -
   * \context Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardSubscribeEventOutput OnSubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::SubscribeEventMessageHeader const& subscribe_request) final;

  /*!
   * \brief Realization to forward an unsubscribe request from the client and forward it to the designated event / field notification manager.
   *
   * \param[in] unsubscribe_request The unsubscription message header from the client.
   *
   * \return The forward status as an extensible structure.
   * \pre     -
   * \context Reactor
   */
  ::amsr::ipc_binding_core::internal::ForwardOutput OnUnsubscribeEventReceived(::amsr::ipc_binding_core::internal::ipc_protocol::UnsubscribeEventMessageHeader const& unsubscribe_request) final;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FLCam_Bus_VisnObj'.
   *
   * \details Event sample type: ::VisObjs::VisObjs.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_VisnObj* GetEventManagerFLCam_Bus_VisnObj() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FRCam_Bus_VisnObj'.
   *
   * \details Event sample type: ::VisObjs::VisObjs.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_VisnObj* GetEventManagerFRCam_Bus_VisnObj() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'RLCam_Bus_VisnObj'.
   *
   * \details Event sample type: ::VisObjs::VisObjs.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_VisnObj* GetEventManagerRLCam_Bus_VisnObj() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'RRCam_Bus_VisnObj'.
   *
   * \details Event sample type: ::VisObjs::VisObjs.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_VisnObj* GetEventManagerRRCam_Bus_VisnObj() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FLCam_Bus_CamSts'.
   *
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_CamSts* GetEventManagerFLCam_Bus_CamSts() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FRCam_Bus_CamSts'.
   *
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_CamSts* GetEventManagerFRCam_Bus_CamSts() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'RLCam_Bus_CamSts'.
   *
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_CamSts* GetEventManagerRLCam_Bus_CamSts() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'RRCam_Bus_CamSts'.
   *
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_CamSts* GetEventManagerRRCam_Bus_CamSts() noexcept final;
  // ---- Events --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields --------------------------------------------------------------------------------------------------

 private:
  // ---- MethodManagers -------------------------------------------------------------------------------------------
  // ---- MethodManagers ------------------------------------------------------------------------------------------

  // ---- EventManagers --------------------------------------------------------------------------------------------
  /*!
   * \brief Event manager for skeleton event 'FLCam_Bus_VisnObj'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_VisnObj event_FLCam_Bus_VisnObj_;

  /*!
   * \brief Event manager for skeleton event 'FRCam_Bus_VisnObj'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_VisnObj event_FRCam_Bus_VisnObj_;

  /*!
   * \brief Event manager for skeleton event 'RLCam_Bus_VisnObj'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_VisnObj event_RLCam_Bus_VisnObj_;

  /*!
   * \brief Event manager for skeleton event 'RRCam_Bus_VisnObj'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_VisnObj event_RRCam_Bus_VisnObj_;

  /*!
   * \brief Event manager for skeleton event 'FLCam_Bus_CamSts'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFLCam_Bus_CamSts event_FLCam_Bus_CamSts_;

  /*!
   * \brief Event manager for skeleton event 'FRCam_Bus_CamSts'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerFRCam_Bus_CamSts event_FRCam_Bus_CamSts_;

  /*!
   * \brief Event manager for skeleton event 'RLCam_Bus_CamSts'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRLCam_Bus_CamSts event_RLCam_Bus_CamSts_;

  /*!
   * \brief Event manager for skeleton event 'RRCam_Bus_CamSts'
   */
  PerceptionSideSI_OutSkeletonIpcEventManagerRRCam_Bus_CamSts event_RRCam_Bus_CamSts_;

  // ---- EventManagers -------------------------------------------------------------------------------------------

  // ---- FieldManagers --------------------------------------------------------------------------------------------
  // ---- FieldManagers -------------------------------------------------------------------------------------------
};

}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IPC_BINDING_H_

