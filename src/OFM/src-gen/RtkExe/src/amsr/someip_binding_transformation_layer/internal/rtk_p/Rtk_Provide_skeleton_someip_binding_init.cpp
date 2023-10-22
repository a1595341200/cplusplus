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
/**        \file  RtkExe/src/amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'Rtk_Provide'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/Rtk_Provide'
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
#include "amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/rtk_p/Rtk_Provide_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace rtk_p {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsRtk_Provide(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  { // ServiceInstance: 0x40D
    { // Event: GgaData_provide

      // SOME/IP Skeleton event backend type for event 'GgaData_provide'.
      using Rtk_ProvideSkeletonSomeIpEventBackendGgaData_provide = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<Rtk_ProvideSkeletonSomeIpEventConfigurationGgaData_provide>;

      std::unique_ptr<Rtk_ProvideSkeletonSomeIpEventBackendGgaData_provide> event_backend{
        std::make_unique<Rtk_ProvideSkeletonSomeIpEventBackendGgaData_provide>(1037U, server_manager)};
      rtk_p::Rtk_ProvideSkeletonSomeIpEventManagerGgaData_provide::EmplaceBackend(1037U, std::move(event_backend));
    }
    { // Event: ErrorCode

      // SOME/IP Skeleton event backend type for event 'ErrorCode'.
      using Rtk_ProvideSkeletonSomeIpEventBackendErrorCode = ::amsr::someip_binding_transformation_layer::internal::SomeIpSkeletonEventBackend<Rtk_ProvideSkeletonSomeIpEventConfigurationErrorCode>;

      std::unique_ptr<Rtk_ProvideSkeletonSomeIpEventBackendErrorCode> event_backend{
        std::make_unique<Rtk_ProvideSkeletonSomeIpEventBackendErrorCode>(1037U, server_manager)};
      rtk_p::Rtk_ProvideSkeletonSomeIpEventManagerErrorCode::EmplaceBackend(1037U, std::move(event_backend));
    }

  }
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsRtk_Provide() {
  // Event: GgaData_provide
  rtk_p::Rtk_ProvideSkeletonSomeIpEventManagerGgaData_provide::ClearBackendList();
  // Event: ErrorCode
  rtk_p::Rtk_ProvideSkeletonSomeIpEventManagerErrorCode::ClearBackendList();

}


}  // namespace rtk_p

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

