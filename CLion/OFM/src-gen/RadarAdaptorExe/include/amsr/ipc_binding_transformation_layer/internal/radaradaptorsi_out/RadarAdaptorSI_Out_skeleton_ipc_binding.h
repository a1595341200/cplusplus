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
/**        \file  RadarAdaptorExe/include/amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_binding.h
 *        \brief  IPC binding of service skeleton for service 'RadarAdaptorSI_Out'
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

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_BINDING_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_event_manager.h"
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_method_manager.h"
#include "ipc_binding_core/internal/ipc_protocol/message.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/ipc_binding_deployment.h"
#include "ipc_binding_transformation_layer/internal/provided_ipc_service_instance.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_impl_interface.h"
#include "radaradaptorsi_out/radaradaptorsi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

namespace radaradaptorsi_out {

/*!
 * \brief Parameterization of the IPC deployment information for service interface 'RadarAdaptorSI_OutSkeleton'.
 */
using RadarAdaptorSI_OutProvidedIpcDeployment =
    ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceDeploymentElement<// Abstract service interface reference
                                         ::radaradaptorsi_out::skeleton::RadarAdaptorSI_OutSkeleton,
                                         ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceId(61U),
                                         ::amsr::ipc_binding_transformation_layer::internal::IpcServiceInterfaceVersionTemplate<1U, 0U>>;

/*!
 * \brief Type alias for the server manager.
 */
using ServerManager = ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration::ServerManagerType;

/*!
 * \brief Provided service interface deployment of service interface 'RadarAdaptorSI_Out'.
 */
class RadarAdaptorSI_OutProvidedIpcServiceInstance final
    : public ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<RadarAdaptorSI_OutProvidedIpcDeployment, ServerManager>,
      public ::radaradaptorsi_out::internal::RadarAdaptorSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Type-alias for the Base class.
   */
  using Base = ::amsr::ipc_binding_transformation_layer::internal::ProvidedIpcServiceInstance<RadarAdaptorSI_OutProvidedIpcDeployment, ServerManager>;

  /*!
   * \brief         Constructor of ProvidedIpcServiceInstance for service 'RadarAdaptorSI_Out'.
   * \param[in,out] skeleton                Reference to the skeleton.
   * \param[in,out] server_binding_manager  Server binding manager.
   * \param[in]     instance_id             The service instance ID.
   * \param[in]     method_id               Method deployment ID.

   * \context       App
   * \synchronous   TRUE
   */
  RadarAdaptorSI_OutProvidedIpcServiceInstance(ServiceInterfaceRef& skeleton,
                                   ServerManager& server_binding_manager,
                                   ::amsr::ipc_binding_core::internal::ipc_protocol::InstanceId const instance_id)
      : Base{skeleton, server_binding_manager, instance_id},
        event_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts_{*this},
        event_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01_{*this},
        event_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02_{*this},
        event_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03_{*this},
        event_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04_{*this},
        event_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05_{*this} {}

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
   * \brief   Get the event manager object for the IPC binding service event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
   *
   * \details Event sample type: ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts* GetEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
   *
   * \details Event sample type: ::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01* GetEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
   *
   * \details Event sample type: ::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02* GetEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
   *
   * \details Event sample type: ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03* GetEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
   *
   * \details Event sample type: ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04* GetEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04() noexcept final;

  /*!
   * \brief   Get the event manager object for the IPC binding service event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
   *
   * \details Event sample type: ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42.
   *
   * \return  The IPC binding specific event management object/interface supporting event transmission.
   * \pre         -
   * \context App
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05* GetEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05() noexcept final;
  // ---- Events --------------------------------------------------------------------------------------------------

  // ---- Fields ---------------------------------------------------------------------------------------------------
  // ---- Fields --------------------------------------------------------------------------------------------------

 private:
  // ---- MethodManagers -------------------------------------------------------------------------------------------
  // ---- MethodManagers ------------------------------------------------------------------------------------------

  // ---- EventManagers --------------------------------------------------------------------------------------------
  /*!
   * \brief Event manager for skeleton event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts event_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts_;

  /*!
   * \brief Event manager for skeleton event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 event_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01_;

  /*!
   * \brief Event manager for skeleton event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 event_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02_;

  /*!
   * \brief Event manager for skeleton event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 event_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03_;

  /*!
   * \brief Event manager for skeleton event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 event_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04_;

  /*!
   * \brief Event manager for skeleton event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'
   */
  RadarAdaptorSI_OutSkeletonIpcEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 event_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05_;

  // ---- EventManagers -------------------------------------------------------------------------------------------

  // ---- FieldManagers --------------------------------------------------------------------------------------------
  // ---- FieldManagers -------------------------------------------------------------------------------------------
};

}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_IPC_BINDING_TRANSFORMATION_LAYER_INTERNAL_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_SKELETON_IPC_BINDING_H_

