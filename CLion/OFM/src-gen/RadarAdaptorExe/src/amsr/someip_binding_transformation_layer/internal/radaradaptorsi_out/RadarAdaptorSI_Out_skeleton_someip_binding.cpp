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
/**        \file  RadarAdaptorExe/src/amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_binding.cpp
 *        \brief  SOME/IP skeleton binding of service 'RadarAdaptorSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_binding.h"
#include <utility>

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace radaradaptorsi_out {

/*!
 * \brief Generated SOME/IP related service ID.
 */
::amsr::someip_protocol::internal::ServiceId constexpr RadarAdaptorSI_OutSkeletonSomeIpBinding::kServiceId;

/*!
 * \brief SOME/IP major version of this service interface deployment.
 */
constexpr ::amsr::someip_protocol::internal::MajorVersion RadarAdaptorSI_OutSkeletonSomeIpBinding::kMajorVersion;

RadarAdaptorSI_OutSkeletonSomeIpBinding::RadarAdaptorSI_OutSkeletonSomeIpBinding(
    ::amsr::someip_protocol::internal::InstanceId const instance_id,
    ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
    ::radaradaptorsi_out::skeleton::RadarAdaptorSI_OutSkeleton& skeleton)
    : instance_id_(instance_id),
      someip_binding_server_manager_(someip_binding_server_manager),
      skeleton_(skeleton) ,
      event_manager_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts_(instance_id),
      event_manager_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01_(instance_id),
      event_manager_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02_(instance_id),
      event_manager_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03_(instance_id),
      event_manager_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04_(instance_id),
      event_manager_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05_(instance_id){
}

void RadarAdaptorSI_OutSkeletonSomeIpBinding::HandleMethodRequest(
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

void RadarAdaptorSI_OutSkeletonSomeIpBinding::SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet) {
  someip_binding_server_manager_.SendMethodResponse(instance_id_, std::move(packet));
}

// ---- Events -----------------------------------------------------------------------------------------------------

// Event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'
RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts* RadarAdaptorSI_OutSkeletonSomeIpBinding::GetEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts() noexcept {
  return &event_manager_FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts_;
}

// Event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'
RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01* RadarAdaptorSI_OutSkeletonSomeIpBinding::GetEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01() noexcept {
  return &event_manager_FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01_;
}

// Event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'
RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02* RadarAdaptorSI_OutSkeletonSomeIpBinding::GetEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02() noexcept {
  return &event_manager_FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02_;
}

// Event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'
RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03* RadarAdaptorSI_OutSkeletonSomeIpBinding::GetEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03() noexcept {
  return &event_manager_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03_;
}

// Event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'
RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04* RadarAdaptorSI_OutSkeletonSomeIpBinding::GetEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04() noexcept {
  return &event_manager_FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04_;
}

// Event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'
RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05* RadarAdaptorSI_OutSkeletonSomeIpBinding::GetEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05() noexcept {
  return &event_manager_FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05_;
}

// ---- Fields -----------------------------------------------------------------------------------------------------

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace radaradaptorsi_out

