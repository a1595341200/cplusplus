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
/**        \file  ObjectFusionModelExe/src/amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_binding.cpp
 *        \brief  SOME/IP skeleton binding of service 'ObjectFusionModelSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_binding.h"
#include <utility>

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

/*!
 * \brief Generated SOME/IP related service ID.
 */
::amsr::someip_protocol::internal::ServiceId constexpr ObjectFusionModelSI_OutSkeletonSomeIpBinding::kServiceId;

/*!
 * \brief SOME/IP major version of this service interface deployment.
 */
constexpr ::amsr::someip_protocol::internal::MajorVersion ObjectFusionModelSI_OutSkeletonSomeIpBinding::kMajorVersion;

ObjectFusionModelSI_OutSkeletonSomeIpBinding::ObjectFusionModelSI_OutSkeletonSomeIpBinding(
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
    ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton& skeleton)
    : instance_id_(instance_id),
      someip_binding_server_manager_(someip_binding_server_manager),
      skeleton_(skeleton) ,
      event_manager_OFM_Bus_FusedTargets_11_(instance_id),
      event_manager_OFM_St_SOCFusedSts_(instance_id),
      event_manager_OFM_Bus_FourDRadarECUSts_(instance_id),
      event_manager_OFM_Bus_FrontFourDRadarSts_(instance_id),
      event_manager_OFM_Bus_FusedTargets_22_(instance_id),
      event_manager_OFM_Bus_FusedTargets_32_(instance_id),
      event_manager_OFM_St_FrntRdrObjE2Efail_(instance_id),
      event_manager_OFM_St_FrntRdrObjTO_(instance_id){
}

void ObjectFusionModelSI_OutSkeletonSomeIpBinding::HandleMethodRequest(
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

void ObjectFusionModelSI_OutSkeletonSomeIpBinding::SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  someip_binding_server_manager_.SendMethodResponse(instance_id_, std::move(packet));
}

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'OFM_Bus_FusedTargets_11'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_11* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_Bus_FusedTargets_11() noexcept {
  return &event_manager_OFM_Bus_FusedTargets_11_;
}

// Event 'OFM_St_SOCFusedSts'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_St_SOCFusedSts() noexcept {
  return &event_manager_OFM_St_SOCFusedSts_;
}

// Event 'OFM_Bus_FourDRadarECUSts'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarECUSts* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_Bus_FourDRadarECUSts() noexcept {
  return &event_manager_OFM_Bus_FourDRadarECUSts_;
}

// Event 'OFM_Bus_FrontFourDRadarSts'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FrontFourDRadarSts* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_Bus_FrontFourDRadarSts() noexcept {
  return &event_manager_OFM_Bus_FrontFourDRadarSts_;
}

// Event 'OFM_Bus_FusedTargets_22'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_22* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_Bus_FusedTargets_22() noexcept {
  return &event_manager_OFM_Bus_FusedTargets_22_;
}

// Event 'OFM_Bus_FusedTargets_32'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_32* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_Bus_FusedTargets_32() noexcept {
  return &event_manager_OFM_Bus_FusedTargets_32_;
}

// Event 'OFM_St_FrntRdrObjE2Efail'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjE2Efail* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_St_FrntRdrObjE2Efail() noexcept {
  return &event_manager_OFM_St_FrntRdrObjE2Efail_;
}

// Event 'OFM_St_FrntRdrObjTO'
ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjTO* ObjectFusionModelSI_OutSkeletonSomeIpBinding::GetEventManagerOFM_St_FrntRdrObjTO() noexcept {
  return &event_manager_OFM_St_FrntRdrObjTO_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace objectfusionmodelsi_out

