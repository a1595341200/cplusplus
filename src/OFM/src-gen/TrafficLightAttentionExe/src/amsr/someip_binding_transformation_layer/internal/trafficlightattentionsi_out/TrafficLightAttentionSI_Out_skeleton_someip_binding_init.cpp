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
/**        \file  TrafficLightAttentionExe/src/amsr/someip_binding_transformation_layer/internal/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'TrafficLightAttentionSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/TrafficLightAttentionSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace trafficlightattentionsi_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsTrafficLightAttentionSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x419
    { // Event: TLA_Bus_HMIDataTrfcLi

      // SOME/IP Skeleton event backend type for event 'TLA_Bus_HMIDataTrfcLi'.
      using TrafficLightAttentionSI_OutSkeletonSomeIpEventBackendTLA_Bus_HMIDataTrfcLi = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<TrafficLightAttentionSI_OutSkeletonSomeIpEventConfigurationTLA_Bus_HMIDataTrfcLi>;

      std::unique_ptr<TrafficLightAttentionSI_OutSkeletonSomeIpEventBackendTLA_Bus_HMIDataTrfcLi> event_backend{
        std::make_unique<TrafficLightAttentionSI_OutSkeletonSomeIpEventBackendTLA_Bus_HMIDataTrfcLi>(1049U, server_manager)};
      trafficlightattentionsi_out::TrafficLightAttentionSI_OutSkeletonSomeIpEventManagerTLA_Bus_HMIDataTrfcLi::EmplaceBackend(1049U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsTrafficLightAttentionSI_Out() {
  // Event: TLA_Bus_HMIDataTrfcLi
  trafficlightattentionsi_out::TrafficLightAttentionSI_OutSkeletonSomeIpEventManagerTLA_Bus_HMIDataTrfcLi::ClearBackendList();

}


}  // namespace trafficlightattentionsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

