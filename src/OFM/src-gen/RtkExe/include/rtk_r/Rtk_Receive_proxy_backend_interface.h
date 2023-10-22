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
/**        \file  RtkExe/include/rtk_r/Rtk_Receive_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'Rtk_Receive'.
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

#ifndef RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_BACKEND_INTERFACE_H_
#define RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "rtk_r/Rtk_Receive_types.h"

namespace rtk_r {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'Rtk_Receive'
 * \remark generated
 */
class Rtk_ReceiveProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  Rtk_ReceiveProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~Rtk_ReceiveProxyBackendInterface() noexcept = default;

  Rtk_ReceiveProxyBackendInterface(Rtk_ReceiveProxyBackendInterface const &) = delete;

  Rtk_ReceiveProxyBackendInterface(Rtk_ReceiveProxyBackendInterface &&) = delete;

  Rtk_ReceiveProxyBackendInterface &operator=(Rtk_ReceiveProxyBackendInterface const &) & = delete;

  Rtk_ReceiveProxyBackendInterface &operator=(Rtk_ReceiveProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'GgaData_receive'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::GgaData>& GetEventBackendGgaData_receive() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace rtk_r

#endif  // RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_BACKEND_INTERFACE_H_

