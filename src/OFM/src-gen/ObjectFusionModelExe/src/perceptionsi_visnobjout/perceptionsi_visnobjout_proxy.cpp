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
/**        \file  ObjectFusionModelExe/src/perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSI_VisnObjOut'.
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
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionsi_visnobjout {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionSI_VisnObjOutProxy::ConstructionResult PerceptionSI_VisnObjOutProxy::Preconstruct(
    PerceptionSI_VisnObjOutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
PerceptionSI_VisnObjOutProxy::PerceptionSI_VisnObjOutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_VisnObjOutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FrntCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSI_VisnObjOut", "FrntCam_Bus_VisnObj", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
PerceptionSI_VisnObjOutProxy::PerceptionSI_VisnObjOutProxy(
  PerceptionSI_VisnObjOutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "PerceptionSI_VisnObjOutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FrntCam_Bus_VisnObj{&(proxy_update_manager_.GetEventBackendFrntCam_Bus_VisnObj()), Base::GetRuntime(), "PerceptionSI_VisnObjOut", "FrntCam_Bus_VisnObj", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
PerceptionSI_VisnObjOutProxy::~PerceptionSI_VisnObjOutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FrntCam_Bus_VisnObj.UnsetReceiveHandler();
  FrntCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  FrntCam_Bus_VisnObj.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState PerceptionSI_VisnObjOutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace perceptionsi_visnobjout

