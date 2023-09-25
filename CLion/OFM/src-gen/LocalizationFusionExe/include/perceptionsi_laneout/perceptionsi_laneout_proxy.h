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
/**        \file  LocalizationFusionExe/include/perceptionsi_laneout/perceptionsi_laneout_proxy.h
 *        \brief  Proxy for service 'PerceptionSI_LaneOut'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_H_

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
#include "perceptionsi_laneout/PerceptionSI_LaneOut_proxy_backend_interface.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_proxy_update_manager.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace perceptionsi_laneout {

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
 * \brief Type alias for service event 'FusedCam_Bus_LaneMkrLe', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FusedCam_Bus_LaneMkrLe =
    ::amsr::socal::events::ProxyEvent<::LaneMkrCam1Le::LaneMkrCam1Le>;

/*!
 * \brief Type alias for service event 'FusedCam_Bus_LaneMkrRi', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FusedCam_Bus_LaneMkrRi =
    ::amsr::socal::events::ProxyEvent<::LaneMkrCam1Ri::LaneMkrCam1Ri>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_RoadEdgeLe', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FrntCam_Bus_RoadEdgeLe =
    ::amsr::socal::events::ProxyEvent<::RoadEdge1VccLe::RoadEdge1VccLe>;

/*!
 * \brief Type alias for service event 'FrntCam_Bus_RoadEdgeRi', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FrntCam_Bus_RoadEdgeRi =
    ::amsr::socal::events::ProxyEvent<::RoadEdge1VccRi::RoadEdge1VccRi>;

/*!
 * \brief Type alias for service event 'Cam_Bus_LaneEvent', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Cam_Bus_LaneEvent =
    ::amsr::socal::events::ProxyEvent<::LaneEvent::LaneEvent>;

/*!
 * \brief Type alias for service event 'Cam_Bus_LaneEventGroup', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Cam_Bus_LaneEventGroup =
    ::amsr::socal::events::ProxyEvent<::LaneEventGroups::LaneEventGroups>;

/*!
 * \brief Type alias for service event 'Cam_Bus_LaneMkrTemp', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using Cam_Bus_LaneMkrTemp =
    ::amsr::socal::events::ProxyEvent<::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc>;

/*!
 * \brief Type alias for service event 'FusedCam_Bus_LaneMkrSecClsLe', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FusedCam_Bus_LaneMkrSecClsLe =
    ::amsr::socal::events::ProxyEvent<::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe>;

/*!
 * \brief Type alias for service event 'FusedCam_Bus_LaneMkrSecClsRi', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FusedCam_Bus_LaneMkrSecClsRi =
    ::amsr::socal::events::ProxyEvent<::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'PerceptionSI_LaneOut'.
 * \vpublic
 *
 * \trace SPEC-4980344
 */
class PerceptionSI_LaneOutProxy : public ::amsr::socal::Proxy<perceptionsi_laneout::PerceptionSI_LaneOut, perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface, perceptionsi_laneout::internal::PerceptionSI_LaneOutHandleType> {
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of PerceptionSI_LaneOutProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * PerceptionSI_LaneOutProxy::FindService or asynchronous PerceptionSI_LaneOutProxy::StartFindService.
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
  * \brief Exception-less constructor of PerceptionSI_LaneOutProxy.
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
  explicit PerceptionSI_LaneOutProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of PerceptionSI_LaneOutProxy. Constructor takes a handle returned by
  * PerceptionSI_LaneOutProxy::FindService() method or provided as parameter to the callback handler of
  * PerceptionSI_LaneOutProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * PerceptionSI_LaneOutProxy::FindService or asynchronous PerceptionSI_LaneOutProxy::StartFindService.
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
  explicit PerceptionSI_LaneOutProxy(HandleType const& handle) noexcept;

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
  ~PerceptionSI_LaneOutProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Proxy<perceptionsi_laneout::PerceptionSI_LaneOut, ProxyBackendInterface, perceptionsi_laneout::internal::PerceptionSI_LaneOutHandleType>;

  /*!
   * \brief Logger for tracing and debugging
   */
  amsr::socal::internal::logging::AraComLogger logger_;
  
  /*!
   * \brief The proxy update manager as proxy backend.
   */
  perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyUpdateManager proxy_update_manager_;

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
   * \brief Event 'FusedCam_Bus_LaneMkrLe' which can be used by application developer.
   * \details
   * Data of type ::LaneMkrCam1Le::LaneMkrCam1Le 
   * \vpublic
   */
  events::FusedCam_Bus_LaneMkrLe FusedCam_Bus_LaneMkrLe;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FusedCam_Bus_LaneMkrRi' which can be used by application developer.
   * \details
   * Data of type ::LaneMkrCam1Ri::LaneMkrCam1Ri 
   * \vpublic
   */
  events::FusedCam_Bus_LaneMkrRi FusedCam_Bus_LaneMkrRi;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FrntCam_Bus_RoadEdgeLe' which can be used by application developer.
   * \details
   * Data of type ::RoadEdge1VccLe::RoadEdge1VccLe 
   * \vpublic
   */
  events::FrntCam_Bus_RoadEdgeLe FrntCam_Bus_RoadEdgeLe;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FrntCam_Bus_RoadEdgeRi' which can be used by application developer.
   * \details
   * Data of type ::RoadEdge1VccRi::RoadEdge1VccRi 
   * \vpublic
   */
  events::FrntCam_Bus_RoadEdgeRi FrntCam_Bus_RoadEdgeRi;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Cam_Bus_LaneEvent' which can be used by application developer.
   * \details
   * Data of type ::LaneEvent::LaneEvent 
   * \vpublic
   */
  events::Cam_Bus_LaneEvent Cam_Bus_LaneEvent;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Cam_Bus_LaneEventGroup' which can be used by application developer.
   * \details
   * Data of type ::LaneEventGroups::LaneEventGroups 
   * \vpublic
   */
  events::Cam_Bus_LaneEventGroup Cam_Bus_LaneEventGroup;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'Cam_Bus_LaneMkrTemp' which can be used by application developer.
   * \details
   * Data of type ::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc 
   * \vpublic
   */
  events::Cam_Bus_LaneMkrTemp Cam_Bus_LaneMkrTemp;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FusedCam_Bus_LaneMkrSecClsLe' which can be used by application developer.
   * \details
   * Data of type ::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe 
   * \vpublic
   */
  events::FusedCam_Bus_LaneMkrSecClsLe FusedCam_Bus_LaneMkrSecClsLe;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FusedCam_Bus_LaneMkrSecClsRi' which can be used by application developer.
   * \details
   * Data of type ::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi 
   * \vpublic
   */
  events::FusedCam_Bus_LaneMkrSecClsRi FusedCam_Bus_LaneMkrSecClsRi;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace perceptionsi_laneout

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_H_

