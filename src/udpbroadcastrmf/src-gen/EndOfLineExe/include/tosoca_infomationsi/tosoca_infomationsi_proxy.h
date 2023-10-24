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
/**        \file  EndOfLineExe/include/tosoca_infomationsi/tosoca_infomationsi_proxy.h
 *        \brief  Proxy for service 'ToSOCA_InfomationSI'.
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

#ifndef ENDOFLINEEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_H_
#define ENDOFLINEEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_H_

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
#include "tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h"
#include "tosoca_infomationsi/ToSOCA_InfomationSI_types.h"
#include "tosoca_infomationsi/tosoca_infomationsi_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace tosoca_infomationsi {

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
 * \brief Type alias for service event 'OSM2_Bus_ToSOCA_FunctionInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_ToSOCA_FunctionInfo =
    ::amsr::socal::events::ProxyEvent<::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_ToSOCA_COMInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_ToSOCA_COMInfo =
    ::amsr::socal::events::ProxyEvent<::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT, ::amsr::socal::kRuntimeProcessingMode>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'ToSOCA_InfomationSI'.
 * \vpublic
 *
 * \trace SPEC-4980344
 * \unit Socal::Proxy::Proxy
 */
class ToSOCA_InfomationSIProxy : public ::amsr::socal::ThreadDrivenProxy<tosoca_infomationsi::ToSOCA_InfomationSI, tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface, tosoca_infomationsi::internal::ToSOCA_InfomationSIHandleType>{
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of ToSOCA_InfomationSIProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * ToSOCA_InfomationSIProxy::FindService or asynchronous ToSOCA_InfomationSIProxy::StartFindService.
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
  * \brief Exception-less constructor of ToSOCA_InfomationSIProxy.
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
  explicit ToSOCA_InfomationSIProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of ToSOCA_InfomationSIProxy. Constructor takes a handle returned by
  * ToSOCA_InfomationSIProxy::FindService() method or provided as parameter to the callback handler of
  * ToSOCA_InfomationSIProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * ToSOCA_InfomationSIProxy::FindService or asynchronous ToSOCA_InfomationSIProxy::StartFindService.
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
  explicit ToSOCA_InfomationSIProxy(HandleType const& handle) noexcept;

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
  ToSOCA_InfomationSIProxy(ToSOCA_InfomationSIProxy const&) noexcept = default;

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
  ToSOCA_InfomationSIProxy(ToSOCA_InfomationSIProxy&&) noexcept = default;

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
  ToSOCA_InfomationSIProxy& operator=(ToSOCA_InfomationSIProxy const&) & noexcept = default;

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
  ToSOCA_InfomationSIProxy& operator=(ToSOCA_InfomationSIProxy&&) & noexcept = default;

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
  ~ToSOCA_InfomationSIProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::ThreadDrivenProxy<tosoca_infomationsi::ToSOCA_InfomationSI, ProxyBackendInterface, tosoca_infomationsi::internal::ToSOCA_InfomationSIHandleType>;

 public:



  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_ToSOCA_FunctionInfo' which can be used by application developer.
   * \details
   * Data of type ::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::OSM2_Bus_ToSOCA_FunctionInfo OSM2_Bus_ToSOCA_FunctionInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_ToSOCA_COMInfo' which can be used by application developer.
   * \details
   * Data of type ::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::OSM2_Bus_ToSOCA_COMInfo OSM2_Bus_ToSOCA_COMInfo;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace tosoca_infomationsi

#endif  // ENDOFLINEEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_H_

