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
/**        \file  TrafficLightAttentionExe/include/perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'PerceptionSI_Out'.
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "perceptionsi_out/PerceptionSI_Out_types.h"

namespace perceptionsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'PerceptionSI_Out'
 * \remark generated
 */
class PerceptionSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  PerceptionSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~PerceptionSI_OutProxyBackendInterface() noexcept = default;

  PerceptionSI_OutProxyBackendInterface(PerceptionSI_OutProxyBackendInterface const &) = delete;

  PerceptionSI_OutProxyBackendInterface(PerceptionSI_OutProxyBackendInterface &&) = delete;

  PerceptionSI_OutProxyBackendInterface &operator=(PerceptionSI_OutProxyBackendInterface const &) & = delete;

  PerceptionSI_OutProxyBackendInterface &operator=(PerceptionSI_OutProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadSign'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadSigns::RoadSigns>& GetEventBackendFrntCam_Bus_RoadSign() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcSign'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrfcSigns::TrfcSigns>& GetEventBackendFrntCam_Bus_TrfcSign() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_StopLine'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::StopLine::StopLine>& GetEventBackendFrntCam_Bus_StopLine() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_Crosswalk'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Crosswalk::Crosswalk>& GetEventBackendFrntCam_Bus_Crosswalk() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcLi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrfcLi1Vccs::TrfcLi1Vccs>& GetEventBackendFrntCam_Bus_TrfcLi() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_ExtInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ExtInfo::ExtInfo>& GetEventBackendFrntCam_Bus_ExtInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_LsrObj'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LsrObj::LsrObj>& GetEventBackendFrntCam_Bus_LsrObj() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace perceptionsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_BACKEND_INTERFACE_H_

