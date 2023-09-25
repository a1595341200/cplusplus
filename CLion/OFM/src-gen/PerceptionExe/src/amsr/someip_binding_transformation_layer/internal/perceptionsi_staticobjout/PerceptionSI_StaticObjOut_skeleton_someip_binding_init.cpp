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
/**        \file  PerceptionExe/src/amsr/someip_binding_transformation_layer/internal/perceptionsi_staticobjout/PerceptionSI_StaticObjOut_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'PerceptionSI_StaticObjOut'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/PerceptionSI_StaticObjOut'
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
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_staticobjout/PerceptionSI_StaticObjOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_staticobjout/PerceptionSI_StaticObjOut_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace perceptionsi_staticobjout {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_StaticObjOut(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x439
    { // Event: FrntCam_Bus_StaticObj

      // SOME/IP Skeleton event backend type for event 'FrntCam_Bus_StaticObj'.
      using PerceptionSI_StaticObjOutSkeletonSomeIpEventBackendFrntCam_Bus_StaticObj = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<PerceptionSI_StaticObjOutSkeletonSomeIpEventConfigurationFrntCam_Bus_StaticObj>;

      std::unique_ptr<PerceptionSI_StaticObjOutSkeletonSomeIpEventBackendFrntCam_Bus_StaticObj> event_backend{
        std::make_unique<PerceptionSI_StaticObjOutSkeletonSomeIpEventBackendFrntCam_Bus_StaticObj>(1081U, server_manager)};
      perceptionsi_staticobjout::PerceptionSI_StaticObjOutSkeletonSomeIpEventManagerFrntCam_Bus_StaticObj::EmplaceBackend(1081U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_StaticObjOut() {
  // Event: FrntCam_Bus_StaticObj
  perceptionsi_staticobjout::PerceptionSI_StaticObjOutSkeletonSomeIpEventManagerFrntCam_Bus_StaticObj::ClearBackendList();

}


}  // namespace perceptionsi_staticobjout

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

