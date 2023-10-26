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
/**        \file  RVDCExe/include/rtk_r/rtk_receive_proxy.h
 *        \brief  Proxy for service 'Rtk_Receive'.
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

#ifndef RVDCEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_H_
#define RVDCEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_H_

/*!
 * \trace SPEC-4980240
 */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/definitions.h"
#include "amsr/socal/events/proxy_event.h"
#include "amsr/socal/fields/proxy_field.h"
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/logging/ara_com_logger.h"
#include "amsr/socal/internal/specialization_types_thread_driven.h"
#include "amsr/socal/methods/proxy_method.h"
#include "amsr/socal/thread_driven_proxy.h"
#include "rtk_r/Rtk_Receive_proxy_backend_interface.h"
#include "rtk_r/Rtk_Receive_types.h"
#include "rtk_r/rtk_receive_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace rtk_r {

/*!
 * \trace SPEC-4980242
 */
namespace proxy {

/*!
 * \trace SPEC-4980244
 */
namespace methods {

}  // namespace methods

/*!
 * \trace SPEC-4980243
 */
namespace events {

/*!
 * \brief Type alias for service event 'GgaData_receive', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using GgaData_receive =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::GgaData, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'VIN', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using VIN =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::RtkVIN, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'AgnssData_receive', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using AgnssData_receive =
    ::amsr::socal::events::ProxyEvent<::SOMEIP::ValidationKey::RtkVIN, ::amsr::socal::kRuntimeProcessingMode>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'Rtk_Receive'.
 * \vpublic
 *
 * \trace SPEC-4980344
 * \unit Socal::Proxy::Proxy
 */
class Rtk_ReceiveProxy : public ::amsr::socal::ThreadDrivenProxy<rtk_r::Rtk_Receive, rtk_r::internal::Rtk_ReceiveProxyBackendInterface, rtk_r::internal::Rtk_ReceiveHandleType>{
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = rtk_r::internal::Rtk_ReceiveProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of Rtk_ReceiveProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * Rtk_ReceiveProxy::FindService or asynchronous Rtk_ReceiveProxy::StartFindService.
  * The handle object passed as a parameter shall be a handle returned by a FindService call for this specific service.
  * Passing handles from different services is currently possible, but is detected. An exception is raised as documented below.
  *
  * \return Result<ConstructionToken> Result containing construction token from which a proxy object can be
  *                                   constructed.
  * \pre "Runtime" must be initialized.
  * \pre The instance identifier of the \p handle must be known.
  * \pre The proxy backend must be spawned.
  * \pre The provided \p handle must match the handle of the service.
  *
  * \context App
  * \threadsafe FALSE
  * \reentrant FALSE
  * \vpublic
  * \synchronous TRUE
  * \trace SPEC-8053550
  * \trace SPEC-8053560
  */
  static ConstructionResult Preconstruct(HandleType const& handle) noexcept;

  /*!
  * \brief Exception-less constructor of Rtk_ReceiveProxy.
  * \details Handles exception-less construction of a proxy based on the availability of
  *          a valid token.
  *
  * \param[in] token ConstructionToken created with "Preconstruct()" API.
  *
  * \pre No other service proxy for the same instance identifier must exist concurrently. After destruction of an
  *      already created proxy object, the instantation for the same service instance will be possible.
  * \pre IAM access must be granted.
  * \context App
  * \threadsafe FALSE
  * \reentrant FALSE
  * \vpublic
  * \synchronous TRUE
  * \trace SPEC-8053550
  */
  explicit Rtk_ReceiveProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of Rtk_ReceiveProxy. Constructor takes a handle returned by
  * Rtk_ReceiveProxy::FindService() method or provided as parameter to the callback handler of
  * Rtk_ReceiveProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * Rtk_ReceiveProxy::FindService or asynchronous Rtk_ReceiveProxy::StartFindService.
  * The handle object passed as a parameter shall be a handle returned by a FindService call for this specific service.
  * Passing handles from different services is currently possible, but is detected. An exception is raised as documented below.
  *
  * \pre "Runtime" must be initialized.
  * \pre The instance identifier of the \p handle must be known.
  * \pre The proxy backend must be spawned.
  * \pre The provided \p handle must match the handle of the service.
  * \pre No other service proxy for the same instance identifier must exist concurrently. After destruction of an
  *      already created proxy object, the instantation for the same service instance will be possible.
  *
  * \pre IAM access must be granted.
  * \context App
  * \threadsafe FALSE
  * \reentrant FALSE
  * \vprivate Vector component internal API.
  * \synchronous TRUE
  * \trace SPEC-4980371
  */
  explicit Rtk_ReceiveProxy(HandleType const& handle) noexcept;

  /*!
   * \brief Use default copy constructor.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  Rtk_ReceiveProxy(Rtk_ReceiveProxy const&) noexcept = default;

  /*!
   * \brief Use default move constructor.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  Rtk_ReceiveProxy(Rtk_ReceiveProxy&&) noexcept = default;

  /*!
   * \brief Use default copy assignment.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE for same class instance, TRUE for different instances.
   * \reentrant   FALSE for same class instance, TRUE for different instances.
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  Rtk_ReceiveProxy& operator=(Rtk_ReceiveProxy const&) & noexcept = default;

  /*!
   * \brief Use default move assignment.
   * \vpublic
   * \pre     -
   * \context App
   * \threadsafe  FALSE for same class instance, TRUE for different instances.
   * \reentrant   FALSE for same class instance, TRUE for different instances.
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  Rtk_ReceiveProxy& operator=(Rtk_ReceiveProxy&&) & noexcept = default;

  /*!
   * \brief Perform cleanup of proxy instance.
   *
   * \details Unsubscribes all event and field notifications and unsets event receive and subscription state change
   * handlers. Finally, unregisters the proxy from the communication middleware.
   * This call will be blocked until all current events/methods' callbacks are finished/canceled.
   *
   * \pre -
   * \context     App
   * \threadsafe  FALSE for same class instance, TRUE for different instances.
   * \reentrant   FALSE for same class instance, TRUE for different instances.
   * \vpublic
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  ~Rtk_ReceiveProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::ThreadDrivenProxy<rtk_r::Rtk_Receive, ProxyBackendInterface, rtk_r::internal::Rtk_ReceiveHandleType>;

 public:



  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'GgaData_receive' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::GgaData 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::GgaData_receive GgaData_receive;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'VIN' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::RtkVIN 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::VIN VIN;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'AgnssData_receive' which can be used by application developer.
   * \details
   * Data of type ::SOMEIP::ValidationKey::RtkVIN 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::AgnssData_receive AgnssData_receive;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace rtk_r

#endif  // RVDCEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_H_

