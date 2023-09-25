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
/**        \file  TrafficLightAttentionExe/src/ara/core/initialization.cpp
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
 *         Commit ID: 07a72a000ba0c2862bd46e02c1741f1994a9a1fa
 *********************************************************************************************************************/

#include <cstdlib>
#include <string>

#include "amsr/application_base/initialization_error_domain.h"
#include "amsr/generic/write_std_stream.h"
#include "amsr/log/internal/lifecycle.h"
#include "amsr/socal/internal/lifecycle.h"
#include "amsr/thread/internal/lifecycle.h"
#include "ara/core/initialization.h"
#include "osabstraction/internal/lifecycle.h"
#include "vac/internal/lifecycle.h"


namespace ara {
namespace core {
namespace details {

enum class InitializationState{kUninitialized, kInitialized, kDeinitialized};

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
  static_cast<void>(std::atexit([] {
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
      .AndThen([]() { return vac::internal::InitializeComponent(); })
      .AndThen([]() { return osabstraction::internal::InitializeComponent(); })
      .AndThen([]() { return amsr::thread::internal::InitializeComponent(); })
      .AndThen([]() { return amsr::log::internal::InitializeComponent(); })
      .AndThen([]() { return amsr::socal::internal::InitializeComponent(); })
      .Inspect([]() {
        ara::core::details::g_initialization_state = ara::core::details::InitializationState::kInitialized;
        RegisterAtExit();
      })
      .InspectError([](ara::core::ErrorCode const& error) {
        static_cast<void>(amsr::generic::WriteToStderr("ara::core::Initialize() failed! Result contains: "));
        static_cast<void>(amsr::generic::WriteToStderr(error.Message()));
        static_cast<void>(amsr::generic::WriteToStderr(", "));
        static_cast<void>(amsr::generic::WriteToStderr(error.UserMessage()));
      });
}

ara::core::Result<void> ara::core::Deinitialize() noexcept {
  ara::core::Result<void> res{amsr::application_base::InitializationErrc::kWrongSequence};

  if (ara::core::details::g_initialization_state == ara::core::details::InitializationState::kInitialized) {
    // when Initialize() was called before, deinitialize; otherwise return kWrongSequence

    res = amsr::socal::internal::DeinitializeComponent()
              .AndThen([]() { return amsr::log::internal::DeinitializeComponent(); })
              .AndThen([]() { return amsr::thread::internal::DeinitializeComponent(); })
              .AndThen([]() { return osabstraction::internal::DeinitializeComponent(); })
              .AndThen([]() { return vac::internal::DeinitializeComponent(); })
              .Inspect([]() {ara::core::details::g_initialization_state = ara::core::details::InitializationState::kDeinitialized;})
              .InspectError([](ara::core::ErrorCode const& error) {
                static_cast<void>(amsr::generic::WriteToStderr("ara::core::Deinitialize() failed! Result contains: "));
                static_cast<void>(amsr::generic::WriteToStderr(error.Message()));
                static_cast<void>(amsr::generic::WriteToStderr(", "));
                static_cast<void>(amsr::generic::WriteToStderr(error.UserMessage()));
              });
  }

  return res;
}
