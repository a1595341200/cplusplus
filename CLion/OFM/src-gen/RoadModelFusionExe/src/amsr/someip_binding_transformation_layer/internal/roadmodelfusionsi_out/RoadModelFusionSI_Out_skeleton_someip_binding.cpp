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
/**        \file  RoadModelFusionExe/src/amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_binding.cpp
 *        \brief  SOME/IP skeleton binding of service 'RoadModelFusionSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_binding.h"
#include <utility>

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace roadmodelfusionsi_out {

/*!
 * \brief Generated SOME/IP related service ID.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RoadModelFusionSI_OutSkeletonSomeIpBinding::kServiceId;

/*!
 * \brief SOME/IP major version of this service interface deployment.
 */
constexpr ::amsr::someip_protocol::internal::MajorVersion RoadModelFusionSI_OutSkeletonSomeIpBinding::kMajorVersion;

RoadModelFusionSI_OutSkeletonSomeIpBinding::RoadModelFusionSI_OutSkeletonSomeIpBinding(
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
    ::roadmodelfusionsi_out::skeleton::RoadModelFusionSI_OutSkeleton& skeleton)
    : instance_id_(instance_id),
      someip_binding_server_manager_(someip_binding_server_manager),
      skeleton_(skeleton) ,
      event_manager_RMF_Bus_ExtractedMapInf_(instance_id),
      event_manager_RMF_Bus_RefPathGlobal_(instance_id),
      event_manager_RMF_Bus_LaneModel_(instance_id),
      event_manager_RMF_Bus_RefLineSpeedInf_(instance_id),
      event_manager_RMF_Bus_RefLinePoints_(instance_id),
      event_manager_RMF_Bus_MapOdd_(instance_id){
}

void RoadModelFusionSI_OutSkeletonSomeIpBinding::HandleMethodRequest(
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

void RoadModelFusionSI_OutSkeletonSomeIpBinding::SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  someip_binding_server_manager_.SendMethodResponse(instance_id_, std::move(packet));
}

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'RMF_Bus_ExtractedMapInf'
RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_ExtractedMapInf* RoadModelFusionSI_OutSkeletonSomeIpBinding::GetEventManagerRMF_Bus_ExtractedMapInf() noexcept {
  return &event_manager_RMF_Bus_ExtractedMapInf_;
}

// Event 'RMF_Bus_RefPathGlobal'
RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefPathGlobal* RoadModelFusionSI_OutSkeletonSomeIpBinding::GetEventManagerRMF_Bus_RefPathGlobal() noexcept {
  return &event_manager_RMF_Bus_RefPathGlobal_;
}

// Event 'RMF_Bus_LaneModel'
RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_LaneModel* RoadModelFusionSI_OutSkeletonSomeIpBinding::GetEventManagerRMF_Bus_LaneModel() noexcept {
  return &event_manager_RMF_Bus_LaneModel_;
}

// Event 'RMF_Bus_RefLineSpeedInf'
RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLineSpeedInf* RoadModelFusionSI_OutSkeletonSomeIpBinding::GetEventManagerRMF_Bus_RefLineSpeedInf() noexcept {
  return &event_manager_RMF_Bus_RefLineSpeedInf_;
}

// Event 'RMF_Bus_RefLinePoints'
RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLinePoints* RoadModelFusionSI_OutSkeletonSomeIpBinding::GetEventManagerRMF_Bus_RefLinePoints() noexcept {
  return &event_manager_RMF_Bus_RefLinePoints_;
}

// Event 'RMF_Bus_MapOdd'
RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_MapOdd* RoadModelFusionSI_OutSkeletonSomeIpBinding::GetEventManagerRMF_Bus_MapOdd() noexcept {
  return &event_manager_RMF_Bus_MapOdd_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace roadmodelfusionsi_out

