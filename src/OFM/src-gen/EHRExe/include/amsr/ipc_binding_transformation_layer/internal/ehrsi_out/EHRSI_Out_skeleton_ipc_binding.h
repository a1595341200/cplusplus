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
/**        \file  EHRExe/include/amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_binding.h
 *        \brief  IPC binding of service skeleton for service 'EHRSI_Out'
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

#ifndef EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_BINDING_H_
#define EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_skeleton_ipc_method_manager.h"
#include "ehrsi_out/EHRSI_Out_skeleton_impl_interface.h"
#include "ehrsi_out/ehrsi_out_skeleton.h"
#include "ipc_binding_core/internal/ipc_protocol/message.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/ipc_binding_deployment.h"
#include "ipc_binding_transformation_layer/internal/provided_ipc_service_instance.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace ehrsi_out {

/*!
 * \brief Parameterization of the IPC deployment information for service interface 'EHRSI_OutSkeleton'.
 */
using EHRSI_OutProvidedIpcDeployment =
    ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceDeploymentElement<// Abstract service interface reference
                                         ::ehrsi_out::skeleton::EHRSI_OutSkeleton,
                                         ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId(57U),
                                         ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceVersionTemplate<1U, 0U>>;

/*!
 * \brief Type alias for the server manager.
 */
using ServerManager = ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration::ServerManagerType;

/*!
 * \brief Provided service interface deployment of service interface 'EHRSI_Out'.
 */
class EHRSI_OutProvidedIpcServiceInstance final
    : public ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<EHRSI_OutProvidedIpcDeployment, ServerManager>,
      public ::ehrsi_out::internal::EHRSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Type-alias for the Base class.
   */
  using Base = ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<EHRSI_OutProvidedIpcDeployment, ServerManager>;

  /*!
   * \brief         Constructor of ProvidedIpcServiceInstance for service 'EHRSI_Out'.
   * \param[in,out] skeleton                Reference to the skeleton.
   * \param[in,out] server_binding_manager  Server binding manager.
   * \param[in]     instance_id             The service instance ID.
   * \param[in]     method_id               Method deployment ID.

   * \context       App
   * \synchronous   TRUE
   */
  EHRSI_OutProvidedIpcServiceInstance(ServiceInterfaceRef& skeleton,
                                   ServerManager& server_binding_manager,
                                   ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const instance_id)
      : Base{skeleton, server_binding_manager, instance_id},
        event_EHR_Bus_NOAInfo_{*this},
        event_EHR_Bus_LaneConnectivitys_{*this},
        event_EHR_Bus_Nodes_{*this},
        event_EHR_Bus_TrafficSigns_{*this},
        event_EHR_Bus_GeoFences_{*this},
        event_EHR_Bus_LinkCurvatures_{*this},
        event_EHR_Bus_LinkSlopes_{*this},
        event_EHR_Bus_LaneSpeedLimits_{*this},
        event_EHR_Bus_LinkInfos_{*this},
        event_EHR_Bus_MergePoints_{*this},
        event_EHR_Bus_GeofennceJudge_{*this} {}

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
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_NOAInfo'.
   *
   * \details Event sample type: ::NOAInfo::NOAInfo.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_NOAInfo* GetEventManagerEHR_Bus_NOAInfo() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_LaneConnectivitys'.
   *
   * \details Event sample type: ::LaneConnectivitys::LaneConnectivitys.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneConnectivitys* GetEventManagerEHR_Bus_LaneConnectivitys() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_Nodes'.
   *
   * \details Event sample type: ::Nodes::Nodes.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_Nodes* GetEventManagerEHR_Bus_Nodes() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_TrafficSigns'.
   *
   * \details Event sample type: ::TrafficSigns::TrafficSigns.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_TrafficSigns* GetEventManagerEHR_Bus_TrafficSigns() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_GeoFences'.
   *
   * \details Event sample type: ::GeoFences::GeoFences.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeoFences* GetEventManagerEHR_Bus_GeoFences() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_LinkCurvatures'.
   *
   * \details Event sample type: ::LinkCurvatures::LinkCurvatures.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkCurvatures* GetEventManagerEHR_Bus_LinkCurvatures() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_LinkSlopes'.
   *
   * \details Event sample type: ::LinkSlopes::LinkSlopes.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkSlopes* GetEventManagerEHR_Bus_LinkSlopes() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_LaneSpeedLimits'.
   *
   * \details Event sample type: ::LaneSpeedLimits::LaneSpeedLimits.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneSpeedLimits* GetEventManagerEHR_Bus_LaneSpeedLimits() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_LinkInfos'.
   *
   * \details Event sample type: ::LinkInfos::LinkInfos.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkInfos* GetEventManagerEHR_Bus_LinkInfos() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_MergePoints'.
   *
   * \details Event sample type: ::AllMergePoints::AllMergePoints.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_MergePoints* GetEventManagerEHR_Bus_MergePoints() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'EHR_Bus_GeofennceJudge'.
   *
   * \details Event sample type: ::GeofennceJudge::GeofennceJudge.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeofennceJudge* GetEventManagerEHR_Bus_GeofennceJudge() noexcept final;
  // ---- Events --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields --------------------------------------------------------------------------------------------------

 private:
  // ---- MethodManagers -------------------------------------------------------------------------------------------
  // ---- MethodManagers ------------------------------------------------------------------------------------------

  // ---- EventManagers --------------------------------------------------------------------------------------------
  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_NOAInfo'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_NOAInfo event_EHR_Bus_NOAInfo_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_LaneConnectivitys'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneConnectivitys event_EHR_Bus_LaneConnectivitys_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_Nodes'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_Nodes event_EHR_Bus_Nodes_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_TrafficSigns'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_TrafficSigns event_EHR_Bus_TrafficSigns_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_GeoFences'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeoFences event_EHR_Bus_GeoFences_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_LinkCurvatures'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkCurvatures event_EHR_Bus_LinkCurvatures_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_LinkSlopes'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkSlopes event_EHR_Bus_LinkSlopes_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_LaneSpeedLimits'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LaneSpeedLimits event_EHR_Bus_LaneSpeedLimits_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_LinkInfos'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_LinkInfos event_EHR_Bus_LinkInfos_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_MergePoints'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_MergePoints event_EHR_Bus_MergePoints_;

  /*!
   * \brief Event manager for skeleton event 'EHR_Bus_GeofennceJudge'
   */
  EHRSI_OutSkeletonIpcEventManagerEHR_Bus_GeofennceJudge event_EHR_Bus_GeofennceJudge_;

  // ---- EventManagers -------------------------------------------------------------------------------------------

  // ---- FieldManagers --------------------------------------------------------------------------------------------
  // ---- FieldManagers -------------------------------------------------------------------------------------------
};

}  // namespace ehrsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // EHREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_EHRSI_OUT_EHRSI_OUT_SKELETON_IPC_BINDING_H_

