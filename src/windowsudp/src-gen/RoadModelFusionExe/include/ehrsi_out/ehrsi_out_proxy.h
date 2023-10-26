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
/**        \file  RoadModelFusionExe/include/ehrsi_out/ehrsi_out_proxy.h
 *        \brief  Proxy for service 'EHRSI_Out'.
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_H_
#define ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_H_

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
#include "ehrsi_out/EHRSI_Out_proxy_backend_interface.h"
#include "ehrsi_out/EHRSI_Out_types.h"
#include "ehrsi_out/ehrsi_out_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace ehrsi_out {

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
 * \brief Type alias for service event 'EHR_Bus_NOAInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_NOAInfo =
    ::amsr::socal::events::ProxyEvent<::NOAInfoIDT::NOAInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneConnectivitys', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_LaneConnectivitys =
    ::amsr::socal::events::ProxyEvent<::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_Nodes', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_Nodes =
    ::amsr::socal::events::ProxyEvent<::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_TrafficSigns', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_TrafficSigns =
    ::amsr::socal::events::ProxyEvent<::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_GeoFences', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_GeoFences =
    ::amsr::socal::events::ProxyEvent<::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkCurvatures', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_LinkCurvatures =
    ::amsr::socal::events::ProxyEvent<::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkSlopes', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_LinkSlopes =
    ::amsr::socal::events::ProxyEvent<::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneSpeedLimits', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_LaneSpeedLimits =
    ::amsr::socal::events::ProxyEvent<::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkInfos', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_LinkInfos =
    ::amsr::socal::events::ProxyEvent<::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_AllMergePoints', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_AllMergePoints =
    ::amsr::socal::events::ProxyEvent<::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinearObjects', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_LinearObjects =
    ::amsr::socal::events::ProxyEvent<::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_FormOfWays', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_FormOfWays =
    ::amsr::socal::events::ProxyEvent<::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_SequenceId', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_SequenceId =
    ::amsr::socal::events::ProxyEvent<::uint64IDT::uint64IDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneWidthes', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using EHR_Bus_LaneWidthes =
    ::amsr::socal::events::ProxyEvent<::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector, ::amsr::socal::kRuntimeProcessingMode>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'EHRSI_Out'.
 * \vpublic
 *
 * \trace SPEC-4980344
 * \unit Socal::Proxy::Proxy
 */
class EHRSI_OutProxy : public ::amsr::socal::ThreadDrivenProxy<ehrsi_out::EHRSI_Out, ehrsi_out::internal::EHRSI_OutProxyBackendInterface, ehrsi_out::internal::EHRSI_OutHandleType>{
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = ehrsi_out::internal::EHRSI_OutProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of EHRSI_OutProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * EHRSI_OutProxy::FindService or asynchronous EHRSI_OutProxy::StartFindService.
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
  * \brief Exception-less constructor of EHRSI_OutProxy.
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
  explicit EHRSI_OutProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of EHRSI_OutProxy. Constructor takes a handle returned by
  * EHRSI_OutProxy::FindService() method or provided as parameter to the callback handler of
  * EHRSI_OutProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * EHRSI_OutProxy::FindService or asynchronous EHRSI_OutProxy::StartFindService.
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
  explicit EHRSI_OutProxy(HandleType const& handle) noexcept;

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
  EHRSI_OutProxy(EHRSI_OutProxy const&) noexcept = default;

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
  EHRSI_OutProxy(EHRSI_OutProxy&&) noexcept = default;

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
  EHRSI_OutProxy& operator=(EHRSI_OutProxy const&) & noexcept = default;

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
  EHRSI_OutProxy& operator=(EHRSI_OutProxy&&) & noexcept = default;

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
  ~EHRSI_OutProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::ThreadDrivenProxy<ehrsi_out::EHRSI_Out, ProxyBackendInterface, ehrsi_out::internal::EHRSI_OutHandleType>;

 public:



  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_NOAInfo' which can be used by application developer.
   * \details
   * Data of type ::NOAInfoIDT::NOAInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_NOAInfo EHR_Bus_NOAInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_LaneConnectivitys' which can be used by application developer.
   * \details
   * Data of type ::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_LaneConnectivitys EHR_Bus_LaneConnectivitys;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_Nodes' which can be used by application developer.
   * \details
   * Data of type ::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_Nodes EHR_Bus_Nodes;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_TrafficSigns' which can be used by application developer.
   * \details
   * Data of type ::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_TrafficSigns EHR_Bus_TrafficSigns;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_GeoFences' which can be used by application developer.
   * \details
   * Data of type ::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_GeoFences EHR_Bus_GeoFences;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_LinkCurvatures' which can be used by application developer.
   * \details
   * Data of type ::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_LinkCurvatures EHR_Bus_LinkCurvatures;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_LinkSlopes' which can be used by application developer.
   * \details
   * Data of type ::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_LinkSlopes EHR_Bus_LinkSlopes;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_LaneSpeedLimits' which can be used by application developer.
   * \details
   * Data of type ::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_LaneSpeedLimits EHR_Bus_LaneSpeedLimits;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_LinkInfos' which can be used by application developer.
   * \details
   * Data of type ::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_LinkInfos EHR_Bus_LinkInfos;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_AllMergePoints' which can be used by application developer.
   * \details
   * Data of type ::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_AllMergePoints EHR_Bus_AllMergePoints;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_LinearObjects' which can be used by application developer.
   * \details
   * Data of type ::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_LinearObjects EHR_Bus_LinearObjects;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_FormOfWays' which can be used by application developer.
   * \details
   * Data of type ::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_FormOfWays EHR_Bus_FormOfWays;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_SequenceId' which can be used by application developer.
   * \details
   * Data of type ::uint64IDT::uint64IDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_SequenceId EHR_Bus_SequenceId;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'EHR_Bus_LaneWidthes' which can be used by application developer.
   * \details
   * Data of type ::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::EHR_Bus_LaneWidthes EHR_Bus_LaneWidthes;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace ehrsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_PROXY_H_

