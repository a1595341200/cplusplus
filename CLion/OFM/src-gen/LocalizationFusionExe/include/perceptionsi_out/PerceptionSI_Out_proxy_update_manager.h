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
/**        \file  LocalizationFusionExe/include/perceptionsi_out/PerceptionSI_Out_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'PerceptionSI_Out'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_UPDATE_MANAGER_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "perceptionsi_out/PerceptionSI_Out_proxy_backend_interface.h"
#include "perceptionsi_out/PerceptionSI_Out_types.h"

namespace perceptionsi_out {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_RoadSign'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_RoadSign = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::RoadSigns::RoadSigns, PerceptionSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface::GetEventBackendFrntCam_Bus_RoadSign>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_TrfcSign'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_TrfcSign = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::TrfcSigns::TrfcSigns, PerceptionSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface::GetEventBackendFrntCam_Bus_TrfcSign>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_StopLine'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_StopLine = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::StopLine::StopLine, PerceptionSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface::GetEventBackendFrntCam_Bus_StopLine>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_Crosswalk'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_Crosswalk = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::Crosswalk::Crosswalk, PerceptionSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface::GetEventBackendFrntCam_Bus_Crosswalk>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_TrfcLi'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_TrfcLi = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::TrfcLi1Vccs::TrfcLi1Vccs, PerceptionSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface::GetEventBackendFrntCam_Bus_TrfcLi>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_ExtInfo'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_ExtInfo = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::ExtInfo::ExtInfo, PerceptionSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface::GetEventBackendFrntCam_Bus_ExtInfo>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_LsrObj'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_LsrObj = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LsrObj::LsrObj, PerceptionSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface::GetEventBackendFrntCam_Bus_LsrObj>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'PerceptionSI_Out'
 * \remark generated
 */
class PerceptionSI_OutProxyUpdateManager : public PerceptionSI_OutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_OutProxyBackendInterface>{
 public:
  using BackendInterfaceType = PerceptionSI_OutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_OutProxyBackendInterface>;

  PerceptionSI_OutProxyUpdateManager() = delete;

  PerceptionSI_OutProxyUpdateManager(PerceptionSI_OutProxyUpdateManager const &) = delete;

  PerceptionSI_OutProxyUpdateManager(PerceptionSI_OutProxyUpdateManager &&) = delete;

  PerceptionSI_OutProxyUpdateManager &operator=(PerceptionSI_OutProxyUpdateManager const &) & = delete;

  PerceptionSI_OutProxyUpdateManager &operator=(PerceptionSI_OutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~PerceptionSI_OutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  PerceptionSI_OutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_RoadSign);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_TrfcSign);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_StopLine);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_Crosswalk);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_TrfcLi);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_ExtInfo);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_LsrObj);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadSign'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadSigns::RoadSigns>& GetEventBackendFrntCam_Bus_RoadSign() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_RoadSign;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcSign'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrfcSigns::TrfcSigns>& GetEventBackendFrntCam_Bus_TrfcSign() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_TrfcSign;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_StopLine'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::StopLine::StopLine>& GetEventBackendFrntCam_Bus_StopLine() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_StopLine;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_Crosswalk'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::Crosswalk::Crosswalk>& GetEventBackendFrntCam_Bus_Crosswalk() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_Crosswalk;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcLi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::TrfcLi1Vccs::TrfcLi1Vccs>& GetEventBackendFrntCam_Bus_TrfcLi() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_TrfcLi;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_ExtInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ExtInfo::ExtInfo>& GetEventBackendFrntCam_Bus_ExtInfo() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_ExtInfo;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_LsrObj'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LsrObj::LsrObj>& GetEventBackendFrntCam_Bus_LsrObj() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_LsrObj;
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
   * \brief Proxy event update manager for 'FrntCam_Bus_RoadSign'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_RoadSign proxyEventUpdateManagerFrntCam_Bus_RoadSign{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_TrfcSign'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_TrfcSign proxyEventUpdateManagerFrntCam_Bus_TrfcSign{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_StopLine'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_StopLine proxyEventUpdateManagerFrntCam_Bus_StopLine{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_Crosswalk'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_Crosswalk proxyEventUpdateManagerFrntCam_Bus_Crosswalk{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_TrfcLi'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_TrfcLi proxyEventUpdateManagerFrntCam_Bus_TrfcLi{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_ExtInfo'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_ExtInfo proxyEventUpdateManagerFrntCam_Bus_ExtInfo{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_LsrObj'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_LsrObj proxyEventUpdateManagerFrntCam_Bus_LsrObj{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace perceptionsi_out

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PROXY_UPDATE_MANAGER_H_

