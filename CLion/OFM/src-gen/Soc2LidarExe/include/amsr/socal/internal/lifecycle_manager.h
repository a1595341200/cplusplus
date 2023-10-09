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
/**        \file  Soc2LidarExe/include/amsr/socal/internal/lifecycle_manager.h
 *        \brief  Manages the lifecycle of internal objects with static storage duration.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef SOC2LIDAREXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_
#define SOC2LIDAREXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "soc2lidarsid_out/soc2lidarsi_out_skeleton.h"
#include "tosoca_infomationsi/tosoca_infomationsi_proxy.h"

namespace amsr {
namespace socal {
namespace internal {

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
   * - Create singleton instances of all the proxy classes.
   * - Create singleton instances of all the skeleton classes.
   * \endinternal
   */
  static void Initialize() noexcept {
    // Consider the dependencies when changing the initialization order below.
    GetInstance().Create();
    GetInstance().GetAccess()->InitializeServiceDiscovery();

    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::CreateSingletons();

    soc2lidarsid_out::skeleton::Soc2LidarSI_OutSkeleton::CreateSingletons();
  }

  /*!
   * \brief       Deinitializes the lifecycle manager and triggers the destruction of singletons.
   * \pre         Initialize has been called.
   * \context     Shutdown
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   *
   * \internal
   * - Destroy singleton instances of all the skeleton classes.
   * - Destroy singleton instances of all the proxy classes.
   * - Deregister all the service discovery objects to their respective proxy and skeleton classes.
   * - Destroy singleton instance of the lifecycle manager.
   * \endinternal
   */
  static void Deinitialize() noexcept {
    // Consider the dependencies when changing the deinitialization order below.
    soc2lidarsid_out::skeleton::Soc2LidarSI_OutSkeleton::DestroySingletons();

    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::DestroySingletons();

    GetInstance().GetAccess()->DeInitializeServiceDiscovery();
    GetInstance().Destroy();
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
  static amsr::generic::Singleton<LifecycleManager>& GetInstance() noexcept {
    // VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
    static amsr::generic::Singleton<LifecycleManager> lifecycle_manager;
    return lifecycle_manager;
  }

  /*!
   * \brief          Registers all service discovery objects to the respective proxy and skeleton classes.
   * \pre            -
   * \context        Init
   */
  void InitializeServiceDiscovery() noexcept {
    
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::RegisterServiceDiscovery(&tosoca_infomationsi_proxy_sd_);
    
    soc2lidarsid_out::skeleton::Soc2LidarSI_OutSkeleton::RegisterServiceDiscovery(&soc2lidarsi_out_skeleton_sd_);
  }

  // VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
  /*!
   * \brief          Deregisters all service discovery objects from the proxy and skeleton classes.
   * \pre            -
   * \context        Shutdown
   */
  void DeInitializeServiceDiscovery() noexcept {
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::DeRegisterServiceDiscovery();
    
    soc2lidarsid_out::skeleton::Soc2LidarSI_OutSkeleton::DeRegisterServiceDiscovery();
  }


 
  /*!
   * \brief Type alias for the service discovery type on proxy side 
   *        used for the service interface ToSOCA_InfomationSI.
   */
  using ToSOCA_InfomationSIProxyServiceDiscovery = ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      tosoca_infomationsi::internal::ToSOCA_InfomationSIProxyBackendInterface>;

  /*!
   * \brief Service discovery instance used on proxy side for the service interface ToSOCA_InfomationSI.
   */
  ToSOCA_InfomationSIProxyServiceDiscovery tosoca_infomationsi_proxy_sd_;


 
  /*!
   * \brief Type alias for the service discovery type on skeleton side
   *        used for the service interface Soc2LidarSI_Out.
   */
  using Soc2LidarSI_OutSkeletonSdType = soc2lidarsid_out::skeleton::Soc2LidarSI_OutSkeleton::ServiceDiscovery;

  /*!
   * \brief Service discovery instance used on skeleton side for the service interface Soc2LidarSI_Out.
   */
  Soc2LidarSI_OutSkeletonSdType soc2lidarsi_out_skeleton_sd_;
};
}  // namespace internal
}  // namespace socal
}  // namespace amsr

#endif  // SOC2LIDAREXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_
