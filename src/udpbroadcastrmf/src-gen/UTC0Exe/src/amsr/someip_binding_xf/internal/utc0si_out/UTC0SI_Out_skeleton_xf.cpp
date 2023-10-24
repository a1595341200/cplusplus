// VECTOR Same Line AutosarC++17_10-A1.1.1: MD_SOMEIPBINDING_AutosarC++17_10-A1.1.1_external_identifiers
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
/**        \file  UTC0Exe/src/amsr/someip_binding_xf/internal/utc0si_out/UTC0SI_Out_skeleton_xf.cpp
 *        \brief  SOME/IP skeleton binding of service 'UTC0SI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/utc0si_out/UTC0SI_Out_skeleton_xf.h"
#include <utility>
#include "amsr/someip_binding_xf/internal/utc0si_out/UTC0SI_Out_skeleton_someip_methods.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_utc0si_out {

// ---- Methods --------------------------------------------------------------------------------------------------

// ---- Fields ---------------------------------------------------------------------------------------------------

UTC0SI_OutSkeletonXf::UTC0SI_OutSkeletonXf(
    ::amsr::someip_binding_core::internal::ProvidedServiceInstanceId const provided_service_instance_id,
    ::amsr::someip_binding_core::internal::ServerInterface& server,
    ::utc0si_out::internal::UTC0SI_OutSkeletonBackendInterface& skeleton,
    E2EPropsMap const& e2e_props_map,
    ::amsr::someip_binding::internal::configuration::ConfigWrapperInterface const& config_wrapper,
    ::amsr::someip_binding::internal::configuration::SomeIpBindingConfig::E2EProfileMap const&
        e2e_profile_config_map, std::function<void()> process_polling, bool const is_polling_mode)
    : provided_service_instance_id_(provided_service_instance_id),
      server_(server),
      skeleton_{skeleton},
      // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
      e2e_props_map_{e2e_props_map},
      // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
      config_wrapper_{config_wrapper},
      // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
      e2e_profile_config_map_{e2e_profile_config_map},
      // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
      // VCA_SOMEIPBINDING_POSSIBLY_INVALID_ARGUMENT
      process_polling_{process_polling},
      // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
      is_polling_mode_{is_polling_mode} {} // COV_SOMEIPBINDING_SKELETON_XF
bool UTC0SI_OutSkeletonXf::HandleMethodRequest(
  ::amsr::someip_protocol::internal::SomeIpMessageHeader const& someip_message_header,
  ::amsr::someip_protocol::internal::SomeIpMessage&& someip_message) noexcept {
  static_cast<void>(someip_message_header);
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
  return method_request_router_.HandleMethodRequest(std::move(someip_message));
} // COV_SOMEIPBINDING_SKELETON_XF

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'UTC0_Bus_VehTiAndData'
events::skeleton::UTC0_Bus_VehTiAndData::UTC0SI_OutSkeletonSomeIpEventManagerUTC0_Bus_VehTiAndData* UTC0SI_OutSkeletonXf::GetEventManagerUTC0_Bus_VehTiAndData() noexcept {
  return &event_manager_UTC0_Bus_VehTiAndData_;
} // COV_SOMEIPBINDING_SKELETON_XF

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace gen_utc0si_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr


