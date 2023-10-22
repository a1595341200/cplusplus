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
/**        \file  PerceptionExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'PerceptionSI_LaneOut'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/PerceptionSI_LaneOut'
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
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_laneout {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_LaneOut(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x43A
    { // Event: FusedCam_Bus_LaneMkrLe

      // SOME/IP Skeleton event backend type for event 'FusedCam_Bus_LaneMkrLe'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrLe = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrLe>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrLe> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrLe>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrLe::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: FusedCam_Bus_LaneMkrRi

      // SOME/IP Skeleton event backend type for event 'FusedCam_Bus_LaneMkrRi'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrRi = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrRi>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrRi> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrRi>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrRi::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: FrntCam_Bus_RoadEdgeLe

      // SOME/IP Skeleton event backend type for event 'FrntCam_Bus_RoadEdgeLe'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendFrntCam_Bus_RoadEdgeLe = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeLe>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFrntCam_Bus_RoadEdgeLe> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFrntCam_Bus_RoadEdgeLe>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeLe::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: FrntCam_Bus_RoadEdgeRi

      // SOME/IP Skeleton event backend type for event 'FrntCam_Bus_RoadEdgeRi'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendFrntCam_Bus_RoadEdgeRi = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFrntCam_Bus_RoadEdgeRi>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFrntCam_Bus_RoadEdgeRi> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFrntCam_Bus_RoadEdgeRi>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeRi::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: Cam_Bus_LaneEvent

      // SOME/IP Skeleton event backend type for event 'Cam_Bus_LaneEvent'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneEvent = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEvent>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneEvent> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneEvent>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEvent::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: Cam_Bus_LaneEventGroup

      // SOME/IP Skeleton event backend type for event 'Cam_Bus_LaneEventGroup'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneEventGroup = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneEventGroup>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneEventGroup> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneEventGroup>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEventGroup::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: Cam_Bus_LaneMkrTemp

      // SOME/IP Skeleton event backend type for event 'Cam_Bus_LaneMkrTemp'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneMkrTemp = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationCam_Bus_LaneMkrTemp>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneMkrTemp> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendCam_Bus_LaneMkrTemp>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneMkrTemp::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: FusedCam_Bus_LaneMkrSecClsLe

      // SOME/IP Skeleton event backend type for event 'FusedCam_Bus_LaneMkrSecClsLe'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrSecClsLe = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsLe>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrSecClsLe> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrSecClsLe>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsLe::EmplaceBackend(1082U, std::move(event_backend));
    }
    { // Event: FusedCam_Bus_LaneMkrSecClsRi

      // SOME/IP Skeleton event backend type for event 'FusedCam_Bus_LaneMkrSecClsRi'.
      using PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrSecClsRi = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_LaneOutSkeletonSomeIpEventConfigurationFusedCam_Bus_LaneMkrSecClsRi>;

      std::unique_ptr<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrSecClsRi> event_backend{
        std::make_unique<PerceptionSI_LaneOutSkeletonSomeIpEventBackendFusedCam_Bus_LaneMkrSecClsRi>(1082U, server_manager)};
      perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsRi::EmplaceBackend(1082U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_LaneOut() {
  // Event: FusedCam_Bus_LaneMkrLe
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrLe::ClearBackendList();
  // Event: FusedCam_Bus_LaneMkrRi
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrRi::ClearBackendList();
  // Event: FrntCam_Bus_RoadEdgeLe
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeLe::ClearBackendList();
  // Event: FrntCam_Bus_RoadEdgeRi
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFrntCam_Bus_RoadEdgeRi::ClearBackendList();
  // Event: Cam_Bus_LaneEvent
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEvent::ClearBackendList();
  // Event: Cam_Bus_LaneEventGroup
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneEventGroup::ClearBackendList();
  // Event: Cam_Bus_LaneMkrTemp
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerCam_Bus_LaneMkrTemp::ClearBackendList();
  // Event: FusedCam_Bus_LaneMkrSecClsLe
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsLe::ClearBackendList();
  // Event: FusedCam_Bus_LaneMkrSecClsRi
  perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpEventManagerFusedCam_Bus_LaneMkrSecClsRi::ClearBackendList();

}


}  // namespace perceptionsi_laneout

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

