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
/**        \file  TrafficSignInformationExe/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'PerceptionSI_CamStsOut'.
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_UPDATE_MANAGER_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_backend_interface.h"
#include "perceptionsi_camstsout/PerceptionSI_CamStsOut_types.h"

namespace perceptionsi_camstsout {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_CamSts'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_CamSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::CamSts1Vcc::CamSts1Vcc, PerceptionSI_CamStsOutProxyBackendInterface,
      &perceptionsi_camstsout::internal::PerceptionSI_CamStsOutProxyBackendInterface::GetEventBackendFrntCam_Bus_CamSts>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'PerceptionSI_CamStsOut'
 * \remark generated
 */
class PerceptionSI_CamStsOutProxyUpdateManager : public PerceptionSI_CamStsOutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_CamStsOutProxyBackendInterface>{
 public:
  using BackendInterfaceType = PerceptionSI_CamStsOutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_CamStsOutProxyBackendInterface>;

  PerceptionSI_CamStsOutProxyUpdateManager() = delete;

  PerceptionSI_CamStsOutProxyUpdateManager(PerceptionSI_CamStsOutProxyUpdateManager const &) = delete;

  PerceptionSI_CamStsOutProxyUpdateManager(PerceptionSI_CamStsOutProxyUpdateManager &&) = delete;

  PerceptionSI_CamStsOutProxyUpdateManager &operator=(PerceptionSI_CamStsOutProxyUpdateManager const &) & = delete;

  PerceptionSI_CamStsOutProxyUpdateManager &operator=(PerceptionSI_CamStsOutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~PerceptionSI_CamStsOutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  PerceptionSI_CamStsOutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_CamSts);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_CamSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::CamSts1Vcc::CamSts1Vcc>& GetEventBackendFrntCam_Bus_CamSts() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_CamSts;
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
   * \brief Proxy event update manager for 'FrntCam_Bus_CamSts'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_CamSts proxyEventUpdateManagerFrntCam_Bus_CamSts{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace perceptionsi_camstsout

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_PROXY_UPDATE_MANAGER_H_

