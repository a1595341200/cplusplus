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
/**        \file  Soc2LidarExe/src/amsr/someip_binding_transformation_layer/internal/soc2lidarsid_out/Soc2LidarSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'Soc2LidarSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/Soc2LidarSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/soc2lidarsid_out/Soc2LidarSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/soc2lidarsid_out/Soc2LidarSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace soc2lidarsid_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsSoc2LidarSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x44A
    { // Event: Soc2L_Bus_VehicleInfo2Lidar

      // SOME/IP Skeleton event backend type for event 'Soc2L_Bus_VehicleInfo2Lidar'.
      using Soc2LidarSI_OutSkeletonSomeIpEventBackendSoc2L_Bus_VehicleInfo2Lidar = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<Soc2LidarSI_OutSkeletonSomeIpEventConfigurationSoc2L_Bus_VehicleInfo2Lidar>;

      std::unique_ptr<Soc2LidarSI_OutSkeletonSomeIpEventBackendSoc2L_Bus_VehicleInfo2Lidar> event_backend{
        std::make_unique<Soc2LidarSI_OutSkeletonSomeIpEventBackendSoc2L_Bus_VehicleInfo2Lidar>(1098U, server_manager)};
      soc2lidarsid_out::Soc2LidarSI_OutSkeletonSomeIpEventManagerSoc2L_Bus_VehicleInfo2Lidar::EmplaceBackend(1098U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsSoc2LidarSI_Out() {
  // Event: Soc2L_Bus_VehicleInfo2Lidar
  soc2lidarsid_out::Soc2LidarSI_OutSkeletonSomeIpEventManagerSoc2L_Bus_VehicleInfo2Lidar::ClearBackendList();

}


}  // namespace soc2lidarsid_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

