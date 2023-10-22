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
/**        \file  ObjectFusionModelExe/src/ara/com/runtime_gen.cpp
 *        \brief  Runtime initialization with all deployment bindings
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
#include "amsr/socal/internal/lifecycle_manager.h"
#include "amsr/someip_binding/internal/life_cycle.h"
#include "ara/com/runtime.h"
#include "ara/core/optional.h"
#include "ipc_binding/internal/life_cycle.h"


namespace ara {
namespace com {
namespace internal {

// VECTOR NC AutosarC++17_10-A15.4.2: MD_SOCAL_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_BAUHAUS-15508
// VECTOR NC AutosarC++17_10-A15.5.3: MD_SOCAL_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_BAUHAUS-15508
void Runtime::InitializeBindings() noexcept {
  {
    // Initialize SOME/IP binding
    ara::core::Result<void> const someip_binding_initialization_result{::amsr::someip_binding::internal::InitializeComponent()};
    static_cast<void>(someip_binding_initialization_result);
  }
  {
    // Initialize IPC binding
    static_cast<void>(amsr::ipc_binding::internal::InitializeComponent());
  }
}

// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
void Runtime::InitializeLifecycleManager() noexcept { ::amsr::socal::internal::LifecycleManager::Initialize(); }

// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
void Runtime::DeinitializeLifecycleManager() noexcept { ::amsr::socal::internal::LifecycleManager::Deinitialize(); }

// VECTOR NC AutosarC++17_10-A15.4.2: MD_SOCAL_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_BAUHAUS-15508
// VECTOR NC AutosarC++17_10-A15.5.3: MD_SOCAL_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_BAUHAUS-15508
// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
void Runtime::StartBindings() noexcept {
  {
    // Start SOME/IP binding
    amsr::someip_binding::internal::GetInstance().Start();
  }
  {
    // Start IPC binding
    amsr::ipc_binding::internal::GetBindingInstance().Start();
  }
}

// VECTOR NC AutosarC++17_10-A15.4.2: MD_SOCAL_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_BAUHAUS-15508
// VECTOR NC AutosarC++17_10-A15.5.3: MD_SOCAL_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_BAUHAUS-15508
// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
void Runtime::DeinitializeBindings() noexcept {
  {
    // Deinitialize SOME/IP binding
    static_cast<void>(::amsr::someip_binding::internal::DeinitializeComponent());
  }
  {
    // Deinitialize IPC binding
    static_cast<void>(amsr::ipc_binding::internal::DeinitializeComponent());
  }
}

}  // namespace internal
}  // namespace com
}  // namespace ara

