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
/**        \file  LocalizationFusionExe/src/perceptionsi_laneout/perceptionsi_laneout_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSI_LaneOut'.
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

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "perceptionsi_laneout/perceptionsi_laneout_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionsi_laneout {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionSI_LaneOutProxy::ConstructionResult PerceptionSI_LaneOutProxy::Preconstruct(
    PerceptionSI_LaneOutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
PerceptionSI_LaneOutProxy::PerceptionSI_LaneOutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_LaneOutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FusedCam_Bus_LaneMkrLe{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrLe()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrLe", GetInstanceId()},
    FusedCam_Bus_LaneMkrRi{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrRi()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrRi", GetInstanceId()},
    FrntCam_Bus_RoadEdgeLe{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_RoadEdgeLe()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FrntCam_Bus_RoadEdgeLe", GetInstanceId()},
    FrntCam_Bus_RoadEdgeRi{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_RoadEdgeRi()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FrntCam_Bus_RoadEdgeRi", GetInstanceId()},
    Cam_Bus_LaneEvent{&(proxy_update_manager_.GetEventBackendCam_Bus_LaneEvent()), Base::GetRuntime(), "PerceptionSI_LaneOut", "Cam_Bus_LaneEvent", GetInstanceId()},
    Cam_Bus_LaneEventGroup{&(proxy_update_manager_.GetEventBackendCam_Bus_LaneEventGroup()), Base::GetRuntime(), "PerceptionSI_LaneOut", "Cam_Bus_LaneEventGroup", GetInstanceId()},
    Cam_Bus_LaneMkrTemp{&(proxy_update_manager_.GetEventBackendCam_Bus_LaneMkrTemp()), Base::GetRuntime(), "PerceptionSI_LaneOut", "Cam_Bus_LaneMkrTemp", GetInstanceId()},
    FusedCam_Bus_LaneMkrSecClsLe{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrSecClsLe()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrSecClsLe", GetInstanceId()},
    FusedCam_Bus_LaneMkrSecClsRi{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrSecClsRi()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrSecClsRi", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
PerceptionSI_LaneOutProxy::PerceptionSI_LaneOutProxy(
  PerceptionSI_LaneOutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_LaneOutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FusedCam_Bus_LaneMkrLe{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrLe()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrLe", GetInstanceId()},
    FusedCam_Bus_LaneMkrRi{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrRi()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrRi", GetInstanceId()},
    FrntCam_Bus_RoadEdgeLe{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_RoadEdgeLe()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FrntCam_Bus_RoadEdgeLe", GetInstanceId()},
    FrntCam_Bus_RoadEdgeRi{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_RoadEdgeRi()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FrntCam_Bus_RoadEdgeRi", GetInstanceId()},
    Cam_Bus_LaneEvent{&(proxy_update_manager_.GetEventBackendCam_Bus_LaneEvent()), Base::GetRuntime(), "PerceptionSI_LaneOut", "Cam_Bus_LaneEvent", GetInstanceId()},
    Cam_Bus_LaneEventGroup{&(proxy_update_manager_.GetEventBackendCam_Bus_LaneEventGroup()), Base::GetRuntime(), "PerceptionSI_LaneOut", "Cam_Bus_LaneEventGroup", GetInstanceId()},
    Cam_Bus_LaneMkrTemp{&(proxy_update_manager_.GetEventBackendCam_Bus_LaneMkrTemp()), Base::GetRuntime(), "PerceptionSI_LaneOut", "Cam_Bus_LaneMkrTemp", GetInstanceId()},
    FusedCam_Bus_LaneMkrSecClsLe{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrSecClsLe()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrSecClsLe", GetInstanceId()},
    FusedCam_Bus_LaneMkrSecClsRi{&(proxy_update_manager_.GetEventBackendFusedCam_Bus_LaneMkrSecClsRi()), Base::GetRuntime(), "PerceptionSI_LaneOut", "FusedCam_Bus_LaneMkrSecClsRi", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
PerceptionSI_LaneOutProxy::~PerceptionSI_LaneOutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FusedCam_Bus_LaneMkrLe.UnsetReceiveHandler();
  FusedCam_Bus_LaneMkrLe.UnsetSubscriptionStateHandler();
  FusedCam_Bus_LaneMkrLe.Unsubscribe();
  FusedCam_Bus_LaneMkrRi.UnsetReceiveHandler();
  FusedCam_Bus_LaneMkrRi.UnsetSubscriptionStateHandler();
  FusedCam_Bus_LaneMkrRi.Unsubscribe();
  FrntCam_Bus_RoadEdgeLe.UnsetReceiveHandler();
  FrntCam_Bus_RoadEdgeLe.UnsetSubscriptionStateHandler();
  FrntCam_Bus_RoadEdgeLe.Unsubscribe();
  FrntCam_Bus_RoadEdgeRi.UnsetReceiveHandler();
  FrntCam_Bus_RoadEdgeRi.UnsetSubscriptionStateHandler();
  FrntCam_Bus_RoadEdgeRi.Unsubscribe();
  Cam_Bus_LaneEvent.UnsetReceiveHandler();
  Cam_Bus_LaneEvent.UnsetSubscriptionStateHandler();
  Cam_Bus_LaneEvent.Unsubscribe();
  Cam_Bus_LaneEventGroup.UnsetReceiveHandler();
  Cam_Bus_LaneEventGroup.UnsetSubscriptionStateHandler();
  Cam_Bus_LaneEventGroup.Unsubscribe();
  Cam_Bus_LaneMkrTemp.UnsetReceiveHandler();
  Cam_Bus_LaneMkrTemp.UnsetSubscriptionStateHandler();
  Cam_Bus_LaneMkrTemp.Unsubscribe();
  FusedCam_Bus_LaneMkrSecClsLe.UnsetReceiveHandler();
  FusedCam_Bus_LaneMkrSecClsLe.UnsetSubscriptionStateHandler();
  FusedCam_Bus_LaneMkrSecClsLe.Unsubscribe();
  FusedCam_Bus_LaneMkrSecClsRi.UnsetReceiveHandler();
  FusedCam_Bus_LaneMkrSecClsRi.UnsetSubscriptionStateHandler();
  FusedCam_Bus_LaneMkrSecClsRi.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState PerceptionSI_LaneOutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace perceptionsi_laneout

