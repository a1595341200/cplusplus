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
/**        \file  PerceptionSideExe/src/amsr/socal/internal/runtime_gen.cpp
 *        \brief  Runtime initialization.
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
#include "amsr/socal/definitions.h"
#include "amsr/socal/internal/lifecycle_manager.h"
#include "amsr/socal/internal/runtime.h"
#include "ara/core/abort.h"
#include "vac/container/string_literals.h"


namespace amsr {
namespace socal {
namespace internal {

configuration::RuntimeProcessingMode const Runtime::runtime_processing_mode_{::amsr::socal::kRuntimeProcessingMode};
static_assert(std::is_trivially_destructible<configuration::RuntimeProcessingMode>::value,
              "::amsr::socal::internal::configuration::RuntimeProcessingMode not trivially destructible!");

void Runtime::InitializeInstanceSpecifierLookupTables() noexcept {
  // VECTOR NL AutosarC++17_10-M7.3.4: MD_SOCAL_AutosarC++17_10-M7.3.4_usingDirectivesShallNotBeUsed
  using namespace vac::container::literals;  // NOLINT(build/namespaces)

  // Add R-Port InstanceSpecifier 'PerceptionSideExe/PerceptionSide/PerceptionSide_ToSOCA_InfomationSI_R' to the lookup table.
  // VCA_SOCAL_UNDEFINED_RUNTIME_ADD_INSTANCE_SPECIFIER_FUNCTION
  AddInstanceSpecifier(required_instance_specifier_table_, "PerceptionSideExe/PerceptionSide/PerceptionSide_ToSOCA_InfomationSI_R"_sv);

  // Add R-Port InstanceSpecifier 'PerceptionSideExe/PerceptionSide/PerceptionSide_ToSOCA_LocSensorInfoSI_R' to the lookup table.
  // VCA_SOCAL_UNDEFINED_RUNTIME_ADD_INSTANCE_SPECIFIER_FUNCTION
  AddInstanceSpecifier(required_instance_specifier_table_, "PerceptionSideExe/PerceptionSide/PerceptionSide_ToSOCA_LocSensorInfoSI_R"_sv);

  // Add P-Port InstanceSpecifier 'PerceptionSideExe/PerceptionSide/PerceptionSide_PerceptionSideSI_Out_P' to the lookup table.
  // VCA_SOCAL_UNDEFINED_RUNTIME_ADD_INSTANCE_SPECIFIER_FUNCTION
  AddInstanceSpecifier(provided_instance_specifier_table_, "PerceptionSideExe/PerceptionSide/PerceptionSide_PerceptionSideSI_Out_P"_sv);
}

// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
// VCA_SOCAL_EXTERNAL_FUNCTION_CONTRACT
void Runtime::InitializeLifecycleManager() noexcept { ::amsr::socal::internal::LifecycleManager::Initialize(); }

// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
void Runtime::DeinitializeLifecycleManager() noexcept { ::amsr::socal::internal::LifecycleManager::Deinitialize(); }

}  // namespace internal
}  // namespace socal
}  // namespace amsr

