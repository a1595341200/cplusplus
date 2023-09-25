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
/**        \file  UTC0Exe/src/utc0si_in/utc0si_in_proxy.cpp
 *        \brief  Proxy for service 'UTC0SI_In'.
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
#include "utc0si_in/utc0si_in_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace utc0si_in {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
UTC0SI_InProxy::ConstructionResult UTC0SI_InProxy::Preconstruct(
    UTC0SI_InProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
UTC0SI_InProxy::UTC0SI_InProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "UTC0SI_InProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OSM2_Bus_VehTiAndData{&(proxy_update_manager_.GetEventBackendOSM2_Bus_VehTiAndData()), Base::GetRuntime(), "UTC0SI_In", "OSM2_Bus_VehTiAndData", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
UTC0SI_InProxy::UTC0SI_InProxy(
  UTC0SI_InProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "UTC0SI_InProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OSM2_Bus_VehTiAndData{&(proxy_update_manager_.GetEventBackendOSM2_Bus_VehTiAndData()), Base::GetRuntime(), "UTC0SI_In", "OSM2_Bus_VehTiAndData", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
UTC0SI_InProxy::~UTC0SI_InProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OSM2_Bus_VehTiAndData.UnsetReceiveHandler();
  OSM2_Bus_VehTiAndData.UnsetSubscriptionStateHandler();
  OSM2_Bus_VehTiAndData.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState UTC0SI_InProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace utc0si_in

