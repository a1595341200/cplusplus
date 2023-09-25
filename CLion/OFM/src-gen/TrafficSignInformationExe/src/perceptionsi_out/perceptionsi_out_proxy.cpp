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
/**        \file  TrafficSignInformationExe/src/perceptionsi_out/perceptionsi_out_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSI_Out'.
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
#include "perceptionsi_out/perceptionsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionSI_OutProxy::ConstructionResult PerceptionSI_OutProxy::Preconstruct(
    PerceptionSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
PerceptionSI_OutProxy::PerceptionSI_OutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FrntCam_Bus_RoadSign{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_RoadSign()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_RoadSign", GetInstanceId()},
    FrntCam_Bus_TrfcSign{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_TrfcSign()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_TrfcSign", GetInstanceId()},
    FrntCam_Bus_StopLine{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_StopLine()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_StopLine", GetInstanceId()},
    FrntCam_Bus_Crosswalk{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_Crosswalk()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_Crosswalk", GetInstanceId()},
    FrntCam_Bus_TrfcLi{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_TrfcLi()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_TrfcLi", GetInstanceId()},
    FrntCam_Bus_ExtInfo{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_ExtInfo()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_ExtInfo", GetInstanceId()},
    FrntCam_Bus_LsrObj{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_LsrObj()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_LsrObj", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
PerceptionSI_OutProxy::PerceptionSI_OutProxy(
  PerceptionSI_OutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FrntCam_Bus_RoadSign{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_RoadSign()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_RoadSign", GetInstanceId()},
    FrntCam_Bus_TrfcSign{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_TrfcSign()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_TrfcSign", GetInstanceId()},
    FrntCam_Bus_StopLine{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_StopLine()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_StopLine", GetInstanceId()},
    FrntCam_Bus_Crosswalk{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_Crosswalk()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_Crosswalk", GetInstanceId()},
    FrntCam_Bus_TrfcLi{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_TrfcLi()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_TrfcLi", GetInstanceId()},
    FrntCam_Bus_ExtInfo{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_ExtInfo()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_ExtInfo", GetInstanceId()},
    FrntCam_Bus_LsrObj{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_LsrObj()), Base::GetRuntime(), "PerceptionSI_Out", "FrntCam_Bus_LsrObj", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
PerceptionSI_OutProxy::~PerceptionSI_OutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FrntCam_Bus_RoadSign.UnsetReceiveHandler();
  FrntCam_Bus_RoadSign.UnsetSubscriptionStateHandler();
  FrntCam_Bus_RoadSign.Unsubscribe();
  FrntCam_Bus_TrfcSign.UnsetReceiveHandler();
  FrntCam_Bus_TrfcSign.UnsetSubscriptionStateHandler();
  FrntCam_Bus_TrfcSign.Unsubscribe();
  FrntCam_Bus_StopLine.UnsetReceiveHandler();
  FrntCam_Bus_StopLine.UnsetSubscriptionStateHandler();
  FrntCam_Bus_StopLine.Unsubscribe();
  FrntCam_Bus_Crosswalk.UnsetReceiveHandler();
  FrntCam_Bus_Crosswalk.UnsetSubscriptionStateHandler();
  FrntCam_Bus_Crosswalk.Unsubscribe();
  FrntCam_Bus_TrfcLi.UnsetReceiveHandler();
  FrntCam_Bus_TrfcLi.UnsetSubscriptionStateHandler();
  FrntCam_Bus_TrfcLi.Unsubscribe();
  FrntCam_Bus_ExtInfo.UnsetReceiveHandler();
  FrntCam_Bus_ExtInfo.UnsetSubscriptionStateHandler();
  FrntCam_Bus_ExtInfo.Unsubscribe();
  FrntCam_Bus_LsrObj.UnsetReceiveHandler();
  FrntCam_Bus_LsrObj.UnsetSubscriptionStateHandler();
  FrntCam_Bus_LsrObj.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState PerceptionSI_OutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace perceptionsi_out

