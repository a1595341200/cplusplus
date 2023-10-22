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
/**        \file  RoadModelFusionExe/include/ehrsi_out/EHRSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'EHRSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "ehrsi_out/EHRSI_Out_types.h"

namespace ehrsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'EHRSI_Out'
 * \remark generated
 */
class EHRSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  EHRSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~EHRSI_OutProxyBackendInterface() noexcept = default;

  EHRSI_OutProxyBackendInterface(EHRSI_OutProxyBackendInterface const &) = delete;

  EHRSI_OutProxyBackendInterface(EHRSI_OutProxyBackendInterface &&) = delete;

  EHRSI_OutProxyBackendInterface &operator=(EHRSI_OutProxyBackendInterface const &) & = delete;

  EHRSI_OutProxyBackendInterface &operator=(EHRSI_OutProxyBackendInterface &&) & = delete;

  /*!
   * \brief Notifies the server side that the service has been requested.
   * \return Result containing no value or an error.
   * \error ComErrc::kGrantEnforcementError If the request is refused by IAM.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  virtual ::ara::core::Result<void> RequestService() noexcept = 0;

  /*!
   * \brief Notifies the server side that the service has been released.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  virtual void ReleaseService() noexcept = 0;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_NOAInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::NOAInfo::NOAInfo>& GetEventBackendEHR_Bus_NOAInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneConnectivitys'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneConnectivitys::LaneConnectivitys>& GetEventBackendEHR_Bus_LaneConnectivitys() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_Nodes'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Nodes::Nodes>& GetEventBackendEHR_Bus_Nodes() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_TrafficSigns'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrafficSigns::TrafficSigns>& GetEventBackendEHR_Bus_TrafficSigns() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeoFences'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::GeoFences::GeoFences>& GetEventBackendEHR_Bus_GeoFences() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkCurvatures'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LinkCurvatures::LinkCurvatures>& GetEventBackendEHR_Bus_LinkCurvatures() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkSlopes'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LinkSlopes::LinkSlopes>& GetEventBackendEHR_Bus_LinkSlopes() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneSpeedLimits'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneSpeedLimits::LaneSpeedLimits>& GetEventBackendEHR_Bus_LaneSpeedLimits() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkInfos'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LinkInfos::LinkInfos>& GetEventBackendEHR_Bus_LinkInfos() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_MergePoints'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::AllMergePoints::AllMergePoints>& GetEventBackendEHR_Bus_MergePoints() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeofennceJudge'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::GeofennceJudge::GeofennceJudge>& GetEventBackendEHR_Bus_GeofennceJudge() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace ehrsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_BACKEND_INTERFACE_H_

