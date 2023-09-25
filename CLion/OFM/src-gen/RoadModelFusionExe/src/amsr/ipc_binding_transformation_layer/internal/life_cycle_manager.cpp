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
/**        \file  RoadModelFusionExe/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager.cpp
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
#include "amsr/ipc_binding_transformation_layer/internal/ehrsi_out/EHRSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/timer/threadsafe_timer_manager.h"
#include "ehrsi_out/ehrsi_out_proxy.h"
#include "ipc_binding_transformation_layer/internal/aracom_ipc_binding.h"
#include "ipc_binding_transformation_layer/internal/default_template_configuration.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_proxy_xf.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_skeleton_xf.h"

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
  // -- Instances of ServiceInterface 'EHRSI_Out' --
  {
    using SdProxyXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoveryProxyXf<
        ::amsr::ipc_binding_transformation_layer::internal::ehrsi_out::EHRSI_OutProxyXf,
        ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
            ::ehrsi_out::internal::EHRSI_OutProxyBackendInterface>,
        BindingCoreType>;

    sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier{57, 1062U, 1, 0},
        timer_manager, binding_core,
        ::ehrsi_out::proxy::EHRSI_OutProxy::GetServiceDiscovery(),
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

