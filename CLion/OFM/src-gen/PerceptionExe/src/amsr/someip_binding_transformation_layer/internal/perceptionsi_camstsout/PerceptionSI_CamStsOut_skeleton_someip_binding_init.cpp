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
/**        \file  PerceptionExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'PerceptionSI_CamStsOut'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/PerceptionSI_CamStsOut'
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
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_camstsout {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_CamStsOut(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x43B
    { // Event: FrntCam_Bus_CamSts

      // SOME/IP Skeleton event backend type for event 'FrntCam_Bus_CamSts'.
      using PerceptionSI_CamStsOutSkeletonSomeIpEventBackendFrntCam_Bus_CamSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_CamStsOutSkeletonSomeIpEventConfigurationFrntCam_Bus_CamSts>;

      std::unique_ptr<PerceptionSI_CamStsOutSkeletonSomeIpEventBackendFrntCam_Bus_CamSts> event_backend{
        std::make_unique<PerceptionSI_CamStsOutSkeletonSomeIpEventBackendFrntCam_Bus_CamSts>(1083U, server_manager)};
      perceptionsi_camstsout::PerceptionSI_CamStsOutSkeletonSomeIpEventManagerFrntCam_Bus_CamSts::EmplaceBackend(1083U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_CamStsOut() {
  // Event: FrntCam_Bus_CamSts
  perceptionsi_camstsout::PerceptionSI_CamStsOutSkeletonSomeIpEventManagerFrntCam_Bus_CamSts::ClearBackendList();

}


}  // namespace perceptionsi_camstsout

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

