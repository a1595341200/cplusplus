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
/**        \file  ObjectFusionModelExe/src/amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'ObjectFusionModelSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/ObjectFusionModelSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsObjectFusionModelSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x415
    { // Event: OFM_Bus_FusedTargets_11

      // SOME/IP Skeleton event backend type for event 'OFM_Bus_FusedTargets_11'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_11 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_11>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_11> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_11>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_11::EmplaceBackend(1045U, std::move(event_backend));
    }
    { // Event: OFM_St_SOCFusedSts

      // SOME/IP Skeleton event backend type for event 'OFM_St_SOCFusedSts'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_SOCFusedSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_SOCFusedSts>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_SOCFusedSts> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_SOCFusedSts>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts::EmplaceBackend(1045U, std::move(event_backend));
    }
    { // Event: OFM_Bus_FourDRadarECUSts

      // SOME/IP Skeleton event backend type for event 'OFM_Bus_FourDRadarECUSts'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FourDRadarECUSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FourDRadarECUSts>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FourDRadarECUSts> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FourDRadarECUSts>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarECUSts::EmplaceBackend(1045U, std::move(event_backend));
    }
    { // Event: OFM_Bus_FrontFourDRadarSts

      // SOME/IP Skeleton event backend type for event 'OFM_Bus_FrontFourDRadarSts'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FrontFourDRadarSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FrontFourDRadarSts>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FrontFourDRadarSts> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FrontFourDRadarSts>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FrontFourDRadarSts::EmplaceBackend(1045U, std::move(event_backend));
    }
    { // Event: OFM_Bus_FusedTargets_22

      // SOME/IP Skeleton event backend type for event 'OFM_Bus_FusedTargets_22'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_22 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_22>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_22> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_22>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_22::EmplaceBackend(1045U, std::move(event_backend));
    }
    { // Event: OFM_Bus_FusedTargets_32

      // SOME/IP Skeleton event backend type for event 'OFM_Bus_FusedTargets_32'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_32 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_Bus_FusedTargets_32>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_32> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_Bus_FusedTargets_32>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_32::EmplaceBackend(1045U, std::move(event_backend));
    }
    { // Event: OFM_St_FrntRdrObjE2Efail

      // SOME/IP Skeleton event backend type for event 'OFM_St_FrntRdrObjE2Efail'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_FrntRdrObjE2Efail = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_FrntRdrObjE2Efail>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_FrntRdrObjE2Efail> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_FrntRdrObjE2Efail>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjE2Efail::EmplaceBackend(1045U, std::move(event_backend));
    }
    { // Event: OFM_St_FrntRdrObjTO

      // SOME/IP Skeleton event backend type for event 'OFM_St_FrntRdrObjTO'.
      using ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_FrntRdrObjTO = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<ObjectFusionModelSI_OutSkeletonSomeIpEventConfigurationOFM_St_FrntRdrObjTO>;

      std::unique_ptr<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_FrntRdrObjTO> event_backend{
        std::make_unique<ObjectFusionModelSI_OutSkeletonSomeIpEventBackendOFM_St_FrntRdrObjTO>(1045U, server_manager)};
      objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjTO::EmplaceBackend(1045U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsObjectFusionModelSI_Out() {
  // Event: OFM_Bus_FusedTargets_11
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_11::ClearBackendList();
  // Event: OFM_St_SOCFusedSts
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts::ClearBackendList();
  // Event: OFM_Bus_FourDRadarECUSts
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarECUSts::ClearBackendList();
  // Event: OFM_Bus_FrontFourDRadarSts
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FrontFourDRadarSts::ClearBackendList();
  // Event: OFM_Bus_FusedTargets_22
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_22::ClearBackendList();
  // Event: OFM_Bus_FusedTargets_32
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_32::ClearBackendList();
  // Event: OFM_St_FrntRdrObjE2Efail
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjE2Efail::ClearBackendList();
  // Event: OFM_St_FrntRdrObjTO
  objectfusionmodelsi_out::ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjTO::ClearBackendList();

}


}  // namespace objectfusionmodelsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

