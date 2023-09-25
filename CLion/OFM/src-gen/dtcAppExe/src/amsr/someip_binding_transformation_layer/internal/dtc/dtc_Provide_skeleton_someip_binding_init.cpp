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
/**        \file  dtcAppExe/src/amsr/someip_binding_transformation_layer/internal/dtc/dtc_Provide_skeleton_someip_binding_init.cpp
 *        \brief  Skeleton-side ara::com SOME/IP binding initialization for ServiceInterface 'dtc_Provide'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/dtc_Provide'
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
#include "amsr/someip_binding_transformation_layer/internal/dtc/dtc_Provide_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/dtc/dtc_Provide_skeleton_someip_binding.h"
#include "ara/core/optional.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace dtc {

void AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsdtc_Provide(
    AraComSomeIpBindingSpecializationSkeleton::ServerManager& server_manager) {
  // No provided service instances to be initialized.
  static_cast<void>(server_manager);
}

void AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsdtc_Provide() {
  // No events / field managers to deinitialize.
}


}  // namespace dtc

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

