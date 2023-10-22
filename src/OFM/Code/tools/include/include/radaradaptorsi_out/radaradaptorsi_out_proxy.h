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
/**        \file  ObjectFusionModelExe/include/radaradaptorsi_out/radaradaptorsi_out_proxy.h
 *        \brief  Proxy for service 'RadarAdaptorSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_H_

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
#include "radaradaptorsi_out/RadarAdaptorSI_Out_proxy_backend_interface.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_proxy_update_manager.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace radaradaptorsi_out {

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
 * \brief Type alias for service event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts =
    ::amsr::socal::events::ProxyEvent<::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts>;

/*!
 * \brief Type alias for service event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 =
    ::amsr::socal::events::ProxyEvent<::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10>;

/*!
 * \brief Type alias for service event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 =
    ::amsr::socal::events::ProxyEvent<::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20>;

/*!
 * \brief Type alias for service event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 =
    ::amsr::socal::events::ProxyEvent<::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30>;

/*!
 * \brief Type alias for service event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 =
    ::amsr::socal::events::ProxyEvent<::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40>;

/*!
 * \brief Type alias for service event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05', that is part of the proxy.
 *
 * \trace SPEC-4980345
 */

using FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 =
    ::amsr::socal::events::ProxyEvent<::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Proxy class for the service 'RadarAdaptorSI_Out'.
 * \vpublic
 *
 * \trace SPEC-4980344
 */
class RadarAdaptorSI_OutProxy : public ::amsr::socal::Proxy<radaradaptorsi_out::RadarAdaptorSI_Out, radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface, radaradaptorsi_out::internal::RadarAdaptorSI_OutHandleType> {
 public:

  /*!
   * \brief Type alias for the ProxyBackendInterface.
   */
  using ProxyBackendInterface = radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface;

  // ==================== Constructors / Destructors (start) ====================

  /*!
  * \brief Exception-less pre-construction of RadarAdaptorSI_OutProxy.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * RadarAdaptorSI_OutProxy::FindService or asynchronous RadarAdaptorSI_OutProxy::StartFindService.
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
  * \brief Exception-less constructor of RadarAdaptorSI_OutProxy.
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
  explicit RadarAdaptorSI_OutProxy(ConstructionToken&& token) noexcept;

  /*!
  * \brief Constructor of RadarAdaptorSI_OutProxy. Constructor takes a handle returned by
  * RadarAdaptorSI_OutProxy::FindService() method or provided as parameter to the callback handler of
  * RadarAdaptorSI_OutProxy::StartFindService().
  *
  * \details Because of internal resource management strategy, all created proxies shall be released before the Runtime
  * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
  * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
  * segmentation fault.
  *
  * \param[in] handle The identification of the service the proxy should represent. Handles are generated by synchronous
  * RadarAdaptorSI_OutProxy::FindService or asynchronous RadarAdaptorSI_OutProxy::StartFindService.
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
  explicit RadarAdaptorSI_OutProxy(HandleType const& handle) noexcept;

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
  ~RadarAdaptorSI_OutProxy() noexcept override;

  // ===================== Constructors / Destructors (end) =====================

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Proxy<radaradaptorsi_out::RadarAdaptorSI_Out, ProxyBackendInterface, radaradaptorsi_out::internal::RadarAdaptorSI_OutHandleType>;

  /*!
   * \brief Logger for tracing and debugging
   */
  amsr::socal::internal::logging::AraComLogger logger_;
  
  /*!
   * \brief The proxy update manager as proxy backend.
   */
  radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyUpdateManager proxy_update_manager_;

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
   * \brief Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts' which can be used by application developer.
   * \details
   * Data of type ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts 
   * \vpublic
   */
  events::FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01' which can be used by application developer.
   * \details
   * Data of type ::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10 
   * \vpublic
   */
  events::FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02' which can be used by application developer.
   * \details
   * Data of type ::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20 
   * \vpublic
   */
  events::FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03' which can be used by application developer.
   * \details
   * Data of type ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30 
   * \vpublic
   */
  events::FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04' which can be used by application developer.
   * \details
   * Data of type ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40 
   * \vpublic
   */
  events::FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05' which can be used by application developer.
   * \details
   * Data of type ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42 
   * \vpublic
   */
  events::FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

}  // namespace proxy
}  // namespace radaradaptorsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_H_

