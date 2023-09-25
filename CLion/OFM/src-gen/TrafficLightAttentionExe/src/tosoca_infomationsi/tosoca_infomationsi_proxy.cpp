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
/**        \file  TrafficLightAttentionExe/src/tosoca_infomationsi/tosoca_infomationsi_proxy.cpp
 *        \brief  Proxy for service 'ToSOCA_InfomationSI'.
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
#include "tosoca_infomationsi/tosoca_infomationsi_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace tosoca_infomationsi {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
ToSOCA_InfomationSIProxy::ConstructionResult ToSOCA_InfomationSIProxy::Preconstruct(
    ToSOCA_InfomationSIProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
ToSOCA_InfomationSIProxy::ToSOCA_InfomationSIProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "ToSOCA_InfomationSIProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OSM2_Bus_ToSOCA_FunctionInfo{&(proxy_update_manager_.GetEventBackendOSM2_Bus_ToSOCA_FunctionInfo()), Base::GetRuntime(), "ToSOCA_InfomationSI", "OSM2_Bus_ToSOCA_FunctionInfo", GetInstanceId()},
    OSM2_Bus_ToSOCA_COMInfo{&(proxy_update_manager_.GetEventBackendOSM2_Bus_ToSOCA_COMInfo()), Base::GetRuntime(), "ToSOCA_InfomationSI", "OSM2_Bus_ToSOCA_COMInfo", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
ToSOCA_InfomationSIProxy::ToSOCA_InfomationSIProxy(
  ToSOCA_InfomationSIProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "ToSOCA_InfomationSIProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OSM2_Bus_ToSOCA_FunctionInfo{&(proxy_update_manager_.GetEventBackendOSM2_Bus_ToSOCA_FunctionInfo()), Base::GetRuntime(), "ToSOCA_InfomationSI", "OSM2_Bus_ToSOCA_FunctionInfo", GetInstanceId()},
    OSM2_Bus_ToSOCA_COMInfo{&(proxy_update_manager_.GetEventBackendOSM2_Bus_ToSOCA_COMInfo()), Base::GetRuntime(), "ToSOCA_InfomationSI", "OSM2_Bus_ToSOCA_COMInfo", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
ToSOCA_InfomationSIProxy::~ToSOCA_InfomationSIProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OSM2_Bus_ToSOCA_FunctionInfo.UnsetReceiveHandler();
  OSM2_Bus_ToSOCA_FunctionInfo.UnsetSubscriptionStateHandler();
  OSM2_Bus_ToSOCA_FunctionInfo.Unsubscribe();
  OSM2_Bus_ToSOCA_COMInfo.UnsetReceiveHandler();
  OSM2_Bus_ToSOCA_COMInfo.UnsetSubscriptionStateHandler();
  OSM2_Bus_ToSOCA_COMInfo.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState ToSOCA_InfomationSIProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace tosoca_infomationsi

