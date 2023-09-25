// VECTOR Same Line AutosarC++17_10-A1.1.1: MD_IPCBINDING_AutosarC++17_10-A1.1.1_external_identifiers
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
/**        \file  PerceptionSideExe/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager.cpp
 *        \brief  Lifecycle Manager for the Transformation Layer
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_ipcbinding
 *         Commit ID: 75f4758dd5971a0db1f17eb58f5a68a7d1edabad
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ipc_binding_transformation_layer/internal/life_cycle_manager.h"
#include <memory>
#include <utility>
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_skeleton_ipc_binding.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/timer/threadsafe_timer_manager.h"
#include "ipc_binding_transformation_layer/internal/aracom_ipc_binding.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_proxy_xf.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_skeleton_xf.h"
#include "perceptionsi_out/PerceptionSideSI_Out_skeleton_impl_interface.h"
#include "perceptionsi_out/perceptionsidesi_out_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

template <typename BindingCoreType>
void LifeCycleManager<BindingCoreType>::Initialize(BindingCoreType& binding_core, ::amsr::timer::ThreadSafeTimerManager&,
    ::amsr::ipc_binding_core::internal::RuntimeProcessingMode const) noexcept {
  InitializeServiceDiscoverySkeletonXfs(binding_core);
}


template <typename BindingCoreType>
void LifeCycleManager<BindingCoreType>::InitializeServiceDiscoverySkeletonXfs(BindingCoreType& binding_core) {
  // -- Instances of ServiceInterface 'PerceptionSideSI_Out' --
  {
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_out::PerceptionSideSI_OutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_out::skeleton::PerceptionSideSI_OutSkeleton>,
        BindingCoreType, ::perceptionsi_out::skeleton::PerceptionSideSI_OutSkeleton>;

    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{118, 1097, 1, 0},
        binding_core, ::perceptionsi_out::skeleton::PerceptionSideSI_OutSkeleton::GetServiceDiscovery()));
  }
}

/*!
 * \brief Instantiation of the explicit template specialization of the LifeCycleManager.
 */
template class LifeCycleManager<::amsr::ipc_binding_transformation_layer::internal::AraComIpcBinding<
    ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration>>;

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

