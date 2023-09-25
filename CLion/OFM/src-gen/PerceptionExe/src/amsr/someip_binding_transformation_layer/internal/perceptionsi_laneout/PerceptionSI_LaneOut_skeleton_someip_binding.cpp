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
/**        \file  PerceptionExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_binding.cpp
 *        \brief  SOME/IP skeleton binding of service 'PerceptionSI_LaneOut'
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
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_binding.h"
#include <utility>

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_laneout {

/*!
 * \brief Generated SOME/IP related service ID.
 */
::amsr::someip_protocol::internal::ServiceId constexpr PerceptionSI_LaneOutSkeletonSomeIpBinding::kServiceId;

/*!
 * \brief SOME/IP major version of this service interface deployment.
 */
constexpr ::amsr::someip_protocol::internal::MajorVersion PerceptionSI_LaneOutSkeletonSomeIpBinding::kMajorVersion;

PerceptionSI_LaneOutSkeletonSomeIpBinding::PerceptionSI_LaneOutSkeletonSomeIpBinding(
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
    ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton& skeleton)
    : instance_id_(instance_id),
      someip_binding_server_manager_(someip_binding_server_manager),
      skeleton_(skeleton) ,
      event_manager_FusedCam_Bus_LaneMkrLe_(instance_id),
      event_manager_FusedCam_Bus_LaneMkrRi_(instance_id),
      event_manager_FrntCam_Bus_RoadEdgeLe_(instance_id),
      event_manager_FrntCam_Bus_RoadEdgeRi_(instance_id),
      event_manager_Cam_Bus_LaneEvent_(instance_id),
      event_manager_Cam_Bus_LaneEventGroup_(instance_id),
      event_manager_Cam_Bus_LaneMkrTemp_(instance_id),
      event_manager_FusedCam_Bus_LaneMkrSecClsLe_(instance_id),
      event_manager_FusedCam_Bus_LaneMkrSecClsRi_(instance_id){
}

void PerceptionSI_LaneOutSkeletonSomeIpBinding::HandleMethodRequest(
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

void PerceptionSI_LaneOutSkeletonSomeIpBinding::SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  someip_binding_server_manager_.SendMethodResponse(instance_id_, std::move(packet));
}

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'FusedCam_Bus_LaneMkrLe'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrLe* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerFusedCam_Bus_LaneMkrLe() noexcept {
  return &event_manager_FusedCam_Bus_LaneMkrLe_;
}

// Event 'FusedCam_Bus_LaneMkrRi'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrRi* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerFusedCam_Bus_LaneMkrRi() noexcept {
  return &event_manager_FusedCam_Bus_LaneMkrRi_;
}

// Event 'FrntCam_Bus_RoadEdgeLe'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeLe* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerFrntCam_Bus_RoadEdgeLe() noexcept {
  return &event_manager_FrntCam_Bus_RoadEdgeLe_;
}

// Event 'FrntCam_Bus_RoadEdgeRi'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeRi* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerFrntCam_Bus_RoadEdgeRi() noexcept {
  return &event_manager_FrntCam_Bus_RoadEdgeRi_;
}

// Event 'Cam_Bus_LaneEvent'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEvent* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerCam_Bus_LaneEvent() noexcept {
  return &event_manager_Cam_Bus_LaneEvent_;
}

// Event 'Cam_Bus_LaneEventGroup'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEventGroup* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerCam_Bus_LaneEventGroup() noexcept {
  return &event_manager_Cam_Bus_LaneEventGroup_;
}

// Event 'Cam_Bus_LaneMkrTemp'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneMkrTemp* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerCam_Bus_LaneMkrTemp() noexcept {
  return &event_manager_Cam_Bus_LaneMkrTemp_;
}

// Event 'FusedCam_Bus_LaneMkrSecClsLe'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsLe* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerFusedCam_Bus_LaneMkrSecClsLe() noexcept {
  return &event_manager_FusedCam_Bus_LaneMkrSecClsLe_;
}

// Event 'FusedCam_Bus_LaneMkrSecClsRi'
PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsRi* PerceptionSI_LaneOutSkeletonSomeIpBinding::GetEventManagerFusedCam_Bus_LaneMkrSecClsRi() noexcept {
  return &event_manager_FusedCam_Bus_LaneMkrSecClsRi_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace perceptionsi_laneout

