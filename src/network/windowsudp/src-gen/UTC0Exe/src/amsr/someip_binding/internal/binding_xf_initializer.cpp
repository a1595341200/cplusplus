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
/**        \file  UTC0Exe/src/amsr/someip_binding/internal/binding_xf_initializer.cpp
 *        \brief  Initialization/Deinitialization functions for someip_binding
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/binding_xf_initializer.h"
#include <map>
#include <utility>
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/someip_binding/internal/binding_core_initializer.h"
#include "amsr/someip_binding/internal/configuration/config_types.h"
#include "amsr/someip_binding/internal/configuration/config_wrapper.h"
#include "amsr/someip_binding/internal/configuration/service_config_wrapper.h"
#include "amsr/someip_binding/internal/configuration/service_interface_config.h"
#include "amsr/someip_binding/internal/configuration/someip_daemon_client_config_builder.h"
#include "amsr/someip_binding/internal/configuration/someipbinding_config_validation_data.h"
#include "amsr/someip_binding/internal/life_cycle_manager.h"
#include "amsr/someip_binding/internal/life_cycle_manager_interface.h"
#include "amsr/someip_binding/internal/runtime_interface.h"
#include "amsr/someip_binding/internal/someipbinding_proxy_xf_initializer.h"
#include "amsr/someip_binding/internal/someipbinding_skeleton_xf_initializer.h"
#include "amsr/someip_binding_core/internal/client_manager_interface.h"
#include "amsr/someip_binding_core/internal/logging/ara_com_logger.h"
#include "amsr/someip_binding_core/internal/server_manager_interface.h"
#include "amsr/someip_binding_xf/internal/service_discovery/service_discovery_proxy_xf.h"
#include "amsr/someip_binding_xf/internal/service_discovery/service_discovery_skeleton_xf.h"
#include "amsr/someip_binding_xf/internal/utc0si_in/UTC0SI_In_proxy_xf.h"
#include "amsr/someip_binding_xf/internal/utc0si_out/UTC0SI_Out_skeleton_xf.h"

namespace amsr {
namespace someip_binding {
namespace internal {

::ara::core::Result<void> BindingXfInitializer::Initialize(
    LifeCycleManagerInterface& life_cycle_manager, SomeIpBindingInterface& binding,
    configuration::SomeIpBindingConfig const& someip_binding_config,
    std::unique_ptr<RuntimeInterface>& runtime) noexcept {

  ::amsr::someip_binding::internal::configuration::ServiceConfigValidationDataAccess const service_config_validation_data_access{
    &::amsr::someip_binding::internal::configuration::SomeipBindingConfigValidationData::kValidServiceEntities[0], 2
  };

  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  std::unique_ptr<configuration::ServiceConfigWrapper> service_config_wrapper_uptr{configuration::ServiceConfigWrapper::Create(
    // VCA_SOMEIPBINDING_ACCESSING_MEMBERS_OF_REFERENCE_CLASS_ATTRIBUTES
    // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
    someip_binding_config.GetServiceInterfaces(),
    service_config_validation_data_access)};

  // Registers all service instances into Socal.
  // VCA_SOMEIPBINDING_RUNTIME_OBJECT_LIFECYCLE
  // VCA_SOMEIPBINDING_UNDEFINED_FUNCTION
  BindingCoreInitializer::RegisterServiceInstances(*service_config_wrapper_uptr, runtime);

  // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
  // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
  life_cycle_manager.SetServiceConfigWrapper(std::move(service_config_wrapper_uptr));

  // Create all ara::com / Binding Transformation objects.
  // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
  E2EProfileMap const& e2e_profiles{someip_binding_config.GetE2EProfileConfigMap()};

  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
  InitializeServiceDiscoveryProxyXfs(e2e_profiles, life_cycle_manager, binding.GetClientManager(), binding.GetServiceDiscoveryHandler(), binding.GetClientTransportToDaemon());
  // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
  // VECTOR NC VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
  // VCA_SOMEIPBINDING_POSSIBLY_CALLING_NULLPTR_METHOD_CALL_ON_REF
  InitializeServiceDiscoverySkeletonXfs(someip_binding_config, life_cycle_manager, binding.GetServerManager(), binding.GetServerTransportToDaemon(), runtime->GetProcessPollingFunction());

  return ::ara::core::Result<void> {};
} // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT

::ara::core::Result<void> BindingXfInitializer::Deinitialize(
    configuration::ServiceConfigWrapperInterface const& services_config) noexcept {
  DeInitializeServiceDiscoveryProxyXfs(services_config);

  return ::ara::core::Result<void> {};
}

void BindingXfInitializer::InitializeServiceDiscoveryProxyXfs(
      E2EProfileMap const& e2e_profiles, LifeCycleManagerInterface& life_cycle_manager,
    ::amsr::someip_binding_core::internal::ClientManagerInterface& client_manager,
    ::amsr::someip_binding_core::internal::service_discovery::ServiceDiscoveryHandler& service_discovery_handler,
    someip_binding_core::internal::ClientTransportToDaemonInterface& client_transport_to_daemon) noexcept {
  { // Instantiate ServiceDiscoveryProxyXfs for Service UTC0SI_In
    // Shortname path
    // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
    // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
    ::amsr::someip_binding::internal::configuration::ShortnamePath const shortname_path{"/JICA/Service/Interface/UTC0SI_In"}; // VECTOR SL VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive

    // Create & initialize SD Proxy XF
    // VCA_SOMEIPBINDING_CONFIG_WRAPPER_OBJECT_LIFECYCLE
    SomeIpBindingProxyXfInitializer::InitializeSdProxyXfs<
        ::utc0si_in::proxy::UTC0SI_InProxy,
        ::utc0si_in::internal::UTC0SI_InProxyBackendInterface,
        ::amsr::someip_binding_xf::internal::gen_utc0si_in::UTC0SI_InProxyXf>(
        // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
        e2e_profiles, life_cycle_manager, client_manager, service_discovery_handler, shortname_path, client_transport_to_daemon);
  } // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT, VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
}

// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_static_method_icc_compiler_limitation
void BindingXfInitializer::DeInitializeServiceDiscoveryProxyXfs(
    configuration::ServiceConfigWrapperInterface const& services_config) noexcept {
  {  // Deinitialize ServiceDiscoveryProxyXf for Service UTC0SI_In
    // Shortname path
    // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
    // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
    ::amsr::someip_binding::internal::configuration::ShortnamePath const shortname_path{"/JICA/Service/Interface/UTC0SI_In"}; // VECTOR SL VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
    SomeIpBindingProxyXfInitializer::DeInitializeServiceDiscoveryProxyXfs<
        ::utc0si_in::proxy::UTC0SI_InProxy,
        ::utc0si_in::internal::UTC0SI_InProxyBackendInterface>(
          // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
          services_config.GetServiceInterface(shortname_path));
  }
}



void BindingXfInitializer::InitializeServiceDiscoverySkeletonXfs(
amsr::someip_binding::internal::configuration::SomeIpBindingConfig const& someip_binding_config,
LifeCycleManagerInterface& life_cycle_manager,
::amsr::someip_binding_core::internal::ServerManagerInterface& server_manager,
::amsr::someip_binding_core::internal::ServerTransportToDaemonInterface& server_transport_to_daemon, std::function<void()> process_polling) noexcept {
  {  // Instantiate ServiceDiscoverySkeletonXfs for Service UTC0SI_Out
    // Shortname path
    // VECTOR NC AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
    // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT
    ::amsr::someip_binding::internal::configuration::ShortnamePath const shortname_path{"/JICA/Service/Interface/UTC0SI_Out"}; // VECTOR SL VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
    // Create & initialize SD Skeleton XF
    // VCA_SOMEIPBINDING_CONFIG_WRAPPER_OBJECT_LIFECYCLE
    SomeIpBindingSkeletonXfInitializer::InitializeSdSkeletonXfs<
        ::amsr::someip_binding_xf::internal::gen_utc0si_out::UTC0SI_OutSkeletonXf,
        // VECTOR NL AutosarC++17_10-A5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-A5.0.1_independent_unsequenced_calls
        ::utc0si_out::skeleton::UTC0SI_OutSkeleton>( // VECTOR SL VectorC++-V5.0.1: MD_SOMEIPBINDING_VectorC++-V5.0.1_unsequenced_call_false_positive
        // VCA_SLC_20_SOMEIPBINDING_FUNCTION_IS_DEFINED
        // VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
        life_cycle_manager, server_manager, shortname_path, server_transport_to_daemon, someip_binding_config, process_polling);
  } // VCA_SOMEIPBINDING_TRIVIAL_FUNCTION_CONTRACT, VCA_SPC_15_SOMEIPBINDING_STL_TYPE_FUNCTION
}

}  // namespace internal
}  // namespace someip_binding
}  // namespace amsr

