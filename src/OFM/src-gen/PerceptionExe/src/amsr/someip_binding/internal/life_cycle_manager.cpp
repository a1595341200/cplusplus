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
/**        \file  PerceptionExe/src/amsr/someip_binding/internal/life_cycle_manager.cpp
 *        \brief  Initialization/Deinitialization functions for someip_binding
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/life_cycle_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_someip_binding.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_binding.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_staticobjout/PerceptionSI_StaticObjOut_skeleton_someip_binding.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_staticobjout/PerceptionSI_StaticObjOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_someip_binding.h"
#include "amsr/someip_binding_transformation_layer/internal/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_someip_binding_init.h"
#include "amsr/someip_binding_transformation_layer/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_xf.h"
#include "someip_binding_transformation_layer/internal/service_discovery/service_discovery_proxy_xf.h"
#include "someip_binding_transformation_layer/internal/service_discovery/service_discovery_skeleton_xf.h"

namespace amsr {
namespace someip_binding {
namespace internal {

LifeCycleManager::LifeCycleManager(std::unique_ptr<RuntimeInterface>& runtime) noexcept : runtime_{runtime} {}



::ara::core::Result<void> LifeCycleManager::Initialize(amsr::someip_binding::internal::configuration::SomeIpBindingConfig& someip_binding_config) noexcept {

  osabstraction::io::reactor1::Reactor1* const reactor{&runtime_->GetReactor()};
  std::function<void()> process_polling_function{runtime_->GetProcessPollingFunction()};
  aracom_someip_binding_.emplace(someip_binding_config, process_polling_function, reactor);


  // Register all service instances into SOME/IP Binding.
  InitializeRequiredServiceInstances();
  InitializeProvidedServiceInstances();

  // Create all ara::com / Binding Transformation objects.
  InitializeProxySomeIpEventBackends();
  InitializeSkeletonSomeIpEventBackends();
  InitializeServiceDiscoveryProxyXfs();
  InitializeServiceDiscoverySkeletonXfs();

  // Registers all service instances into Socal.
  RegisterServiceInstances();

  return ::ara::core::Result<void> {};
}



::ara::core::Result<void> LifeCycleManager::Deinitialize() noexcept {
  CleanInstanceSpecifierToInstanceIdMapping();

  sd_proxy_xfs_.clear();
  sd_skeleton_xfs_.clear();
  DeInitializeProxySomeIpEventBackends();
  DeInitializeSkeletonSomeIpEventBackends();

  aracom_someip_binding_.reset();

  return ::ara::core::Result<void> {};
}

// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
// VECTOR NC AutosarC++17_10-A15.5.3: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.3_Exception_caught
// VECTOR NC AutosarC++17_10-A15.4.2: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.3_Exception_caught
void LifeCycleManager::RegisterServiceInstances() noexcept {
  {
    // ---- Register all known R-Port InstanceSpecifiers ----
    {
      // Map R-Port /JICA/SWC/PerceptionExe/Perception/PerceptionInfoSIR to instance /JICA/Service/RequiredSomeipToSOCA_InfomationSI/RequiredSomeipToSOCA_InfomationSI 
      ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionInfoSIR"_sv};
      ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1132"_sv};

        runtime_->MapRequiredInstanceSpecifierToInstanceId(
            vac::container::CStringView{"SomeIp"_sv}, instance_specifier, instance_identifier,
            "/JICA/Service/Interface/ToSOCA_InfomationSI"_sv);
    }
  }
  {
    // ---- Register all known P-Port InstanceSpecifiers ----
    {
      // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionCamStsSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_CamStsOut/ProvidedSomeipPerceptionSI_CamStsOut
      ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionCamStsSIP"_sv};
      ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1083"_sv};

      runtime_->MapProvidedInstanceSpecifierToInstanceId(
            vac::container::CStringView{"SomeIp"_sv}, instance_specifier, instance_identifier,
            "/JICA/Service/Interface/PerceptionSI_CamStsOut"_sv);
    }
    {
      // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionLaneSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_LaneOut/ProvidedSomeipPerceptionSI_LaneOut
      ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionLaneSIP"_sv};
      ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1082"_sv};

      runtime_->MapProvidedInstanceSpecifierToInstanceId(
            vac::container::CStringView{"SomeIp"_sv}, instance_specifier, instance_identifier,
            "/JICA/Service/Interface/PerceptionSI_LaneOut"_sv);
    }
    {
      // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionStaticObjSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_StaticObjOut/ProvidedSomeipPerceptionSI_StaticObjOut
      ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionStaticObjSIP"_sv};
      ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1081"_sv};

      runtime_->MapProvidedInstanceSpecifierToInstanceId(
            vac::container::CStringView{"SomeIp"_sv}, instance_specifier, instance_identifier,
            "/JICA/Service/Interface/PerceptionSI_StaticObjOut"_sv);
    }
    {
      // Map P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionVisnObjSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_VisnObjOut/ProvidedSomeipPerceptionSI_VisnObjOut
      ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionVisnObjSIP"_sv};
      ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1095"_sv};

      runtime_->MapProvidedInstanceSpecifierToInstanceId(
            vac::container::CStringView{"SomeIp"_sv}, instance_specifier, instance_identifier,
            "/JICA/Service/Interface/PerceptionSI_VisnObjOut"_sv);
    }
  }
}


// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
void LifeCycleManager::InitializeProxySomeIpEventBackends() noexcept {
  ClientManager<::amsr::someip_daemon_client::internal::SomeIpDaemonClient<
    ::amsr::someip_daemon_client::internal::SomeIpDaemonClientDefaultTemplateConfiguration>>&
	  client_manager{aracom_someip_binding_->GetClientManager()};
  osabstraction::io::reactor1::Reactor1* const reactor{ &runtime_->GetReactor()};
  ::amsr::timer::ThreadSafeTimerManager& time_manager{runtime_->GetTimerManager()};
  bool const is_polling_mode{runtime_->IsProcessingModePolling()};
  std::recursive_mutex& mode_lock{runtime_->GetPollingModeLock()};
  // Initialize proxy event backends for ServiceInterface '/JICA/Service/Interface/ToSOCA_InfomationSI'
  ::amsr::someip_binding_transformation_layer::internal::tosoca_infomationsi::
      AraComSomeIpBindingInitializeProxySomeIpEventBackendsToSOCA_InfomationSI(client_manager,
       reactor, time_manager, is_polling_mode, mode_lock);
}

// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
 void LifeCycleManager::InitializeSkeletonSomeIpEventBackends() noexcept {
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_CamStsOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_camstsout::
      AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_CamStsOut(aracom_someip_binding_->GetServerManager());
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_LaneOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_laneout::
      AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_LaneOut(aracom_someip_binding_->GetServerManager());
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_StaticObjOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_staticobjout::
      AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_StaticObjOut(aracom_someip_binding_->GetServerManager());
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_VisnObjOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_visnobjout::
      AraComSomeIpBindingInitializeSkeletonSomeIpEventBackendsPerceptionSI_VisnObjOut(aracom_someip_binding_->GetServerManager());
}

// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
void LifeCycleManager::DeInitializeProxySomeIpEventBackends() noexcept {
  // DeInitialize proxy event backends of ServiceInterface '/JICA/Service/Interface/ToSOCA_InfomationSI'
  ::amsr::someip_binding_transformation_layer::internal::tosoca_infomationsi::
      AraComSomeIpBindingDeInitializeProxySomeIpEventBackendsToSOCA_InfomationSI();
}

// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
void LifeCycleManager::DeInitializeSkeletonSomeIpEventBackends() noexcept {
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_CamStsOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_camstsout::
      AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_CamStsOut();
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_LaneOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_laneout::
      AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_LaneOut();
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_StaticObjOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_staticobjout::
      AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_StaticObjOut();
  // Initialize skeleton event backends for ServiceInterface '/JICA/Service/Interface/PerceptionSI_VisnObjOut'
  ::amsr::someip_binding_transformation_layer::internal::perceptionsi_visnobjout::
      AraComSomeIpBindingDeInitializeSkeletonSomeIpEventBackendsPerceptionSI_VisnObjOut();
}

// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
// VECTOR NC AutosarC++17_10-M0.1.8, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M0.1.8_Void_function_has_no_external_side_effect
void LifeCycleManager::InitializeRequiredServiceInstances() noexcept {
  aracom_someip_binding_->EmplaceRequiredServiceInstance(::amsr::someip_protocol::internal::ServiceId{0xA3U},
                                                        ::amsr::someip_protocol::internal::MajorVersion{1U},
                                                        ::amsr::someip_protocol::internal::MinorVersion{4294967295U},
                                                        ::amsr::someip_protocol::internal::InstanceId{1132U});
}

// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
// VECTOR NC AutosarC++17_10-M0.1.8, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M0.1.8_Void_function_has_no_external_side_effect
void LifeCycleManager::InitializeProvidedServiceInstances() noexcept {
    // Register provided service for instance /JICA/Service/ProvidedSomeipPerceptionSI_CamStsOut/ProvidedSomeipPerceptionSI_CamStsOut
    {
      ::amsr::someip_binding::internal::ProvidedServiceInstanceId const PerceptionSI_CamStsOut_provided_service_instance_id{ static_cast<::amsr::someip_protocol::internal::ServiceId>(0x63),
                                                                                                                                                        1, 0, 0x43B };
      aracom_someip_binding_->GetServerManager().RegisterProvidedServiceInstance(PerceptionSI_CamStsOut_provided_service_instance_id);
    }
    // Register provided service for instance /JICA/Service/ProvidedSomeipPerceptionSI_LaneOut/ProvidedSomeipPerceptionSI_LaneOut
    {
      ::amsr::someip_binding::internal::ProvidedServiceInstanceId const PerceptionSI_LaneOut_provided_service_instance_id{ static_cast<::amsr::someip_protocol::internal::ServiceId>(0x61),
                                                                                                                                                        1, 0, 0x43A };
      aracom_someip_binding_->GetServerManager().RegisterProvidedServiceInstance(PerceptionSI_LaneOut_provided_service_instance_id);
    }
    // Register provided service for instance /JICA/Service/ProvidedSomeipPerceptionSI_StaticObjOut/ProvidedSomeipPerceptionSI_StaticObjOut
    {
      ::amsr::someip_binding::internal::ProvidedServiceInstanceId const PerceptionSI_StaticObjOut_provided_service_instance_id{ static_cast<::amsr::someip_protocol::internal::ServiceId>(0x5F),
                                                                                                                                                        1, 0, 0x439 };
      aracom_someip_binding_->GetServerManager().RegisterProvidedServiceInstance(PerceptionSI_StaticObjOut_provided_service_instance_id);
    }
    // Register provided service for instance /JICA/Service/ProvidedSomeipPerceptionSI_VisnObjOut/ProvidedSomeipPerceptionSI_VisnObjOut
    {
      ::amsr::someip_binding::internal::ProvidedServiceInstanceId const PerceptionSI_VisnObjOut_provided_service_instance_id{ static_cast<::amsr::someip_protocol::internal::ServiceId>(0x5D),
                                                                                                                                                        1, 0, 0x447 };
      aracom_someip_binding_->GetServerManager().RegisterProvidedServiceInstance(PerceptionSI_VisnObjOut_provided_service_instance_id);
    }
}

// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
// VECTOR NC AutosarC++17_10-M3.2.1, Linker-Return_Type_Mismatch: MD_SOMEIPBINDING_AutosarC++17_10-M3.2.1_Return_type_mismatch
LifeCycleManager::SomeIpBindingType& LifeCycleManager::GetBinding() noexcept {
  if (!aracom_someip_binding_.has_value()) {
    ::ara::core::Abort("SOME/IP Binding has never been initialized.");
  }
  return aracom_someip_binding_.value();
}


void LifeCycleManager::InitializeServiceDiscoveryProxyXfs() noexcept {

    // Instantiate ServiceDiscoveryProxyXfs for instance /JICA/Service/RequiredSomeipToSOCA_InfomationSI/RequiredSomeipToSOCA_InfomationSI
    {
       using ProxyXfType = ::amsr::someip_binding_transformation_layer::internal::tosoca_infomationsi::ToSOCA_InfomationSIProxyXf;
       using ProxyBackendInterfaceType =
            ::tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface;
       using ProxyServiceDiscoveryType = ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<ProxyBackendInterfaceType>;
       using SdProxyXfType = ::amsr::someip_binding_transformation_layer::internal::service_discovery::ServiceDiscoveryProxyXf<
        ProxyXfType, ::amsr::someip_binding::internal::ClientManager<>,ProxyServiceDiscoveryType>;

       ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1132"_sv};

      sd_proxy_xfs_.emplace_back(std::make_unique<SdProxyXfType>(
        ::amsr::someip_binding::internal::RequiredServiceInstanceId{static_cast<::amsr::someip_protocol::internal::ServiceId>(0xA3),
                                                                    1,
                                                                    static_cast<::amsr::someip_protocol::internal::MinorVersion>(4294967295),
                                                                    1132 },
        instance_identifier, aracom_someip_binding_->GetClientManager(),
        ::tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::GetServiceDiscovery(), runtime_->GetThreadPoolInterface()));
    }
}

void LifeCycleManager::InitializeServiceDiscoverySkeletonXfs() noexcept {

  // Instantiate ServiceDiscoverySkeletonXfs for instance /JICA/Service/ProvidedSomeipPerceptionSI_CamStsOut/ProvidedSomeipPerceptionSI_CamStsOut
  {
    // Types.
    using SkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::perceptionsi_camstsout::PerceptionSI_CamStsOutSkeletonSomeIpBinding;
    using SkeletonBackendInterfaceType =
        ::perceptionsi_camstsout::skeleton::PerceptionSI_CamStsOutSkeleton;
    using ServiceDiscoveryType =
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<SkeletonBackendInterfaceType>;
    using SdSkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::service_discovery::ServiceDiscoverySkeletonXf<
            SkeletonXfType,
            SkeletonBackendInterfaceType,
            ::amsr::someip_binding::internal::ServerManager<>,
            ServiceDiscoveryType>;

    // Variables.
    ::amsr::someip_binding::internal::ProvidedServiceInstanceId const provided_service_instance_id{static_cast<::amsr::someip_protocol::internal::ServiceId>(0x63),
         1, 0, 0x43B };

    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1083"_sv};

    ::amsr::someip_binding::internal::ServerManager<
        amsr::someip_daemon_client::internal::SomeIpDaemonClient<
            amsr::someip_daemon_client::internal::SomeIpDaemonClientDefaultTemplateConfiguration>>& server_manager{
        aracom_someip_binding_->GetServerManager()};

    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ServiceDiscovery<
        ::perceptionsi_camstsout::skeleton::PerceptionSI_CamStsOutSkeleton>*>& service_discovery {
            ::perceptionsi_camstsout::skeleton::PerceptionSI_CamStsOutSkeleton::GetServiceDiscovery()};

    // Add the new entry to the container of XF's.
    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        provided_service_instance_id, instance_identifier, server_manager, service_discovery));
  }

  // Instantiate ServiceDiscoverySkeletonXfs for instance /JICA/Service/ProvidedSomeipPerceptionSI_LaneOut/ProvidedSomeipPerceptionSI_LaneOut
  {
    // Types.
    using SkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::perceptionsi_laneout::PerceptionSI_LaneOutSkeletonSomeIpBinding;
    using SkeletonBackendInterfaceType =
        ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton;
    using ServiceDiscoveryType =
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<SkeletonBackendInterfaceType>;
    using SdSkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::service_discovery::ServiceDiscoverySkeletonXf<
            SkeletonXfType,
            SkeletonBackendInterfaceType,
            ::amsr::someip_binding::internal::ServerManager<>,
            ServiceDiscoveryType>;

    // Variables.
    ::amsr::someip_binding::internal::ProvidedServiceInstanceId const provided_service_instance_id{static_cast<::amsr::someip_protocol::internal::ServiceId>(0x61),
         1, 0, 0x43A };

    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1082"_sv};

    ::amsr::someip_binding::internal::ServerManager<
        amsr::someip_daemon_client::internal::SomeIpDaemonClient<
            amsr::someip_daemon_client::internal::SomeIpDaemonClientDefaultTemplateConfiguration>>& server_manager{
        aracom_someip_binding_->GetServerManager()};

    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ServiceDiscovery<
        ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton>*>& service_discovery {
            ::perceptionsi_laneout::skeleton::PerceptionSI_LaneOutSkeleton::GetServiceDiscovery()};

    // Add the new entry to the container of XF's.
    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        provided_service_instance_id, instance_identifier, server_manager, service_discovery));
  }

  // Instantiate ServiceDiscoverySkeletonXfs for instance /JICA/Service/ProvidedSomeipPerceptionSI_StaticObjOut/ProvidedSomeipPerceptionSI_StaticObjOut
  {
    // Types.
    using SkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::perceptionsi_staticobjout::PerceptionSI_StaticObjOutSkeletonSomeIpBinding;
    using SkeletonBackendInterfaceType =
        ::perceptionsi_staticobjout::skeleton::PerceptionSI_StaticObjOutSkeleton;
    using ServiceDiscoveryType =
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<SkeletonBackendInterfaceType>;
    using SdSkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::service_discovery::ServiceDiscoverySkeletonXf<
            SkeletonXfType,
            SkeletonBackendInterfaceType,
            ::amsr::someip_binding::internal::ServerManager<>,
            ServiceDiscoveryType>;

    // Variables.
    ::amsr::someip_binding::internal::ProvidedServiceInstanceId const provided_service_instance_id{static_cast<::amsr::someip_protocol::internal::ServiceId>(0x5F),
         1, 0, 0x439 };

    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1081"_sv};

    ::amsr::someip_binding::internal::ServerManager<
        amsr::someip_daemon_client::internal::SomeIpDaemonClient<
            amsr::someip_daemon_client::internal::SomeIpDaemonClientDefaultTemplateConfiguration>>& server_manager{
        aracom_someip_binding_->GetServerManager()};

    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ServiceDiscovery<
        ::perceptionsi_staticobjout::skeleton::PerceptionSI_StaticObjOutSkeleton>*>& service_discovery {
            ::perceptionsi_staticobjout::skeleton::PerceptionSI_StaticObjOutSkeleton::GetServiceDiscovery()};

    // Add the new entry to the container of XF's.
    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        provided_service_instance_id, instance_identifier, server_manager, service_discovery));
  }

  // Instantiate ServiceDiscoverySkeletonXfs for instance /JICA/Service/ProvidedSomeipPerceptionSI_VisnObjOut/ProvidedSomeipPerceptionSI_VisnObjOut
  {
    // Types.
    using SkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::perceptionsi_visnobjout::PerceptionSI_VisnObjOutSkeletonSomeIpBinding;
    using SkeletonBackendInterfaceType =
        ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton;
    using ServiceDiscoveryType =
        ::amsr::socal::internal::service_discovery::ServiceDiscovery<SkeletonBackendInterfaceType>;
    using SdSkeletonXfType =
        ::amsr::someip_binding_transformation_layer::internal::service_discovery::ServiceDiscoverySkeletonXf<
            SkeletonXfType,
            SkeletonBackendInterfaceType,
            ::amsr::someip_binding::internal::ServerManager<>,
            ServiceDiscoveryType>;

    // Variables.
    ::amsr::someip_binding::internal::ProvidedServiceInstanceId const provided_service_instance_id{static_cast<::amsr::someip_protocol::internal::ServiceId>(0x5D),
         1, 0, 0x447 };

    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1095"_sv};

    ::amsr::someip_binding::internal::ServerManager<
        amsr::someip_daemon_client::internal::SomeIpDaemonClient<
            amsr::someip_daemon_client::internal::SomeIpDaemonClientDefaultTemplateConfiguration>>& server_manager{
        aracom_someip_binding_->GetServerManager()};

    ::amsr::generic::Singleton<::amsr::socal::internal::service_discovery::ServiceDiscovery<
        ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton>*>& service_discovery {
            ::perceptionsi_visnobjout::skeleton::PerceptionSI_VisnObjOutSkeleton::GetServiceDiscovery()};

    // Add the new entry to the container of XF's.
    sd_skeleton_xfs_.emplace_back(std::make_unique<SdSkeletonXfType>(
        provided_service_instance_id, instance_identifier, server_manager, service_discovery));
  }
}


// VECTOR NC AutosarC++17_10-M9.3.3, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_Method_can_be_declared_const
// VECTOR NC AutosarC++17_10-A15.5.3: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.3_Exception_caught
// VECTOR NC AutosarC++17_10-A15.4.2: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.3_Exception_caught
void LifeCycleManager::CleanInstanceSpecifierToInstanceIdMapping() noexcept {
  {
    // Remove mapping R-Port /JICA/SWC/PerceptionExe/Perception/PerceptionInfoSIR to instance /JICA/Service/RequiredSomeipToSOCA_InfomationSI/RequiredSomeipToSOCA_InfomationSI 
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionInfoSIR"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1132"_sv};

    runtime_->RemoveRequiredInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionCamStsSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_CamStsOut/ProvidedSomeipPerceptionSI_CamStsOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionCamStsSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1083"_sv};

    runtime_->RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionLaneSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_LaneOut/ProvidedSomeipPerceptionSI_LaneOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionLaneSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1082"_sv};

    runtime_->RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionStaticObjSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_StaticObjOut/ProvidedSomeipPerceptionSI_StaticObjOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionStaticObjSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1081"_sv};

    runtime_->RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
  {
    // Remove mapping P-Port /JICA/SWC/PerceptionExe/Perception/PerceptionVisnObjSIP to instance /JICA/Service/ProvidedSomeipPerceptionSI_VisnObjOut/ProvidedSomeipPerceptionSI_VisnObjOut
    ::ara::core::InstanceSpecifier const instance_specifier{"PerceptionExe/Perception/PerceptionVisnObjSIP"_sv};
    ::ara::com::InstanceIdentifier const instance_identifier{"SomeIp:1095"_sv};

    runtime_->RemoveProvidedInstanceSpecifierEntry(instance_specifier, instance_identifier);
  }
}



}  // namespace internal
}  // namespace someip_binding
}  // namespace amsr


