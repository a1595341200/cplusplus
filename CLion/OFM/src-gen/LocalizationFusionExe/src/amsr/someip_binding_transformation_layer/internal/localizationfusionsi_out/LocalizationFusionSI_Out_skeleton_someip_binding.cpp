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
/**        \file  LocalizationFusionExe/src/amsr/someip_binding_transformation_layer/internal/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_someip_binding.cpp
 *        \brief  SOME/IP skeleton binding of service 'LocalizationFusionSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_someip_binding.h"
#include <utility>

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace localizationfusionsi_out {

/*!
 * \brief Generated SOME/IP related service ID.
 */
::amsr::someip_protocol::internal::ServiceId constexpr LocalizationFusionSI_OutSkeletonSomeIpBinding::kServiceId;

/*!
 * \brief SOME/IP major version of this service interface deployment.
 */
constexpr ::amsr::someip_protocol::internal::MajorVersion LocalizationFusionSI_OutSkeletonSomeIpBinding::kMajorVersion;

LocalizationFusionSI_OutSkeletonSomeIpBinding::LocalizationFusionSI_OutSkeletonSomeIpBinding(
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
    ::localizationfusionsi_out::skeleton::LocalizationFusionSI_OutSkeleton& skeleton)
    : instance_id_(instance_id),
      someip_binding_server_manager_(someip_binding_server_manager),
      skeleton_(skeleton) ,
      event_manager_LFM_Bus_MapErrorSts_(instance_id){
}

void LocalizationFusionSI_OutSkeletonSomeIpBinding::HandleMethodRequest(
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

void LocalizationFusionSI_OutSkeletonSomeIpBinding::SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  someip_binding_server_manager_.SendMethodResponse(instance_id_, std::move(packet));
}

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'LFM_Bus_MapErrorSts'
LocalizationFusionSI_OutSkeletonSomeIpEventManagerLFM_Bus_MapErrorSts* LocalizationFusionSI_OutSkeletonSomeIpBinding::GetEventManagerLFM_Bus_MapErrorSts() noexcept {
  return &event_manager_LFM_Bus_MapErrorSts_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace localizationfusionsi_out

