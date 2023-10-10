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
/**        \file  ObjectFusionModelExe/include/trafficsigninformationsi_in/trafficsigninformationsi_in_proxy.h
 *        \brief  Proxy for service 'TrafficSignInformationSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_H_

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
#include "trafficsigninformationsi_in/TrafficSignInformationSI_In_proxy_backend_interface.h"
#include "trafficsigninformationsi_in/TrafficSignInformationSI_In_proxy_update_manager.h"
#include "trafficsigninformationsi_in/TrafficSignInformationSI_In_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace trafficsigninformationsi_in {

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
 * \brief Type alias for service event 'OSM2_Ena_TrfcSignInfoEna', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Ena_TrfcSignInfoEna =
    ::amsr::socal::events::ProxyEvent<::TrfcSignInfoEna::OnOff1Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_RoadSgnInfoActv', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_RoadSgnInfoActv =
    ::amsr::socal::events::ProxyEvent<::RoadSgnInfoActv0::RoadSgnInfoActv0>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_SpdAlrmActvForRoadSgnInfo =
    ::amsr::socal::events::ProxyEvent<::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0>;

/*!
 * \brief Type alias for service event 'OSM2_St_RoadMiscSgnInfoSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_RoadMiscSgnInfoSts =
    ::amsr::socal::events::ProxyEvent<::RoadMiscSgnInfoSts::RoadMiscSgnInfoSts>;

/*!
 * \brief Type alias for service event 'OSM2_St_DoorPassSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_DoorPassSts =
    ::amsr::socal::events::ProxyEvent<::DoorPassSts::DoorPassSts>;

/*!
 * \brief Type alias for service event 'OSM2_St_DoorLeReSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_DoorLeReSts =
    ::amsr::socal::events::ProxyEvent<::DoorLeReSts::DoorLeReSts>;

/*!
 * \brief Type alias for service event 'OSM2_St_DoorRiReSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_DoorRiReSts =
    ::amsr::socal::events::ProxyEvent<::DoorRiReSts::DoorRiReSts>;

/*!
 * \brief Type alias for service event 'OSM2_St_HoodSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_HoodSts =
    ::amsr::socal::events::ProxyEvent<::HoodSts::HoodSts>;

/*!
 * \brief Type alias for service event 'OSM2_St_TrSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_TrSts =
    ::amsr::socal::events::ProxyEvent<::TrSts::TrSts>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_BltLockStAtDrvr', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_BltLockStAtDrvr =
    ::amsr::socal::events::ProxyEvent<::BltLockStFrnt::BltLockStFrnt>;

/*!
 * \brief Type alias for service event 'OSM2_St_HznSplyElectcSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_HznSplyElectcSts =
    ::amsr::socal::events::ProxyEvent<::HznSplyElectcSts1::HznSplyElectcSts1>;

/*!
 * \brief Type alias for service event 'OSM2_St_TsiFaultSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_TsiFaultSts =
    ::amsr::socal::events::ProxyEvent<::TsiFaultSts::TsiFaultSts>;

/*!
 * \brief Type alias for service event 'OSM2_Req_OffsForSpdWarnSetgReq', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Req_OffsForSpdWarnSetgReq =
    ::amsr::socal::events::ProxyEvent<::OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_AccFusnTrfcReq', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_AccFusnTrfcReq =
    ::amsr::socal::events::ProxyEvent<::AccFusnTrfcReq::AccFusnTrfcReq>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd =
    ::amsr::socal::events::ProxyEvent<::ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_IndcrTurnReq', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_IndcrTurnReq =
    ::amsr::socal::events::ProxyEvent<::IndcrTurnReq::IndcrTurnReq>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'TrafficSignInformationSI_In'.
 * \vpublic
 *
 * \trace SPEC-4980344
 */
class TrafficSignInformationSI_InProxy : public ::amsr::socal::Proxy<trafficsigninformationsi_in::TrafficSignInformationSI_In, trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface, trafficsigninformationsi_in::internal::TrafficSignInformationSI_InHandleType> {
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of TrafficSignInformationSI_InProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * TrafficSignInformationSI_InProxy::FindService or asynchronous TrafficSignInformationSI_InProxy::StartFindService.
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
  * \brief Exception-less constructor of TrafficSignInformationSI_InProxy.
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
  explicit TrafficSignInformationSI_InProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of TrafficSignInformationSI_InProxy. Constructor takes a handle returned by
  * TrafficSignInformationSI_InProxy::FindService() method or provided as parameter to the callback handler of
  * TrafficSignInformationSI_InProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * TrafficSignInformationSI_InProxy::FindService or asynchronous TrafficSignInformationSI_InProxy::StartFindService.
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
  explicit TrafficSignInformationSI_InProxy(HandleType const& handle) noexcept;

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
  ~TrafficSignInformationSI_InProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Proxy<trafficsigninformationsi_in::TrafficSignInformationSI_In, ProxyBackendInterface, trafficsigninformationsi_in::internal::TrafficSignInformationSI_InHandleType>;

  /*!
   * \brief Logger for tracing and debugging
   */
  amsr::socal::internal::logging::AraComLogger logger_;
  
  /*!
   * \brief The proxy update manager as proxy backend.
   */
  trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyUpdateManager proxy_update_manager_;

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
   * \brief Event 'OSM2_Ena_TrfcSignInfoEna' which can be used by application developer.
   * \details
   * Data of type ::TrfcSignInfoEna::OnOff1Vcc 
   * \vpublic
   */
  events::OSM2_Ena_TrfcSignInfoEna OSM2_Ena_TrfcSignInfoEna;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_RoadSgnInfoActv' which can be used by application developer.
   * \details
   * Data of type ::RoadSgnInfoActv0::RoadSgnInfoActv0 
   * \vpublic
   */
  events::OSM2_Bus_RoadSgnInfoActv OSM2_Bus_RoadSgnInfoActv;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo' which can be used by application developer.
   * \details
   * Data of type ::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0 
   * \vpublic
   */
  events::OSM2_Bus_SpdAlrmActvForRoadSgnInfo OSM2_Bus_SpdAlrmActvForRoadSgnInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_RoadMiscSgnInfoSts' which can be used by application developer.
   * \details
   * Data of type ::RoadMiscSgnInfoSts::RoadMiscSgnInfoSts 
   * \vpublic
   */
  events::OSM2_St_RoadMiscSgnInfoSts OSM2_St_RoadMiscSgnInfoSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_DoorPassSts' which can be used by application developer.
   * \details
   * Data of type ::DoorPassSts::DoorPassSts 
   * \vpublic
   */
  events::OSM2_St_DoorPassSts OSM2_St_DoorPassSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_DoorLeReSts' which can be used by application developer.
   * \details
   * Data of type ::DoorLeReSts::DoorLeReSts 
   * \vpublic
   */
  events::OSM2_St_DoorLeReSts OSM2_St_DoorLeReSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_DoorRiReSts' which can be used by application developer.
   * \details
   * Data of type ::DoorRiReSts::DoorRiReSts 
   * \vpublic
   */
  events::OSM2_St_DoorRiReSts OSM2_St_DoorRiReSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_HoodSts' which can be used by application developer.
   * \details
   * Data of type ::HoodSts::HoodSts 
   * \vpublic
   */
  events::OSM2_St_HoodSts OSM2_St_HoodSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_TrSts' which can be used by application developer.
   * \details
   * Data of type ::TrSts::TrSts 
   * \vpublic
   */
  events::OSM2_St_TrSts OSM2_St_TrSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_BltLockStAtDrvr' which can be used by application developer.
   * \details
   * Data of type ::BltLockStFrnt::BltLockStFrnt 
   * \vpublic
   */
  events::OSM2_Bus_BltLockStAtDrvr OSM2_Bus_BltLockStAtDrvr;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_HznSplyElectcSts' which can be used by application developer.
   * \details
   * Data of type ::HznSplyElectcSts1::HznSplyElectcSts1 
   * \vpublic
   */
  events::OSM2_St_HznSplyElectcSts OSM2_St_HznSplyElectcSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_TsiFaultSts' which can be used by application developer.
   * \details
   * Data of type ::TsiFaultSts::TsiFaultSts 
   * \vpublic
   */
  events::OSM2_St_TsiFaultSts OSM2_St_TsiFaultSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Req_OffsForSpdWarnSetgReq' which can be used by application developer.
   * \details
   * Data of type ::OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq 
   * \vpublic
   */
  events::OSM2_Req_OffsForSpdWarnSetgReq OSM2_Req_OffsForSpdWarnSetgReq;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_AccFusnTrfcReq' which can be used by application developer.
   * \details
   * Data of type ::AccFusnTrfcReq::AccFusnTrfcReq 
   * \vpublic
   */
  events::OSM2_Bus_AccFusnTrfcReq OSM2_Bus_AccFusnTrfcReq;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd' which can be used by application developer.
   * \details
   * Data of type ::ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd 
   * \vpublic
   */
  events::OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_IndcrTurnReq' which can be used by application developer.
   * \details
   * Data of type ::IndcrTurnReq::IndcrTurnReq 
   * \vpublic
   */
  events::OSM2_Bus_IndcrTurnReq OSM2_Bus_IndcrTurnReq;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace trafficsigninformationsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_H_

