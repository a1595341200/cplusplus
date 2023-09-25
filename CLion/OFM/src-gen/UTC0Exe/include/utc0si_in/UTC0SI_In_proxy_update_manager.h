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
/**        \file  UTC0Exe/include/utc0si_in/UTC0SI_In_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'UTC0SI_In'.
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

#ifndef UTC0EXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_UPDATE_MANAGER_H_
#define UTC0EXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "utc0si_in/UTC0SI_In_proxy_backend_interface.h"
#include "utc0si_in/UTC0SI_In_types.h"

namespace utc0si_in {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'OSM2_Bus_VehTiAndData'.
 *
 */
using ProxyEventUpdateManagerOSM2_Bus_VehTiAndData = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::DateTi30_2::DateTi30_2, UTC0SI_InProxyBackendInterface,
      &utc0si_in::internal::UTC0SI_InProxyBackendInterface::GetEventBackendOSM2_Bus_VehTiAndData>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'UTC0SI_In'
 * \remark generated
 */
class UTC0SI_InProxyUpdateManager : public UTC0SI_InProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<UTC0SI_InProxyBackendInterface>{
 public:
  using BackendInterfaceType = UTC0SI_InProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<UTC0SI_InProxyBackendInterface>;

  UTC0SI_InProxyUpdateManager() = delete;

  UTC0SI_InProxyUpdateManager(UTC0SI_InProxyUpdateManager const &) = delete;

  UTC0SI_InProxyUpdateManager(UTC0SI_InProxyUpdateManager &&) = delete;

  UTC0SI_InProxyUpdateManager &operator=(UTC0SI_InProxyUpdateManager const &) & = delete;

  UTC0SI_InProxyUpdateManager &operator=(UTC0SI_InProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~UTC0SI_InProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  UTC0SI_InProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerOSM2_Bus_VehTiAndData);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'OSM2_Bus_VehTiAndData'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::DateTi30_2::DateTi30_2>& GetEventBackendOSM2_Bus_VehTiAndData() noexcept override {
      return proxyEventUpdateManagerOSM2_Bus_VehTiAndData;
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
   * \brief Proxy event update manager for 'OSM2_Bus_VehTiAndData'.
   */
  events::ProxyEventUpdateManagerOSM2_Bus_VehTiAndData proxyEventUpdateManagerOSM2_Bus_VehTiAndData{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace utc0si_in

#endif  // UTC0EXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_PROXY_UPDATE_MANAGER_H_

