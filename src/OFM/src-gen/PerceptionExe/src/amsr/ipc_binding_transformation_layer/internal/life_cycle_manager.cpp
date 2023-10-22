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
/**        \file  PerceptionExe/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager.cpp
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_ipc_binding.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/timer/threadsafe_timer_manager.h"
#include "ipc_binding_transformation_layer/internal/aracom_ipc_binding.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_proxy_xf.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_skeleton_xf.h"
#include "perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_impl_interface.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_skeleton.h"
#include "perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_impl_interface.h"
#include "perceptionsi_freespaceout/perceptionsi_freespaceout_skeleton.h"
#include "perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_impl_interface.h"
#include "perceptionsi_laneout/perceptionsi_laneout_skeleton.h"
#include "perceptionsi_out/PerceptionSI_Out_skeleton_impl_interface.h"
#include "perceptionsi_out/perceptionsi_out_skeleton.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_impl_interface.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_skeleton.h"

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
  // -- Instances of ServiceInterface 'PerceptionSI_CamStsOut' --
  {
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_camstsout::PerceptionSI_CamStsOutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_camstsout::skeleton::PerceptionSI_CamStsOutSkeleton>,
        BindingCoreType, ::perceptionsi_camstsout::skeleton::PerceptionSI_CamStsOutSkeleton>;

    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{100, 1086, 1, 0},
        binding_core, ::perceptionsi_camstsout::skeleton::PerceptionSI_CamStsOutSkeleton::GetServiceDiscovery()));
  }
  // -- Instances of ServiceInterface 'PerceptionSI_FreeSpaceOut' --
  {
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_freespaceout::PerceptionSI_FreeSpaceOutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_freespaceout::skeleton::PerceptionSI_FreeSpaceOutSkeleton>,
        BindingCoreType, ::perceptionsi_freespaceout::skeleton::PerceptionSI_FreeSpaceOutSkeleton>;

    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{102, 1087, 1, 0},
        binding_core, ::perceptionsi_freespaceout::skeleton::PerceptionSI_FreeSpaceOutSkeleton::GetServiceDiscovery()));
  }
  // -- Instances of ServiceInterface 'PerceptionSI_LaneOut' --
  {
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_laneout::PerceptionSI_LaneOutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton>,
        BindingCoreType, ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton>;

    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{98, 1085, 1, 0},
        binding_core, ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton::GetServiceDiscovery()));
  }
  // -- Instances of ServiceInterface 'PerceptionSI_Out' --
  {
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_out::PerceptionSI_OutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_out::skeleton::PerceptionSI_OutSkeleton>,
        BindingCoreType, ::perceptionsi_out::skeleton::PerceptionSI_OutSkeleton>;

    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{37, 1060, 1, 0},
        binding_core, ::perceptionsi_out::skeleton::PerceptionSI_OutSkeleton::GetServiceDiscovery()));
  }
  // -- Instances of ServiceInterface 'PerceptionSI_VisnObjOut' --
  {
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_visnobjout::PerceptionSI_VisnObjOutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton>,
        BindingCoreType, ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton>;

    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{94, 1084, 1, 0},
        binding_core, ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton::GetServiceDiscovery()));
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

