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
/**        \file  PerceptionExe/src/amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_skeleton_xf.cpp
 *        \brief  SOME/IP skeleton binding of service 'PerceptionSI_Out'
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
#include "amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_skeleton_xf.h"
#include <utility>
#include "amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_skeleton_someip_methods.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_perceptionsi_out {

// ---- Methods --------------------------------------------------------------------------------------------------

// ---- Fields ---------------------------------------------------------------------------------------------------

PerceptionSI_OutSkeletonXf::PerceptionSI_OutSkeletonXf(
    ::amsr::someip_binding_core::internal::ProvidedServiceInstanceId const provided_service_instance_id,
    ::amsr::someip_binding_core::internal::ServerInterface& server,
    ::perceptionsi_out::internal::PerceptionSI_OutSkeletonBackendInterface& skeleton,
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
bool PerceptionSI_OutSkeletonXf::HandleMethodRequest(
  ::amsr::someip_protocol::internal::SomeIpMessageHeader const& someip_message_header,
  ::amsr::someip_protocol::internal::SomeIpMessage&& someip_message) noexcept {
  static_cast<void>(someip_message_header);
  // VCA_SOMEIPBINDING_TRIVIAL_VALID_REFERENCE
  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
  return method_request_router_.HandleMethodRequest(std::move(someip_message));
} // COV_SOMEIPBINDING_SKELETON_XF

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'Perception_Bus_LaneInfo'
events::skeleton::Perception_Bus_LaneInfo::PerceptionSI_OutSkeletonSomeIpEventManagerPerception_Bus_LaneInfo* PerceptionSI_OutSkeletonXf::GetEventManagerPerception_Bus_LaneInfo() noexcept {
  return &event_manager_Perception_Bus_LaneInfo_;
} // COV_SOMEIPBINDING_SKELETON_XF

// Event 'Perception_Bus_FrntCamInfo'
events::skeleton::Perception_Bus_FrntCamInfo::PerceptionSI_OutSkeletonSomeIpEventManagerPerception_Bus_FrntCamInfo* PerceptionSI_OutSkeletonXf::GetEventManagerPerception_Bus_FrntCamInfo() noexcept {
  return &event_manager_Perception_Bus_FrntCamInfo_;
} // COV_SOMEIPBINDING_SKELETON_XF

// Event 'FrntCam_Bus_TrafficInfo'
events::skeleton::FrntCam_Bus_TrafficInfo::PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_TrafficInfo* PerceptionSI_OutSkeletonXf::GetEventManagerFrntCam_Bus_TrafficInfo() noexcept {
  return &event_manager_FrntCam_Bus_TrafficInfo_;
} // COV_SOMEIPBINDING_SKELETON_XF

// Event 'FrntCam_Bus_TrfcLi'
events::skeleton::FrntCam_Bus_TrfcLi::PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_TrfcLi* PerceptionSI_OutSkeletonXf::GetEventManagerFrntCam_Bus_TrfcLi() noexcept {
  return &event_manager_FrntCam_Bus_TrfcLi_;
} // COV_SOMEIPBINDING_SKELETON_XF

// Event 'FrntCam_Bus_LineSignGroup'
events::skeleton::FrntCam_Bus_LineSignGroup::PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_LineSignGroup* PerceptionSI_OutSkeletonXf::GetEventManagerFrntCam_Bus_LineSignGroup() noexcept {
  return &event_manager_FrntCam_Bus_LineSignGroup_;
} // COV_SOMEIPBINDING_SKELETON_XF

// Event 'FrntCam_Bus_ExtInfo'
events::skeleton::FrntCam_Bus_ExtInfo::PerceptionSI_OutSkeletonSomeIpEventManagerFrntCam_Bus_ExtInfo* PerceptionSI_OutSkeletonXf::GetEventManagerFrntCam_Bus_ExtInfo() noexcept {
  return &event_manager_FrntCam_Bus_ExtInfo_;
} // COV_SOMEIPBINDING_SKELETON_XF

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace gen_perceptionsi_out
}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr


