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
/**        \file  ObjectFusionModelExe/include/tosoca_siderdrfusedtargetssi/tosoca_siderdrfusedtargetssi_proxy.h
 *        \brief  Proxy for service 'TOSOCA_SideRdrFusedTargetsSI'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_H_

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
#include "tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_proxy_backend_interface.h"
#include "tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_types.h"
#include "tosoca_siderdrfusedtargetssi/tosoca_siderdrfusedtargetssi_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace tosoca_siderdrfusedtargetssi {

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
 * \brief Type alias for service event 'OSM2_TOSOCA_SideRdrFusedTargets1', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_TOSOCA_SideRdrFusedTargets1 =
    ::amsr::socal::events::ProxyEvent<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'OSM2_TOSOCA_SideRdrFusedTargets2', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_TOSOCA_SideRdrFusedTargets2 =
    ::amsr::socal::events::ProxyEvent<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'OSM2_TOSOCA_SideRdrFusedTargets3', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_TOSOCA_SideRdrFusedTargets3 =
    ::amsr::socal::events::ProxyEvent<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'OSM2_TOSOCA_SideRdrFusedTargets4', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_TOSOCA_SideRdrFusedTargets4 =
    ::amsr::socal::events::ProxyEvent<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8, ::amsr::socal::kRuntimeProcessingMode>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'TOSOCA_SideRdrFusedTargetsSI'.
 * \vpublic
 *
 * \trace SPEC-4980344
 * \unit Socal::Proxy::Proxy
 */
class TOSOCA_SideRdrFusedTargetsSIProxy : public ::amsr::socal::ThreadDrivenProxy<tosoca_siderdrfusedtargetssi::TOSOCA_SideRdrFusedTargetsSI, tosoca_siderdrfusedtargetssi::internal::TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface, tosoca_siderdrfusedtargetssi::internal::TOSOCA_SideRdrFusedTargetsSIHandleType>{
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = tosoca_siderdrfusedtargetssi::internal::TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of TOSOCA_SideRdrFusedTargetsSIProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * TOSOCA_SideRdrFusedTargetsSIProxy::FindService or asynchronous TOSOCA_SideRdrFusedTargetsSIProxy::StartFindService.
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
  * \brief Exception-less constructor of TOSOCA_SideRdrFusedTargetsSIProxy.
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
  explicit TOSOCA_SideRdrFusedTargetsSIProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of TOSOCA_SideRdrFusedTargetsSIProxy. Constructor takes a handle returned by
  * TOSOCA_SideRdrFusedTargetsSIProxy::FindService() method or provided as parameter to the callback handler of
  * TOSOCA_SideRdrFusedTargetsSIProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * TOSOCA_SideRdrFusedTargetsSIProxy::FindService or asynchronous TOSOCA_SideRdrFusedTargetsSIProxy::StartFindService.
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
  explicit TOSOCA_SideRdrFusedTargetsSIProxy(HandleType const& handle) noexcept;

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
  TOSOCA_SideRdrFusedTargetsSIProxy(TOSOCA_SideRdrFusedTargetsSIProxy const&) noexcept = default;

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
  TOSOCA_SideRdrFusedTargetsSIProxy(TOSOCA_SideRdrFusedTargetsSIProxy&&) noexcept = default;

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
  TOSOCA_SideRdrFusedTargetsSIProxy& operator=(TOSOCA_SideRdrFusedTargetsSIProxy const&) & noexcept = default;

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
  TOSOCA_SideRdrFusedTargetsSIProxy& operator=(TOSOCA_SideRdrFusedTargetsSIProxy&&) & noexcept = default;

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
  ~TOSOCA_SideRdrFusedTargetsSIProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::ThreadDrivenProxy<tosoca_siderdrfusedtargetssi::TOSOCA_SideRdrFusedTargetsSI, ProxyBackendInterface, tosoca_siderdrfusedtargetssi::internal::TOSOCA_SideRdrFusedTargetsSIHandleType>;

 public:



  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_TOSOCA_SideRdrFusedTargets1' which can be used by application developer.
   * \details
   * Data of type ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::OSM2_TOSOCA_SideRdrFusedTargets1 OSM2_TOSOCA_SideRdrFusedTargets1;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_TOSOCA_SideRdrFusedTargets2' which can be used by application developer.
   * \details
   * Data of type ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::OSM2_TOSOCA_SideRdrFusedTargets2 OSM2_TOSOCA_SideRdrFusedTargets2;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_TOSOCA_SideRdrFusedTargets3' which can be used by application developer.
   * \details
   * Data of type ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::OSM2_TOSOCA_SideRdrFusedTargets3 OSM2_TOSOCA_SideRdrFusedTargets3;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_TOSOCA_SideRdrFusedTargets4' which can be used by application developer.
   * \details
   * Data of type ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::OSM2_TOSOCA_SideRdrFusedTargets4 OSM2_TOSOCA_SideRdrFusedTargets4;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace tosoca_siderdrfusedtargetssi

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PROXY_H_

