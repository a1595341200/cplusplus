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
/**        \file  ObjectFusionModelExe/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager.cpp
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
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSideSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/timer/threadsafe_timer_manager.h"
#include "ipc_binding_transformation_layer/internal/aracom_ipc_binding.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_proxy_xf.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_skeleton_xf.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_impl_interface.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"
#include "perceptionsi_out/perceptionsidesi_out_proxy.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.h"
#include "radaradaptorsi_out/radaradaptorsi_out_proxy.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

template <typename BindingCoreType>
void LifeCycleManager<BindingCoreType>::Initialize(BindingCoreType& binding_core, ::amsr::timer::ThreadSafeTimerManager& timer_manager,
    ::amsr::ipc_binding_core::internal::RuntimeProcessingMode const runtime_processing_mode) noexcept {
  InitializeServiceDiscoveryProxyXfs(binding_core, timer_manager, runtime_processing_mode);
  InitializeServiceDiscoverySkeletonXfs(binding_core);
}

template <typename BindingCoreType>
void LifeCycleManager<BindingCoreType>::InitializeServiceDiscoveryProxyXfs(
    BindingCoreType& binding_core, ::amsr::timer::ThreadSafeTimerManager& timer_manager,
    ::amsr::ipc_binding_core::internal::RuntimeProcessingMode const runtime_processing_mode) {
  // -- Instances of ServiceInterface 'PerceptionSI_CamStsOut' --
  {
    using SdProxyXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoveryProxyXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_camstsout::PerceptionSI_CamStsOutProxyXf,
        ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
            ::perceptionsi_camstsout::internal::PerceptionSI_CamStsOutProxyBackendInterface>,
        BindingCoreType>;

    sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{100, 1086U, 1, 0},
        timer_manager, binding_core,
        ::perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy::GetServiceDiscovery(),
        runtime_processing_mode));
  }
  // -- Instances of ServiceInterface 'PerceptionSI_VisnObjOut' --
  {
    using SdProxyXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoveryProxyXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_visnobjout::PerceptionSI_VisnObjOutProxyXf,
        ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
            ::perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface>,
        BindingCoreType>;

    sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{94, 1084U, 1, 0},
        timer_manager, binding_core,
        ::perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::GetServiceDiscovery(),
        runtime_processing_mode));
  }
  // -- Instances of ServiceInterface 'PerceptionSideSI_Out' --
  {
    using SdProxyXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoveryProxyXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_out::PerceptionSideSI_OutProxyXf,
        ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
            ::perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface>,
        BindingCoreType>;

    sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{118, 1097U, 1, 0},
        timer_manager, binding_core,
        ::perceptionsi_out::proxy::PerceptionSideSI_OutProxy::GetServiceDiscovery(),
        runtime_processing_mode));
  }
  // -- Instances of ServiceInterface 'RadarAdaptorSI_Out' --
  {
    using SdProxyXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoveryProxyXf<
        ::amsr::ipc_binding_transformation_layer::internal::radaradaptorsi_out::RadarAdaptorSI_OutProxyXf,
        ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
            ::radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface>,
        BindingCoreType>;

    sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{61, 1063U, 1, 0},
        timer_manager, binding_core,
        ::radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::GetServiceDiscovery(),
        runtime_processing_mode));
  }
}

template <typename BindingCoreType>
void LifeCycleManager<BindingCoreType>::InitializeServiceDiscoverySkeletonXfs(BindingCoreType& binding_core) {
  // -- Instances of ServiceInterface 'ObjectFusionModelSI_Out' --
  {
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::objectfusionmodelsi_out::ObjectFusionModelSI_OutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton>,
        BindingCoreType, ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton>;

    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{33, 1080, 1, 0},
        binding_core, ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::GetServiceDiscovery()));
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

