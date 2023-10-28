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
/**        \file  ObjectFusionModelExe/include/amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_binding.h
 *        \brief  IPC binding of service skeleton for service 'ObjectFusionModelSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_BINDING_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_method_manager.h"
#include "ipc_binding_core/internal/ipc_protocol/message.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/ipc_binding_deployment.h"
#include "ipc_binding_transformation_layer/internal/provided_ipc_service_instance.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_impl_interface.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

/*!
 * \brief Parameterization of the IPC deployment information for service interface 'ObjectFusionModelSI_OutSkeleton'.
 */
using ObjectFusionModelSI_OutProvidedIpcDeployment =
    ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceDeploymentElement<// Abstract service interface reference
                                         ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton,
                                         ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId(33U),
                                         ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceVersionTemplate<1U, 0U>>;

/*!
 * \brief Type alias for the server manager.
 */
using ServerManager = ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration::ServerManagerType;

/*!
 * \brief Provided service interface deployment of service interface 'ObjectFusionModelSI_Out'.
 */
class ObjectFusionModelSI_OutProvidedIpcServiceInstance final
    : public ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<ObjectFusionModelSI_OutProvidedIpcDeployment, ServerManager>,
      public ::objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Type-alias for the Base class.
   */
  using Base = ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<ObjectFusionModelSI_OutProvidedIpcDeployment, ServerManager>;

  /*!
   * \brief         Constructor of ProvidedIpcServiceInstance for service 'ObjectFusionModelSI_Out'.
   * \param[in,out] skeleton                Reference to the skeleton.
   * \param[in,out] server_binding_manager  Server binding manager.
   * \param[in]     instance_id             The service instance ID.
   * \param[in]     method_id               Method deployment ID.

   * \context       App
   * \synchronous   TRUE
   */
  ObjectFusionModelSI_OutProvidedIpcServiceInstance(ServiceInterfaceRef& skeleton,
                                   ServerManager& server_binding_manager,
                                   ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const instance_id)
      : Base{skeleton, server_binding_manager, instance_id},
        event_OFM_Bus_FusedTargets_11_{*this},
        event_OFM_St_SOCFusedSts_{*this},
        event_OFM_Bus_FourDRadarECUSts_{*this},
        event_OFM_Bus_FrontFourDRadarSts_{*this},
        event_OFM_Bus_FusedTargets_22_{*this},
        event_OFM_Bus_FusedTargets_32_{*this},
        event_OFM_St_FrntRdrObjE2Efail_{*this},
        event_OFM_St_FrntRdrObjTO_{*this} {}

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
   * \brief   Get the event manager object for the IPC binding service event 'OFM_Bus_FusedTargets_11'.
   *
   * \details Event sample type: ::ObjGroup2Vccs_11::ObjGroup2Vccs_11.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_11* GetEventManagerOFM_Bus_FusedTargets_11() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'OFM_St_SOCFusedSts'.
   *
   * \details Event sample type: ::SOCFusedSts::SOCFusedSts.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_SOCFusedSts* GetEventManagerOFM_St_SOCFusedSts() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'OFM_Bus_FourDRadarECUSts'.
   *
   * \details Event sample type: ::FourDRadarECUSts::FourDRadarECUSts.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FourDRadarECUSts* GetEventManagerOFM_Bus_FourDRadarECUSts() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'OFM_Bus_FrontFourDRadarSts'.
   *
   * \details Event sample type: ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FrontFourDRadarSts* GetEventManagerOFM_Bus_FrontFourDRadarSts() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'OFM_Bus_FusedTargets_22'.
   *
   * \details Event sample type: ::ObjGroup2Vccs_11::ObjGroup2Vccs_11.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_22* GetEventManagerOFM_Bus_FusedTargets_22() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'OFM_Bus_FusedTargets_32'.
   *
   * \details Event sample type: ::ObjGroup2Vccs_10::ObjGroup2Vccs_10.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_32* GetEventManagerOFM_Bus_FusedTargets_32() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'OFM_St_FrntRdrObjE2Efail'.
   *
   * \details Event sample type: ::FrntRdrObjE2Efail::FrntRdrObjE2Efail.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjE2Efail* GetEventManagerOFM_St_FrntRdrObjE2Efail() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'OFM_St_FrntRdrObjTO'.
   *
   * \details Event sample type: ::FrntRdrObjTO::FrntRdrObjTO.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjTO* GetEventManagerOFM_St_FrntRdrObjTO() noexcept final;
  // ---- Events --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields --------------------------------------------------------------------------------------------------

 private:
  // ---- MethodManagers -------------------------------------------------------------------------------------------
  // ---- MethodManagers ------------------------------------------------------------------------------------------

  // ---- EventManagers --------------------------------------------------------------------------------------------
  /*!
   * \brief Event manager for skeleton event 'OFM_Bus_FusedTargets_11'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_11 event_OFM_Bus_FusedTargets_11_;

  /*!
   * \brief Event manager for skeleton event 'OFM_St_SOCFusedSts'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_SOCFusedSts event_OFM_St_SOCFusedSts_;

  /*!
   * \brief Event manager for skeleton event 'OFM_Bus_FourDRadarECUSts'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FourDRadarECUSts event_OFM_Bus_FourDRadarECUSts_;

  /*!
   * \brief Event manager for skeleton event 'OFM_Bus_FrontFourDRadarSts'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FrontFourDRadarSts event_OFM_Bus_FrontFourDRadarSts_;

  /*!
   * \brief Event manager for skeleton event 'OFM_Bus_FusedTargets_22'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_22 event_OFM_Bus_FusedTargets_22_;

  /*!
   * \brief Event manager for skeleton event 'OFM_Bus_FusedTargets_32'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_Bus_FusedTargets_32 event_OFM_Bus_FusedTargets_32_;

  /*!
   * \brief Event manager for skeleton event 'OFM_St_FrntRdrObjE2Efail'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjE2Efail event_OFM_St_FrntRdrObjE2Efail_;

  /*!
   * \brief Event manager for skeleton event 'OFM_St_FrntRdrObjTO'
   */
  ObjectFusionModelSI_OutSkeletonIpcEventManagerOFM_St_FrntRdrObjTO event_OFM_St_FrntRdrObjTO_;

  // ---- EventManagers -------------------------------------------------------------------------------------------

  // ---- FieldManagers --------------------------------------------------------------------------------------------
  // ---- FieldManagers -------------------------------------------------------------------------------------------
};

}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IPC_BINDING_H_

