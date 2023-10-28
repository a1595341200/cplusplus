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
/**        \file  ObjectFusionModelExe/include/tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'TOSOCA_SideRdrFusedTargetsSI'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_types.h"

namespace tosoca_siderdrfusedtargetssi {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'TOSOCA_SideRdrFusedTargetsSI'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface() noexcept = default;

  TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface(TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface const &) = delete;

  TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface(TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface &&) = delete;

  TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface &operator=(TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface const &) & = delete;

  TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface &operator=(TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_TOSOCA_SideRdrFusedTargets1'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8>& GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets1() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_TOSOCA_SideRdrFusedTargets2'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8>& GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets2() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_TOSOCA_SideRdrFusedTargets3'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8>& GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets3() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_TOSOCA_SideRdrFusedTargets4'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8>& GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets4() noexcept = 0;

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
}  // namespace tosoca_siderdrfusedtargetssi

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_BACKEND_INTERFACE_H_

