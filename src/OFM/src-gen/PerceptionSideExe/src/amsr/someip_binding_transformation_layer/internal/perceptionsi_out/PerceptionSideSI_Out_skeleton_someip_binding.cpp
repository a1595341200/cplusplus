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
/**        \file  PerceptionSideExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_someip_binding.cpp
 *        \brief  SOME/IP skeleton binding of service 'PerceptionSideSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_someip_binding.h"
#include <utility>

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

/*!
 * \brief Generated SOME/IP related service ID.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSideSI_OutSkeletonSomeIpBinding::kServiceId;

/*!
 * \brief SOME/IP major version of this service interface deployment.
 */
constexpr ::amsr::someip_protocol::internal::MajorVersion PerceptionSideSI_OutSkeletonSomeIpBinding::kMajorVersion;

PerceptionSideSI_OutSkeletonSomeIpBinding::PerceptionSideSI_OutSkeletonSomeIpBinding(
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
    ::perceptionsi_out::skeleton::PerceptionSideSI_OutSkeleton& skeleton)
    : instance_id_(instance_id),
      someip_binding_server_manager_(someip_binding_server_manager),
      skeleton_(skeleton) ,
      event_manager_FLCam_Bus_VisnObj_(instance_id),
      event_manager_FRCam_Bus_VisnObj_(instance_id),
      event_manager_RLCam_Bus_VisnObj_(instance_id),
      event_manager_RRCam_Bus_VisnObj_(instance_id),
      event_manager_FLCam_Bus_CamSts_(instance_id),
      event_manager_FRCam_Bus_CamSts_(instance_id),
      event_manager_RLCam_Bus_CamSts_(instance_id),
      event_manager_RRCam_Bus_CamSts_(instance_id){
}

void PerceptionSideSI_OutSkeletonSomeIpBinding::HandleMethodRequest(
  ::amsr::someip_protocol::internal::SomeIpMessageHeader const& header,
  ::amsr::someip_protocol::internal::SomeIpMessage ) {
  // Based on the method id -> static dispatching to the method request/response manager
  switch (header.method_id_) {
    default: {
      // Method implementation is missing.
      SendErrorResponse<static_cast<::amsr::someip_protocol::internal::ReturnCode>(::amsr::someip_protocol::internal::SomeIpReturnCode::kUnknownMethod)>(header);
      break;
    }
  }
}

void PerceptionSideSI_OutSkeletonSomeIpBinding::SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  someip_binding_server_manager_.SendMethodResponse(instance_id_, std::move(packet));
}

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'FLCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_VisnObj* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerFLCam_Bus_VisnObj() noexcept {
  return &event_manager_FLCam_Bus_VisnObj_;
}

// Event 'FRCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_VisnObj* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerFRCam_Bus_VisnObj() noexcept {
  return &event_manager_FRCam_Bus_VisnObj_;
}

// Event 'RLCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_VisnObj* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerRLCam_Bus_VisnObj() noexcept {
  return &event_manager_RLCam_Bus_VisnObj_;
}

// Event 'RRCam_Bus_VisnObj'
PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_VisnObj* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerRRCam_Bus_VisnObj() noexcept {
  return &event_manager_RRCam_Bus_VisnObj_;
}

// Event 'FLCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_CamSts* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerFLCam_Bus_CamSts() noexcept {
  return &event_manager_FLCam_Bus_CamSts_;
}

// Event 'FRCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_CamSts* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerFRCam_Bus_CamSts() noexcept {
  return &event_manager_FRCam_Bus_CamSts_;
}

// Event 'RLCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_CamSts* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerRLCam_Bus_CamSts() noexcept {
  return &event_manager_RLCam_Bus_CamSts_;
}

// Event 'RRCam_Bus_CamSts'
PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_CamSts* PerceptionSideSI_OutSkeletonSomeIpBinding::GetEventManagerRRCam_Bus_CamSts() noexcept {
  return &event_manager_RRCam_Bus_CamSts_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace perceptionsi_out

