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
/**        \file  LocalizationFusionExe/include/perceptionsidesi_out/PerceptionSideSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'PerceptionSideSI_Out'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PROXY_BACKEND_INTERFACE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "perceptionsidesi_out/PerceptionSideSI_Out_types.h"

namespace perceptionsidesi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'PerceptionSideSI_Out'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class PerceptionSideSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  PerceptionSideSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~PerceptionSideSI_OutProxyBackendInterface() noexcept = default;

  PerceptionSideSI_OutProxyBackendInterface(PerceptionSideSI_OutProxyBackendInterface const &) = delete;

  PerceptionSideSI_OutProxyBackendInterface(PerceptionSideSI_OutProxyBackendInterface &&) = delete;

  PerceptionSideSI_OutProxyBackendInterface &operator=(PerceptionSideSI_OutProxyBackendInterface const &) & = delete;

  PerceptionSideSI_OutProxyBackendInterface &operator=(PerceptionSideSI_OutProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FRCam_Bus_VisnObj'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>& GetEventBackendFRCam_Bus_VisnObj() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FLCam_Bus_VisnObj'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>& GetEventBackendFLCam_Bus_VisnObj() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'RLCam_Bus_VisnObj'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>& GetEventBackendRLCam_Bus_VisnObj() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'RRCam_Bus_VisnObj'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>& GetEventBackendRRCam_Bus_VisnObj() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'PerceptionSide_Bus_CameraStatus'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::CameraStatusIDT::CameraStatusIDT>& GetEventBackendPerceptionSide_Bus_CameraStatus() noexcept = 0;

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
}  // namespace perceptionsidesi_out

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PROXY_BACKEND_INTERFACE_H_

