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
/**        \file  PerceptionExe/include/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'ToSOCA_InfomationSI'.
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

#ifndef PERCEPTIONEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_UPDATE_MANAGER_H_
#define PERCEPTIONEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "tosoca_infomationsi/ToSOCA_InfomationSI_proxy_backend_interface.h"
#include "tosoca_infomationsi/ToSOCA_InfomationSI_types.h"

namespace tosoca_infomationsi {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_ToSOCA_FunctionInfo'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_ToSOCA_FunctionInfo = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::ToSOCA_FunctionInfo1VCC::ToSOCA_FunctionInfo1VCC, ToSOCA_InfomationSIProxyBackendInterface,
      &tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface::GetEventBackendOSM2_Bus_ToSOCA_FunctionInfo>;
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_ToSOCA_COMInfo'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_ToSOCA_COMInfo = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::ToSOCA_COMInfo1VCC::ToSOCA_COMInfo1VCC, ToSOCA_InfomationSIProxyBackendInterface,
      &tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface::GetEventBackendOSM2_Bus_ToSOCA_COMInfo>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'ToSOCA_InfomationSI'
 * \remark generated
 */
class ToSOCA_InfomationSIProxyUpdateManager : public ToSOCA_InfomationSIProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<ToSOCA_InfomationSIProxyBackendInterface>{
 public:
  using BackendInterfaceType = ToSOCA_InfomationSIProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<ToSOCA_InfomationSIProxyBackendInterface>;

  ToSOCA_InfomationSIProxyUpdateManager() = delete;

  ToSOCA_InfomationSIProxyUpdateManager(ToSOCA_InfomationSIProxyUpdateManager const &) = delete;

  ToSOCA_InfomationSIProxyUpdateManager(ToSOCA_InfomationSIProxyUpdateManager &&) = delete;

  ToSOCA_InfomationSIProxyUpdateManager &operator=(ToSOCA_InfomationSIProxyUpdateManager const &) & = delete;

  ToSOCA_InfomationSIProxyUpdateManager &operator=(ToSOCA_InfomationSIProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~ToSOCA_InfomationSIProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  ToSOCA_InfomationSIProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_ToSOCA_FunctionInfo);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_ToSOCA_COMInfo);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ToSOCA_FunctionInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ToSOCA_FunctionInfo1VCC::ToSOCA_FunctionInfo1VCC>& GetEventBackendOSM2_Bus_ToSOCA_FunctionInfo() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_ToSOCA_FunctionInfo;
  }

  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_ToSOCA_COMInfo'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::ToSOCA_COMInfo1VCC::ToSOCA_COMInfo1VCC>& GetEventBackendOSM2_Bus_ToSOCA_COMInfo() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_ToSOCA_COMInfo;
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
   * \brief Proxy event update manager for 'OSM2_Bus_ToSOCA_FunctionInfo'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_ToSOCA_FunctionInfo proxyEventUpdateManagerOSM2_Bus_ToSOCA_FunctionInfo{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'OSM2_Bus_ToSOCA_COMInfo'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_ToSOCA_COMInfo proxyEventUpdateManagerOSM2_Bus_ToSOCA_COMInfo{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace tosoca_infomationsi

#endif  // PERCEPTIONEXE_INCLUDE_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_UPDATE_MANAGER_H_

