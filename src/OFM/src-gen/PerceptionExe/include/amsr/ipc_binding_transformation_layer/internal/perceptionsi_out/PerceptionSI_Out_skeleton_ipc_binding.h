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
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_BINDING_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_method_manager.h"
#include "ipc_binding_core/internal/ipc_protocol/message.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/ipc_binding_deployment.h"
#include "ipc_binding_transformation_layer/internal/provided_ipc_service_instance.h"
#include "perceptionsi_out/PerceptionSI_Out_skeleton_impl_interface.h"
#include "perceptionsi_out/perceptionsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

/*!
 * \brief Parameterization of the IPC deployment information for service interface 'PerceptionSI_OutSkeleton'.
 */
using PerceptionSI_OutProvidedIpcDeployment =
    ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceDeploymentElement<// Abstract service interface reference
                                         ::perceptionsi_out::skeleton::PerceptionSI_OutSkeleton,
                                         ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId(37U),
                                         ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceVersionTemplate<1U, 0U>>;

/*!
 * \brief Type alias for the server manager.
 */
using ServerManager = ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration::ServerManagerType;

/*!
 * \brief Provided service interface deployment of service interface 'PerceptionSI_Out'.
 */
class PerceptionSI_OutProvidedIpcServiceInstance final
    : public ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<PerceptionSI_OutProvidedIpcDeployment, ServerManager>,
      public ::perceptionsi_out::internal::PerceptionSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Type-alias for the Base class.
   */
  using Base = ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<PerceptionSI_OutProvidedIpcDeployment, ServerManager>;

  /*!
   * \brief         Constructor of ProvidedIpcServiceInstance for service 'PerceptionSI_Out'.
   * \param[in,out] skeleton                Reference to the skeleton.
   * \param[in,out] server_binding_manager  Server binding manager.
   * \param[in]     instance_id             The service instance ID.
   * \param[in]     method_id               Method deployment ID.

   * \context       App
   * \synchronous   TRUE
   */
  PerceptionSI_OutProvidedIpcServiceInstance(ServiceInterfaceRef& skeleton,
                                   ServerManager& server_binding_manager,
                                   ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const instance_id)
      : Base{skeleton, server_binding_manager, instance_id},
        event_FrntCam_Bus_RoadSign_{*this},
        event_FrntCam_Bus_TrfcSign_{*this},
        event_FrntCam_Bus_StopLine_{*this},
        event_FrntCam_Bus_Crosswalk_{*this},
        event_FrntCam_Bus_TrfcLi_{*this},
        event_FrntCam_Bus_ExtInfo_{*this},
        event_FrntCam_Bus_LsrObj_{*this} {}

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
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_RoadSign'.
   *
   * \details Event sample type: ::RoadSigns::RoadSigns.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_RoadSign* GetEventManagerFrntCam_Bus_RoadSign() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_TrfcSign'.
   *
   * \details Event sample type: ::TrfcSigns::TrfcSigns.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcSign* GetEventManagerFrntCam_Bus_TrfcSign() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_StopLine'.
   *
   * \details Event sample type: ::StopLine::StopLine.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_StopLine* GetEventManagerFrntCam_Bus_StopLine() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_Crosswalk'.
   *
   * \details Event sample type: ::Crosswalk::Crosswalk.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_Crosswalk* GetEventManagerFrntCam_Bus_Crosswalk() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_TrfcLi'.
   *
   * \details Event sample type: ::TrfcLi1Vccs::TrfcLi1Vccs.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi* GetEventManagerFrntCam_Bus_TrfcLi() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_ExtInfo'.
   *
   * \details Event sample type: ::ExtInfo::ExtInfo.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo* GetEventManagerFrntCam_Bus_ExtInfo() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_LsrObj'.
   *
   * \details Event sample type: ::LsrObj::LsrObj.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LsrObj* GetEventManagerFrntCam_Bus_LsrObj() noexcept final;
  // ---- Events --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields --------------------------------------------------------------------------------------------------

 private:
  // ---- MethodManagers -------------------------------------------------------------------------------------------
  // ---- MethodManagers ------------------------------------------------------------------------------------------

  // ---- EventManagers --------------------------------------------------------------------------------------------
  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_RoadSign'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_RoadSign event_FrntCam_Bus_RoadSign_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_TrfcSign'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcSign event_FrntCam_Bus_TrfcSign_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_StopLine'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_StopLine event_FrntCam_Bus_StopLine_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_Crosswalk'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_Crosswalk event_FrntCam_Bus_Crosswalk_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_TrfcLi'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_TrfcLi event_FrntCam_Bus_TrfcLi_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_ExtInfo'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_ExtInfo event_FrntCam_Bus_ExtInfo_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_LsrObj'
   */
  PerceptionSI_OutSkeletonIpcEventManagerFrntCam_Bus_LsrObj event_FrntCam_Bus_LsrObj_;

  // ---- EventManagers -------------------------------------------------------------------------------------------

  // ---- FieldManagers --------------------------------------------------------------------------------------------
  // ---- FieldManagers -------------------------------------------------------------------------------------------
};

}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IPC_BINDING_H_

