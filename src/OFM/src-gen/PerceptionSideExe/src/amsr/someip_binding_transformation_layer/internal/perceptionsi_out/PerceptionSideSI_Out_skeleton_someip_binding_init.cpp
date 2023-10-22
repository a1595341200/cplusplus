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
/**        \file  PerceptionSideExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'PerceptionSideSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/PerceptionSideSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSideSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x448
    { // Event: FLCam_Bus_VisnObj

      // SOME/IP Skeleton event backend type for event 'FLCam_Bus_VisnObj'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendFLCam_Bus_VisnObj = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFLCam_Bus_VisnObj>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendFLCam_Bus_VisnObj> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendFLCam_Bus_VisnObj>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_VisnObj::EmplaceBackend(1096U, std::move(event_backend));
    }
    { // Event: FRCam_Bus_VisnObj

      // SOME/IP Skeleton event backend type for event 'FRCam_Bus_VisnObj'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendFRCam_Bus_VisnObj = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFRCam_Bus_VisnObj>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendFRCam_Bus_VisnObj> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendFRCam_Bus_VisnObj>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_VisnObj::EmplaceBackend(1096U, std::move(event_backend));
    }
    { // Event: RLCam_Bus_VisnObj

      // SOME/IP Skeleton event backend type for event 'RLCam_Bus_VisnObj'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendRLCam_Bus_VisnObj = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRLCam_Bus_VisnObj>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendRLCam_Bus_VisnObj> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendRLCam_Bus_VisnObj>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_VisnObj::EmplaceBackend(1096U, std::move(event_backend));
    }
    { // Event: RRCam_Bus_VisnObj

      // SOME/IP Skeleton event backend type for event 'RRCam_Bus_VisnObj'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendRRCam_Bus_VisnObj = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRRCam_Bus_VisnObj>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendRRCam_Bus_VisnObj> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendRRCam_Bus_VisnObj>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_VisnObj::EmplaceBackend(1096U, std::move(event_backend));
    }
    { // Event: FLCam_Bus_CamSts

      // SOME/IP Skeleton event backend type for event 'FLCam_Bus_CamSts'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendFLCam_Bus_CamSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFLCam_Bus_CamSts>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendFLCam_Bus_CamSts> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendFLCam_Bus_CamSts>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_CamSts::EmplaceBackend(1096U, std::move(event_backend));
    }
    { // Event: FRCam_Bus_CamSts

      // SOME/IP Skeleton event backend type for event 'FRCam_Bus_CamSts'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendFRCam_Bus_CamSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationFRCam_Bus_CamSts>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendFRCam_Bus_CamSts> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendFRCam_Bus_CamSts>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_CamSts::EmplaceBackend(1096U, std::move(event_backend));
    }
    { // Event: RLCam_Bus_CamSts

      // SOME/IP Skeleton event backend type for event 'RLCam_Bus_CamSts'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendRLCam_Bus_CamSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRLCam_Bus_CamSts>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendRLCam_Bus_CamSts> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendRLCam_Bus_CamSts>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_CamSts::EmplaceBackend(1096U, std::move(event_backend));
    }
    { // Event: RRCam_Bus_CamSts

      // SOME/IP Skeleton event backend type for event 'RRCam_Bus_CamSts'.
      using PerceptionSideSI_OutSkeletonSomeIpEventBackendRRCam_Bus_CamSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSideSI_OutSkeletonSomeIpEventConfigurationRRCam_Bus_CamSts>;

      std::unique_ptr<PerceptionSideSI_OutSkeletonSomeIpEventBackendRRCam_Bus_CamSts> event_backend{
        std::make_unique<PerceptionSideSI_OutSkeletonSomeIpEventBackendRRCam_Bus_CamSts>(1096U, server_manager)};
      perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_CamSts::EmplaceBackend(1096U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSideSI_Out() {
  // Event: FLCam_Bus_VisnObj
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_VisnObj::ClearBackendList();
  // Event: FRCam_Bus_VisnObj
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_VisnObj::ClearBackendList();
  // Event: RLCam_Bus_VisnObj
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_VisnObj::ClearBackendList();
  // Event: RRCam_Bus_VisnObj
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_VisnObj::ClearBackendList();
  // Event: FLCam_Bus_CamSts
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFLCam_Bus_CamSts::ClearBackendList();
  // Event: FRCam_Bus_CamSts
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerFRCam_Bus_CamSts::ClearBackendList();
  // Event: RLCam_Bus_CamSts
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRLCam_Bus_CamSts::ClearBackendList();
  // Event: RRCam_Bus_CamSts
  perceptionsi_out::PerceptionSideSI_OutSkeletonSomeIpEventManagerRRCam_Bus_CamSts::ClearBackendList();

}


}  // namespace perceptionsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

