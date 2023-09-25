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
/**        \file  RadarAdaptorExe/src/amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'RadarAdaptorSI_Out'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/RadarAdaptorSI_Out'
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
#include "amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace radaradaptorsi_out {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsRadarAdaptorSI_Out(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x423
    { // Event: FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts

      // SOME/IP Skeleton event backend type for event 'FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts'.
      using RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts>;

      std::unique_ptr<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts> event_backend{
        std::make_unique<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts>(1059U, server_manager)};
      radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::EmplaceBackend(1059U, std::move(event_backend));
    }
    { // Event: FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01

      // SOME/IP Skeleton event backend type for event 'FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01'.
      using RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01>;

      std::unique_ptr<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01> event_backend{
        std::make_unique<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01>(1059U, server_manager)};
      radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::EmplaceBackend(1059U, std::move(event_backend));
    }
    { // Event: FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02

      // SOME/IP Skeleton event backend type for event 'FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02'.
      using RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02>;

      std::unique_ptr<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02> event_backend{
        std::make_unique<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02>(1059U, server_manager)};
      radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::EmplaceBackend(1059U, std::move(event_backend));
    }
    { // Event: FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03

      // SOME/IP Skeleton event backend type for event 'FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03'.
      using RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03>;

      std::unique_ptr<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03> event_backend{
        std::make_unique<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03>(1059U, server_manager)};
      radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::EmplaceBackend(1059U, std::move(event_backend));
    }
    { // Event: FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04

      // SOME/IP Skeleton event backend type for event 'FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04'.
      using RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04>;

      std::unique_ptr<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04> event_backend{
        std::make_unique<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04>(1059U, server_manager)};
      radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::EmplaceBackend(1059U, std::move(event_backend));
    }
    { // Event: FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05

      // SOME/IP Skeleton event backend type for event 'FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05'.
      using RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05 = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<RadarAdaptorSI_OutSkeletonSomeIpEventConfigurationFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05>;

      std::unique_ptr<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05> event_backend{
        std::make_unique<RadarAdaptorSI_OutSkeletonSomeIpEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05>(1059U, server_manager)};
      radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::EmplaceBackend(1059U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsRadarAdaptorSI_Out() {
  // Event: FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts
  radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts::ClearBackendList();
  // Event: FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01
  radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01::ClearBackendList();
  // Event: FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02
  radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02::ClearBackendList();
  // Event: FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03
  radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::ClearBackendList();
  // Event: FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04
  radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04::ClearBackendList();
  // Event: FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05
  radaradaptorsi_out::RadarAdaptorSI_OutSkeletonSomeIpEventManagerFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05::ClearBackendList();

}


}  // namespace radaradaptorsi_out

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

