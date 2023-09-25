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
/**        \file  LocalizationFusionExe/include/perceptionsi_laneout/PerceptionSI_LaneOut_proxy_update_manager.h
 *        \brief  Proxy update manager of service 'PerceptionSI_LaneOut'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_UPDATE_MANAGER_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_UPDATE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/proxy_event_backend_interface.h"
#include "amsr/socal/internal/proxy_event_update_manager.h"
#include "amsr/socal/internal/proxy_update_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery_listener.h"
#include "ara/core/future.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_proxy_backend_interface.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_types.h"

namespace perceptionsi_laneout {
namespace internal {

namespace events {
/*!
 * \brief Type alias for proxy event update manager for 'FusedCam_Bus_LaneMkrLe'.
 *
 */
using ProxyEventUpdateManagerFusedCam_Bus_LaneMkrLe = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneMkrCam1Le::LaneMkrCam1Le, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendFusedCam_Bus_LaneMkrLe>;
/*!
 * \brief Type alias for proxy event update manager for 'FusedCam_Bus_LaneMkrRi'.
 *
 */
using ProxyEventUpdateManagerFusedCam_Bus_LaneMkrRi = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneMkrCam1Ri::LaneMkrCam1Ri, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendFusedCam_Bus_LaneMkrRi>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_RoadEdgeLe'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_RoadEdgeLe = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::RoadEdge1VccLe::RoadEdge1VccLe, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendFrntCam_Bus_RoadEdgeLe>;
/*!
 * \brief Type alias for proxy event update manager for 'FrntCam_Bus_RoadEdgeRi'.
 *
 */
using ProxyEventUpdateManagerFrntCam_Bus_RoadEdgeRi = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::RoadEdge1VccRi::RoadEdge1VccRi, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendFrntCam_Bus_RoadEdgeRi>;
/*!
 * \brief Type alias for proxy event update manager for 'Cam_Bus_LaneEvent'.
 *
 */
using ProxyEventUpdateManagerCam_Bus_LaneEvent = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneEvent::LaneEvent, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendCam_Bus_LaneEvent>;
/*!
 * \brief Type alias for proxy event update manager for 'Cam_Bus_LaneEventGroup'.
 *
 */
using ProxyEventUpdateManagerCam_Bus_LaneEventGroup = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneEventGroups::LaneEventGroups, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendCam_Bus_LaneEventGroup>;
/*!
 * \brief Type alias for proxy event update manager for 'Cam_Bus_LaneMkrTemp'.
 *
 */
using ProxyEventUpdateManagerCam_Bus_LaneMkrTemp = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendCam_Bus_LaneMkrTemp>;
/*!
 * \brief Type alias for proxy event update manager for 'FusedCam_Bus_LaneMkrSecClsLe'.
 *
 */
using ProxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsLe = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendFusedCam_Bus_LaneMkrSecClsLe>;
/*!
 * \brief Type alias for proxy event update manager for 'FusedCam_Bus_LaneMkrSecClsRi'.
 *
 */
using ProxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsRi = ::amsr::socal::internal::ProxyEventUpdateManager<
      ::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi, PerceptionSI_LaneOutProxyBackendInterface,
      &perceptionsi_laneout::internal::PerceptionSI_LaneOutProxyBackendInterface::GetEventBackendFusedCam_Bus_LaneMkrSecClsRi>;
}  // namespace events

namespace fields {
}  // namespace fields

/*!
 * \brief Proxy update manager for the Service 'PerceptionSI_LaneOut'
 * \remark generated
 */
class PerceptionSI_LaneOutProxyUpdateManager : public PerceptionSI_LaneOutProxyBackendInterface ,
                                                            public ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_LaneOutProxyBackendInterface>{
 public:
  using BackendInterfaceType = PerceptionSI_LaneOutProxyBackendInterface;
  using Base = ::amsr::socal::internal::ProxyUpdateManager<PerceptionSI_LaneOutProxyBackendInterface>;

  PerceptionSI_LaneOutProxyUpdateManager() = delete;

  PerceptionSI_LaneOutProxyUpdateManager(PerceptionSI_LaneOutProxyUpdateManager const &) = delete;

  PerceptionSI_LaneOutProxyUpdateManager(PerceptionSI_LaneOutProxyUpdateManager &&) = delete;

  PerceptionSI_LaneOutProxyUpdateManager &operator=(PerceptionSI_LaneOutProxyUpdateManager const &) & = delete;

  PerceptionSI_LaneOutProxyUpdateManager &operator=(PerceptionSI_LaneOutProxyUpdateManager &&) & = delete;

  /*!
   * \brief Deregisters the proxy event update managers and destroys the proxy update manager.
   * \pre -
   * \context   App
   */
   ~PerceptionSI_LaneOutProxyUpdateManager() noexcept override {
     DeRegisterProxyEventUpdateManagers();
   }

  /*!
   * \brief Initializes the ProxyUpdateManager and starts listening to the service discovery.
   * \param[in] id The instance identifier.
   * \param[in] service_discovery Pointer to the service discovery.
   * \pre -
   * \context   App
   */
  PerceptionSI_LaneOutProxyUpdateManager(ara::com::InstanceIdentifier const& id,
    ::amsr::generic::Singleton<ServiceDiscovery*>& service_discovery) noexcept
    :  ProxyUpdateManager(id, service_discovery) {
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFusedCam_Bus_LaneMkrLe);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFusedCam_Bus_LaneMkrRi);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_RoadEdgeLe);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFrntCam_Bus_RoadEdgeRi);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerCam_Bus_LaneEvent);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerCam_Bus_LaneEventGroup);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerCam_Bus_LaneMkrTemp);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsLe);
      this->RegisterProxyEventUpdateManager(&proxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsRi);
      StartListening();
    }

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------
  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrLe'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1Le::LaneMkrCam1Le>& GetEventBackendFusedCam_Bus_LaneMkrLe() noexcept override {
      return proxyEventUpdateManagerFusedCam_Bus_LaneMkrLe;
  }

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrRi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1Ri::LaneMkrCam1Ri>& GetEventBackendFusedCam_Bus_LaneMkrRi() noexcept override {
      return proxyEventUpdateManagerFusedCam_Bus_LaneMkrRi;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadEdgeLe'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadEdge1VccLe::RoadEdge1VccLe>& GetEventBackendFrntCam_Bus_RoadEdgeLe() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_RoadEdgeLe;
  }

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadEdgeRi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::RoadEdge1VccRi::RoadEdge1VccRi>& GetEventBackendFrntCam_Bus_RoadEdgeRi() noexcept override {
      return proxyEventUpdateManagerFrntCam_Bus_RoadEdgeRi;
  }

  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneEvent'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneEvent::LaneEvent>& GetEventBackendCam_Bus_LaneEvent() noexcept override {
      return proxyEventUpdateManagerCam_Bus_LaneEvent;
  }

  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneEventGroup'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneEventGroups::LaneEventGroups>& GetEventBackendCam_Bus_LaneEventGroup() noexcept override {
      return proxyEventUpdateManagerCam_Bus_LaneEventGroup;
  }

  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneMkrTemp'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc>& GetEventBackendCam_Bus_LaneMkrTemp() noexcept override {
      return proxyEventUpdateManagerCam_Bus_LaneMkrTemp;
  }

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrSecClsLe'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe>& GetEventBackendFusedCam_Bus_LaneMkrSecClsLe() noexcept override {
      return proxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsLe;
  }

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrSecClsRi'
   * \return A proxy event object supporting event sample and subscription.
   * \pre -
   * \context App | Callback
   */
  ::amsr::socal::internal::events::ProxyEventBackendInterface<::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi>& GetEventBackendFusedCam_Bus_LaneMkrSecClsRi() noexcept override {
      return proxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsRi;
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
   * \brief Proxy event update manager for 'FusedCam_Bus_LaneMkrLe'.
   */
  events::ProxyEventUpdateManagerFusedCam_Bus_LaneMkrLe proxyEventUpdateManagerFusedCam_Bus_LaneMkrLe{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FusedCam_Bus_LaneMkrRi'.
   */
  events::ProxyEventUpdateManagerFusedCam_Bus_LaneMkrRi proxyEventUpdateManagerFusedCam_Bus_LaneMkrRi{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_RoadEdgeLe'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_RoadEdgeLe proxyEventUpdateManagerFrntCam_Bus_RoadEdgeLe{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FrntCam_Bus_RoadEdgeRi'.
   */
  events::ProxyEventUpdateManagerFrntCam_Bus_RoadEdgeRi proxyEventUpdateManagerFrntCam_Bus_RoadEdgeRi{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'Cam_Bus_LaneEvent'.
   */
  events::ProxyEventUpdateManagerCam_Bus_LaneEvent proxyEventUpdateManagerCam_Bus_LaneEvent{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'Cam_Bus_LaneEventGroup'.
   */
  events::ProxyEventUpdateManagerCam_Bus_LaneEventGroup proxyEventUpdateManagerCam_Bus_LaneEventGroup{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'Cam_Bus_LaneMkrTemp'.
   */
  events::ProxyEventUpdateManagerCam_Bus_LaneMkrTemp proxyEventUpdateManagerCam_Bus_LaneMkrTemp{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FusedCam_Bus_LaneMkrSecClsLe'.
   */
  events::ProxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsLe proxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsLe{GetBackendPointerMutex()};

  /*!
   * \brief Proxy event update manager for 'FusedCam_Bus_LaneMkrSecClsRi'.
   */
  events::ProxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsRi proxyEventUpdateManagerFusedCam_Bus_LaneMkrSecClsRi{GetBackendPointerMutex()};


};

} //namespace internal
}  // namespace perceptionsi_laneout

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_PROXY_UPDATE_MANAGER_H_

