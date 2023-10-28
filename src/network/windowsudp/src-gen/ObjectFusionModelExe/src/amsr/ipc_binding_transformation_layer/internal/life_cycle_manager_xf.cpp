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
/**        \file  ObjectFusionModelExe/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager_xf.cpp
 *        \brief  Lifecycle Manager for the Transformation Layer
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_ipcbinding
 *         Commit ID: 9519b950801d42a5bc7a25dd6db848903642b9ba
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ipc_binding_transformation_layer/internal/life_cycle_manager_xf.h"
#include <memory>
#include <utility>
#include "amsr/ipc/integrity_level.h"
#include "amsr/ipc_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionrearsi_out/PerceptionRearSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsidesi_out/PerceptionSideSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/radaradaptorsi_out/RadarAdaptorSI_Out_proxy_xf_ipc_binding.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/timer/threadsafe_timer_manager.h"
#include "ipc_binding_core/internal/aracom_ipc_binding.h"
#include "ipc_binding_core/internal/runtime_configuration/service_config.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_proxy_xf_initializer.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_skeleton_xf.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_impl_interface.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
#include "perceptionrearsi_out/perceptionrearsi_out_proxy.h"
#include "perceptionsi_out/perceptionsi_out_proxy.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.h"
#include "perceptionsidesi_out/perceptionsidesi_out_proxy.h"
#include "radaradaptorsi_out/radaradaptorsi_out_proxy.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-A3.3.2: MD_IPCBINDING_AutosarC++17_10-A3.3.2_not_POD_obj_static_code_generated
// VCA_IPCB_STD_CONSTRUCTOR_CALLED
LifeCycleManagerXf::DeployedServicesVector const LifeCycleManagerXf::deployed_service_interfaces_{
    {ShortnamePath{"/JICA/Service/Interface/ObjectFusionModelSI_Out"}}, // VCA_IPCB_BASICSTRING_CONSTRUCTOR
     {ShortnamePath{"/JICA/Service/Interface/PerceptionRearSI_Out"}}, // VCA_IPCB_BASICSTRING_CONSTRUCTOR
     {ShortnamePath{"/JICA/Service/Interface/PerceptionSI_Out"}}, // VCA_IPCB_BASICSTRING_CONSTRUCTOR
     {ShortnamePath{"/JICA/Service/Interface/PerceptionSI_VisnObjOut"}}, // VCA_IPCB_BASICSTRING_CONSTRUCTOR
     {ShortnamePath{"/JICA/Service/Interface/PerceptionSideSI_Out"}}, // VCA_IPCB_BASICSTRING_CONSTRUCTOR
     {ShortnamePath{"/JICA/Service/Interface/RadarAdaptorSI_Out"}} // VCA_IPCB_BASICSTRING_CONSTRUCTOR
};

// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void LifeCycleManagerXf::Initialize(BindingCoreType& binding_core,
                                    ::amsr::timer::ThreadSafeTimerManager& timer_manager) noexcept {
  // VCA_IPCB_LIFECYCLE_MANAGER_VALID_OBJECT
  logger_.LogDebug([](::ara::log::LogStream& s) { s << "Initializing LifeCycleManagerXf"; },
                  Logger::LogLocation{__func__, __LINE__});

  // VCA_IPCB_LIFECYCLE_MANAGER_XF_LIFETIME
  RemoteServerManager::ServiceDiscoveryProxyInterface& sd_proxy{binding_core.GetServiceDiscoveryProxy()};
  RemoteServerManager::ConnectionManagerProxyInterface& connection_proxy{
      binding_core.GetConnectionManagerProxy()}; // VCA_IPCB_LIFECYCLE_MANAGER_XF_LIFETIME

  // VCA_IPCB_STD_MAKE_UNIQUE_SAFE_FUNCTION
  remote_server_manager_ = std::make_unique<RemoteServerManager>(timer_manager, runtime_config_.GetRuntimeProcessingMode(), sd_proxy,
                                                       connection_proxy); // VCA_IPCB_VALID_CONNECTION_MANAGER_POINTER_OR_REF

  // VCA_IPCB_LIFECYCLE_MANAGER_VALID_OBJECT
  logger_.LogDebug([](::ara::log::LogStream& s) { s << "Initializing ServiceDiscoveryProxyXfs"; },
                  Logger::LogLocation{__func__, __LINE__});
  InitializeServiceDiscoveryProxyXfs(binding_core, sd_proxy, timer_manager);
  static_cast<void>(timer_manager);
  // VCA_IPCB_LIFECYCLE_MANAGER_VALID_OBJECT
  logger_.LogDebug([](::ara::log::LogStream& s) { s << "Initializing ServiceDiscoverySkeletonXfs"; },
                  Logger::LogLocation{__func__, __LINE__});
  InitializeServiceDiscoverySkeletonXfs(binding_core);
}

void LifeCycleManagerXf::ValidateRuntimeConfig() const noexcept {
  // VCA_IPCB_LIFECYCLE_MANAGER_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
  for (ServiceConfigRef const& service : runtime_config_.GetServices()) {
    // VCA_IPCB_LIFECYCLE_MANAGER_UNDEFINED_FUNCTION, VCA_IPCB_LIFECYCLE_MANAGER_VALID_CONFIG_ITERATOR
    ShortnamePath const& service_shortname_path{service.get().GetShortnamePath()};
    // VCA_IPCB_STD_FUNCTION_CALLED
    DeployedServicesVector::const_iterator const iterator{std::find(deployed_service_interfaces_.cbegin(),
                                                     deployed_service_interfaces_.cend(), service_shortname_path)};
    if (iterator == deployed_service_interfaces_.cend()) {
      logger_.LogFatal(
          [&service_shortname_path](::ara::log::LogStream& s) {
            // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
            s << "Inconsistent ServiceInterface deployment. Generated code and runtime configuration do not match.";
            s << "No code was generated for ";
            s << service_shortname_path.value;
            s << " which is to be deployed.";
          },
          Logger::LogLocation{__func__, __LINE__});
      ::ara::core::Abort(
          "Inconsistent ServiceInterface deployment. Generated code and runtime configuration do not match.");
    }
  }
} // VCA_IPCB_STD_VECTOR_DESTRUCTOR

void LifeCycleManagerXf::InitializeServiceDiscoveryProxyXfs(BindingCoreType& binding_core,
                                                            ServiceDiscoveryProxy& sd_proxy,
                                                            ::amsr::timer::ThreadSafeTimerManager& timer_manager) noexcept {

  // -- Service Config for Service Interface 'PerceptionRearSI_Out' --
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionRearSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service proxy '/JICA/Service/Interface/PerceptionRearSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
        ::perceptionrearsi_out::internal::PerceptionRearSI_OutProxyBackendInterface>*>& service_discovery{
            ::perceptionrearsi_out::proxy::PerceptionRearSI_OutProxy::GetServiceDiscovery()};

    // VCA_IPCB_VALID_REMOTE_SERVER_MANAGER_POINTER_OR_REF
    ServiceDiscoveryProxyXfInitializer::InitializeSdProxyXfs<
        ::perceptionrearsi_out::internal::PerceptionRearSI_OutProxyBackendInterface,
        ::amsr::ipc_binding_transformation_layer::internal::perceptionrearsi_out::PerceptionRearSI_OutProxyXf,
        BindingCoreType>(
            binding_core, service_discovery, sd_proxy, *(remote_server_manager_.get()),
            timer_manager,
            // VCA_IPCB_CALLED_FUNCTION_OUTSIDE_COMPONENT, VCA_IPCB_VALID_CLIENT_MANAGER_OBJECT
            runtime_config_.GetRuntimeProcessingMode(),
            service_config, sd_proxy_xfs_);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION

  // -- Service Config for Service Interface 'PerceptionSI_Out' --
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service proxy '/JICA/Service/Interface/PerceptionSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
        ::perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface>*>& service_discovery{
            ::perceptionsi_out::proxy::PerceptionSI_OutProxy::GetServiceDiscovery()};

    // VCA_IPCB_VALID_REMOTE_SERVER_MANAGER_POINTER_OR_REF
    ServiceDiscoveryProxyXfInitializer::InitializeSdProxyXfs<
        ::perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface,
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_out::PerceptionSI_OutProxyXf,
        BindingCoreType>(
            binding_core, service_discovery, sd_proxy, *(remote_server_manager_.get()),
            timer_manager,
            // VCA_IPCB_CALLED_FUNCTION_OUTSIDE_COMPONENT, VCA_IPCB_VALID_CLIENT_MANAGER_OBJECT
            runtime_config_.GetRuntimeProcessingMode(),
            service_config, sd_proxy_xfs_);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION

  // -- Service Config for Service Interface 'PerceptionSI_VisnObjOut' --
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSI_VisnObjOut"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service proxy '/JICA/Service/Interface/PerceptionSI_VisnObjOut'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
        ::perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface>*>& service_discovery{
            ::perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::GetServiceDiscovery()};

    // VCA_IPCB_VALID_REMOTE_SERVER_MANAGER_POINTER_OR_REF
    ServiceDiscoveryProxyXfInitializer::InitializeSdProxyXfs<
        ::perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface,
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_visnobjout::PerceptionSI_VisnObjOutProxyXf,
        BindingCoreType>(
            binding_core, service_discovery, sd_proxy, *(remote_server_manager_.get()),
            timer_manager,
            // VCA_IPCB_CALLED_FUNCTION_OUTSIDE_COMPONENT, VCA_IPCB_VALID_CLIENT_MANAGER_OBJECT
            runtime_config_.GetRuntimeProcessingMode(),
            service_config, sd_proxy_xfs_);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION

  // -- Service Config for Service Interface 'PerceptionSideSI_Out' --
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSideSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service proxy '/JICA/Service/Interface/PerceptionSideSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
        ::perceptionsidesi_out::internal::PerceptionSideSI_OutProxyBackendInterface>*>& service_discovery{
            ::perceptionsidesi_out::proxy::PerceptionSideSI_OutProxy::GetServiceDiscovery()};

    // VCA_IPCB_VALID_REMOTE_SERVER_MANAGER_POINTER_OR_REF
    ServiceDiscoveryProxyXfInitializer::InitializeSdProxyXfs<
        ::perceptionsidesi_out::internal::PerceptionSideSI_OutProxyBackendInterface,
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsidesi_out::PerceptionSideSI_OutProxyXf,
        BindingCoreType>(
            binding_core, service_discovery, sd_proxy, *(remote_server_manager_.get()),
            timer_manager,
            // VCA_IPCB_CALLED_FUNCTION_OUTSIDE_COMPONENT, VCA_IPCB_VALID_CLIENT_MANAGER_OBJECT
            runtime_config_.GetRuntimeProcessingMode(),
            service_config, sd_proxy_xfs_);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION

  // -- Service Config for Service Interface 'RadarAdaptorSI_Out' --
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/RadarAdaptorSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service proxy '/JICA/Service/Interface/RadarAdaptorSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
        ::radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface>*>& service_discovery{
            ::radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::GetServiceDiscovery()};

    // VCA_IPCB_VALID_REMOTE_SERVER_MANAGER_POINTER_OR_REF
    ServiceDiscoveryProxyXfInitializer::InitializeSdProxyXfs<
        ::radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface,
        ::amsr::ipc_binding_transformation_layer::internal::radaradaptorsi_out::RadarAdaptorSI_OutProxyXf,
        BindingCoreType>(
            binding_core, service_discovery, sd_proxy, *(remote_server_manager_.get()),
            timer_manager,
            // VCA_IPCB_CALLED_FUNCTION_OUTSIDE_COMPONENT, VCA_IPCB_VALID_CLIENT_MANAGER_OBJECT
            runtime_config_.GetRuntimeProcessingMode(),
            service_config, sd_proxy_xfs_);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
}

void LifeCycleManagerXf::InitializeServiceDiscoverySkeletonXfs(BindingCoreType& binding_core) noexcept{


  // Service Config for Service Interface '/JICA/Service/Interface/ObjectFusionModelSI_Out'
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/ObjectFusionModelSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service skeleton '/JICA/Service/Interface/ObjectFusionModelSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::objectfusionmodelsi_out::ObjectFusionModelSI_OutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton>,
        ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton>;
    // VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION
    ServiceConfig::ServiceIdentifier const service_identifier{service_config.GetId()};
    // VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION
    ServiceConfig::MajorVersion const service_major_version{service_config.GetMajorVersion()};
    // VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION
    ServiceConfig::MinorVersion const service_minor_version{service_config.GetMinorVersion()};
    // VCA_IPCB_VALID_PARAMETER_REFERENCE
    ::amsr::ipc_binding_core::internal::ServerManagerSyncInterface& service_manager_sync{binding_core.GetServerManagerSync()};

    // VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION
    for (ServiceConfig::ProvidedServiceInstanceConfigRef const provided_service_instance :
          // VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
          service_config.GetProvidedServiceInstances()) {
      ServiceConfig::ProvidedServiceInstanceConfigRef::type::InstanceIdentifier const service_instance_identifier{
          // VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT
          provided_service_instance.get().GetInstanceIdentifier()};
      ::amsr::ipc_binding_core::internal::ProvidedServiceInstanceId const provided_service_instance_id{
          service_identifier, service_instance_identifier, service_major_version, service_minor_version};
      // VCA_IPCB_STD_FUNCTION_CALLED_WITHOUT_PARAMETER
      sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
          provided_service_instance_id,
          service_manager_sync,
          // VCA_IPCB_TEST_CODE_SAFE_FUNCTION
          ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::GetServiceDiscovery(),
          service_config));
    }
  }
}

void LifeCycleManagerXf::DeInitializeServiceDiscoveryProxyXfs() noexcept {
  {
    // Service Config for Service Interface '/JICA/Service/Interface/PerceptionRearSI_Out'
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionRearSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Deinitializing service '/JICA/Service/Interface/PerceptionRearSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    // DeInitialize all SdProxyXfs
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      ::perceptionrearsi_out::internal::PerceptionRearSI_OutProxyBackendInterface>*>& service_discovery{
      ::perceptionrearsi_out::proxy::PerceptionRearSI_OutProxy::GetServiceDiscovery()};
    // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
    ServiceDiscoveryProxyXfInitializer::DeInitializeSdProxyXfs<
        ::perceptionrearsi_out::internal::PerceptionRearSI_OutProxyBackendInterface>(
          // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS
          service_config.GetRequiredServiceInstances(), sd_proxy_xfs_, service_discovery);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
  {
    // Service Config for Service Interface '/JICA/Service/Interface/PerceptionSI_Out'
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Deinitializing service '/JICA/Service/Interface/PerceptionSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    // DeInitialize all SdProxyXfs
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      ::perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface>*>& service_discovery{
      ::perceptionsi_out::proxy::PerceptionSI_OutProxy::GetServiceDiscovery()};
    // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
    ServiceDiscoveryProxyXfInitializer::DeInitializeSdProxyXfs<
        ::perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface>(
          // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS
          service_config.GetRequiredServiceInstances(), sd_proxy_xfs_, service_discovery);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
  {
    // Service Config for Service Interface '/JICA/Service/Interface/PerceptionSI_VisnObjOut'
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSI_VisnObjOut"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Deinitializing service '/JICA/Service/Interface/PerceptionSI_VisnObjOut'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    // DeInitialize all SdProxyXfs
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      ::perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface>*>& service_discovery{
      ::perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::GetServiceDiscovery()};
    // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
    ServiceDiscoveryProxyXfInitializer::DeInitializeSdProxyXfs<
        ::perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface>(
          // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS
          service_config.GetRequiredServiceInstances(), sd_proxy_xfs_, service_discovery);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
  {
    // Service Config for Service Interface '/JICA/Service/Interface/PerceptionSideSI_Out'
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSideSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Deinitializing service '/JICA/Service/Interface/PerceptionSideSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    // DeInitialize all SdProxyXfs
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      ::perceptionsidesi_out::internal::PerceptionSideSI_OutProxyBackendInterface>*>& service_discovery{
      ::perceptionsidesi_out::proxy::PerceptionSideSI_OutProxy::GetServiceDiscovery()};
    // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
    ServiceDiscoveryProxyXfInitializer::DeInitializeSdProxyXfs<
        ::perceptionsidesi_out::internal::PerceptionSideSI_OutProxyBackendInterface>(
          // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS
          service_config.GetRequiredServiceInstances(), sd_proxy_xfs_, service_discovery);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
  {
    // Service Config for Service Interface '/JICA/Service/Interface/RadarAdaptorSI_Out'
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/RadarAdaptorSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Deinitializing service '/JICA/Service/Interface/RadarAdaptorSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    // DeInitialize all SdProxyXfs
    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      ::radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface>*>& service_discovery{
      ::radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::GetServiceDiscovery()};
    // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
    ServiceDiscoveryProxyXfInitializer::DeInitializeSdProxyXfs<
        ::radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface>(
          // VCA_IPCB_INTERNAL_SAFE_FUNCTION_WITH_PARAMETERS
          service_config.GetRequiredServiceInstances(), sd_proxy_xfs_, service_discovery);
  }  // VCA_IPCB_DESTRUCTOR_STD_DEFINED_FUNCTION
}

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

