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
/**        \file  RoadModelFusionExe/src/amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'RoadModelFusionSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/RoadModelFusionSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace roadmodelfusionsi_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsRoadModelFusionSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x41D
    { // Event: RMF_Bus_ExtractedMapInf

      // SOME/IP Skeleton event backend type for event 'RMF_Bus_ExtractedMapInf'.
      using RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_ExtractedMapInf = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_ExtractedMapInf>;

      std::unique_ptr<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_ExtractedMapInf> event_backend{
        std::make_unique<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_ExtractedMapInf>(1053U, server_manager)};
      roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_ExtractedMapInf::EmplaceBackend(1053U, std::move(event_backend));
    }
    { // Event: RMF_Bus_RefPathGlobal

      // SOME/IP Skeleton event backend type for event 'RMF_Bus_RefPathGlobal'.
      using RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefPathGlobal = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefPathGlobal>;

      std::unique_ptr<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefPathGlobal> event_backend{
        std::make_unique<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefPathGlobal>(1053U, server_manager)};
      roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefPathGlobal::EmplaceBackend(1053U, std::move(event_backend));
    }
    { // Event: RMF_Bus_LaneModel

      // SOME/IP Skeleton event backend type for event 'RMF_Bus_LaneModel'.
      using RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_LaneModel = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_LaneModel>;

      std::unique_ptr<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_LaneModel> event_backend{
        std::make_unique<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_LaneModel>(1053U, server_manager)};
      roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_LaneModel::EmplaceBackend(1053U, std::move(event_backend));
    }
    { // Event: RMF_Bus_RefLineSpeedInf

      // SOME/IP Skeleton event backend type for event 'RMF_Bus_RefLineSpeedInf'.
      using RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefLineSpeedInf = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefLineSpeedInf>;

      std::unique_ptr<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefLineSpeedInf> event_backend{
        std::make_unique<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefLineSpeedInf>(1053U, server_manager)};
      roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLineSpeedInf::EmplaceBackend(1053U, std::move(event_backend));
    }
    { // Event: RMF_Bus_RefLinePoints

      // SOME/IP Skeleton event backend type for event 'RMF_Bus_RefLinePoints'.
      using RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefLinePoints = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_RefLinePoints>;

      std::unique_ptr<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefLinePoints> event_backend{
        std::make_unique<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_RefLinePoints>(1053U, server_manager)};
      roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLinePoints::EmplaceBackend(1053U, std::move(event_backend));
    }
    { // Event: RMF_Bus_MapOdd

      // SOME/IP Skeleton event backend type for event 'RMF_Bus_MapOdd'.
      using RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_MapOdd = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RoadModelFusionSI_OutSkeletonSomeIpEventConfigurationRMF_Bus_MapOdd>;

      std::unique_ptr<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_MapOdd> event_backend{
        std::make_unique<RoadModelFusionSI_OutSkeletonSomeIpEventBackendRMF_Bus_MapOdd>(1053U, server_manager)};
      roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_MapOdd::EmplaceBackend(1053U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsRoadModelFusionSI_Out() {
  // Event: RMF_Bus_ExtractedMapInf
  roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_ExtractedMapInf::ClearBackendList();
  // Event: RMF_Bus_RefPathGlobal
  roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefPathGlobal::ClearBackendList();
  // Event: RMF_Bus_LaneModel
  roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_LaneModel::ClearBackendList();
  // Event: RMF_Bus_RefLineSpeedInf
  roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLineSpeedInf::ClearBackendList();
  // Event: RMF_Bus_RefLinePoints
  roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLinePoints::ClearBackendList();
  // Event: RMF_Bus_MapOdd
  roadmodelfusionsi_out::RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_MapOdd::ClearBackendList();

}


}  // namespace roadmodelfusionsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

