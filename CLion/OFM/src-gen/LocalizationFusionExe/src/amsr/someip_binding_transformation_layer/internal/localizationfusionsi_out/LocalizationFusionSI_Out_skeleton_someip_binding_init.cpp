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
/**        \file  LocalizationFusionExe/src/amsr/someip_binding_transformation_layer/internal/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'LocalizationFusionSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/LocalizationFusionSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace localizationfusionsi_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsLocalizationFusionSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x41F
    { // Event: LFM_Bus_MapErrorSts

      // SOME/IP Skeleton event backend type for event 'LFM_Bus_MapErrorSts'.
      using LocalizationFusionSI_OutSkeletonSomeIpEventBackendLFM_Bus_MapErrorSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<LocalizationFusionSI_OutSkeletonSomeIpEventConfigurationLFM_Bus_MapErrorSts>;

      std::unique_ptr<LocalizationFusionSI_OutSkeletonSomeIpEventBackendLFM_Bus_MapErrorSts> event_backend{
        std::make_unique<LocalizationFusionSI_OutSkeletonSomeIpEventBackendLFM_Bus_MapErrorSts>(1055U, server_manager)};
      localizationfusionsi_out::LocalizationFusionSI_OutSkeletonSomeIpEventManagerLFM_Bus_MapErrorSts::EmplaceBackend(1055U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsLocalizationFusionSI_Out() {
  // Event: LFM_Bus_MapErrorSts
  localizationfusionsi_out::LocalizationFusionSI_OutSkeletonSomeIpEventManagerLFM_Bus_MapErrorSts::ClearBackendList();

}


}  // namespace localizationfusionsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

