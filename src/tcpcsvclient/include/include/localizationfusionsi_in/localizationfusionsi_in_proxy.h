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
/**        \file  ObjectFusionModelExe/include/localizationfusionsi_in/localizationfusionsi_in_proxy.h
 *        \brief  Proxy for service 'LocalizationFusionSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_H_

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
#include "localizationfusionsi_in/LocalizationFusionSI_In_proxy_backend_interface.h"
#include "localizationfusionsi_in/LocalizationFusionSI_In_proxy_update_manager.h"
#include "localizationfusionsi_in/LocalizationFusionSI_In_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace localizationfusionsi_in {

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
 * \brief Type alias for service event 'OSM2_Bus_GNSSinf1', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_GNSSinf1 =
    ::amsr::socal::events::ProxyEvent<::GNSSinf1Vcc::GNSSinf1Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_GNSSinf2', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_GNSSinf2 =
    ::amsr::socal::events::ProxyEvent<::GNSSinf2Vcc::GNSSinf2Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_IMUinf', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_IMUinf =
    ::amsr::socal::events::ProxyEvent<::IMUInf1Vcc::IMUInf1Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_INSinf', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_INSinf =
    ::amsr::socal::events::ProxyEvent<::INSinf1Vcc::INSinf1Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_LaneChgSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_LaneChgSts =
    ::amsr::socal::events::ProxyEvent<::LppLaneChgSts::LppLaneChgSts>;

/*!
 * \brief Type alias for service event 'OSM2_Fl_VehInLaneChg', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Fl_VehInLaneChg =
    ::amsr::socal::events::ProxyEvent<::OSM2_Fl_VehInLaneChg::OSM2_Fl_VehInLaneChg>;

/*!
 * \brief Type alias for service event 'OSM2_Prm_DynCalPrmForVehTyp', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Prm_DynCalPrmForVehTyp =
    ::amsr::socal::events::ProxyEvent<::DynCalPrmForVehTyp::DynCalPrmForVehTyp>;

/*!
 * \brief Type alias for service event 'OSM2_St_NGPSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_NGPSts =
    ::amsr::socal::events::ProxyEvent<::NgpSts1::NgpSts1>;

/*!
 * \brief Type alias for service event 'OSM2_St_HWASts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_St_HWASts =
    ::amsr::socal::events::ProxyEvent<::TjaSts::TjaSts>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_SteerWhlSnsr', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_SteerWhlSnsr =
    ::amsr::socal::events::ProxyEvent<::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_WhlInfoGroup', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_WhlInfoGroup =
    ::amsr::socal::events::ProxyEvent<::WhlInfoGroup::WhlInfoGroup>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_Vin', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_Vin =
    ::amsr::socal::events::ProxyEvent<::Vin1Vcc::Vin1Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_LOCSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_LOCSts =
    ::amsr::socal::events::ProxyEvent<::LOCSts1Vcc::LOCSts1Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_EgoMotionData', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_EgoMotionData =
    ::amsr::socal::events::ProxyEvent<::EgoMotion::EgoMotion>;

/*!
 * \brief Type alias for service event 'OSM2_Ti_TimeStamp', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Ti_TimeStamp =
    ::amsr::socal::events::ProxyEvent<::OSM2TimeStamp::OSM2TimeStamp>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'LocalizationFusionSI_In'.
 * \vpublic
 *
 * \trace SPEC-4980344
 */
class LocalizationFusionSI_InProxy : public ::amsr::socal::Proxy<localizationfusionsi_in::LocalizationFusionSI_In, localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface, localizationfusionsi_in::internal::LocalizationFusionSI_InHandleType> {
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of LocalizationFusionSI_InProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * LocalizationFusionSI_InProxy::FindService or asynchronous LocalizationFusionSI_InProxy::StartFindService.
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
  * \brief Exception-less constructor of LocalizationFusionSI_InProxy.
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
  explicit LocalizationFusionSI_InProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of LocalizationFusionSI_InProxy. Constructor takes a handle returned by
  * LocalizationFusionSI_InProxy::FindService() method or provided as parameter to the callback handler of
  * LocalizationFusionSI_InProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * LocalizationFusionSI_InProxy::FindService or asynchronous LocalizationFusionSI_InProxy::StartFindService.
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
  explicit LocalizationFusionSI_InProxy(HandleType const& handle) noexcept;

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
  ~LocalizationFusionSI_InProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Proxy<localizationfusionsi_in::LocalizationFusionSI_In, ProxyBackendInterface, localizationfusionsi_in::internal::LocalizationFusionSI_InHandleType>;

  /*!
   * \brief Logger for tracing and debugging
   */
  amsr::socal::internal::logging::AraComLogger logger_;
  
  /*!
   * \brief The proxy update manager as proxy backend.
   */
  localizationfusionsi_in::internal::LocalizationFusionSI_InProxyUpdateManager proxy_update_manager_;

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
   * \brief Event 'OSM2_Bus_GNSSinf1' which can be used by application developer.
   * \details
   * Data of type ::GNSSinf1Vcc::GNSSinf1Vcc 
   * \vpublic
   */
  events::OSM2_Bus_GNSSinf1 OSM2_Bus_GNSSinf1;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_GNSSinf2' which can be used by application developer.
   * \details
   * Data of type ::GNSSinf2Vcc::GNSSinf2Vcc 
   * \vpublic
   */
  events::OSM2_Bus_GNSSinf2 OSM2_Bus_GNSSinf2;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_IMUinf' which can be used by application developer.
   * \details
   * Data of type ::IMUInf1Vcc::IMUInf1Vcc 
   * \vpublic
   */
  events::OSM2_Bus_IMUinf OSM2_Bus_IMUinf;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_INSinf' which can be used by application developer.
   * \details
   * Data of type ::INSinf1Vcc::INSinf1Vcc 
   * \vpublic
   */
  events::OSM2_Bus_INSinf OSM2_Bus_INSinf;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_LaneChgSts' which can be used by application developer.
   * \details
   * Data of type ::LppLaneChgSts::LppLaneChgSts 
   * \vpublic
   */
  events::OSM2_Bus_LaneChgSts OSM2_Bus_LaneChgSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Fl_VehInLaneChg' which can be used by application developer.
   * \details
   * Data of type ::OSM2_Fl_VehInLaneChg::OSM2_Fl_VehInLaneChg 
   * \vpublic
   */
  events::OSM2_Fl_VehInLaneChg OSM2_Fl_VehInLaneChg;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Prm_DynCalPrmForVehTyp' which can be used by application developer.
   * \details
   * Data of type ::DynCalPrmForVehTyp::DynCalPrmForVehTyp 
   * \vpublic
   */
  events::OSM2_Prm_DynCalPrmForVehTyp OSM2_Prm_DynCalPrmForVehTyp;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_NGPSts' which can be used by application developer.
   * \details
   * Data of type ::NgpSts1::NgpSts1 
   * \vpublic
   */
  events::OSM2_St_NGPSts OSM2_St_NGPSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_St_HWASts' which can be used by application developer.
   * \details
   * Data of type ::TjaSts::TjaSts 
   * \vpublic
   */
  events::OSM2_St_HWASts OSM2_St_HWASts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_SteerWhlSnsr' which can be used by application developer.
   * \details
   * Data of type ::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1 
   * \vpublic
   */
  events::OSM2_Bus_SteerWhlSnsr OSM2_Bus_SteerWhlSnsr;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_WhlInfoGroup' which can be used by application developer.
   * \details
   * Data of type ::WhlInfoGroup::WhlInfoGroup 
   * \vpublic
   */
  events::OSM2_Bus_WhlInfoGroup OSM2_Bus_WhlInfoGroup;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_Vin' which can be used by application developer.
   * \details
   * Data of type ::Vin1Vcc::Vin1Vcc 
   * \vpublic
   */
  events::OSM2_Bus_Vin OSM2_Bus_Vin;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_LOCSts' which can be used by application developer.
   * \details
   * Data of type ::LOCSts1Vcc::LOCSts1Vcc 
   * \vpublic
   */
  events::OSM2_Bus_LOCSts OSM2_Bus_LOCSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_EgoMotionData' which can be used by application developer.
   * \details
   * Data of type ::EgoMotion::EgoMotion 
   * \vpublic
   */
  events::OSM2_Bus_EgoMotionData OSM2_Bus_EgoMotionData;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Ti_TimeStamp' which can be used by application developer.
   * \details
   * Data of type ::OSM2TimeStamp::OSM2TimeStamp 
   * \vpublic
   */
  events::OSM2_Ti_TimeStamp OSM2_Ti_TimeStamp;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace localizationfusionsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_H_

