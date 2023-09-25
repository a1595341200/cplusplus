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
/**        \file  ObjectFusionModelExe/src/perceptionsi_camstsout/perceptionsi_camstsout_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSI_CamStsOut'.
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
#include "perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionsi_camstsout {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionSI_CamStsOutProxy::ConstructionResult PerceptionSI_CamStsOutProxy::Preconstruct(
    PerceptionSI_CamStsOutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
PerceptionSI_CamStsOutProxy::PerceptionSI_CamStsOutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_CamStsOutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FrntCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSI_CamStsOut", "FrntCam_Bus_CamSts", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
PerceptionSI_CamStsOutProxy::PerceptionSI_CamStsOutProxy(
  PerceptionSI_CamStsOutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_CamStsOutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FrntCam_Bus_CamSts{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_CamSts()), Base::GetRuntime(), "PerceptionSI_CamStsOut", "FrntCam_Bus_CamSts", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
PerceptionSI_CamStsOutProxy::~PerceptionSI_CamStsOutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FrntCam_Bus_CamSts.UnsetReceiveHandler();
  FrntCam_Bus_CamSts.UnsetSubscriptionStateHandler();
  FrntCam_Bus_CamSts.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState PerceptionSI_CamStsOutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace perceptionsi_camstsout

