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
/**        \file  ObjectFusionModelExe/include/perceptionsi_out/perceptionsi_out_proxy.h
 *        \brief  Proxy for service 'PerceptionSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_H_

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
#include "perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h"
#include "perceptionsi_out/PerceptionSI_Out_types.h"
#include "perceptionsi_out/perceptionsi_out_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace perceptionsi_out {

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
 * \brief Type alias for service event 'Perception_Bus_LaneInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Perception_Bus_LaneInfo =
    ::amsr::socal::events::ProxyEvent<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'Perception_Bus_FrntCamInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Perception_Bus_FrntCamInfo =
    ::amsr::socal::events::ProxyEvent<::FrntCamInfoIDT::FrntCamInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_TrafficInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FrntCam_Bus_TrafficInfo =
    ::amsr::socal::events::ProxyEvent<::TrafficInfoIDT::TrafficInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_TrfcLi', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FrntCam_Bus_TrfcLi =
    ::amsr::socal::events::ProxyEvent<::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_LineSignGroup', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FrntCam_Bus_LineSignGroup =
    ::amsr::socal::events::ProxyEvent<::LineSignGroupIDT::LineSignGroupIDT, ::amsr::socal::kRuntimeProcessingMode>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_ExtInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FrntCam_Bus_ExtInfo =
    ::amsr::socal::events::ProxyEvent<::ExtInfoIDT::ExtInfoIDT, ::amsr::socal::kRuntimeProcessingMode>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'PerceptionSI_Out'.
 * \vpublic
 *
 * \trace SPEC-4980344
 * \unit Socal::Proxy::Proxy
 */
class PerceptionSI_OutProxy : public ::amsr::socal::ThreadDrivenProxy<perceptionsi_out::PerceptionSI_Out, perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface, perceptionsi_out::internal::PerceptionSI_OutHandleType>{
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of PerceptionSI_OutProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * PerceptionSI_OutProxy::FindService or asynchronous PerceptionSI_OutProxy::StartFindService.
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
  * \brief Exception-less constructor of PerceptionSI_OutProxy.
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
  explicit PerceptionSI_OutProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of PerceptionSI_OutProxy. Constructor takes a handle returned by
  * PerceptionSI_OutProxy::FindService() method or provided as parameter to the callback handler of
  * PerceptionSI_OutProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * PerceptionSI_OutProxy::FindService or asynchronous PerceptionSI_OutProxy::StartFindService.
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
  explicit PerceptionSI_OutProxy(HandleType const& handle) noexcept;

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
  PerceptionSI_OutProxy(PerceptionSI_OutProxy const&) noexcept = default;

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
  PerceptionSI_OutProxy(PerceptionSI_OutProxy&&) noexcept = default;

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
  PerceptionSI_OutProxy& operator=(PerceptionSI_OutProxy const&) & noexcept = default;

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
  PerceptionSI_OutProxy& operator=(PerceptionSI_OutProxy&&) & noexcept = default;

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
  ~PerceptionSI_OutProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::ThreadDrivenProxy<perceptionsi_out::PerceptionSI_Out, ProxyBackendInterface, perceptionsi_out::internal::PerceptionSI_OutHandleType>;

 public:



  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Perception_Bus_LaneInfo' which can be used by application developer.
   * \details
   * Data of type ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::Perception_Bus_LaneInfo Perception_Bus_LaneInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Perception_Bus_FrntCamInfo' which can be used by application developer.
   * \details
   * Data of type ::FrntCamInfoIDT::FrntCamInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::Perception_Bus_FrntCamInfo Perception_Bus_FrntCamInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FrntCam_Bus_TrafficInfo' which can be used by application developer.
   * \details
   * Data of type ::TrafficInfoIDT::TrafficInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::FrntCam_Bus_TrafficInfo FrntCam_Bus_TrafficInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FrntCam_Bus_TrfcLi' which can be used by application developer.
   * \details
   * Data of type ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::FrntCam_Bus_TrfcLi FrntCam_Bus_TrfcLi;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FrntCam_Bus_LineSignGroup' which can be used by application developer.
   * \details
   * Data of type ::LineSignGroupIDT::LineSignGroupIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::FrntCam_Bus_LineSignGroup FrntCam_Bus_LineSignGroup;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FrntCam_Bus_ExtInfo' which can be used by application developer.
   * \details
   * Data of type ::ExtInfoIDT::ExtInfoIDT 
   * \vpublic
   * \spec
   *   requires true;
   * \endspec
   */
  events::FrntCam_Bus_ExtInfo FrntCam_Bus_ExtInfo;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace perceptionsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_H_

