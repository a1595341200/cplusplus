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
/**        \file  PerceptionExe/include/amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_binding.h
 *        \brief  IPC binding of service skeleton for service 'PerceptionSI_LaneOut'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IPC_BINDING_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_method_manager.h"
#include "ipc_binding_core/internal/ipc_protocol/message.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/ipc_binding_deployment.h"
#include "ipc_binding_transformation_layer/internal/provided_ipc_service_instance.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_impl_interface.h"
#include "perceptionsi_laneout/perceptionsi_laneout_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace perceptionsi_laneout {

/*!
 * \brief Parameterization of the IPC deployment information for service interface 'PerceptionSI_LaneOutSkeleton'.
 */
using PerceptionSI_LaneOutProvidedIpcDeployment =
    ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceDeploymentElement<// Abstract service interface reference
                                         ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton,
                                         ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId(98U),
                                         ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceVersionTemplate<1U, 0U>>;

/*!
 * \brief Type alias for the server manager.
 */
using ServerManager = ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration::ServerManagerType;

/*!
 * \brief Provided service interface deployment of service interface 'PerceptionSI_LaneOut'.
 */
class PerceptionSI_LaneOutProvidedIpcServiceInstance final
    : public ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<PerceptionSI_LaneOutProvidedIpcDeployment, ServerManager>,
      public ::perceptionsi_laneout::internal::PerceptionSI_LaneOutSkeletonImplInterface {
 public:
  /*!
   * \brief Type-alias for the Base class.
   */
  using Base = ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<PerceptionSI_LaneOutProvidedIpcDeployment, ServerManager>;

  /*!
   * \brief         Constructor of ProvidedIpcServiceInstance for service 'PerceptionSI_LaneOut'.
   * \param[in,out] skeleton                Reference to the skeleton.
   * \param[in,out] server_binding_manager  Server binding manager.
   * \param[in]     instance_id             The service instance ID.
   * \param[in]     method_id               Method deployment ID.

   * \context       App
   * \synchronous   TRUE
   */
  PerceptionSI_LaneOutProvidedIpcServiceInstance(ServiceInterfaceRef& skeleton,
                                   ServerManager& server_binding_manager,
                                   ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const instance_id)
      : Base{skeleton, server_binding_manager, instance_id},
        event_FusedCam_Bus_LaneMkrLe_{*this},
        event_FusedCam_Bus_LaneMkrRi_{*this},
        event_FrntCam_Bus_RoadEdgeLe_{*this},
        event_FrntCam_Bus_RoadEdgeRi_{*this},
        event_Cam_Bus_LaneEvent_{*this},
        event_Cam_Bus_LaneEventGroup_{*this},
        event_Cam_Bus_LaneMkrTemp_{*this},
        event_FusedCam_Bus_LaneMkrSecClsLe_{*this},
        event_FusedCam_Bus_LaneMkrSecClsRi_{*this} {}

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
   * \brief   Get the event manager object for the IPC binding service event 'FusedCam_Bus_LaneMkrLe'.
   *
   * \details Event sample type: ::LaneMkrCam1Le::LaneMkrCam1Le.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrLe* GetEventManagerFusedCam_Bus_LaneMkrLe() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FusedCam_Bus_LaneMkrRi'.
   *
   * \details Event sample type: ::LaneMkrCam1Ri::LaneMkrCam1Ri.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrRi* GetEventManagerFusedCam_Bus_LaneMkrRi() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_RoadEdgeLe'.
   *
   * \details Event sample type: ::RoadEdge1VccLe::RoadEdge1VccLe.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeLe* GetEventManagerFrntCam_Bus_RoadEdgeLe() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FrntCam_Bus_RoadEdgeRi'.
   *
   * \details Event sample type: ::RoadEdge1VccRi::RoadEdge1VccRi.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeRi* GetEventManagerFrntCam_Bus_RoadEdgeRi() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'Cam_Bus_LaneEvent'.
   *
   * \details Event sample type: ::LaneEvent::LaneEvent.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEvent* GetEventManagerCam_Bus_LaneEvent() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'Cam_Bus_LaneEventGroup'.
   *
   * \details Event sample type: ::LaneEventGroups::LaneEventGroups.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEventGroup* GetEventManagerCam_Bus_LaneEventGroup() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'Cam_Bus_LaneMkrTemp'.
   *
   * \details Event sample type: ::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneMkrTemp* GetEventManagerCam_Bus_LaneMkrTemp() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FusedCam_Bus_LaneMkrSecClsLe'.
   *
   * \details Event sample type: ::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsLe* GetEventManagerFusedCam_Bus_LaneMkrSecClsLe() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FusedCam_Bus_LaneMkrSecClsRi'.
   *
   * \details Event sample type: ::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsRi* GetEventManagerFusedCam_Bus_LaneMkrSecClsRi() noexcept final;
  // ---- Events --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields --------------------------------------------------------------------------------------------------

 private:
  // ---- MethodManagers -------------------------------------------------------------------------------------------
  // ---- MethodManagers ------------------------------------------------------------------------------------------

  // ---- EventManagers --------------------------------------------------------------------------------------------
  /*!
   * \brief Event manager for skeleton event 'FusedCam_Bus_LaneMkrLe'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrLe event_FusedCam_Bus_LaneMkrLe_;

  /*!
   * \brief Event manager for skeleton event 'FusedCam_Bus_LaneMkrRi'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrRi event_FusedCam_Bus_LaneMkrRi_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_RoadEdgeLe'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeLe event_FrntCam_Bus_RoadEdgeLe_;

  /*!
   * \brief Event manager for skeleton event 'FrntCam_Bus_RoadEdgeRi'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFrntCam_Bus_RoadEdgeRi event_FrntCam_Bus_RoadEdgeRi_;

  /*!
   * \brief Event manager for skeleton event 'Cam_Bus_LaneEvent'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEvent event_Cam_Bus_LaneEvent_;

  /*!
   * \brief Event manager for skeleton event 'Cam_Bus_LaneEventGroup'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneEventGroup event_Cam_Bus_LaneEventGroup_;

  /*!
   * \brief Event manager for skeleton event 'Cam_Bus_LaneMkrTemp'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerCam_Bus_LaneMkrTemp event_Cam_Bus_LaneMkrTemp_;

  /*!
   * \brief Event manager for skeleton event 'FusedCam_Bus_LaneMkrSecClsLe'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsLe event_FusedCam_Bus_LaneMkrSecClsLe_;

  /*!
   * \brief Event manager for skeleton event 'FusedCam_Bus_LaneMkrSecClsRi'
   */
  PerceptionSI_LaneOutSkeletonIpcEventManagerFusedCam_Bus_LaneMkrSecClsRi event_FusedCam_Bus_LaneMkrSecClsRi_;

  // ---- EventManagers -------------------------------------------------------------------------------------------

  // ---- FieldManagers --------------------------------------------------------------------------------------------
  // ---- FieldManagers -------------------------------------------------------------------------------------------
};

}  // namespace perceptionsi_laneout

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IPC_BINDING_H_

