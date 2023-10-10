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
/**        \file  ObjectFusionModelExe/include/perceptionsi_out/perceptionsidesi_out_proxy.h
 *        \brief  Proxy for service 'PerceptionSideSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_H_

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
#include "perceptionsi_out/PerceptionSideSI_Out_proxy_backend_interface.h"
#include "perceptionsi_out/PerceptionSideSI_Out_proxy_update_manager.h"
#include "perceptionsi_out/PerceptionSideSI_Out_types.h"

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
 * \brief Type alias for service event 'FLCam_Bus_VisnObj', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FLCam_Bus_VisnObj =
    ::amsr::socal::events::ProxyEvent<::VisObjs::VisObjs>;

/*!
 * \brief Type alias for service event 'FRCam_Bus_VisnObj', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FRCam_Bus_VisnObj =
    ::amsr::socal::events::ProxyEvent<::VisObjs::VisObjs>;

/*!
 * \brief Type alias for service event 'RLCam_Bus_VisnObj', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RLCam_Bus_VisnObj =
    ::amsr::socal::events::ProxyEvent<::VisObjs::VisObjs>;

/*!
 * \brief Type alias for service event 'RRCam_Bus_VisnObj', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RRCam_Bus_VisnObj =
    ::amsr::socal::events::ProxyEvent<::VisObjs::VisObjs>;

/*!
 * \brief Type alias for service event 'FLCam_Bus_CamSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FLCam_Bus_CamSts =
    ::amsr::socal::events::ProxyEvent<::CamSts1Vcc::CamSts1Vcc>;

/*!
 * \brief Type alias for service event 'FRCam_Bus_CamSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FRCam_Bus_CamSts =
    ::amsr::socal::events::ProxyEvent<::CamSts1Vcc::CamSts1Vcc>;

/*!
 * \brief Type alias for service event 'RLCam_Bus_CamSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RLCam_Bus_CamSts =
    ::amsr::socal::events::ProxyEvent<::CamSts1Vcc::CamSts1Vcc>;

/*!
 * \brief Type alias for service event 'RRCam_Bus_CamSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using RRCam_Bus_CamSts =
    ::amsr::socal::events::ProxyEvent<::CamSts1Vcc::CamSts1Vcc>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'PerceptionSideSI_Out'.
 * \vpublic
 *
 * \trace SPEC-4980344
 */
class PerceptionSideSI_OutProxy : public ::amsr::socal::Proxy<perceptionsi_out::PerceptionSideSI_Out, perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface, perceptionsi_out::internal::PerceptionSideSI_OutHandleType> {
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of PerceptionSideSI_OutProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * PerceptionSideSI_OutProxy::FindService or asynchronous PerceptionSideSI_OutProxy::StartFindService.
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
  * \brief Exception-less constructor of PerceptionSideSI_OutProxy.
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
  explicit PerceptionSideSI_OutProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of PerceptionSideSI_OutProxy. Constructor takes a handle returned by
  * PerceptionSideSI_OutProxy::FindService() method or provided as parameter to the callback handler of
  * PerceptionSideSI_OutProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * PerceptionSideSI_OutProxy::FindService or asynchronous PerceptionSideSI_OutProxy::StartFindService.
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
  explicit PerceptionSideSI_OutProxy(HandleType const& handle) noexcept;

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
  ~PerceptionSideSI_OutProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Proxy<perceptionsi_out::PerceptionSideSI_Out, ProxyBackendInterface, perceptionsi_out::internal::PerceptionSideSI_OutHandleType>;

  /*!
   * \brief Logger for tracing and debugging
   */
  amsr::socal::internal::logging::AraComLogger logger_;
  
  /*!
   * \brief The proxy update manager as proxy backend.
   */
  perceptionsi_out::internal::PerceptionSideSI_OutProxyUpdateManager proxy_update_manager_;

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
   * \brief Event 'FLCam_Bus_VisnObj' which can be used by application developer.
   * \details
   * Data of type ::VisObjs::VisObjs 
   * \vpublic
   */
  events::FLCam_Bus_VisnObj FLCam_Bus_VisnObj;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FRCam_Bus_VisnObj' which can be used by application developer.
   * \details
   * Data of type ::VisObjs::VisObjs 
   * \vpublic
   */
  events::FRCam_Bus_VisnObj FRCam_Bus_VisnObj;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RLCam_Bus_VisnObj' which can be used by application developer.
   * \details
   * Data of type ::VisObjs::VisObjs 
   * \vpublic
   */
  events::RLCam_Bus_VisnObj RLCam_Bus_VisnObj;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RRCam_Bus_VisnObj' which can be used by application developer.
   * \details
   * Data of type ::VisObjs::VisObjs 
   * \vpublic
   */
  events::RRCam_Bus_VisnObj RRCam_Bus_VisnObj;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FLCam_Bus_CamSts' which can be used by application developer.
   * \details
   * Data of type ::CamSts1Vcc::CamSts1Vcc 
   * \vpublic
   */
  events::FLCam_Bus_CamSts FLCam_Bus_CamSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FRCam_Bus_CamSts' which can be used by application developer.
   * \details
   * Data of type ::CamSts1Vcc::CamSts1Vcc 
   * \vpublic
   */
  events::FRCam_Bus_CamSts FRCam_Bus_CamSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RLCam_Bus_CamSts' which can be used by application developer.
   * \details
   * Data of type ::CamSts1Vcc::CamSts1Vcc 
   * \vpublic
   */
  events::RLCam_Bus_CamSts RLCam_Bus_CamSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'RRCam_Bus_CamSts' which can be used by application developer.
   * \details
   * Data of type ::CamSts1Vcc::CamSts1Vcc 
   * \vpublic
   */
  events::RRCam_Bus_CamSts RRCam_Bus_CamSts;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace perceptionsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_H_

