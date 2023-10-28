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
/**        \file  PerceptionExe/src/amsr/ipc_binding_transformation_layer/internal/life_cycle_manager_xf.cpp
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
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_out/PerceptionSI_Out_skeleton_ipc_binding.h"
#include "amsr/ipc_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_ipc_binding.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/timer/threadsafe_timer_manager.h"
#include "ipc_binding_core/internal/aracom_ipc_binding.h"
#include "ipc_binding_core/internal/runtime_configuration/service_config.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_proxy_xf_initializer.h"
#include "ipc_binding_transformation_layer/internal/service_discovery_skeleton_xf.h"
#include "perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_impl_interface.h"
#include "perceptionsi_freespaceout/perceptionsi_freespaceout_skeleton.h"
#include "perceptionsi_out/PerceptionSI_Out_skeleton_impl_interface.h"
#include "perceptionsi_out/perceptionsi_out_skeleton.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_impl_interface.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_skeleton.h"

namespace amsr {
namespace ipc_binding_transformation_layer {
namespace internal {

// VECTOR NC AutosarC++17_10-A3.3.2: MD_IPCBINDING_AutosarC++17_10-A3.3.2_not_POD_obj_static_code_generated
// VCA_IPCB_STD_CONSTRUCTOR_CALLED
LifeCycleManagerXf::DeployedServicesVector const LifeCycleManagerXf::deployed_service_interfaces_{
    {ShortnamePath{"/JICA/Service/Interface/PerceptionSI_FreeSpaceOut"}}, // VCA_IPCB_BASICSTRING_CONSTRUCTOR
     {ShortnamePath{"/JICA/Service/Interface/PerceptionSI_Out"}}, // VCA_IPCB_BASICSTRING_CONSTRUCTOR
     {ShortnamePath{"/JICA/Service/Interface/PerceptionSI_VisnObjOut"}} // VCA_IPCB_BASICSTRING_CONSTRUCTOR
};

// VECTOR NC AutosarC++17_10-M7.1.2: MD_IPCBINDING_AutosarC++17_10-M7.1.2_config_variant
void LifeCycleManagerXf::Initialize(BindingCoreType& binding_core,
                                    ::amsr::timer::ThreadSafeTimerManager& timer_manager) noexcept {
  // VCA_IPCB_LIFECYCLE_MANAGER_VALID_OBJECT
  logger_.LogDebug([](::ara::log::LogStream& s) { s << "Initializing LifeCycleManagerXf"; },
                  Logger::LogLocation{__func__, __LINE__});

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


void LifeCycleManagerXf::InitializeServiceDiscoverySkeletonXfs(BindingCoreType& binding_core) noexcept{


  // Service Config for Service Interface '/JICA/Service/Interface/PerceptionSI_FreeSpaceOut'
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSI_FreeSpaceOut"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service skeleton '/JICA/Service/Interface/PerceptionSI_FreeSpaceOut'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_freespaceout::PerceptionSI_FreeSpaceOutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_freespaceout::skeleton::PerceptionSI_FreeSpaceOutSkeleton>,
        ::perceptionsi_freespaceout::skeleton::PerceptionSI_FreeSpaceOutSkeleton>;
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
          ::perceptionsi_freespaceout::skeleton::PerceptionSI_FreeSpaceOutSkeleton::GetServiceDiscovery(),
          service_config));
    }
  }

  // Service Config for Service Interface '/JICA/Service/Interface/PerceptionSI_Out'
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSI_Out"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service skeleton '/JICA/Service/Interface/PerceptionSI_Out'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_out::PerceptionSI_OutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_out::skeleton::PerceptionSI_OutSkeleton>,
        ::perceptionsi_out::skeleton::PerceptionSI_OutSkeleton>;
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
          ::perceptionsi_out::skeleton::PerceptionSI_OutSkeleton::GetServiceDiscovery(),
          service_config));
    }
  }

  // Service Config for Service Interface '/JICA/Service/Interface/PerceptionSI_VisnObjOut'
  {
    // VCA_IPCB_VALID_RUNTIME_CONFIGURATION_OBJECT, VCA_IPCB_LIFECYCLE_MANAGER_XF_UNDEFINED_FUNCTION, VCA_IPCB_STD_FUNCTION_CALLED
    ServiceConfig const& service_config{runtime_config_.GetServiceOf({"/JICA/Service/Interface/PerceptionSI_VisnObjOut"})};

    logger_.LogDebug(
        [](::ara::log::LogStream& s) {
          // VCA_IPCB_LOGSTREAM_CONCATENATION_IS_SILENT
          s << "Initializing service skeleton '/JICA/Service/Interface/PerceptionSI_VisnObjOut'.";
        },
        Logger::LogLocation{__func__, __LINE__});
    using SdSkeletonXfType = ::amsr::ipc_binding_transformation_layer::internal::ServiceDiscoverySkeletonXf<
        ::amsr::ipc_binding_transformation_layer::internal::perceptionsi_visnobjout::PerceptionSI_VisnObjOutProvidedIpcServiceInstance,
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<
            ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton>,
        ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton>;
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
          ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton::GetServiceDiscovery(),
          service_config));
    }
  }
}

// VECTOR NC AutosarC++17_10-M0.1.8: MD_IPCBINDING_AutosarC++17_10_M0.1.8_config_variant
// VECTOR NC AutosarC++17_10-M9.3.3: MD_IPCBINDING_AutosarC++17_10_M9.3.3_config_variant
void LifeCycleManagerXf::DeInitializeServiceDiscoveryProxyXfs() noexcept {}

}  // namespace internal
}  // namespace ipc_binding_transformation_layer
}  // namespace amsr

