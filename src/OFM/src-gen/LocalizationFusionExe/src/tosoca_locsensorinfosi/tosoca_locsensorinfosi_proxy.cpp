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
/**        \file  LocalizationFusionExe/src/tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.cpp
 *        \brief  Proxy for service 'ToSOCA_LocSensorInfoSI'.
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
#include "tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace tosoca_locsensorinfosi {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
ToSOCA_LocSensorInfoSIProxy::ConstructionResult ToSOCA_LocSensorInfoSIProxy::Preconstruct(
    ToSOCA_LocSensorInfoSIProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
ToSOCA_LocSensorInfoSIProxy::ToSOCA_LocSensorInfoSIProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "ToSOCA_LocSensorInfoSIProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OSM2_Bus_LocSensorInfo{&(proxy_update_manager_.GetEventBackendOSM2_Bus_LocSensorInfo()), Base::GetRuntime(), "ToSOCA_LocSensorInfoSI", "OSM2_Bus_LocSensorInfo", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
ToSOCA_LocSensorInfoSIProxy::ToSOCA_LocSensorInfoSIProxy(
  ToSOCA_LocSensorInfoSIProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "ToSOCA_LocSensorInfoSIProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OSM2_Bus_LocSensorInfo{&(proxy_update_manager_.GetEventBackendOSM2_Bus_LocSensorInfo()), Base::GetRuntime(), "ToSOCA_LocSensorInfoSI", "OSM2_Bus_LocSensorInfo", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
ToSOCA_LocSensorInfoSIProxy::~ToSOCA_LocSensorInfoSIProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OSM2_Bus_LocSensorInfo.UnsetReceiveHandler();
  OSM2_Bus_LocSensorInfo.UnsetSubscriptionStateHandler();
  OSM2_Bus_LocSensorInfo.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState ToSOCA_LocSensorInfoSIProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace tosoca_locsensorinfosi

