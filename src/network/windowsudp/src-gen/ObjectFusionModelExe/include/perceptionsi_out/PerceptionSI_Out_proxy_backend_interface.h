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
/**        \file  ObjectFusionModelExe/include/perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'PerceptionSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/types.h"
#include "amsr/socal/skeleton_connection_state.h"
#include "ara/core/future.h"
#include "perceptionsi_out/PerceptionSI_Out_types.h"

namespace perceptionsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'PerceptionSI_Out'
 * \remark generated
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class PerceptionSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  PerceptionSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronous TRUE
   */
  virtual ~PerceptionSI_OutProxyBackendInterface() noexcept = default;

  PerceptionSI_OutProxyBackendInterface(PerceptionSI_OutProxyBackendInterface const &) = delete;

  PerceptionSI_OutProxyBackendInterface(PerceptionSI_OutProxyBackendInterface &&) = delete;

  PerceptionSI_OutProxyBackendInterface &operator=(PerceptionSI_OutProxyBackendInterface const &) & = delete;

  PerceptionSI_OutProxyBackendInterface &operator=(PerceptionSI_OutProxyBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'Perception_Bus_LaneInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>& GetEventBackendPerception_Bus_LaneInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'Perception_Bus_FrntCamInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FrntCamInfoIDT::FrntCamInfoIDT>& GetEventBackendPerception_Bus_FrntCamInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrafficInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrafficInfoIDT::TrafficInfoIDT>& GetEventBackendFrntCam_Bus_TrafficInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcLi'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8>& GetEventBackendFrntCam_Bus_TrfcLi() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_LineSignGroup'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LineSignGroupIDT::LineSignGroupIDT>& GetEventBackendFrntCam_Bus_LineSignGroup() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_ExtInfo'
   * \details To ensure thread-safety, for each event instance a distinct proxy event backend instance shall be returned.
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App
   * \threadsafe TRUE for different backend instances, FALSE otherwise.
   * \reentrant  TRUE for different backend instances, FALSE otherwise.
   * \synchronous TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ExtInfoIDT::ExtInfoIDT>& GetEventBackendFrntCam_Bus_ExtInfo() noexcept = 0;

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
}  // namespace perceptionsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_BACKEND_INTERFACE_H_

