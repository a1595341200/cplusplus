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
/**        \file  ObjectFusionModelExe/include/trafficsigninformationsi_in/TrafficSignInformationSI_In_proxy_backend_interface.h
 *        \brief  Proxy implementation interface of service 'TrafficSignInformationSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "ara/core/future.h"
#include "trafficsigninformationsi_in/TrafficSignInformationSI_In_types.h"

namespace trafficsigninformationsi_in {
namespace internal {

/*!
 * \brief Proxy backend interface for the Service 'TrafficSignInformationSI_In'
 * \remark generated
 */
class TrafficSignInformationSI_InProxyBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  TrafficSignInformationSI_InProxyBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context App
   * \synchronus TRUE
   */
  virtual ~TrafficSignInformationSI_InProxyBackendInterface() noexcept = default;

  TrafficSignInformationSI_InProxyBackendInterface(TrafficSignInformationSI_InProxyBackendInterface const &) = delete;

  TrafficSignInformationSI_InProxyBackendInterface(TrafficSignInformationSI_InProxyBackendInterface &&) = delete;

  TrafficSignInformationSI_InProxyBackendInterface &operator=(TrafficSignInformationSI_InProxyBackendInterface const &) & = delete;

  TrafficSignInformationSI_InProxyBackendInterface &operator=(TrafficSignInformationSI_InProxyBackendInterface &&) & = delete;

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
   * \brief Get the event manager object for the service event 'OSM2_Ena_TrfcSignInfoEna'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrfcSignInfoEna::OnOff1Vcc>& GetEventBackendOSM2_Ena_TrfcSignInfoEna() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_RoadSgnInfoActv'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadSgnInfoActv0::RoadSgnInfoActv0>& GetEventBackendOSM2_Bus_RoadSgnInfoActv() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0>& GetEventBackendOSM2_Bus_SpdAlrmActvForRoadSgnInfo() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_RoadMiscSgnInfoSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadMiscSgnInfoSts::RoadMiscSgnInfoSts>& GetEventBackendOSM2_St_RoadMiscSgnInfoSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_DoorPassSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DoorPassSts::DoorPassSts>& GetEventBackendOSM2_St_DoorPassSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_DoorLeReSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DoorLeReSts::DoorLeReSts>& GetEventBackendOSM2_St_DoorLeReSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_DoorRiReSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::DoorRiReSts::DoorRiReSts>& GetEventBackendOSM2_St_DoorRiReSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_HoodSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::HoodSts::HoodSts>& GetEventBackendOSM2_St_HoodSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_TrSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrSts::TrSts>& GetEventBackendOSM2_St_TrSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_BltLockStAtDrvr'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::BltLockStFrnt::BltLockStFrnt>& GetEventBackendOSM2_Bus_BltLockStAtDrvr() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_HznSplyElectcSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::HznSplyElectcSts1::HznSplyElectcSts1>& GetEventBackendOSM2_St_HznSplyElectcSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_TsiFaultSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::TsiFaultSts::TsiFaultSts>& GetEventBackendOSM2_St_TsiFaultSts() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Req_OffsForSpdWarnSetgReq'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq>& GetEventBackendOSM2_Req_OffsForSpdWarnSetgReq() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_AccFusnTrfcReq'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::AccFusnTrfcReq::AccFusnTrfcReq>& GetEventBackendOSM2_Bus_AccFusnTrfcReq() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd>& GetEventBackendOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd() noexcept = 0;
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_IndcrTurnReq'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Reactor | Callback
   * \synchronus TRUE
   */
  virtual ::amsr::socal::internal::events::ProxyEventBackendInterface<::IndcrTurnReq::IndcrTurnReq>& GetEventBackendOSM2_Bus_IndcrTurnReq() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} //namespace internal
}  // namespace trafficsigninformationsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_BACKEND_INTERFACE_H_

