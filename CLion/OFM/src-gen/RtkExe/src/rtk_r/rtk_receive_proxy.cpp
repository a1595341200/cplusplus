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
/**        \file  RtkExe/src/rtk_r/rtk_receive_proxy.cpp
 *        \brief  Proxy for service 'Rtk_Receive'.
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
#include "rtk_r/rtk_receive_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace rtk_r {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
Rtk_ReceiveProxy::ConstructionResult Rtk_ReceiveProxy::Preconstruct(
    Rtk_ReceiveProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
Rtk_ReceiveProxy::Rtk_ReceiveProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "Rtk_ReceiveProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    GgaData_receive{&(proxy_update_manager_.GetEventBackendGgaData_receive()), Base::GetRuntime(), "Rtk_Receive", "GgaData_receive", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
Rtk_ReceiveProxy::Rtk_ReceiveProxy(
  Rtk_ReceiveProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "Rtk_ReceiveProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    GgaData_receive{&(proxy_update_manager_.GetEventBackendGgaData_receive()), Base::GetRuntime(), "Rtk_Receive", "GgaData_receive", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
Rtk_ReceiveProxy::~Rtk_ReceiveProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  GgaData_receive.UnsetReceiveHandler();
  GgaData_receive.UnsetSubscriptionStateHandler();
  GgaData_receive.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState Rtk_ReceiveProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace rtk_r

