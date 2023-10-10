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
/**        \file  ObjectFusionModelExe/include/radaradaptorsi_out/RadarAdaptorSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'RadarAdaptorSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_types.h"

namespace radaradaptorsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'RadarAdaptorSI_Out'
 * \remark generated
 */
class RadarAdaptorSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  RadarAdaptorSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~RadarAdaptorSI_OutProxyBackendInterface() noexcept = default;

  RadarAdaptorSI_OutProxyBackendInterface(RadarAdaptorSI_OutProxyBackendInterface const &) = delete;

  RadarAdaptorSI_OutProxyBackendInterface(RadarAdaptorSI_OutProxyBackendInterface &&) = delete;

  RadarAdaptorSI_OutProxyBackendInterface &operator=(RadarAdaptorSI_OutProxyBackendInterface const &) & = delete;

  RadarAdaptorSI_OutProxyBackendInterface &operator=(RadarAdaptorSI_OutProxyBackendInterface &&) & = delete;

  /*!
   * \brief Notifies the server side that the service has been requested.
   * \return Result containing no value or an error.
   * \error ComErrc::kGrantEnforcementError If the request is refused by IAM.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  virtual ::ara::core::Result<void> RequestService() noexcept = 0;

  /*!
   * \brief Notifies the server side that the service has been released.
   * \pre        -
   * \context    App
   * \threadsafe TRUE
   * \reentrant  TRUE
   * \synchronus TRUE
   */
  virtual void ReleaseService() noexcept = 0;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts>& GetEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp01_10::FourDRadarObjStsGrp01_10>& GetEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp11_20::FourDRadarObjStsGrp11_20>& GetEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30>& GetEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40>& GetEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42>& GetEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace radaradaptorsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_RADARADAPTORSI_OUT_RADARADAPTORSI_OUT_PROXY_BACKEND_INTERFACE_H_

