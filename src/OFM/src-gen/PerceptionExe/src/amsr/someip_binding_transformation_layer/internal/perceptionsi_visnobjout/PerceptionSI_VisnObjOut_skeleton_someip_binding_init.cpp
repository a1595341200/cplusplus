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
/**        \file  PerceptionExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'PerceptionSI_VisnObjOut'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/PerceptionSI_VisnObjOut'
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
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_visnobjout {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_VisnObjOut(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x447
    { // Event: FrntCam_Bus_VisnObj

      // SOME/IP Skeleton event backend type for event 'FrntCam_Bus_VisnObj'.
      using PerceptionSI_VisnObjOutSkeletonSomeIpEventBackendFrntCam_Bus_VisnObj = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_VisnObjOutSkeletonSomeIpEventConfigurationFrntCam_Bus_VisnObj>;

      std::unique_ptr<PerceptionSI_VisnObjOutSkeletonSomeIpEventBackendFrntCam_Bus_VisnObj> event_backend{
        std::make_unique<PerceptionSI_VisnObjOutSkeletonSomeIpEventBackendFrntCam_Bus_VisnObj>(1095U, server_manager)};
      perceptionsi_visnobjout::PerceptionSI_VisnObjOutSkeletonSomeIpEventManagerFrntCam_Bus_VisnObj::EmplaceBackend(1095U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_VisnObjOut() {
  // Event: FrntCam_Bus_VisnObj
  perceptionsi_visnobjout::PerceptionSI_VisnObjOutSkeletonSomeIpEventManagerFrntCam_Bus_VisnObj::ClearBackendList();

}


}  // namespace perceptionsi_visnobjout

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

