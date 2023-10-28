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
/**        \file  dtcAppExe/include/amsr/socal/internal/lifecycle_manager.h
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

#ifndef DTCAPPEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_
#define DTCAPPEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/internal/definition_is_threading_enabled_true.h"
#include "amsr/socal/internal/reactor_thread_manager.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/thread_pools_manager.h"
#include "tosoca_infomationsi/ToSOCA_InfomationSI.h"
#include "tosoca_infomationsi/tosoca_infomationsi_proxy.h"

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

    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::DestroySingletons();


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
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::RegisterServiceDiscovery(&tosoca_infomationsi_proxy_sd_0_);

  }

  // VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
  /*!
   * \brief          Deregisters all service discovery objects from the proxy and skeleton classes.
   * \pre            -
   * \context        Shutdown
   */
  void DeInitializeServiceDiscovery() noexcept {
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::DeRegisterServiceDiscovery();

  }


  /*!
   * \brief Service discovery instance used on proxy side
   *        for the service interface tosoca_infomationsi::ToSOCA_InfomationSI.
   */
  ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface> tosoca_infomationsi_proxy_sd_0_{tosoca_infomationsi::ToSOCA_InfomationSI::kServiceShortNamePath};

  /*!
   * \brief Reactor thread manager.
   */
  ReactorThreadManager<> reactor_thread_manager_;

};
}  // namespace internal
}  // namespace socal
}  // namespace amsr

#endif  // DTCAPPEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_

