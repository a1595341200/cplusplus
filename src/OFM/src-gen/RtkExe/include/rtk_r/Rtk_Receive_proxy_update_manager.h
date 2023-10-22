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
/**        \file  RtkExe/include/rtk_r/Rtk_Receive_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'Rtk_Receive'.
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

#ifndef RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_UPDATE_MANAGER_H_
#define RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "rtk_r/Rtk_Receive_proxy_backend_interface.h"
#include "rtk_r/Rtk_Receive_types.h"

namespace rtk_r {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'GgaData_receive'.
 *
 */
using ProxyEventUpdateManagerGgaData_receive = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::SOMEIP::ValidationKey::GgaData, Rtk_ReceiveProxyBackendInterface,
      &rtk_r::internal::Rtk_ReceiveProxyBackendInterface::GetEventBackendGgaData_receive>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'Rtk_Receive'
 * \remark generated
 */
class Rtk_ReceiveProxyUpdateManager : public Rtk_ReceiveProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<Rtk_ReceiveProxyBackendInterface>{
 public:
  using BackendInterfaceType = Rtk_ReceiveProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<Rtk_ReceiveProxyBackendInterface>;

  Rtk_ReceiveProxyUpdateManager() = delete;

  Rtk_ReceiveProxyUpdateManager(Rtk_ReceiveProxyUpdateManager const &) = delete;

  Rtk_ReceiveProxyUpdateManager(Rtk_ReceiveProxyUpdateManager &&) = delete;

  Rtk_ReceiveProxyUpdateManager &operator=(Rtk_ReceiveProxyUpdateManager const &) & = delete;

  Rtk_ReceiveProxyUpdateManager &operator=(Rtk_ReceiveProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~Rtk_ReceiveProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  Rtk_ReceiveProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerGgaData_receive);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'GgaData_receive'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::SOMEIP::ValidationKey::GgaData>& GetEventBackendGgaData_receive() noexcept override {
      return proxyEventUpdateManagerGgaData_receive;
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
   * \brief Proxy event update manager for 'GgaData_receive'.
   */
  events::ProxyEventUpdateManagerGgaData_receive proxyEventUpdateManagerGgaData_receive{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace rtk_r

#endif  // RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_PROXY_UPDATE_MANAGER_H_

