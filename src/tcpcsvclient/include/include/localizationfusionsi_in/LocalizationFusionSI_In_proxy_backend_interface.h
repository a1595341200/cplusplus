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
/**        \file  ObjectFusionModelExe/include/localizationfusionsi_in/LocalizationFusionSI_In_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'LocalizationFusionSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "localizationfusionsi_in/LocalizationFusionSI_In_types.h"

namespace localizationfusionsi_in {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'LocalizationFusionSI_In'
 * \remark generated
 */
class LocalizationFusionSI_InProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  LocalizationFusionSI_InProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~LocalizationFusionSI_InProxyBackendInterface() noexcept = default;

  LocalizationFusionSI_InProxyBackendInterface(LocalizationFusionSI_InProxyBackendInterface const &) = delete;

  LocalizationFusionSI_InProxyBackendInterface(LocalizationFusionSI_InProxyBackendInterface &&) = delete;

  LocalizationFusionSI_InProxyBackendInterface &operator=(LocalizationFusionSI_InProxyBackendInterface const &) & = delete;

  LocalizationFusionSI_InProxyBackendInterface &operator=(LocalizationFusionSI_InProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'OSM2_Bus_GNSSinf1'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::GNSSinf1Vcc::GNSSinf1Vcc>& GetEventBackendOSM2_Bus_GNSSinf1() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_GNSSinf2'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::GNSSinf2Vcc::GNSSinf2Vcc>& GetEventBackendOSM2_Bus_GNSSinf2() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_IMUinf'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::IMUInf1Vcc::IMUInf1Vcc>& GetEventBackendOSM2_Bus_IMUinf() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_INSinf'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::INSinf1Vcc::INSinf1Vcc>& GetEventBackendOSM2_Bus_INSinf() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LaneChgSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LppLaneChgSts::LppLaneChgSts>& GetEventBackendOSM2_Bus_LaneChgSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Fl_VehInLaneChg'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::OSM2_Fl_VehInLaneChg::OSM2_Fl_VehInLaneChg>& GetEventBackendOSM2_Fl_VehInLaneChg() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForVehTyp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForVehTyp::DynCalPrmForVehTyp>& GetEventBackendOSM2_Prm_DynCalPrmForVehTyp() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_NGPSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::NgpSts1::NgpSts1>& GetEventBackendOSM2_St_NGPSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_HWASts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TjaSts::TjaSts>& GetEventBackendOSM2_St_HWASts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_SteerWhlSnsr'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1>& GetEventBackendOSM2_Bus_SteerWhlSnsr() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_WhlInfoGroup'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::WhlInfoGroup::WhlInfoGroup>& GetEventBackendOSM2_Bus_WhlInfoGroup() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_Vin'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::Vin1Vcc::Vin1Vcc>& GetEventBackendOSM2_Bus_Vin() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LOCSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::LOCSts1Vcc::LOCSts1Vcc>& GetEventBackendOSM2_Bus_LOCSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_EgoMotionData'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::EgoMotion::EgoMotion>& GetEventBackendOSM2_Bus_EgoMotionData() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Ti_TimeStamp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::OSM2TimeStamp::OSM2TimeStamp>& GetEventBackendOSM2_Ti_TimeStamp() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace localizationfusionsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_BACKEND_INTERFACE_H_

