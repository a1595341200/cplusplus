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
/**        \file  ObjectFusionModelExe/include/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'PerceptionSI_VisnObjOut'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_UPDATE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut_proxy_backend_interface.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut_types.h"

namespace perceptionsi_visnobjout {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_VisnObj'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_VisnObj = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::VisObjs::VisObjs, PerceptionSI_VisnObjOutProxyBackendInterface,
      &perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface::GetEventBackendFrntCam_Bus_VisnObj>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'PerceptionSI_VisnObjOut'
 * \remark generated
 */
class PerceptionSI_VisnObjOutProxyUpdateManager : public PerceptionSI_VisnObjOutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_VisnObjOutProxyBackendInterface>{
 public:
  using BackendInterfaceType = PerceptionSI_VisnObjOutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_VisnObjOutProxyBackendInterface>;

  PerceptionSI_VisnObjOutProxyUpdateManager() = delete;

  PerceptionSI_VisnObjOutProxyUpdateManager(PerceptionSI_VisnObjOutProxyUpdateManager const &) = delete;

  PerceptionSI_VisnObjOutProxyUpdateManager(PerceptionSI_VisnObjOutProxyUpdateManager &&) = delete;

  PerceptionSI_VisnObjOutProxyUpdateManager &operator=(PerceptionSI_VisnObjOutProxyUpdateManager const &) & = delete;

  PerceptionSI_VisnObjOutProxyUpdateManager &operator=(PerceptionSI_VisnObjOutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~PerceptionSI_VisnObjOutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  PerceptionSI_VisnObjOutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_VisnObj);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_VisnObj'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::VisObjs::VisObjs>& GetEventBackendFrntCam_Bus_VisnObj() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_VisnObj;
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
   * \brief Proxy event update manager for 'FrntCam_Bus_VisnObj'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_VisnObj proxyEventUpdateManagerFrntCam_Bus_VisnObj{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace perceptionsi_visnobjout

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_PROXY_UPDATE_MANAGER_H_

