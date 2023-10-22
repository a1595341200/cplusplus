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
/**        \file  UTC0Exe/include/utc0si_in/UTC0SI_In_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'UTC0SI_In'.
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

#ifndef UTC0EXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_BACKEND_INTERFACE_H_
#define UTC0EXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "utc0si_in/UTC0SI_In_types.h"

namespace utc0si_in {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'UTC0SI_In'
 * \remark generated
 */
class UTC0SI_InProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  UTC0SI_InProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~UTC0SI_InProxyBackendInterface() noexcept = default;

  UTC0SI_InProxyBackendInterface(UTC0SI_InProxyBackendInterface const &) = delete;

  UTC0SI_InProxyBackendInterface(UTC0SI_InProxyBackendInterface &&) = delete;

  UTC0SI_InProxyBackendInterface &operator=(UTC0SI_InProxyBackendInterface const &) & = delete;

  UTC0SI_InProxyBackendInterface &operator=(UTC0SI_InProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'OSM2_Bus_VehTiAndData'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DateTi30_2::DateTi30_2>& GetEventBackendOSM2_Bus_VehTiAndData() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace utc0si_in

#endif  // UTC0EXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_BACKEND_INTERFACE_H_
