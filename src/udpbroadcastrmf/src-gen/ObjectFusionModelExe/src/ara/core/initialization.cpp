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
/**        \file  ObjectFusionModelExe/src/ara/core/initialization.cpp
 *        \brief  Provides ara::core::Initialize() and ara::core::Deinitialize().
 *
 *      \details  Provides the global initialization and shutdown functions that initialize resp. deinitialize data
*                 structures and threads of the AUTOSAR Runtime for Adaptive Applications (ARA).
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_applicationbase
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#include <cstdlib>
#include <string>

#include "amsr/application_base/initialization_error_domain.h"
#include "amsr/com/internal/lifecycle.h"
#include "amsr/generic/write_std_stream.h"
#include "amsr/log/internal/lifecycle.h"
#include "amsr/socal/internal/lifecycle.h"
#include "amsr/someip_binding/internal/life_cycle.h"
#include "amsr/thread/internal/lifecycle.h"
#include "amsr/tsync/internal/lifecycle.h"
#include "ara/core/initialization.h"
#include "ipc_binding/internal/life_cycle.h"
#include "osabstraction/internal/lifecycle.h"
#include "vac/internal/lifecycle.h"


namespace ara {
namespace core {
namespace details {

InitializationState g_initialization_state{InitializationState::kUninitialized};

}  // namespace details

/*!
 * \brief Returns a Result that contains an error code if the pre-conditions for initialization are not met.
 */
static ara::core::Result<void> CheckPreCondition() {
  ara::core::Result<void> res{amsr::application_base::InitializationErrc::kWrongSequence};

  if (ara::core::details::g_initialization_state == ara::core::details::InitializationState::kUninitialized) {
    res.EmplaceValue();
  }

  return res;
}

/*!
 * \brief Registers a de-initialization check that is to be made at normal program termination.
 */
static void RegisterAtExit() {
  static_cast<void>(std::atexit([] { // VCA_APPLICATIONBASE_UNDEFINED_FUNCTION, VCA_APPLICATIONBASE_FULFILLED_FUNCTION_CONTRACT
    if (ara::core::details::g_initialization_state == ara::core::details::InitializationState::kInitialized) {
      static_cast<void>(
          amsr::generic::WriteToStderr("Application terminated without proper call to ara::core::Deinitialize()!\n"));
    }
  }));
}

}  // namespace core
}  // namespace ara

ara::core::Result<void> ara::core::Initialize() noexcept {
  return CheckPreCondition()
      .AndThen([]() { return vac::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return osabstraction::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return amsr::thread::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return amsr::log::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return amsr::tsync::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return amsr::socal::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return amsr::ipc_binding::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return amsr::someip_binding::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .AndThen([]() { return amsr::com::internal::InitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
      .Inspect([]() {
        ara::core::details::g_initialization_state = ara::core::details::InitializationState::kInitialized;
        RegisterAtExit();
      })
      .InspectError([](ara::core::ErrorCode const& error) {
        static_cast<void>(amsr::generic::WriteToStderr("ara::core::Initialize() failed! Result contains: "));
        static_cast<void>(amsr::generic::WriteToStderr(error.Message())); // VCA_APPLICATIONBASE_NON_VERIFIED_PARAMETERS
        static_cast<void>(amsr::generic::WriteToStderr(", "));
        static_cast<void>(amsr::generic::WriteToStderr(error.UserMessage())); // VCA_APPLICATIONBASE_NON_VERIFIED_PARAMETERS
      });
}

ara::core::Result<void> ara::core::Deinitialize() noexcept {
  ara::core::Result<void> res{amsr::application_base::InitializationErrc::kWrongSequence};

  if (ara::core::details::g_initialization_state == ara::core::details::InitializationState::kInitialized) {
    // when Initialize() was called before, deinitialize; otherwise return kWrongSequence

    res = amsr::com::internal::DeinitializeComponent() // VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return amsr::someip_binding::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return amsr::ipc_binding::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return amsr::socal::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return amsr::tsync::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return amsr::log::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return amsr::thread::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return osabstraction::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .AndThen([]() { return vac::internal::DeinitializeComponent(); }) // VCA_APPLICATIONBASE_VALID_FUNCTION_CALL, VCA_APPLICATIONBASE_FUNCTION_CALL_VERIFIED
              .Inspect([]() {ara::core::details::g_initialization_state = ara::core::details::InitializationState::kDeinitialized;})
              .InspectError([](ara::core::ErrorCode const& error) {
                static_cast<void>(amsr::generic::WriteToStderr("ara::core::Deinitialize() failed! Result contains: "));
                static_cast<void>(amsr::generic::WriteToStderr(error.Message())); // VCA_APPLICATIONBASE_NON_VERIFIED_PARAMETERS
                static_cast<void>(amsr::generic::WriteToStderr(", "));
                static_cast<void>(amsr::generic::WriteToStderr(error.UserMessage())); // VCA_APPLICATIONBASE_NON_VERIFIED_PARAMETERS
              });
  }

  return res;
}
