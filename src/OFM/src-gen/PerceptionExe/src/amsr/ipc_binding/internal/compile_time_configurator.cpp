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
/**        \file  PerceptionExe/src/amsr/ipc_binding/internal/compile_time_configurator.cpp
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_ipc_binding.h"
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
    // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionCamStsSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_CamStsOut/ProvidedIpcPerceptionSI_CamStsOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionCamStsSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1086"_sv};
    runtime.MapProvidedInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/PerceptionSI_CamStsOut"_sv);
  }
  {
    // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionFreeSpaceSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_FreeSpaceOut/ProvidedIpcPerceptionSI_FreeSpaceOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionFreeSpaceSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1087"_sv};
    runtime.MapProvidedInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/PerceptionSI_FreeSpaceOut"_sv);
  }
  {
    // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionLaneSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_LaneOut/ProvidedIpcPerceptionSI_LaneOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionLaneSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1085"_sv};
    runtime.MapProvidedInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/PerceptionSI_LaneOut"_sv);
  }
  {
    // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_Out/ProvidedIpcPerceptionSI_Out
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1060"_sv};
    runtime.MapProvidedInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/PerceptionSI_Out"_sv);
  }
  {
    // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionVisnObjSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_VisnObjOut/ProvidedIpcPerceptionSI_VisnObjOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionVisnObjSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1084"_sv};
    runtime.MapProvidedInstanceSpecifierToInstanceId(binding_core.GetName(), instance_specifier, instance_identifier,
                                             "/JICA/Service/Interface/PerceptionSI_VisnObjOut"_sv);
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
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionCamStsSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_CamStsOut/ProvidedIpcPerceptionSI_CamStsOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionCamStsSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1086"_sv};
    runtime.RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionFreeSpaceSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_FreeSpaceOut/ProvidedIpcPerceptionSI_FreeSpaceOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionFreeSpaceSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1087"_sv};
    runtime.RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionLaneSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_LaneOut/ProvidedIpcPerceptionSI_LaneOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionLaneSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1085"_sv};
    runtime.RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_Out/ProvidedIpcPerceptionSI_Out
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1060"_sv};
    runtime.RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionVisnObjSIP to instance /JICA/Service/ProvidedIpcPerceptionSI_VisnObjOut/ProvidedIpcPerceptionSI_VisnObjOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionVisnObjSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"Ipc:1084"_sv};
    runtime.RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
}



// VECTOR NC AutosarC++17_10-A15.4.2: MD_IPCBINDING_AutosarC++17_10-A15.4.2_noexcept_exception_violation
// VECTOR NC AutosarC++17_10-A15.5.3: MD_IPCBINDING_AutosarC++17_10-A15.5.3_noexcept_exception_violation
template <typename BindingCoreType>
void CompileTimeConfigurator<BindingCoreType>::InitializeProvidedServiceDeployments(BindingCoreType& binding_core) noexcept {
  {
    // Instantiate provided service instances for service deployment '/JICA/Service/DeploymentIpc/IpcPerceptionSI_CamStsOut'.
    {

      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 100;
      sd_service_identifer.instance_id_ =  1086;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  0;

      // Provided service instance '/JICA/Service/ProvidedIpcPerceptionSI_CamStsOut/ProvidedIpcPerceptionSI_CamStsOut'
      ::amsr::ipc_binding_core::internal::ipc_protocol::ProvidedServiceInstanceServiceDiscoveryParams params{};
      params.ipc_offer_service_ttl_ = 2;
      params.ipc_unicast_address_.ipc_unicast_domain_ = 26;
      params.ipc_unicast_address_.ipc_unicast_port_ = 26;

      binding_core.GetServerManager().EmplaceProvidedServiceInstance(sd_service_identifer, params, ::perceptionsi_camstsout::PerceptionSI_CamStsOut::ServiceIdentifier);
    }
  }
  {
    // Instantiate provided service instances for service deployment '/JICA/Service/DeploymentIpc/IpcPerceptionSI_FreeSpaceOut'.
    {

      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 102;
      sd_service_identifer.instance_id_ =  1087;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  0;

      // Provided service instance '/JICA/Service/ProvidedIpcPerceptionSI_FreeSpaceOut/ProvidedIpcPerceptionSI_FreeSpaceOut'
      ::amsr::ipc_binding_core::internal::ipc_protocol::ProvidedServiceInstanceServiceDiscoveryParams params{};
      params.ipc_offer_service_ttl_ = 2;
      params.ipc_unicast_address_.ipc_unicast_domain_ = 27;
      params.ipc_unicast_address_.ipc_unicast_port_ = 27;

      binding_core.GetServerManager().EmplaceProvidedServiceInstance(sd_service_identifer, params, ::perceptionsi_freespaceout::PerceptionSI_FreeSpaceOut::ServiceIdentifier);
    }
  }
  {
    // Instantiate provided service instances for service deployment '/JICA/Service/DeploymentIpc/IpcPerceptionSI_LaneOut'.
    {

      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 98;
      sd_service_identifer.instance_id_ =  1085;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  0;

      // Provided service instance '/JICA/Service/ProvidedIpcPerceptionSI_LaneOut/ProvidedIpcPerceptionSI_LaneOut'
      ::amsr::ipc_binding_core::internal::ipc_protocol::ProvidedServiceInstanceServiceDiscoveryParams params{};
      params.ipc_offer_service_ttl_ = 2;
      params.ipc_unicast_address_.ipc_unicast_domain_ = 25;
      params.ipc_unicast_address_.ipc_unicast_port_ = 25;

      binding_core.GetServerManager().EmplaceProvidedServiceInstance(sd_service_identifer, params, ::perceptionsi_laneout::PerceptionSI_LaneOut::ServiceIdentifier);
    }
  }
  {
    // Instantiate provided service instances for service deployment '/JICA/Service/DeploymentIpc/IpcPerceptionSI_Out'.
    {

      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 37;
      sd_service_identifer.instance_id_ =  1060;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  0;

      // Provided service instance '/JICA/Service/ProvidedIpcPerceptionSI_Out/ProvidedIpcPerceptionSI_Out'
      ::amsr::ipc_binding_core::internal::ipc_protocol::ProvidedServiceInstanceServiceDiscoveryParams params{};
      params.ipc_offer_service_ttl_ = 2;
      params.ipc_unicast_address_.ipc_unicast_domain_ = 5;
      params.ipc_unicast_address_.ipc_unicast_port_ = 5;

      binding_core.GetServerManager().EmplaceProvidedServiceInstance(sd_service_identifer, params, ::perceptionsi_out::PerceptionSI_Out::ServiceIdentifier);
    }
  }
  {
    // Instantiate provided service instances for service deployment '/JICA/Service/DeploymentIpc/IpcPerceptionSI_VisnObjOut'.
    {

      ::amsr::ipc_binding_core::internal::ipc_protocol::ServiceDiscoveryServiceInstanceIdentifier sd_service_identifer{};
      sd_service_identifer.service_id_ = 94;
      sd_service_identifer.instance_id_ =  1084;
      sd_service_identifer.major_version_ =  1;
      sd_service_identifer.minor_version_  =  0;

      // Provided service instance '/JICA/Service/ProvidedIpcPerceptionSI_VisnObjOut/ProvidedIpcPerceptionSI_VisnObjOut'
      ::amsr::ipc_binding_core::internal::ipc_protocol::ProvidedServiceInstanceServiceDiscoveryParams params{};
      params.ipc_offer_service_ttl_ = 2;
      params.ipc_unicast_address_.ipc_unicast_domain_ = 24;
      params.ipc_unicast_address_.ipc_unicast_port_ = 24;

      binding_core.GetServerManager().EmplaceProvidedServiceInstance(sd_service_identifer, params, ::perceptionsi_visnobjout::PerceptionSI_VisnObjOut::ServiceIdentifier);
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

