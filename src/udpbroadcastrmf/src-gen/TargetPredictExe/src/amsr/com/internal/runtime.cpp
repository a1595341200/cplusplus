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
/**        \file  TargetPredictExe/src/amsr/com/internal/runtime.cpp
 *        \brief  Runtime initialization with all deployment bindings
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/com/internal/runtime.h"
#include "amsr/socal/internal/lifecycle_manager.h"
#include "amsr/socal/internal/thread_pools_manager.h"
#include "amsr/someip_binding/internal/life_cycle.h"
#include "ipc_binding/internal/life_cycle.h"


namespace amsr {
namespace com {
namespace internal {

void Runtime::StartDynamicActions(::amsr::socal::internal::InstanceSpecifierLookupTable const& provided_instance_specifier_table,
                                  ::amsr::socal::internal::configuration::Configuration const& config) noexcept {
  // PTP-B-Socal-Runtime_StartDynamicActions_InitializeThreadPools
  ::amsr::socal::internal::ThreadPoolsManager::getSingletonInstance().GetAccess()->InitializeThreadPools(provided_instance_specifier_table, config);
  // PTP-E-Socal-Runtime_StartDynamicActions_InitializeThreadPools

  // PTP-B-Socal-Runtime_StartDynamicActions_InitializeReactorThreadManager
  ::amsr::socal::internal::LifecycleManager::InitializeReactorThreadManager();
  // PTP-E-Socal-Runtime_StartDynamicActions_InitializeReactorThreadManager
  {
    // Start SOME/IP binding
    // PTP-B-Socal-Runtime_StartDynamicActions_SomeIpBinding_Start
    ::amsr::someip_binding::internal::GetInstance().Start();  // VCA_SOCAL_CALLING_AMSR_APIS
    // PTP-E-Socal-Runtime_StartDynamicActions_SomeIpBinding_Start
  }
  {
    // Start IPC binding
    // PTP-B-Socal-Runtime_StartDynamicActions_IpcBinding_Start
    ::amsr::ipc_binding::internal::Start();  // VCA_SOCAL_CALLING_AMSR_APIS
    // PTP-E-Socal-Runtime_StartDynamicActions_IpcBinding_Start
  }
}

// VECTOR NC AutosarC++17_10-M0.1.8: MD_SOCAL_M0.1.8_NoSideEffectInPollingMode
void Runtime::StopDynamicActions() noexcept {
  // Reactor thread must be stopped before the threadpools.
  // PTP-B-Socal-Runtime_StopDynamicActions_DeinitializeReactorThreadManager
  ::amsr::socal::internal::LifecycleManager::DeinitializeReactorThreadManager();
  // PTP-E-Socal-Runtime_StopDynamicActions_DeinitializeReactorThreadManager

  // PTP-B-Socal-Runtime_StopDynamicActions_DeinitializeThreadPools
  ::amsr::socal::internal::ThreadPoolsManager::getSingletonInstance().GetAccess()->DeinitializeThreadPools();
  // PTP-E-Socal-Runtime_StopDynamicActions_DeinitializeThreadPools
}

}  // namespace internal
}  // namespace com
}  // namespace amsr

