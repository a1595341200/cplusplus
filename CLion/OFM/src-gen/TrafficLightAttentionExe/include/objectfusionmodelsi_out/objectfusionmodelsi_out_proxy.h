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
/**        \file  TrafficLightAttentionExe/include/objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.h
 *        \brief  Proxy for service 'ObjectFusionModelSI_Out'.
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_H_

/*!
 * \trace SPEC-4980240
 */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/events/proxy_event.h"
#include "amsr/socal/fields/proxy_field.h"
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/logging/ara_com_logger.h"
#include "amsr/socal/methods/proxy_method.h"
#include "amsr/socal/proxy.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_backend_interface.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_update_manager.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace objectfusionmodelsi_out {

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
 * \brief Type alias for service event 'OFM_Bus_FusedTargets_11', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_Bus_FusedTargets_11 =
    ::amsr::socal::events::ProxyEvent<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>;

/*!
 * \brief Type alias for service event 'OFM_St_SOCFusedSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_St_SOCFusedSts =
    ::amsr::socal::events::ProxyEvent<::SOCFusedSts::SOCFusedSts>;

/*!
 * \brief Type alias for service event 'OFM_Bus_FourDRadarECUSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_Bus_FourDRadarECUSts =
    ::amsr::socal::events::ProxyEvent<::FourDRadarECUSts::FourDRadarECUSts>;

/*!
 * \brief Type alias for service event 'OFM_Bus_FrontFourDRadarSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_Bus_FrontFourDRadarSts =
    ::amsr::socal::events::ProxyEvent<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>;

/*!
 * \brief Type alias for service event 'OFM_Bus_FusedTargets_22', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_Bus_FusedTargets_22 =
    ::amsr::socal::events::ProxyEvent<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>;

/*!
 * \brief Type alias for service event 'OFM_Bus_FusedTargets_32', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_Bus_FusedTargets_32 =
    ::amsr::socal::events::ProxyEvent<::ObjGroup2Vccs_10::ObjGroup2Vccs_10>;

/*!
 * \brief Type alias for service event 'OFM_St_FrntRdrObjE2Efail', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_St_FrntRdrObjE2Efail =
    ::amsr::socal::events::ProxyEvent<::FrntRdrObjE2Efail::FrntRdrObjE2Efail>;

/*!
 * \brief Type alias for service event 'OFM_St_FrntRdrObjTO', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OFM_St_FrntRdrObjTO =
    ::amsr::socal::events::ProxyEvent<::FrntRdrObjTO::FrntRdrObjTO>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'ObjectFusionModelSI_Out'.
 * \vpublic
 *
 * \trace SPEC-4980344
 */
class ObjectFusionModelSI_OutProxy : public ::amsr::socal::Proxy<objectfusionmodelsi_out::ObjectFusionModelSI_Out, objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface, objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutHandleType> {
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of ObjectFusionModelSI_OutProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * ObjectFusionModelSI_OutProxy::FindService or asynchronous ObjectFusionModelSI_OutProxy::StartFindService.
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
  * \brief Exception-less constructor of ObjectFusionModelSI_OutProxy.
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
  explicit ObjectFusionModelSI_OutProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of ObjectFusionModelSI_OutProxy. Constructor takes a handle returned by
  * ObjectFusionModelSI_OutProxy::FindService() method or provided as parameter to the callback handler of
  * ObjectFusionModelSI_OutProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * ObjectFusionModelSI_OutProxy::FindService or asynchronous ObjectFusionModelSI_OutProxy::StartFindService.
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
  explicit ObjectFusionModelSI_OutProxy(HandleType const& handle) noexcept;

  /*!
   * \brief Perform cleanup of proxy instance.
   *
   * \details Unsubscribes all event and field notifications and unsets event receive and subscription state change
   * handlers. Finally, unregisters the proxy from the communication middleware.
   * This call will be blocked until all current events/methods' callbacks are finished/canceled.
   *
   * \pre -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vpublic
   * \synchronous TRUE
   */
  ~ObjectFusionModelSI_OutProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Proxy<objectfusionmodelsi_out::ObjectFusionModelSI_Out, ProxyBackendInterface, objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutHandleType>;

  /*!
   * \brief Logger for tracing and debugging
   */
  amsr::socal::internal::logging::AraComLogger logger_;
  
  /*!
   * \brief The proxy update manager as proxy backend.
   */
  objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyUpdateManager proxy_update_manager_;

 public:

  /*!
   * \brief       Poll the current state of the service backend.
   *
   * \return      A ServiceState indicating if the service backend is up, down or restarted.
   * \pre         -
   * \context     App | Callback
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vpublic
   * \synchronous TRUE
   */
  ::amsr::socal::ServiceState ReadServiceState() noexcept; 

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_Bus_FusedTargets_11' which can be used by application developer.
   * \details
   * Data of type ::ObjGroup2Vccs_11::ObjGroup2Vccs_11 
   * \vpublic
   */
  events::OFM_Bus_FusedTargets_11 OFM_Bus_FusedTargets_11;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_St_SOCFusedSts' which can be used by application developer.
   * \details
   * Data of type ::SOCFusedSts::SOCFusedSts 
   * \vpublic
   */
  events::OFM_St_SOCFusedSts OFM_St_SOCFusedSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_Bus_FourDRadarECUSts' which can be used by application developer.
   * \details
   * Data of type ::FourDRadarECUSts::FourDRadarECUSts 
   * \vpublic
   */
  events::OFM_Bus_FourDRadarECUSts OFM_Bus_FourDRadarECUSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_Bus_FrontFourDRadarSts' which can be used by application developer.
   * \details
   * Data of type ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc 
   * \vpublic
   */
  events::OFM_Bus_FrontFourDRadarSts OFM_Bus_FrontFourDRadarSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_Bus_FusedTargets_22' which can be used by application developer.
   * \details
   * Data of type ::ObjGroup2Vccs_11::ObjGroup2Vccs_11 
   * \vpublic
   */
  events::OFM_Bus_FusedTargets_22 OFM_Bus_FusedTargets_22;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_Bus_FusedTargets_32' which can be used by application developer.
   * \details
   * Data of type ::ObjGroup2Vccs_10::ObjGroup2Vccs_10 
   * \vpublic
   */
  events::OFM_Bus_FusedTargets_32 OFM_Bus_FusedTargets_32;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_St_FrntRdrObjE2Efail' which can be used by application developer.
   * \details
   * Data of type ::FrntRdrObjE2Efail::FrntRdrObjE2Efail 
   * \vpublic
   */
  events::OFM_St_FrntRdrObjE2Efail OFM_St_FrntRdrObjE2Efail;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OFM_St_FrntRdrObjTO' which can be used by application developer.
   * \details
   * Data of type ::FrntRdrObjTO::FrntRdrObjTO 
   * \vpublic
   */
  events::OFM_St_FrntRdrObjTO OFM_St_FrntRdrObjTO;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace objectfusionmodelsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_H_

