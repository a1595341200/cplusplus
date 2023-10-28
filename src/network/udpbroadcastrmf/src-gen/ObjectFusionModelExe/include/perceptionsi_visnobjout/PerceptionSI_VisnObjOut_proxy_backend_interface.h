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
/**        \file  ObjectFusionModelExe/include/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'PerceptionSI_VisnObjOut'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut_types.h"

namespace perceptionsi_visnobjout {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'PerceptionSI_VisnObjOut'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class PerceptionSI_VisnObjOutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  PerceptionSI_VisnObjOutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~PerceptionSI_VisnObjOutProxyBackendInterface() noexcept = default;

  PerceptionSI_VisnObjOutProxyBackendInterface(PerceptionSI_VisnObjOutProxyBackendInterface const &) = delete;

  PerceptionSI_VisnObjOutProxyBackendInterface(PerceptionSI_VisnObjOutProxyBackendInterface &&) = delete;

  PerceptionSI_VisnObjOutProxyBackendInterface &operator=(PerceptionSI_VisnObjOutProxyBackendInterface const &) & = delete;

  PerceptionSI_VisnObjOutProxyBackendInterface &operator=(PerceptionSI_VisnObjOutProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_VisnObj'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_FrntCamVisObjIDT_25::Array_FrntCamVisObjIDT_25>& GetEventBackendFrntCam_Bus_VisnObj() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_UnfilteredObj'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_UnfilteredObjIDT_30::Array_UnfilteredObjIDT_30>& GetEventBackendFrntCam_Bus_UnfilteredObj() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------

    /*!
   * \brief Get the connection state between proxy and skeleton.
   * \return amsr::socal::SkeletonConnectionState.
   * \pre -
   * \context    App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::SkeletonConnectionState ReadSkeletonConnectionState() noexcept = 0;
};

} //namespace internal
}  // namespace perceptionsi_visnobjout

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_BACKEND_INTERFACE_H_

