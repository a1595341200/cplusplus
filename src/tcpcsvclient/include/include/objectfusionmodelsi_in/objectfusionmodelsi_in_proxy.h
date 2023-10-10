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
/**        \file  ObjectFusionModelExe/include/objectfusionmodelsi_in/objectfusionmodelsi_in_proxy.h
 *        \brief  Proxy for service 'ObjectFusionModelSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_H_

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
#include "objectfusionmodelsi_in/ObjectFusionModelSI_In_proxy_backend_interface.h"
#include "objectfusionmodelsi_in/ObjectFusionModelSI_In_proxy_update_manager.h"
#include "objectfusionmodelsi_in/ObjectFusionModelSI_In_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace objectfusionmodelsi_in {

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
 * \brief Type alias for service event 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt =
    ::amsr::socal::events::ProxyEvent<::DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt>;

/*!
 * \brief Type alias for service event 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt =
    ::amsr::socal::events::ProxyEvent<::DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt>;

/*!
 * \brief Type alias for service event 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt =
    ::amsr::socal::events::ProxyEvent<::DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_VehCfgPrmInt', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_VehCfgPrmInt =
    ::amsr::socal::events::ProxyEvent<::VehCfgPrmInt1Vcc::VehCfgPrmInt1Vcc>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_VehSpdLgtSafeGroupChkd', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_VehSpdLgtSafeGroupChkd =
    ::amsr::socal::events::ProxyEvent<::VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd>;

/*!
 * \brief Type alias for service event 'OSM2_Bus_AsyDataWithCmpSafeChkd', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using OSM2_Bus_AsyDataWithCmpSafeChkd =
    ::amsr::socal::events::ProxyEvent<::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'ObjectFusionModelSI_In'.
 * \vpublic
 *
 * \trace SPEC-4980344
 */
class ObjectFusionModelSI_InProxy : public ::amsr::socal::Proxy<objectfusionmodelsi_in::ObjectFusionModelSI_In, objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface, objectfusionmodelsi_in::internal::ObjectFusionModelSI_InHandleType> {
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of ObjectFusionModelSI_InProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * ObjectFusionModelSI_InProxy::FindService or asynchronous ObjectFusionModelSI_InProxy::StartFindService.
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
  * \brief Exception-less constructor of ObjectFusionModelSI_InProxy.
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
  explicit ObjectFusionModelSI_InProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of ObjectFusionModelSI_InProxy. Constructor takes a handle returned by
  * ObjectFusionModelSI_InProxy::FindService() method or provided as parameter to the callback handler of
  * ObjectFusionModelSI_InProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * ObjectFusionModelSI_InProxy::FindService or asynchronous ObjectFusionModelSI_InProxy::StartFindService.
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
  explicit ObjectFusionModelSI_InProxy(HandleType const& handle) noexcept;

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
  ~ObjectFusionModelSI_InProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Proxy<objectfusionmodelsi_in::ObjectFusionModelSI_In, ProxyBackendInterface, objectfusionmodelsi_in::internal::ObjectFusionModelSI_InHandleType>;

  /*!
   * \brief Logger for tracing and debugging
   */
  amsr::socal::internal::logging::AraComLogger logger_;
  
  /*!
   * \brief The proxy update manager as proxy backend.
   */
  objectfusionmodelsi_in::internal::ObjectFusionModelSI_InProxyUpdateManager proxy_update_manager_;

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
   * \brief Event 'OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt' which can be used by application developer.
   * \details
   * Data of type ::DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt 
   * \vpublic
   */
  events::OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt OSM2_Prm_DynCalPrmForAxleDstReToVehFrnt;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt' which can be used by application developer.
   * \details
   * Data of type ::DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt 
   * \vpublic
   */
  events::OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt OSM2_Prm_DynCalPrmForCamLongDistToVehFrnt;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt' which can be used by application developer.
   * \details
   * Data of type ::DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt 
   * \vpublic
   */
  events::OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt OSM2_Prm_DynCalPrmForCamLatDistToVehFrnt;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_VehCfgPrmInt' which can be used by application developer.
   * \details
   * Data of type ::VehCfgPrmInt1Vcc::VehCfgPrmInt1Vcc 
   * \vpublic
   */
  events::OSM2_Bus_VehCfgPrmInt OSM2_Bus_VehCfgPrmInt;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_VehSpdLgtSafeGroupChkd' which can be used by application developer.
   * \details
   * Data of type ::VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd 
   * \vpublic
   */
  events::OSM2_Bus_VehSpdLgtSafeGroupChkd OSM2_Bus_VehSpdLgtSafeGroupChkd;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'OSM2_Bus_AsyDataWithCmpSafeChkd' which can be used by application developer.
   * \details
   * Data of type ::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd 
   * \vpublic
   */
  events::OSM2_Bus_AsyDataWithCmpSafeChkd OSM2_Bus_AsyDataWithCmpSafeChkd;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace objectfusionmodelsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_IN_OBJECTFUSIONMODELSI_IN_PROXY_H_

