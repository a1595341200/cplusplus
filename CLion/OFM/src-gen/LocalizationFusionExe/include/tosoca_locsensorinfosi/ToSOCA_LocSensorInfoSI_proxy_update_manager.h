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
/**        \file  LocalizationFusionExe/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'ToSOCA_LocSensorInfoSI'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_UPDATE_MANAGER_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_backend_interface.h"
#include "tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_types.h"

namespace tosoca_locsensorinfosi {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_LocSensorInfo'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_LocSensorInfo = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LocSensorInfo1VCC::LocSensorInfo1VCC, ToSOCA_LocSensorInfoSIProxyBackendInterface,
      &tosoca_locsensorinfosi::internal::ToSOCA_LocSensorInfoSIProxyBackendInterface::GetEventBackendOSM2_Bus_LocSensorInfo>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'ToSOCA_LocSensorInfoSI'
 * \remark generated
 */
class ToSOCA_LocSensorInfoSIProxyUpdateManager : public ToSOCA_LocSensorInfoSIProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<ToSOCA_LocSensorInfoSIProxyBackendInterface>{
 public:
  using BackendInterfaceType = ToSOCA_LocSensorInfoSIProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<ToSOCA_LocSensorInfoSIProxyBackendInterface>;

  ToSOCA_LocSensorInfoSIProxyUpdateManager() = delete;

  ToSOCA_LocSensorInfoSIProxyUpdateManager(ToSOCA_LocSensorInfoSIProxyUpdateManager const &) = delete;

  ToSOCA_LocSensorInfoSIProxyUpdateManager(ToSOCA_LocSensorInfoSIProxyUpdateManager &&) = delete;

  ToSOCA_LocSensorInfoSIProxyUpdateManager &operator=(ToSOCA_LocSensorInfoSIProxyUpdateManager const &) & = delete;

  ToSOCA_LocSensorInfoSIProxyUpdateManager &operator=(ToSOCA_LocSensorInfoSIProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~ToSOCA_LocSensorInfoSIProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  ToSOCA_LocSensorInfoSIProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_LocSensorInfo);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_LocSensorInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LocSensorInfo1VCC::LocSensorInfo1VCC>& GetEventBackendOSM2_Bus_LocSensorInfo() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_LocSensorInfo;
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
   * \brief Proxy event update manager for 'OSM2_Bus_LocSensorInfo'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_LocSensorInfo proxyEventUpdateManagerOSM2_Bus_LocSensorInfo{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace tosoca_locsensorinfosi

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PROXY_UPDATE_MANAGER_H_

