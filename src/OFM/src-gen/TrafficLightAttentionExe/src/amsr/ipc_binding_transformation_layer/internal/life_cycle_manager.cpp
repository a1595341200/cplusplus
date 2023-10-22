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
/**        \file  TrafficLightAttentionExe/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager.cpp
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
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/timer/threadsafe_timer_manager.h"
#include "ipc_binding_transformation_layer/internal/aracom_ipc_binding.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_proxy_xf.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_skeleton_xf.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"
#include "perceptionsi_out/perceptionsi_out_proxy.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

template <typename BindingCoreType>
void LifeCycleManager<BindingCoreType>::Initialize(BindingCoreType& binding_core, ::amsr::timer::ThreadSafeTimerManager& timer_manager,
    ::amsr::ipc_binding_core::internal::RuntimeProcessingMode const runtime_processing_mode) noexcept {
  InitializeServiceDiscoveryProxyXfs(binding_core, timer_manager, runtime_processing_mode);
}

template <typename BindingCoreType>
void LifeCycleManager<BindingCoreType>::InitializeServiceDiscoveryProxyXfs(
    BindingCoreType& binding_core, ::amsr::timer::ThreadSafeTimerManager& timer_manager,
    ::amsr::ipc_binding_core::internal::RuntimeProcessingMode const runtime_processing_mode) {
  // -- Instances of ServiceInterface 'ObjectFusionModelSI_Out' --
  {
    using SdProxyXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoveryProxyXf<
        ::amsr::ipc_binding_transformation_layer::internal::objectfusionmodelsi_out::ObjectFusionModelSI_OutProxyXf,
        ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
            ::objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutProxyBackendInterface>,
        BindingCoreType>;

    sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{33, 1080U, 1, 0},
        timer_manager, binding_core,
        ::objectfusionmodelsi_out::proxy::ObjectFusionModelSI_OutProxy::GetServiceDiscovery(),
        runtime_processing_mode));
  }
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
  // -- Instances of ServiceInterface 'PerceptionSI_Out' --
  {
    using SdProxyXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoveryProxyXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_out::PerceptionSI_OutProxyXf,
        ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
            ::perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface>,
        BindingCoreType>;

    sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{37, 1060U, 1, 0},
        timer_manager, binding_core,
        ::perceptionsi_out::proxy::PerceptionSI_OutProxy::GetServiceDiscovery(),
        runtime_processing_mode));
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

