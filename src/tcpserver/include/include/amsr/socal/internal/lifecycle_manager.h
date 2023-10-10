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
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/internal/service_discovery/proxy_service_discovery.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"
#include "perceptionsi_out/perceptionsidesi_out_proxy.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.h"
#include "radaradaptorsi_out/radaradaptorsi_out_proxy.h"
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

    perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy::CreateSingletons();
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::CreateSingletons();
    perceptionsi_out::proxy::PerceptionSideSI_OutProxy::CreateSingletons();
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::CreateSingletons();
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::CreateSingletons();

    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::CreateSingletons();
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
    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::DestroySingletons();

    perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy::DestroySingletons();
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::DestroySingletons();
    perceptionsi_out::proxy::PerceptionSideSI_OutProxy::DestroySingletons();
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::DestroySingletons();
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
    
    perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy::RegisterServiceDiscovery(&perceptionsi_camstsout_proxy_sd_);
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::RegisterServiceDiscovery(&perceptionsi_visnobjout_proxy_sd_);
    perceptionsi_out::proxy::PerceptionSideSI_OutProxy::RegisterServiceDiscovery(&perceptionsidesi_out_proxy_sd_);
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::RegisterServiceDiscovery(&radaradaptorsi_out_proxy_sd_);
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::RegisterServiceDiscovery(&tosoca_infomationsi_proxy_sd_);
    
    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::RegisterServiceDiscovery(&objectfusionmodelsi_out_skeleton_sd_);
  }

  // VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_AutosarC++17_10-M9.3.3_Method_can_be_declared_static
  /*!
   * \brief          Deregisters all service discovery objects from the proxy and skeleton classes.
   * \pre            -
   * \context        Shutdown
   */
  void DeInitializeServiceDiscovery() noexcept {
    perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy::DeRegisterServiceDiscovery();
    perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::DeRegisterServiceDiscovery();
    perceptionsi_out::proxy::PerceptionSideSI_OutProxy::DeRegisterServiceDiscovery();
    radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::DeRegisterServiceDiscovery();
    tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::DeRegisterServiceDiscovery();
    
    objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::DeRegisterServiceDiscovery();
  }


 
  /*!
   * \brief Type alias for the service discovery type on proxy side 
   *        used for the service interface PerceptionSI_CamStsOut.
   */
  using PerceptionSI_CamStsOutProxyServiceDiscovery = ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      perceptionsi_camstsout::internal::PerceptionSI_CamStsOutProxyBackendInterface>;

  /*!
   * \brief Service discovery instance used on proxy side for the service interface PerceptionSI_CamStsOut.
   */
  PerceptionSI_CamStsOutProxyServiceDiscovery perceptionsi_camstsout_proxy_sd_;
 
  /*!
   * \brief Type alias for the service discovery type on proxy side 
   *        used for the service interface PerceptionSI_VisnObjOut.
   */
  using PerceptionSI_VisnObjOutProxyServiceDiscovery = ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      perceptionsi_visnobjout::internal::PerceptionSI_VisnObjOutProxyBackendInterface>;

  /*!
   * \brief Service discovery instance used on proxy side for the service interface PerceptionSI_VisnObjOut.
   */
  PerceptionSI_VisnObjOutProxyServiceDiscovery perceptionsi_visnobjout_proxy_sd_;
 
  /*!
   * \brief Type alias for the service discovery type on proxy side 
   *        used for the service interface PerceptionSideSI_Out.
   */
  using PerceptionSideSI_OutProxyServiceDiscovery = ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      perceptionsi_out::internal::PerceptionSideSI_OutProxyBackendInterface>;

  /*!
   * \brief Service discovery instance used on proxy side for the service interface PerceptionSideSI_Out.
   */
  PerceptionSideSI_OutProxyServiceDiscovery perceptionsidesi_out_proxy_sd_;
 
  /*!
   * \brief Type alias for the service discovery type on proxy side 
   *        used for the service interface RadarAdaptorSI_Out.
   */
  using RadarAdaptorSI_OutProxyServiceDiscovery = ::amsr::socal::internal::service_discovery::ProxyServiceDiscovery<
      radaradaptorsi_out::internal::RadarAdaptorSI_OutProxyBackendInterface>;

  /*!
   * \brief Service discovery instance used on proxy side for the service interface RadarAdaptorSI_Out.
   */
  RadarAdaptorSI_OutProxyServiceDiscovery radaradaptorsi_out_proxy_sd_;
 
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
   *        used for the service interface ObjectFusionModelSI_Out.
   */
  using ObjectFusionModelSI_OutSkeletonSdType = objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton::ServiceDiscovery;

  /*!
   * \brief Service discovery instance used on skeleton side for the service interface ObjectFusionModelSI_Out.
   */
  ObjectFusionModelSI_OutSkeletonSdType objectfusionmodelsi_out_skeleton_sd_;
};
}  // namespace internal
}  // namespace socal
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOCAL_INTERNAL_LIFECYCLE_MANAGER_H_

