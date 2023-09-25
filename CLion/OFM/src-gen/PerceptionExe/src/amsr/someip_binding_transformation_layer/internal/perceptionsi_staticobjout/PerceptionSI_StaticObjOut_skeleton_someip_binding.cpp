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
/**        \file  PerceptionExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_staticobjout/PerceptionSI_StaticObjOut_skeleton_someip_binding.cpp
 *        \brief  SOME/IP skeleton binding of service 'PerceptionSI_StaticObjOut'
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
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_staticobjout/PerceptionSI_StaticObjOut_skeleton_someip_binding.h"
#include <utility>

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_staticobjout {

/*!
 * \brief Generated SOME/IP related service ID.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_StaticObjOutSkeletonSomeIpBinding::kServiceId;

/*!
 * \brief SOME/IP major version of this service interface deployment.
 */
constexpr ::amsr::someip_protocol::internal::MajorVersion PerceptionSI_StaticObjOutSkeletonSomeIpBinding::kMajorVersion;

PerceptionSI_StaticObjOutSkeletonSomeIpBinding::PerceptionSI_StaticObjOutSkeletonSomeIpBinding(
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
    ::perceptionsi_staticobjout::skeleton::PerceptionSI_StaticObjOutSkeleton& skeleton)
    : instance_id_(instance_id),
      someip_binding_server_manager_(someip_binding_server_manager),
      skeleton_(skeleton) ,
      event_manager_FrntCam_Bus_StaticObj_(instance_id){
}

void PerceptionSI_StaticObjOutSkeletonSomeIpBinding::HandleMethodRequest(
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

void PerceptionSI_StaticObjOutSkeletonSomeIpBinding::SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  someip_binding_server_manager_.SendMethodResponse(instance_id_, std::move(packet));
}

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'FrntCam_Bus_StaticObj'
PerceptionSI_StaticObjOutSkeletonSomeIpEventManagerFrntCam_Bus_StaticObj* PerceptionSI_StaticObjOutSkeletonSomeIpBinding::GetEventManagerFrntCam_Bus_StaticObj() noexcept {
  return &event_manager_FrntCam_Bus_StaticObj_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace perceptionsi_staticobjout

