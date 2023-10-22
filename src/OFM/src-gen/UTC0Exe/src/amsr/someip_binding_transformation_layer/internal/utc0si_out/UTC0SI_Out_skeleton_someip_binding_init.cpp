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
/**        \file  UTC0Exe/src/amsr/someip_binding_transformation_layer/internal/utc0si_out/UTC0SI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'UTC0SI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/UTC0SI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/utc0si_out/UTC0SI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/utc0si_out/UTC0SI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace utc0si_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsUTC0SI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x44C
    { // Event: UTC0_Bus_VehTiAndData

      // SOME/IP Skeleton event backend type for event 'UTC0_Bus_VehTiAndData'.
      using UTC0SI_OutSkeletonSomeIpEventBackendUTC0_Bus_VehTiAndData = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<UTC0SI_OutSkeletonSomeIpEventConfigurationUTC0_Bus_VehTiAndData>;

      std::unique_ptr<UTC0SI_OutSkeletonSomeIpEventBackendUTC0_Bus_VehTiAndData> event_backend{
        std::make_unique<UTC0SI_OutSkeletonSomeIpEventBackendUTC0_Bus_VehTiAndData>(1100U, server_manager)};
      utc0si_out::UTC0SI_OutSkeletonSomeIpEventManagerUTC0_Bus_VehTiAndData::EmplaceBackend(1100U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsUTC0SI_Out() {
  // Event: UTC0_Bus_VehTiAndData
  utc0si_out::UTC0SI_OutSkeletonSomeIpEventManagerUTC0_Bus_VehTiAndData::ClearBackendList();

}


}  // namespace utc0si_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

