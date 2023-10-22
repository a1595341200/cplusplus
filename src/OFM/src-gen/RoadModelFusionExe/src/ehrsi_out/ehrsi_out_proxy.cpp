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
/**        \file  RoadModelFusionExe/src/ehrsi_out/ehrsi_out_proxy.cpp
 *        \brief  Proxy for service 'EHRSI_Out'.
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
#include "ehrsi_out/ehrsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace ehrsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
EHRSI_OutProxy::ConstructionResult EHRSI_OutProxy::Preconstruct(
    EHRSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
EHRSI_OutProxy::EHRSI_OutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "EHRSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    EHR_Bus_NOAInfo{&(proxy_update_manager_.GetEventBackendEHR_Bus_NOAInfo()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_NOAInfo", GetInstanceId()},
    EHR_Bus_LaneConnectivitys{&(proxy_update_manager_.GetEventBackendEHR_Bus_LaneConnectivitys()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LaneConnectivitys", GetInstanceId()},
    EHR_Bus_Nodes{&(proxy_update_manager_.GetEventBackendEHR_Bus_Nodes()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_Nodes", GetInstanceId()},
    EHR_Bus_TrafficSigns{&(proxy_update_manager_.GetEventBackendEHR_Bus_TrafficSigns()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_TrafficSigns", GetInstanceId()},
    EHR_Bus_GeoFences{&(proxy_update_manager_.GetEventBackendEHR_Bus_GeoFences()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_GeoFences", GetInstanceId()},
    EHR_Bus_LinkCurvatures{&(proxy_update_manager_.GetEventBackendEHR_Bus_LinkCurvatures()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LinkCurvatures", GetInstanceId()},
    EHR_Bus_LinkSlopes{&(proxy_update_manager_.GetEventBackendEHR_Bus_LinkSlopes()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LinkSlopes", GetInstanceId()},
    EHR_Bus_LaneSpeedLimits{&(proxy_update_manager_.GetEventBackendEHR_Bus_LaneSpeedLimits()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LaneSpeedLimits", GetInstanceId()},
    EHR_Bus_LinkInfos{&(proxy_update_manager_.GetEventBackendEHR_Bus_LinkInfos()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LinkInfos", GetInstanceId()},
    EHR_Bus_MergePoints{&(proxy_update_manager_.GetEventBackendEHR_Bus_MergePoints()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_MergePoints", GetInstanceId()},
    EHR_Bus_GeofennceJudge{&(proxy_update_manager_.GetEventBackendEHR_Bus_GeofennceJudge()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_GeofennceJudge", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
EHRSI_OutProxy::EHRSI_OutProxy(
  EHRSI_OutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "EHRSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    EHR_Bus_NOAInfo{&(proxy_update_manager_.GetEventBackendEHR_Bus_NOAInfo()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_NOAInfo", GetInstanceId()},
    EHR_Bus_LaneConnectivitys{&(proxy_update_manager_.GetEventBackendEHR_Bus_LaneConnectivitys()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LaneConnectivitys", GetInstanceId()},
    EHR_Bus_Nodes{&(proxy_update_manager_.GetEventBackendEHR_Bus_Nodes()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_Nodes", GetInstanceId()},
    EHR_Bus_TrafficSigns{&(proxy_update_manager_.GetEventBackendEHR_Bus_TrafficSigns()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_TrafficSigns", GetInstanceId()},
    EHR_Bus_GeoFences{&(proxy_update_manager_.GetEventBackendEHR_Bus_GeoFences()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_GeoFences", GetInstanceId()},
    EHR_Bus_LinkCurvatures{&(proxy_update_manager_.GetEventBackendEHR_Bus_LinkCurvatures()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LinkCurvatures", GetInstanceId()},
    EHR_Bus_LinkSlopes{&(proxy_update_manager_.GetEventBackendEHR_Bus_LinkSlopes()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LinkSlopes", GetInstanceId()},
    EHR_Bus_LaneSpeedLimits{&(proxy_update_manager_.GetEventBackendEHR_Bus_LaneSpeedLimits()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LaneSpeedLimits", GetInstanceId()},
    EHR_Bus_LinkInfos{&(proxy_update_manager_.GetEventBackendEHR_Bus_LinkInfos()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_LinkInfos", GetInstanceId()},
    EHR_Bus_MergePoints{&(proxy_update_manager_.GetEventBackendEHR_Bus_MergePoints()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_MergePoints", GetInstanceId()},
    EHR_Bus_GeofennceJudge{&(proxy_update_manager_.GetEventBackendEHR_Bus_GeofennceJudge()), Base::GetRuntime(), "EHRSI_Out", "EHR_Bus_GeofennceJudge", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
EHRSI_OutProxy::~EHRSI_OutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  EHR_Bus_NOAInfo.UnsetReceiveHandler();
  EHR_Bus_NOAInfo.UnsetSubscriptionStateHandler();
  EHR_Bus_NOAInfo.Unsubscribe();
  EHR_Bus_LaneConnectivitys.UnsetReceiveHandler();
  EHR_Bus_LaneConnectivitys.UnsetSubscriptionStateHandler();
  EHR_Bus_LaneConnectivitys.Unsubscribe();
  EHR_Bus_Nodes.UnsetReceiveHandler();
  EHR_Bus_Nodes.UnsetSubscriptionStateHandler();
  EHR_Bus_Nodes.Unsubscribe();
  EHR_Bus_TrafficSigns.UnsetReceiveHandler();
  EHR_Bus_TrafficSigns.UnsetSubscriptionStateHandler();
  EHR_Bus_TrafficSigns.Unsubscribe();
  EHR_Bus_GeoFences.UnsetReceiveHandler();
  EHR_Bus_GeoFences.UnsetSubscriptionStateHandler();
  EHR_Bus_GeoFences.Unsubscribe();
  EHR_Bus_LinkCurvatures.UnsetReceiveHandler();
  EHR_Bus_LinkCurvatures.UnsetSubscriptionStateHandler();
  EHR_Bus_LinkCurvatures.Unsubscribe();
  EHR_Bus_LinkSlopes.UnsetReceiveHandler();
  EHR_Bus_LinkSlopes.UnsetSubscriptionStateHandler();
  EHR_Bus_LinkSlopes.Unsubscribe();
  EHR_Bus_LaneSpeedLimits.UnsetReceiveHandler();
  EHR_Bus_LaneSpeedLimits.UnsetSubscriptionStateHandler();
  EHR_Bus_LaneSpeedLimits.Unsubscribe();
  EHR_Bus_LinkInfos.UnsetReceiveHandler();
  EHR_Bus_LinkInfos.UnsetSubscriptionStateHandler();
  EHR_Bus_LinkInfos.Unsubscribe();
  EHR_Bus_MergePoints.UnsetReceiveHandler();
  EHR_Bus_MergePoints.UnsetSubscriptionStateHandler();
  EHR_Bus_MergePoints.Unsubscribe();
  EHR_Bus_GeofennceJudge.UnsetReceiveHandler();
  EHR_Bus_GeofennceJudge.UnsetSubscriptionStateHandler();
  EHR_Bus_GeofennceJudge.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState EHRSI_OutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace ehrsi_out

