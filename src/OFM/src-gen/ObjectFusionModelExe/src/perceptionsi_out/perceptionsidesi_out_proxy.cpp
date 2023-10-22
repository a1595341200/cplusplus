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
/**        \file  ObjectFusionModelExe/src/perceptionsi_out/perceptionsidesi_out_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSideSI_Out'.
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
#include "perceptionsi_out/perceptionsidesi_out_proxy.h"

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
PerceptionSideSI_OutProxy::ConstructionResult PerceptionSideSI_OutProxy::Preconstruct(
    PerceptionSideSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
PerceptionSideSI_OutProxy::PerceptionSideSI_OutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSideSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FLCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendFLCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "FLCam_Bus_VisnObj", GetInstanceId()},
    FRCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendFRCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "FRCam_Bus_VisnObj", GetInstanceId()},
    RLCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendRLCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "RLCam_Bus_VisnObj", GetInstanceId()},
    RRCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendRRCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "RRCam_Bus_VisnObj", GetInstanceId()},
    FLCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendFLCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "FLCam_Bus_CamSts", GetInstanceId()},
    FRCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendFRCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "FRCam_Bus_CamSts", GetInstanceId()},
    RLCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendRLCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "RLCam_Bus_CamSts", GetInstanceId()},
    RRCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendRRCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "RRCam_Bus_CamSts", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
PerceptionSideSI_OutProxy::PerceptionSideSI_OutProxy(
  PerceptionSideSI_OutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSideSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FLCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendFLCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "FLCam_Bus_VisnObj", GetInstanceId()},
    FRCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendFRCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "FRCam_Bus_VisnObj", GetInstanceId()},
    RLCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendRLCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "RLCam_Bus_VisnObj", GetInstanceId()},
    RRCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendRRCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSideSI_Out", "RRCam_Bus_VisnObj", GetInstanceId()},
    FLCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendFLCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "FLCam_Bus_CamSts", GetInstanceId()},
    FRCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendFRCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "FRCam_Bus_CamSts", GetInstanceId()},
    RLCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendRLCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "RLCam_Bus_CamSts", GetInstanceId()},
    RRCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendRRCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSideSI_Out", "RRCam_Bus_CamSts", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
PerceptionSideSI_OutProxy::~PerceptionSideSI_OutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FLCam_Bus_VisnObj.UnsetReceiveHandler();
  FLCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  FLCam_Bus_VisnObj.Unsubscribe();
  FRCam_Bus_VisnObj.UnsetReceiveHandler();
  FRCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  FRCam_Bus_VisnObj.Unsubscribe();
  RLCam_Bus_VisnObj.UnsetReceiveHandler();
  RLCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  RLCam_Bus_VisnObj.Unsubscribe();
  RRCam_Bus_VisnObj.UnsetReceiveHandler();
  RRCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  RRCam_Bus_VisnObj.Unsubscribe();
  FLCam_Bus_CamSts.UnsetReceiveHandler();
  FLCam_Bus_CamSts.UnsetSubscriptionStateHandler();
  FLCam_Bus_CamSts.Unsubscribe();
  FRCam_Bus_CamSts.UnsetReceiveHandler();
  FRCam_Bus_CamSts.UnsetSubscriptionStateHandler();
  FRCam_Bus_CamSts.Unsubscribe();
  RLCam_Bus_CamSts.UnsetReceiveHandler();
  RLCam_Bus_CamSts.UnsetSubscriptionStateHandler();
  RLCam_Bus_CamSts.Unsubscribe();
  RRCam_Bus_CamSts.UnsetReceiveHandler();
  RRCam_Bus_CamSts.UnsetSubscriptionStateHandler();
  RRCam_Bus_CamSts.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState PerceptionSideSI_OutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace perceptionsi_out

