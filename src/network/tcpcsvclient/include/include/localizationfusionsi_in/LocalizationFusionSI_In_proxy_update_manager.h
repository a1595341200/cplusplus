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
/**        \file  ObjectFusionModelExe/include/localizationfusionsi_in/LocalizationFusionSI_In_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'LocalizationFusionSI_In'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_UPDATE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "localizationfusionsi_in/LocalizationFusionSI_In_proxy_backend_interface.h"
#include "localizationfusionsi_in/LocalizationFusionSI_In_types.h"

namespace localizationfusionsi_in {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_GNSSinf1'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_GNSSinf1 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::GNSSinf1Vcc::GNSSinf1Vcc, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_GNSSinf1>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_GNSSinf2'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_GNSSinf2 = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::GNSSinf2Vcc::GNSSinf2Vcc, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_GNSSinf2>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_IMUinf'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_IMUinf = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::IMUInf1Vcc::IMUInf1Vcc, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_IMUinf>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_INSinf'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_INSinf = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::INSinf1Vcc::INSinf1Vcc, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_INSinf>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_LaneChgSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_LaneChgSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LppLaneChgSts::LppLaneChgSts, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_LaneChgSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Fl_VehInLaneChg'.
 *
 */
using ProxyEventUpdateManagerOSM2_Fl_VehInLaneChg = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::OSM2_Fl_VehInLaneChg::OSM2_Fl_VehInLaneChg, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Fl_VehInLaneChg>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Prm_DynCalPrmForVehTyp'.
 *
 */
using ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForVehTyp = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DynCalPrmForVehTyp::DynCalPrmForVehTyp, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Prm_DynCalPrmForVehTyp>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_NGPSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_NGPSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::NgpSts1::NgpSts1, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_St_NGPSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_St_HWASts'.
 *
 */
using ProxyEventUpdateManagerOSM2_St_HWASts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::TjaSts::TjaSts, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_St_HWASts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_SteerWhlSnsr'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_SteerWhlSnsr = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_SteerWhlSnsr>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_WhlInfoGroup'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_WhlInfoGroup = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::WhlInfoGroup::WhlInfoGroup, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_WhlInfoGroup>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_Vin'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_Vin = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::Vin1Vcc::Vin1Vcc, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_Vin>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_LOCSts'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_LOCSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LOCSts1Vcc::LOCSts1Vcc, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_LOCSts>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_EgoMotionData'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_EgoMotionData = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::EgoMotion::EgoMotion, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Bus_EgoMotionData>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Ti_TimeStamp'.
 *
 */
using ProxyEventUpdateManagerOSM2_Ti_TimeStamp = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::OSM2TimeStamp::OSM2TimeStamp, LocalizationFusionSI_InProxyBackendInterface,
      &localizationfusionsi_in::internal::LocalizationFusionSI_InProxyBackendInterface::GetEventBackendOSM2_Ti_TimeStamp>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'LocalizationFusionSI_In'
 * \remark generated
 */
class LocalizationFusionSI_InProxyUpdateManager : public LocalizationFusionSI_InProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<LocalizationFusionSI_InProxyBackendInterface>{
 public:
  using BackendInterfaceType = LocalizationFusionSI_InProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<LocalizationFusionSI_InProxyBackendInterface>;

  LocalizationFusionSI_InProxyUpdateManager() = delete;

  LocalizationFusionSI_InProxyUpdateManager(LocalizationFusionSI_InProxyUpdateManager const &) = delete;

  LocalizationFusionSI_InProxyUpdateManager(LocalizationFusionSI_InProxyUpdateManager &&) = delete;

  LocalizationFusionSI_InProxyUpdateManager &operator=(LocalizationFusionSI_InProxyUpdateManager const &) & = delete;

  LocalizationFusionSI_InProxyUpdateManager &operator=(LocalizationFusionSI_InProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~LocalizationFusionSI_InProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  LocalizationFusionSI_InProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_GNSSinf1);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_GNSSinf2);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_IMUinf);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_INSinf);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_LaneChgSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Fl_VehInLaneChg);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Prm_DynCalPrmForVehTyp);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_NGPSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_St_HWASts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_SteerWhlSnsr);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_WhlInfoGroup);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_Vin);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_LOCSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_EgoMotionData);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Ti_TimeStamp);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_GNSSinf1'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::GNSSinf1Vcc::GNSSinf1Vcc>& GetEventBackendOSM2_Bus_GNSSinf1() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_GNSSinf1;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_GNSSinf2'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::GNSSinf2Vcc::GNSSinf2Vcc>& GetEventBackendOSM2_Bus_GNSSinf2() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_GNSSinf2;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_IMUinf'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::IMUInf1Vcc::IMUInf1Vcc>& GetEventBackendOSM2_Bus_IMUinf() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_IMUinf;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_INSinf'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::INSinf1Vcc::INSinf1Vcc>& GetEventBackendOSM2_Bus_INSinf() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_INSinf;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LaneChgSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LppLaneChgSts::LppLaneChgSts>& GetEventBackendOSM2_Bus_LaneChgSts() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_LaneChgSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Fl_VehInLaneChg'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::OSM2_Fl_VehInLaneChg::OSM2_Fl_VehInLaneChg>& GetEventBackendOSM2_Fl_VehInLaneChg() noexcept override {
      return proxyEventUpdateManagerOSM2_Fl_VehInLaneChg;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Prm_DynCalPrmForVehTyp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DynCalPrmForVehTyp::DynCalPrmForVehTyp>& GetEventBackendOSM2_Prm_DynCalPrmForVehTyp() noexcept override {
      return proxyEventUpdateManagerOSM2_Prm_DynCalPrmForVehTyp;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_NGPSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::NgpSts1::NgpSts1>& GetEventBackendOSM2_St_NGPSts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_NGPSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_St_HWASts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TjaSts::TjaSts>& GetEventBackendOSM2_St_HWASts() noexcept override {
      return proxyEventUpdateManagerOSM2_St_HWASts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_SteerWhlSnsr'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1>& GetEventBackendOSM2_Bus_SteerWhlSnsr() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_SteerWhlSnsr;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_WhlInfoGroup'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::WhlInfoGroup::WhlInfoGroup>& GetEventBackendOSM2_Bus_WhlInfoGroup() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_WhlInfoGroup;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_Vin'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::Vin1Vcc::Vin1Vcc>& GetEventBackendOSM2_Bus_Vin() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_Vin;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LOCSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LOCSts1Vcc::LOCSts1Vcc>& GetEventBackendOSM2_Bus_LOCSts() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_LOCSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_EgoMotionData'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::EgoMotion::EgoMotion>& GetEventBackendOSM2_Bus_EgoMotionData() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_EgoMotionData;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Ti_TimeStamp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::OSM2TimeStamp::OSM2TimeStamp>& GetEventBackendOSM2_Ti_TimeStamp() noexcept override {
      return proxyEventUpdateManagerOSM2_Ti_TimeStamp;
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
   * \brief Proxy event update manager for 'OSM2_Bus_GNSSinf1'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_GNSSinf1 proxyEventUpdateManagerOSM2_Bus_GNSSinf1{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_GNSSinf2'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_GNSSinf2 proxyEventUpdateManagerOSM2_Bus_GNSSinf2{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_IMUinf'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_IMUinf proxyEventUpdateManagerOSM2_Bus_IMUinf{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_INSinf'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_INSinf proxyEventUpdateManagerOSM2_Bus_INSinf{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_LaneChgSts'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_LaneChgSts proxyEventUpdateManagerOSM2_Bus_LaneChgSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Fl_VehInLaneChg'.
   */
  events::ProxyEventUpdateManagerOSM2_Fl_VehInLaneChg proxyEventUpdateManagerOSM2_Fl_VehInLaneChg{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Prm_DynCalPrmForVehTyp'.
   */
  events::ProxyEventUpdateManagerOSM2_Prm_DynCalPrmForVehTyp proxyEventUpdateManagerOSM2_Prm_DynCalPrmForVehTyp{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_NGPSts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_NGPSts proxyEventUpdateManagerOSM2_St_NGPSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_St_HWASts'.
   */
  events::ProxyEventUpdateManagerOSM2_St_HWASts proxyEventUpdateManagerOSM2_St_HWASts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_SteerWhlSnsr'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_SteerWhlSnsr proxyEventUpdateManagerOSM2_Bus_SteerWhlSnsr{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_WhlInfoGroup'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_WhlInfoGroup proxyEventUpdateManagerOSM2_Bus_WhlInfoGroup{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_Vin'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_Vin proxyEventUpdateManagerOSM2_Bus_Vin{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_LOCSts'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_LOCSts proxyEventUpdateManagerOSM2_Bus_LOCSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_EgoMotionData'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_EgoMotionData proxyEventUpdateManagerOSM2_Bus_EgoMotionData{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Ti_TimeStamp'.
   */
  events::ProxyEventUpdateManagerOSM2_Ti_TimeStamp proxyEventUpdateManagerOSM2_Ti_TimeStamp{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace localizationfusionsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_PROXY_UPDATE_MANAGER_H_

