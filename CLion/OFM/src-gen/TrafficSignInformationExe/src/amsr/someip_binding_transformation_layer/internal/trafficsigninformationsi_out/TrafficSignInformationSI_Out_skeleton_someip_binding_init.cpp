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
/**        \file  TrafficSignInformationExe/src/amsr/someip_binding_transformation_layer/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'TrafficSignInformationSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/TrafficSignInformationSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace trafficsigninformationsi_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsTrafficSignInformationSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x41B
    { // Event: TSI_Bus_HMIData

      // SOME/IP Skeleton event backend type for event 'TSI_Bus_HMIData'.
      using TrafficSignInformationSI_OutSkeletonSomeIpEventBackendTSI_Bus_HMIData = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<TrafficSignInformationSI_OutSkeletonSomeIpEventConfigurationTSI_Bus_HMIData>;

      std::unique_ptr<TrafficSignInformationSI_OutSkeletonSomeIpEventBackendTSI_Bus_HMIData> event_backend{
        std::make_unique<TrafficSignInformationSI_OutSkeletonSomeIpEventBackendTSI_Bus_HMIData>(1051U, server_manager)};
      trafficsigninformationsi_out::TrafficSignInformationSI_OutSkeletonSomeIpEventManagerTSI_Bus_HMIData::EmplaceBackend(1051U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsTrafficSignInformationSI_Out() {
  // Event: TSI_Bus_HMIData
  trafficsigninformationsi_out::TrafficSignInformationSI_OutSkeletonSomeIpEventManagerTSI_Bus_HMIData::ClearBackendList();

}


}  // namespace trafficsigninformationsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

