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
/**        \file  ObjectFusionModelExe/include/trafficsigninformationsi_in/TrafficSignInformationSI_In_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'TrafficSignInformationSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_UPDATE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "trafficsigninformationsi_in/TrafficSignInformationSI_In_proxy_backend_interface.h"
#include "trafficsigninformationsi_in/TrafficSignInformationSI_In_types.h"

namespace trafficsigninformationsi_in {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Ena_TrfcSignInfoEna'.
 *
 */
using ProxyEventUpdateManagerOSM2_Ena_TrfcSignInfoEna = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::TrfcSignInfoEna::OnOff1Vcc, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Ena_TrfcSignInfoEna>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_RoadSgnInfoActv'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_RoadSgnInfoActv = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::RoadSgnInfoActv0::RoadSgnInfoActv0, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_RoadSgnInfoActv>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_SpdAlrmActvForRoadSgnInfo = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_SpdAlrmActvForRoadSgnInfo>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_RoadMiscSgnInfoSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_RoadMiscSgnInfoSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::RoadMiscSgnInfoSts::RoadMiscSgnInfoSts, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_RoadMiscSgnInfoSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_DoorPassSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_DoorPassSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DoorPassSts::DoorPassSts, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_DoorPassSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_DoorLeReSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_DoorLeReSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DoorLeReSts::DoorLeReSts, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_DoorLeReSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_DoorRiReSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_DoorRiReSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DoorRiReSts::DoorRiReSts, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_DoorRiReSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_HoodSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_HoodSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::HoodSts::HoodSts, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_HoodSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_TrSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_TrSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::TrSts::TrSts, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_TrSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_BltLockStAtDrvr'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_BltLockStAtDrvr = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::BltLockStFrnt::BltLockStFrnt, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_BltLockStAtDrvr>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_HznSplyElectcSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_HznSplyElectcSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::HznSplyElectcSts1::HznSplyElectcSts1, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_HznSplyElectcSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_TsiFaultSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_TsiFaultSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::TsiFaultSts::TsiFaultSts, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_St_TsiFaultSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Req_OffsForSpdWarnSetgReq'.
 *
 */
using ProxyEventUpdateManagerOSM2_Req_OffsForSpdWarnSetgReq = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Req_OffsForSpdWarnSetgReq>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_AccFusnTrfcReq'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_AccFusnTrfcReq = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::AccFusnTrfcReq::AccFusnTrfcReq, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_AccFusnTrfcReq>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_IndcrTurnReq'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_IndcrTurnReq = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::IndcrTurnReq::IndcrTurnReq, TrafficSignInformationSI_InProxyBackendInterface,
      &trafficsigninformationsi_in::internal::TrafficSignInformationSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_IndcrTurnReq>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'TrafficSignInformationSI_In'
 * \remark generated
 */
class TrafficSignInformationSI_InProxyUpdateManager : public TrafficSignInformationSI_InProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<TrafficSignInformationSI_InProxyBackendInterface>{
 public:
  using BackendInterfaceType = TrafficSignInformationSI_InProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<TrafficSignInformationSI_InProxyBackendInterface>;

  TrafficSignInformationSI_InProxyUpdateManager() = delete;

  TrafficSignInformationSI_InProxyUpdateManager(TrafficSignInformationSI_InProxyUpdateManager const &) = delete;

  TrafficSignInformationSI_InProxyUpdateManager(TrafficSignInformationSI_InProxyUpdateManager &&) = delete;

  TrafficSignInformationSI_InProxyUpdateManager &operator=(TrafficSignInformationSI_InProxyUpdateManager const &) & = delete;

  TrafficSignInformationSI_InProxyUpdateManager &operator=(TrafficSignInformationSI_InProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~TrafficSignInformationSI_InProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  TrafficSignInformationSI_InProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Ena_TrfcSignInfoEna);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_RoadSgnInfoActv);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_SpdAlrmActvForRoadSgnInfo);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_RoadMiscSgnInfoSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_DoorPassSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_DoorLeReSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_DoorRiReSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_HoodSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_TrSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_BltLockStAtDrvr);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_HznSplyElectcSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_TsiFaultSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Req_OffsForSpdWarnSetgReq);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_AccFusnTrfcReq);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_IndcrTurnReq);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Ena_TrfcSignInfoEna'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrfcSignInfoEna::OnOff1Vcc>& GetEventBackendOSM2_Ena_TrfcSignInfoEna() noexcept override {
      return proxyEventUpdateManagerOSM2_Ena_TrfcSignInfoEna;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_RoadSgnInfoActv'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadSgnInfoActv0::RoadSgnInfoActv0>& GetEventBackendOSM2_Bus_RoadSgnInfoActv() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_RoadSgnInfoActv;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0>& GetEventBackendOSM2_Bus_SpdAlrmActvForRoadSgnInfo() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_SpdAlrmActvForRoadSgnInfo;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_RoadMiscSgnInfoSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadMiscSgnInfoSts::RoadMiscSgnInfoSts>& GetEventBackendOSM2_St_RoadMiscSgnInfoSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_RoadMiscSgnInfoSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_DoorPassSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DoorPassSts::DoorPassSts>& GetEventBackendOSM2_St_DoorPassSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_DoorPassSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_DoorLeReSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DoorLeReSts::DoorLeReSts>& GetEventBackendOSM2_St_DoorLeReSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_DoorLeReSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_DoorRiReSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DoorRiReSts::DoorRiReSts>& GetEventBackendOSM2_St_DoorRiReSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_DoorRiReSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_HoodSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::HoodSts::HoodSts>& GetEventBackendOSM2_St_HoodSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_HoodSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_TrSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrSts::TrSts>& GetEventBackendOSM2_St_TrSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_TrSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_BltLockStAtDrvr'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::BltLockStFrnt::BltLockStFrnt>& GetEventBackendOSM2_Bus_BltLockStAtDrvr() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_BltLockStAtDrvr;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_HznSplyElectcSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::HznSplyElectcSts1::HznSplyElectcSts1>& GetEventBackendOSM2_St_HznSplyElectcSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_HznSplyElectcSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_TsiFaultSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TsiFaultSts::TsiFaultSts>& GetEventBackendOSM2_St_TsiFaultSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_TsiFaultSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Req_OffsForSpdWarnSetgReq'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq>& GetEventBackendOSM2_Req_OffsForSpdWarnSetgReq() noexcept override {
      return proxyEventUpdateManagerOSM2_Req_OffsForSpdWarnSetgReq;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_AccFusnTrfcReq'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::AccFusnTrfcReq::AccFusnTrfcReq>& GetEventBackendOSM2_Bus_AccFusnTrfcReq() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_AccFusnTrfcReq;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd>& GetEventBackendOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_IndcrTurnReq'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::IndcrTurnReq::IndcrTurnReq>& GetEventBackendOSM2_Bus_IndcrTurnReq() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_IndcrTurnReq;
  }


  // ---- Fields ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Performs all proxy-binding-specific initializations.
   * \return Result containing no value.
   * \pre -
   * \context App
   */
  ::ara::core::Result<void> RequestService() noexcept override {
    // Nothing to be done here. TODO(visgut): Most likely bauhaus justification required.
    return ::ara::core::Result<void>{};
  }

  /*!
   * \brief Releases the service from the backend.
   * \pre -
   * \context App
   */
  void ReleaseService() noexcept override { 
  // Intentionally left empty.
  }

 private:
  /*!
   * \brief Proxy event update manager for 'OSM2_Ena_TrfcSignInfoEna'.
   */
  events::ProxyEventUpdateManagerOSM2_Ena_TrfcSignInfoEna proxyEventUpdateManagerOSM2_Ena_TrfcSignInfoEna{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_RoadSgnInfoActv'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_RoadSgnInfoActv proxyEventUpdateManagerOSM2_Bus_RoadSgnInfoActv{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_SpdAlrmActvForRoadSgnInfo'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_SpdAlrmActvForRoadSgnInfo proxyEventUpdateManagerOSM2_Bus_SpdAlrmActvForRoadSgnInfo{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_RoadMiscSgnInfoSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_RoadMiscSgnInfoSts proxyEventUpdateManagerOSM2_St_RoadMiscSgnInfoSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_DoorPassSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_DoorPassSts proxyEventUpdateManagerOSM2_St_DoorPassSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_DoorLeReSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_DoorLeReSts proxyEventUpdateManagerOSM2_St_DoorLeReSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_DoorRiReSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_DoorRiReSts proxyEventUpdateManagerOSM2_St_DoorRiReSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_HoodSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_HoodSts proxyEventUpdateManagerOSM2_St_HoodSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_TrSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_TrSts proxyEventUpdateManagerOSM2_St_TrSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_BltLockStAtDrvr'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_BltLockStAtDrvr proxyEventUpdateManagerOSM2_Bus_BltLockStAtDrvr{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_HznSplyElectcSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_HznSplyElectcSts proxyEventUpdateManagerOSM2_St_HznSplyElectcSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_TsiFaultSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_TsiFaultSts proxyEventUpdateManagerOSM2_St_TsiFaultSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Req_OffsForSpdWarnSetgReq'.
   */
  events::ProxyEventUpdateManagerOSM2_Req_OffsForSpdWarnSetgReq proxyEventUpdateManagerOSM2_Req_OffsForSpdWarnSetgReq{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_AccFusnTrfcReq'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_AccFusnTrfcReq proxyEventUpdateManagerOSM2_Bus_AccFusnTrfcReq{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd proxyEventUpdateManagerOSM2_Bus_ALgtStdFromWhlSpdSafeGroupChkd{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_IndcrTurnReq'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_IndcrTurnReq proxyEventUpdateManagerOSM2_Bus_IndcrTurnReq{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace trafficsigninformationsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICSIGNINFORMATIONSI_IN_TRAFFICSIGNINFORMATIONSI_IN_PROXY_UPDATE_MANAGER_H_

