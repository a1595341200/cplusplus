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
/**        \file  TrafficLightAttentionExe/src/amsr/ipc_binding/internal/compile_time_configurator.cpp
 *        \brief  Lifecycle Manager for the IpcBinding
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
#include "ipc_binding/internal/compile_time_configurator.h"
#include <memory>
#include <utility>
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"
#include "perceptionsi_out/perceptionsi_out_proxy.h"
#include "vac/container/string_literals.h"

namespace amsr {
namespace ipc_binding {
namespace internal {

/*!
 * \brief Literals namespace is needed for "_sv literal.
 */
// VECTOR NC AutosarC++17_10-M7.3.4: MD_IPCBINDING_AutosarC++17_10-M7.3.4_using_directive
// VECTOR NC AutosarC++17_10-M7.3.6: MD_IPCBINDING_AutosarC++17_10-M7.3.6_using_directive
using vac::container::literals::operator""_sv;  // NOLINT(build/namespaces)

template <typename BindingCoreType>
void CompileTimeConfigurator<BindingCoreType>::Configure(RuntimeInterface& runtime, BindingCoreType& binding_core) const noexcept {
  RegisterInstanceSpecifierMappings(runtime, binding_core);
  InitializeRequiredServiceDeployments(binding_core);
}

// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_noexcept_exception_violation
// VECTOR NC AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_noexcept_exception_violation
template <typename BindingCoreType>
void CompileTimeConfigurator<BindingCoreType>::RegisterInstanceSpecifierMappings(RuntimeInterface& runtime, BindingCoreType const& binding_core) noexcept {
  // ---- Register all known R-Port InstanceSpecifiers ----
  {
    // Map R-Port /JICA/SWC/TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionOFMSIR to instance /JICA/Service/RequiredIpcObjectFusionModelSI_Out/RequiredIpcObjectFusionModelSI_Out 
    ::ara::core::InstanceSpecifier const instance_specifier{"TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionOFMSIR"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1080"_sv};
    runtime.MapRequiredInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/ObjectFusionModelSI_Out"_sv);
  }
  {
    // Map R-Port /JICA/SWC/TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionCamStsSIR to instance /JICA/Service/RequiredIpcPerceptionSI_CamStsOut/RequiredIpcPerceptionSI_CamStsOut 
    ::ara::core::InstanceSpecifier const instance_specifier{"TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionCamStsSIR"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1086"_sv};
    runtime.MapRequiredInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/PerceptionSI_CamStsOut"_sv);
  }
  {
    // Map R-Port /JICA/SWC/TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionPerceptionSIR to instance /JICA/Service/RequiredIpcPerceptionSI_Out/RequiredIpcPerceptionSI_Out 
    ::ara::core::InstanceSpecifier const instance_specifier{"TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionPerceptionSIR"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1060"_sv};
    runtime.MapRequiredInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/PerceptionSI_Out"_sv);
  }

  // ---- Register all known P-Port InstanceSpecifiers ----
  // No P-Ports configured
}


// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_noexcept_exception_violation
template <typename BindingCoreType>
// VECTOR NL AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_noexcept_exception_violation
void CompileTimeConfigurator<BindingCoreType>::Cleanup(RuntimeInterface& runtime) const noexcept {

   // ---- Remove all known R-Port InstanceSpecifiers ----
  {
    // Remove mapping R-Port /JICA/SWC/TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionOFMSIR to instance /JICA/Service/RequiredIpcObjectFusionModelSI_Out/RequiredIpcObjectFusionModelSI_Out 
    ::ara::core::InstanceSpecifier const instance_specifier{"TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionOFMSIR"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1080"_sv};
    runtime.RemoveRequiredInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping R-Port /JICA/SWC/TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionCamStsSIR to instance /JICA/Service/RequiredIpcPerceptionSI_CamStsOut/RequiredIpcPerceptionSI_CamStsOut 
    ::ara::core::InstanceSpecifier const instance_specifier{"TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionCamStsSIR"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1086"_sv};
    runtime.RemoveRequiredInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping R-Port /JICA/SWC/TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionPerceptionSIR to instance /JICA/Service/RequiredIpcPerceptionSI_Out/RequiredIpcPerceptionSI_Out 
    ::ara::core::InstanceSpecifier const instance_specifier{"TrafficLightAttentionExe/TrafficLightAttention/TrafficLightAttentionPerceptionSIR"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1060"_sv};
    runtime.RemoveRequiredInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }

  // ---- Remove all known P-Port InstanceSpecifiers ----
  // No P-Ports configured
}


// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_noexcept_exception_violation
// VECTOR NC AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_noexcept_exception_violation
template <typename BindingCoreType>
void CompileTimeConfigurator<BindingCoreType>::InitializeRequiredServiceDeployments(BindingCoreType& binding_core) noexcept {
  {
    // Instantiate required service instances for service deployment '/JICA/Service/DeploymentIpc/IpcObjectFusionModelSI_Out'.
    {
      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 33;
      sd_service_identifer.instance_id_ =  1080U;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  ::amsr::ipc_binding_core::internal::ipc_protocol::kMinorVersionAny;

      // Required service instance '/JICA/Service/RequiredIpcObjectFusionModelSI_Out/RequiredIpcObjectFusionModelSI_Out'
      binding_core.GetClientManager().EmplaceRequiredServiceInstance(sd_service_identifer, ::objectfusionmodelsi_out::ObjectFusionModelSI_Out::ServiceIdentifier);
    }
  }
  {
    // Instantiate required service instances for service deployment '/JICA/Service/DeploymentIpc/IpcPerceptionSI_CamStsOut'.
    {
      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 100;
      sd_service_identifer.instance_id_ =  1086U;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  ::amsr::ipc_binding_core::internal::ipc_protocol::kMinorVersionAny;

      // Required service instance '/JICA/Service/RequiredIpcPerceptionSI_CamStsOut/RequiredIpcPerceptionSI_CamStsOut'
      binding_core.GetClientManager().EmplaceRequiredServiceInstance(sd_service_identifer, ::perceptionsi_camstsout::PerceptionSI_CamStsOut::ServiceIdentifier);
    }
  }
  {
    // Instantiate required service instances for service deployment '/JICA/Service/DeploymentIpc/IpcPerceptionSI_Out'.
    {
      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 37;
      sd_service_identifer.instance_id_ =  1060U;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  ::amsr::ipc_binding_core::internal::ipc_protocol::kMinorVersionAny;

      // Required service instance '/JICA/Service/RequiredIpcPerceptionSI_Out/RequiredIpcPerceptionSI_Out'
      binding_core.GetClientManager().EmplaceRequiredServiceInstance(sd_service_identifer, ::perceptionsi_out::PerceptionSI_Out::ServiceIdentifier);
    }
  }
}


/*!
 * \brief Instantiation of the explicit template specialization of the CompileTimeConfigurator.
 */
template class CompileTimeConfigurator<::amsr::ipc_binding_transformation_layer::internal::AraComIpcBinding<
    ::amsr::ipc_binding_transformation_layer::internal::DefaultTemplateConfiguration>>;

}  // namespace internal
}  // namespace ipc_binding
}  // namespace amsr

