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
/**        \file  LocalizationFusionExe/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'ToSOCA_LocSensorInfoSI'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_BACKEND_INTERFACE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_types.h"

namespace tosoca_locsensorinfosi {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'ToSOCA_LocSensorInfoSI'
 * \remark generated
 */
class ToSOCA_LocSensorInfoSIProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  ToSOCA_LocSensorInfoSIProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~ToSOCA_LocSensorInfoSIProxyBackendInterface() noexcept = default;

  ToSOCA_LocSensorInfoSIProxyBackendInterface(ToSOCA_LocSensorInfoSIProxyBackendInterface const &) = delete;

  ToSOCA_LocSensorInfoSIProxyBackendInterface(ToSOCA_LocSensorInfoSIProxyBackendInterface &&) = delete;

  ToSOCA_LocSensorInfoSIProxyBackendInterface &operator=(ToSOCA_LocSensorInfoSIProxyBackendInterface const &) & = delete;

  ToSOCA_LocSensorInfoSIProxyBackendInterface &operator=(ToSOCA_LocSensorInfoSIProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'OSM2_Bus_LocSensorInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LocSensorInfo1VCC::LocSensorInfo1VCC>& GetEventBackendOSM2_Bus_LocSensorInfo() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace tosoca_locsensorinfosi

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_BACKEND_INTERFACE_H_

