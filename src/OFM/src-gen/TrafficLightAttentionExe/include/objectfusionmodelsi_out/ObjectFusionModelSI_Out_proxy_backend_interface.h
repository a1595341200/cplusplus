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
/**        \file  TrafficLightAttentionExe/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'ObjectFusionModelSI_Out'.
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_BACKEND_INTERFACE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h"

namespace objectfusionmodelsi_out {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'ObjectFusionModelSI_Out'
 * \remark generated
 */
class ObjectFusionModelSI_OutProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  ObjectFusionModelSI_OutProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~ObjectFusionModelSI_OutProxyBackendInterface() noexcept = default;

  ObjectFusionModelSI_OutProxyBackendInterface(ObjectFusionModelSI_OutProxyBackendInterface const &) = delete;

  ObjectFusionModelSI_OutProxyBackendInterface(ObjectFusionModelSI_OutProxyBackendInterface &&) = delete;

  ObjectFusionModelSI_OutProxyBackendInterface &operator=(ObjectFusionModelSI_OutProxyBackendInterface const &) & = delete;

  ObjectFusionModelSI_OutProxyBackendInterface &operator=(ObjectFusionModelSI_OutProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_11'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>& GetEventBackendOFM_Bus_FusedTargets_11() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_St_SOCFusedSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOCFusedSts::SOCFusedSts>& GetEventBackendOFM_St_SOCFusedSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FourDRadarECUSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FourDRadarECUSts::FourDRadarECUSts>& GetEventBackendOFM_Bus_FourDRadarECUSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FrontFourDRadarSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>& GetEventBackendOFM_Bus_FrontFourDRadarSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_22'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>& GetEventBackendOFM_Bus_FusedTargets_22() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_32'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ObjGroup2Vccs_10::ObjGroup2Vccs_10>& GetEventBackendOFM_Bus_FusedTargets_32() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_St_FrntRdrObjE2Efail'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FrntRdrObjE2Efail::FrntRdrObjE2Efail>& GetEventBackendOFM_St_FrntRdrObjE2Efail() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OFM_St_FrntRdrObjTO'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::FrntRdrObjTO::FrntRdrObjTO>& GetEventBackendOFM_St_FrntRdrObjTO() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace objectfusionmodelsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_PROXY_BACKEND_INTERFACE_H_

