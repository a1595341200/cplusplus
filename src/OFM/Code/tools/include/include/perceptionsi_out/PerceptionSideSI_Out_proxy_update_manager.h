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
/**        \file  ObjectFusionModelExe/include/perceptionsi_out/PerceptionSideSI_Out_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'PerceptionSideSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_UPDATE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "perceptionsi_out/PerceptionSideSI_Out_proxy_backend_interface.h"
#include "perceptionsi_out/PerceptionSideSI_Out_types.h"

namespace perceptionsi_out {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'FLCam_Bus_VisnObj'.
 *
 */
using ProxyEventUpdateManagerFLCam_Bus_VisnObj = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::VisObjs::VisObjs, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendFLCam_Bus_VisnObj>;
/*!
 * \brief Type alias for proxy event update manager for 'FRCam_Bus_VisnObj'.
 *
 */
using ProxyEventUpdateManagerFRCam_Bus_VisnObj = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::VisObjs::VisObjs, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendFRCam_Bus_VisnObj>;
/*!
 * \brief Type alias for proxy event update manager for 'RLCam_Bus_VisnObj'.
 *
 */
using ProxyEventUpdateManagerRLCam_Bus_VisnObj = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::VisObjs::VisObjs, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendRLCam_Bus_VisnObj>;
/*!
 * \brief Type alias for proxy event update manager for 'RRCam_Bus_VisnObj'.
 *
 */
using ProxyEventUpdateManagerRRCam_Bus_VisnObj = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::VisObjs::VisObjs, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendRRCam_Bus_VisnObj>;
/*!
 * \brief Type alias for proxy event update manager for 'FLCam_Bus_CamSts'.
 *
 */
using ProxyEventUpdateManagerFLCam_Bus_CamSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::CamSts1Vcc::CamSts1Vcc, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendFLCam_Bus_CamSts>;
/*!
 * \brief Type alias for proxy event update manager for 'FRCam_Bus_CamSts'.
 *
 */
using ProxyEventUpdateManagerFRCam_Bus_CamSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::CamSts1Vcc::CamSts1Vcc, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendFRCam_Bus_CamSts>;
/*!
 * \brief Type alias for proxy event update manager for 'RLCam_Bus_CamSts'.
 *
 */
using ProxyEventUpdateManagerRLCam_Bus_CamSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::CamSts1Vcc::CamSts1Vcc, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendRLCam_Bus_CamSts>;
/*!
 * \brief Type alias for proxy event update manager for 'RRCam_Bus_CamSts'.
 *
 */
using ProxyEventUpdateManagerRRCam_Bus_CamSts = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::CamSts1Vcc::CamSts1Vcc, PerceptionSideSI_OutProxyBackendInterface,
      &perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface::GetEventBackendRRCam_Bus_CamSts>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'PerceptionSideSI_Out'
 * \remark generated
 */
class PerceptionSideSI_OutProxyUpdateManager : public PerceptionSideSI_OutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<PerceptionSideSI_OutProxyBackendInterface>{
 public:
  using BackendInterfaceType = PerceptionSideSI_OutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<PerceptionSideSI_OutProxyBackendInterface>;

  PerceptionSideSI_OutProxyUpdateManager() = delete;

  PerceptionSideSI_OutProxyUpdateManager(PerceptionSideSI_OutProxyUpdateManager const &) = delete;

  PerceptionSideSI_OutProxyUpdateManager(PerceptionSideSI_OutProxyUpdateManager &&) = delete;

  PerceptionSideSI_OutProxyUpdateManager &operator=(PerceptionSideSI_OutProxyUpdateManager const &) & = delete;

  PerceptionSideSI_OutProxyUpdateManager &operator=(PerceptionSideSI_OutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~PerceptionSideSI_OutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  PerceptionSideSI_OutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFLCam_Bus_VisnObj);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFRCam_Bus_VisnObj);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerRLCam_Bus_VisnObj);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerRRCam_Bus_VisnObj);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFLCam_Bus_CamSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFRCam_Bus_CamSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerRLCam_Bus_CamSts);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerRRCam_Bus_CamSts);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FLCam_Bus_VisnObj'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::VisObjs::VisObjs>& GetEventBackendFLCam_Bus_VisnObj() noexcept override {
      return proxyEventUpdateManagerFLCam_Bus_VisnObj;
  }

  /*!
   * \brief Get the event manager object for the service event 'FRCam_Bus_VisnObj'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::VisObjs::VisObjs>& GetEventBackendFRCam_Bus_VisnObj() noexcept override {
      return proxyEventUpdateManagerFRCam_Bus_VisnObj;
  }

  /*!
   * \brief Get the event manager object for the service event 'RLCam_Bus_VisnObj'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::VisObjs::VisObjs>& GetEventBackendRLCam_Bus_VisnObj() noexcept override {
      return proxyEventUpdateManagerRLCam_Bus_VisnObj;
  }

  /*!
   * \brief Get the event manager object for the service event 'RRCam_Bus_VisnObj'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::VisObjs::VisObjs>& GetEventBackendRRCam_Bus_VisnObj() noexcept override {
      return proxyEventUpdateManagerRRCam_Bus_VisnObj;
  }

  /*!
   * \brief Get the event manager object for the service event 'FLCam_Bus_CamSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::CamSts1Vcc::CamSts1Vcc>& GetEventBackendFLCam_Bus_CamSts() noexcept override {
      return proxyEventUpdateManagerFLCam_Bus_CamSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'FRCam_Bus_CamSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::CamSts1Vcc::CamSts1Vcc>& GetEventBackendFRCam_Bus_CamSts() noexcept override {
      return proxyEventUpdateManagerFRCam_Bus_CamSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'RLCam_Bus_CamSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::CamSts1Vcc::CamSts1Vcc>& GetEventBackendRLCam_Bus_CamSts() noexcept override {
      return proxyEventUpdateManagerRLCam_Bus_CamSts;
  }

  /*!
   * \brief Get the event manager object for the service event 'RRCam_Bus_CamSts'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::CamSts1Vcc::CamSts1Vcc>& GetEventBackendRRCam_Bus_CamSts() noexcept override {
      return proxyEventUpdateManagerRRCam_Bus_CamSts;
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
   * \brief Proxy event update manager for 'FLCam_Bus_VisnObj'.
   */
  events::ProxyEventUpdateManagerFLCam_Bus_VisnObj proxyEventUpdateManagerFLCam_Bus_VisnObj{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FRCam_Bus_VisnObj'.
   */
  events::ProxyEventUpdateManagerFRCam_Bus_VisnObj proxyEventUpdateManagerFRCam_Bus_VisnObj{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'RLCam_Bus_VisnObj'.
   */
  events::ProxyEventUpdateManagerRLCam_Bus_VisnObj proxyEventUpdateManagerRLCam_Bus_VisnObj{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'RRCam_Bus_VisnObj'.
   */
  events::ProxyEventUpdateManagerRRCam_Bus_VisnObj proxyEventUpdateManagerRRCam_Bus_VisnObj{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FLCam_Bus_CamSts'.
   */
  events::ProxyEventUpdateManagerFLCam_Bus_CamSts proxyEventUpdateManagerFLCam_Bus_CamSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FRCam_Bus_CamSts'.
   */
  events::ProxyEventUpdateManagerFRCam_Bus_CamSts proxyEventUpdateManagerFRCam_Bus_CamSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'RLCam_Bus_CamSts'.
   */
  events::ProxyEventUpdateManagerRLCam_Bus_CamSts proxyEventUpdateManagerRLCam_Bus_CamSts{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'RRCam_Bus_CamSts'.
   */
  events::ProxyEventUpdateManagerRRCam_Bus_CamSts proxyEventUpdateManagerRRCam_Bus_CamSts{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace perceptionsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_PROXY_UPDATE_MANAGER_H_

