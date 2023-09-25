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
/**        \file  RadarAdaptorExe/src/amsr/ipc_binding/internal/compile_time_configurator.cpp
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
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_ipc_binding.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out_skeleton_impl_interface.h"
#include "radaradaptorsi_out/radaradaptorsi_out_skeleton.h"
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
  InitializeProvidedServiceDeployments(binding_core);
}

// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_noexcept_exception_violation
// VECTOR NC AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_noexcept_exception_violation
template <typename BindingCoreType>
void CompileTimeConfigurator<BindingCoreType>::RegisterInstanceSpecifierMappings(RuntimeInterface& runtime, BindingCoreType const& binding_core) noexcept {
  // ---- Register all known R-Port InstanceSpecifiers ----
  // No R-Ports configured

  // ---- Register all known P-Port InstanceSpecifiers ----
  {
    // Map P-Port /JICA/SWC/RadarAdaptorExe/RadarAdaptor/RadarAdaptorSIP to instance /JICA/Service/ProvidedIpcRadarAdaptorSI_Out/ProvidedIpcRadarAdaptorSI_Out
    ::ara::core::InstanceSpecifier const instance_specifier{"RadarAdaptorExe/RadarAdaptor/RadarAdaptorSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1063"_sv};
    runtime.MapProvidedInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/RadarAdaptorSI_Out"_sv);
  }
}


// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_noexcept_exception_violation
template <typename BindingCoreType>
// VECTOR NL AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_noexcept_exception_violation
void CompileTimeConfigurator<BindingCoreType>::Cleanup(RuntimeInterface& runtime) const noexcept {

   // ---- Remove all known R-Port InstanceSpecifiers ----
  // No R-Ports configured

  // ---- Remove all known P-Port InstanceSpecifiers ----
  {
    // Remove mapping P-Port /JICA/SWC/RadarAdaptorExe/RadarAdaptor/RadarAdaptorSIP to instance /JICA/Service/ProvidedIpcRadarAdaptorSI_Out/ProvidedIpcRadarAdaptorSI_Out
    ::ara::core::InstanceSpecifier const instance_specifier{"RadarAdaptorExe/RadarAdaptor/RadarAdaptorSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1063"_sv};
    runtime.RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
}



// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_noexcept_exception_violation
// VECTOR NC AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_noexcept_exception_violation
template <typename BindingCoreType>
void CompileTimeConfigurator<BindingCoreType>::InitializeProvidedServiceDeployments(BindingCoreType& binding_core) noexcept {
  {
    // Instantiate provided service instances for service deployment '/JICA/Service/DeploymentIpc/IpcRadarAdaptorSI_Out'.
    {

      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 61;
      sd_service_identifer.instance_id_ =  1063;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  0;

      // Provided service instance '/JICA/Service/ProvidedIpcRadarAdaptorSI_Out/ProvidedIpcRadarAdaptorSI_Out'
      ::amsr::ipc_binding_core::internal::ipc_protocol::ProvidedServiceInstanceServiceDiscoveryParams params{};
      params.ipc_offer_service_ttl_ = 2;
      params.ipc_unicast_address_.ipc_unicast_domain_ = 7;
      params.ipc_unicast_address_.ipc_unicast_port_ = 7;

      binding_core.GetServerManager().EmplaceProvidedServiceInstance(sd_service_identifer, params, ::radaradaptorsi_out::RadarAdaptorSI_Out::ServiceIdentifier);
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

