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
/**        \file  ObjectFusionModelExe/include/amsr/socal/internal/lifecycle_manager.h
 *        \brief  Manages the lifecycle of internal objects with static storage duration.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/internal/definition_is_threading_enabled_true.h"
#include "amsr/socal/internal/reactor_thread_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/socal/internal/thread_pools_manager.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
#include "perceptionrearsi_out/PerceptionRearSI_Out.h"
#include "perceptionrearsi_out/perceptionrearsi_out_proxy.h"
#include "perceptionsi_out/PerceptionSI_Out.h"
#include "perceptionsi_out/perceptionsi_out_proxy.h"
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.h"
#include "perceptionsidesi_out/PerceptionSideSI_Out.h"
#include "perceptionsidesi_out/perceptionsidesi_out_proxy.h"
#include "radaradaptorsi_out/RadarAdaptorSI_Out.h"
#include "radaradaptorsi_out/radaradaptorsi_out_proxy.h"
#include "tosoca_infomationsi/ToSOCA_InfomationSI.h"
#include "tosoca_infomationsi/tosoca_infomationsi_proxy.h"
#include "tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI.h"
#include "tosoca_siderdrfusedtargetssi/tosoca_siderdrfusedtargetssi_proxy.h"

namespace amsr {
namespace socal {
namespace internal {

/*!
 * \brief Initiates the creation and destruction of objects with static storage duration and
 *        (de-)registers the static service discovery instances to the Proxy and Skeleton classes.
 * \unit Socal::Runtime::LifecycleManager
 */
class LifecycleManager final {
 public:
  /*!
   * \brief       Initializes the lifecycle manager and triggers the creation of singletons.
   * \pre         This function must only be called once.
   * \context     Init
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   *
   * \internal
   * - Create singleton instance of the lifecycle manager.
   * - Register all the service discovery objects to their respective proxy and skeleton classes.
   * - Create singleton instances of all the skeleton classes.
   * - Create singleton instances of all the proxy classes.
   * - Create singleton instance of the thread pool manager.
   * \endinternal
   */
  static void Initialize() noexcept {
    // Consider the dependencies when changing the initialization order below.
    GetInstance().Create();
    GetInstance().GetAccess()->InitializeServiceDiscovery();

    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::CreateSingletons();

    perceptionrearsi_out::proxy::PerceptionRearSI_OutProxy::CreateSingletons();
    perceptionsi_out::proxy::PerceptionSI_OutProxy::CreateSingletons();
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::CreateSingletons();
    perceptionsidesi_out::proxy::PerceptionSideSI_OutProxy::CreateSingletons();
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::CreateSingletons();
    tosoca_siderdrfusedtargetssi::proxy::TOSOCA_SideRdrFusedTargetsSIProxy::CreateSingletons();
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::CreateSingletons();

    ::amsr::socal::internal::ThreadPoolsManager::getSingletonInstance().Create();
  }

  /*!
   * \brief       Deinitializes the lifecycle manager and triggers the destruction of singletons.
   * \pre         Initialize has been called.
   *              Reactor thread and bindings have been deinitialized.
   * \context     Shutdown
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   *
   * \internal
   * - Destroy singleton instance of the thread pool manager.
   * - Destroys singleton instances of all the proxy classes.
   * - Destroys singleton instances of all the skeleton classes.
   * - Deregister all the service discovery objects to their respective proxy and skeleton classes.
   * - Destroys singleton instance of the lifecycle manager.
   * \endinternal
   */
  static void Deinitialize() noexcept {
    // Consider the dependencies when changing the deinitialization order below.
    ::amsr::socal::internal::ThreadPoolsManager::getSingletonInstance().Destroy();

    perceptionrearsi_out::proxy::PerceptionRearSI_OutProxy::DestroySingletons();
    perceptionsi_out::proxy::PerceptionSI_OutProxy::DestroySingletons();
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::DestroySingletons();
    perceptionsidesi_out::proxy::PerceptionSideSI_OutProxy::DestroySingletons();
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::DestroySingletons();
    tosoca_siderdrfusedtargetssi::proxy::TOSOCA_SideRdrFusedTargetsSIProxy::DestroySingletons();
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::DestroySingletons();

    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::DestroySingletons();

    GetInstance().GetAccess()->DeInitializeServiceDiscovery();

    GetInstance().Destroy();
  }

  /*!
   * \brief     Initializes the reactor thread.
   * \pre       LifecycleManager must be in initialized state.
   * \context   Init
   */
  static void InitializeReactorThreadManager() noexcept {
    GetInstance().GetAccess()->reactor_thread_manager_.InitializeReactorThread();
  }

  /*!
   * \brief   De-initializes the reactor thread.
   * \pre     LifecycleManager must be in initialized state
   * \context Shutdown
   */
  static void DeinitializeReactorThreadManager() noexcept {
    GetInstance().GetAccess()->reactor_thread_manager_.DeinitializeReactorThread();
  }

  /*!
   * \brief Constructor.
   * \details Shall not directly be used.
   * \context     Init
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  LifecycleManager() = default;

 private:
  /*!
   * \brief Returns an instance of lifecycle manager class
   * \return LifecycleManager (singleton) instance
   * \pre         -
   * \context     Init | Shutdown
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  static ::amsr::generic::Singleton<LifecycleManager>& GetInstance() noexcept {
    // VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
    static ::amsr::generic::Singleton<LifecycleManager> lifecycle_manager;
    return lifecycle_manager;
  }

  /*!
   * \brief          Registers all service discovery objects to the respective proxy and skeleton classes.
   * \pre            -
   * \context        Init
   */
  void InitializeServiceDiscovery() noexcept {

    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    perceptionrearsi_out::proxy::PerceptionRearSI_OutProxy::RegisterServiceDiscovery(&perceptionrearsi_out_proxy_sd_0_);
    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    perceptionsi_out::proxy::PerceptionSI_OutProxy::RegisterServiceDiscovery(&perceptionsi_out_proxy_sd_1_);
    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::RegisterServiceDiscovery(&perceptionsi_visnobjout_proxy_sd_2_);
    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    perceptionsidesi_out::proxy::PerceptionSideSI_OutProxy::RegisterServiceDiscovery(&perceptionsidesi_out_proxy_sd_3_);
    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::RegisterServiceDiscovery(&radaradaptorsi_out_proxy_sd_4_);
    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    tosoca_siderdrfusedtargetssi::proxy::TOSOCA_SideRdrFusedTargetsSIProxy::RegisterServiceDiscovery(&tosoca_siderdrfusedtargetssi_proxy_sd_5_);
    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::RegisterServiceDiscovery(&tosoca_infomationsi_proxy_sd_6_);

    // VCA_SOCAL_UNDEFINED_REGISTER_SD_FUNCTION
    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::RegisterServiceDiscovery(&objectfusionmodelsi_out_skeleton_sd_0_);
  }

  // VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
  /*!
   * \brief          Deregisters all service discovery objects from the proxy and skeleton classes.
   * \pre            -
   * \context        Shutdown
   */
  void DeInitializeServiceDiscovery() noexcept {
    perceptionrearsi_out::proxy::PerceptionRearSI_OutProxy::DeRegisterServiceDiscovery();
    perceptionsi_out::proxy::PerceptionSI_OutProxy::DeRegisterServiceDiscovery();
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::DeRegisterServiceDiscovery();
    perceptionsidesi_out::proxy::PerceptionSideSI_OutProxy::DeRegisterServiceDiscovery();
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::DeRegisterServiceDiscovery();
    tosoca_siderdrfusedtargetssi::proxy::TOSOCA_SideRdrFusedTargetsSIProxy::DeRegisterServiceDiscovery();
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::DeRegisterServiceDiscovery();

    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::DeRegisterServiceDiscovery();
  }


  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface perceptionrearsi_out::PerceptionRearSI_Out.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      perceptionrearsi_out::internal::PerceptionRearSI_OutProxyBackendInterface> perceptionrearsi_out_proxy_sd_0_{perceptionrearsi_out::PerceptionRearSI_Out::kServiceShortNamePath};

  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface perceptionsi_out::PerceptionSI_Out.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      perceptionsi_out::internal::PerceptionSI_OutProxyBackendInterface> perceptionsi_out_proxy_sd_1_{perceptionsi_out::PerceptionSI_Out::kServiceShortNamePath};

  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface perceptionsi_visnobjout::PerceptionSI_VisnObjOut.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface> perceptionsi_visnobjout_proxy_sd_2_{perceptionsi_visnobjout::PerceptionSI_VisnObjOut::kServiceShortNamePath};

  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface perceptionsidesi_out::PerceptionSideSI_Out.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      perceptionsidesi_out::internal::PerceptionSideSI_OutProxyBackendInterface> perceptionsidesi_out_proxy_sd_3_{perceptionsidesi_out::PerceptionSideSI_Out::kServiceShortNamePath};

  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface radaradaptorsi_out::RadarAdaptorSI_Out.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface> radaradaptorsi_out_proxy_sd_4_{radaradaptorsi_out::RadarAdaptorSI_Out::kServiceShortNamePath};

  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface tosoca_siderdrfusedtargetssi::TOSOCA_SideRdrFusedTargetsSI.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      tosoca_siderdrfusedtargetssi::internal::TOSOCA_SideRdrFusedTargetsSIProxyBackendInterface> tosoca_siderdrfusedtargetssi_proxy_sd_5_{tosoca_siderdrfusedtargetssi::TOSOCA_SideRdrFusedTargetsSI::kServiceShortNamePath};

  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface tosoca_infomationsi::ToSOCA_InfomationSI.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface> tosoca_infomationsi_proxy_sd_6_{tosoca_infomationsi::ToSOCA_InfomationSI::kServiceShortNamePath};

  /*!
   * \brief Reactor thread manager.
   */
  ReactorThreadManager<> reactor_thread_manager_;

  /*!
   * \brief Service discovery instance used on skeleton side
   *        for the service interface objectfusionmodelsi_out::ObjectFusionModelSI_Out.
   */
  objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::ServiceDiscovery objectfusionmodelsi_out_skeleton_sd_0_{objectfusionmodelsi_out::ObjectFusionModelSI_Out::kServiceShortNamePath};
};
}  // namespace internal
}  // namespace socal
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_

