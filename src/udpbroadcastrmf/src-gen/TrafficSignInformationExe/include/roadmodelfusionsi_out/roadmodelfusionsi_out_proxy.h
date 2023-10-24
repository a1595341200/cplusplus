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
/**        \file  TrafficSignInformationExe/include/roadmodelfusionsi_out/roadmodelfusionsi_out_proxy.h
 *        \brief  Proxy for service 'RoadModelFusionSI_Out'.
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_H_

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
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out_proxy_backend_interface.h"
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out_types.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace roadmodelfusionsi_out {

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
 * \brief Type alias for service event 'RMF_Bus_RMFInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RMF_Bus_RMFInfo =
    ::amsr::socal::events::ProxyEvent<::RMFInfoIDT::RMFInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'RMF_Bus_MapInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RMF_Bus_MapInfo =
    ::amsr::socal::events::ProxyEvent<::RMFMapInfoIDT::RMFMapInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'RMF_Bus_VectorMapInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RMF_Bus_VectorMapInfo =
    ::amsr::socal::events::ProxyEvent<::VectorMapInfoIDT::VectorMapInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'RMF_Bus_Position', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RMF_Bus_Position =
    ::amsr::socal::events::ProxyEvent<::PositionIDT::PositionIDT, ::amsr::socal::kRuntimeProcessingMode>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'RoadModelFusionSI_Out'.
 * \vpublic
 *
 * \trace SPEC-4980344
 * \unit Socal::Proxy::Proxy
 */
class RoadModelFusionSI_OutProxy : public ::amsr::socal::ThreadDrivenProxy<roadmodelfusionsi_out::RoadModelFusionSI_Out, roadmodelfusionsi_out::internal::RoadModelFusionSI_OutProxyBackendInterface, roadmodelfusionsi_out::internal::RoadModelFusionSI_OutHandleType>{
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = roadmodelfusionsi_out::internal::RoadModelFusionSI_OutProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of RoadModelFusionSI_OutProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * RoadModelFusionSI_OutProxy::FindService or asynchronous RoadModelFusionSI_OutProxy::StartFindService.
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
  * \brief Exception-less constructor of RoadModelFusionSI_OutProxy.
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
  explicit RoadModelFusionSI_OutProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of RoadModelFusionSI_OutProxy. Constructor takes a handle returned by
  * RoadModelFusionSI_OutProxy::FindService() method or provided as parameter to the callback handler of
  * RoadModelFusionSI_OutProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * RoadModelFusionSI_OutProxy::FindService or asynchronous RoadModelFusionSI_OutProxy::StartFindService.
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
  explicit RoadModelFusionSI_OutProxy(HandleType const& handle) noexcept;

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
  RoadModelFusionSI_OutProxy(RoadModelFusionSI_OutProxy const&) noexcept = default;

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
  RoadModelFusionSI_OutProxy(RoadModelFusionSI_OutProxy&&) noexcept = default;

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
  RoadModelFusionSI_OutProxy& operator=(RoadModelFusionSI_OutProxy const&) & noexcept = default;

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
  RoadModelFusionSI_OutProxy& operator=(RoadModelFusionSI_OutProxy&&) & noexcept = default;

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
  ~RoadModelFusionSI_OutProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::ThreadDrivenProxy<roadmodelfusionsi_out::RoadModelFusionSI_Out, ProxyBackendInterface, roadmodelfusionsi_out::internal::RoadModelFusionSI_OutHandleType>;

 public:



  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RMF_Bus_RMFInfo' which can be used by application developer.
   * \details
   * Data of type ::RMFInfoIDT::RMFInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::RMF_Bus_RMFInfo RMF_Bus_RMFInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RMF_Bus_MapInfo' which can be used by application developer.
   * \details
   * Data of type ::RMFMapInfoIDT::RMFMapInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::RMF_Bus_MapInfo RMF_Bus_MapInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RMF_Bus_VectorMapInfo' which can be used by application developer.
   * \details
   * Data of type ::VectorMapInfoIDT::VectorMapInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::RMF_Bus_VectorMapInfo RMF_Bus_VectorMapInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RMF_Bus_Position' which can be used by application developer.
   * \details
   * Data of type ::PositionIDT::PositionIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::RMF_Bus_Position RMF_Bus_Position;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace roadmodelfusionsi_out

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PROXY_H_

