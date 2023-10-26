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
/**        \file  ObjectFusionModelExe/src/tosoca_siderdrfusedtargetssi/tosoca_siderdrfusedtargetssi_proxy.cpp
 *        \brief  Proxy for service 'TOSOCA_SideRdrFusedTargetsSI'.
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

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "tosoca_siderdrfusedtargetssi/tosoca_siderdrfusedtargetssi_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace tosoca_siderdrfusedtargetssi {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
TOSOCA_SideRdrFusedTargetsSIProxy::ConstructionResult TOSOCA_SideRdrFusedTargetsSIProxy::Preconstruct(
    TOSOCA_SideRdrFusedTargetsSIProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
TOSOCA_SideRdrFusedTargetsSIProxy::TOSOCA_SideRdrFusedTargetsSIProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OSM2_TOSOCA_SideRdrFusedTargets1{&(Base::GetProxyBackend().GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets1()), "TOSOCA_SideRdrFusedTargetsSI", "OSM2_TOSOCA_SideRdrFusedTargets1", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OSM2_TOSOCA_SideRdrFusedTargets2{&(Base::GetProxyBackend().GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets2()), "TOSOCA_SideRdrFusedTargetsSI", "OSM2_TOSOCA_SideRdrFusedTargets2", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OSM2_TOSOCA_SideRdrFusedTargets3{&(Base::GetProxyBackend().GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets3()), "TOSOCA_SideRdrFusedTargetsSI", "OSM2_TOSOCA_SideRdrFusedTargets3", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OSM2_TOSOCA_SideRdrFusedTargets4{&(Base::GetProxyBackend().GetEventBackendOSM2_TOSOCA_SideRdrFusedTargets4()), "TOSOCA_SideRdrFusedTargetsSI", "OSM2_TOSOCA_SideRdrFusedTargets4", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
TOSOCA_SideRdrFusedTargetsSIProxy::TOSOCA_SideRdrFusedTargetsSIProxy(
  TOSOCA_SideRdrFusedTargetsSIProxy::HandleType const& handle) noexcept
  : TOSOCA_SideRdrFusedTargetsSIProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
TOSOCA_SideRdrFusedTargetsSIProxy::~TOSOCA_SideRdrFusedTargetsSIProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OSM2_TOSOCA_SideRdrFusedTargets1.Unsubscribe();
  OSM2_TOSOCA_SideRdrFusedTargets1.UnsetReceiveHandler();
  OSM2_TOSOCA_SideRdrFusedTargets1.UnsetSubscriptionStateHandler();
  OSM2_TOSOCA_SideRdrFusedTargets2.Unsubscribe();
  OSM2_TOSOCA_SideRdrFusedTargets2.UnsetReceiveHandler();
  OSM2_TOSOCA_SideRdrFusedTargets2.UnsetSubscriptionStateHandler();
  OSM2_TOSOCA_SideRdrFusedTargets3.Unsubscribe();
  OSM2_TOSOCA_SideRdrFusedTargets3.UnsetReceiveHandler();
  OSM2_TOSOCA_SideRdrFusedTargets3.UnsetSubscriptionStateHandler();
  OSM2_TOSOCA_SideRdrFusedTargets4.Unsubscribe();
  OSM2_TOSOCA_SideRdrFusedTargets4.UnsetReceiveHandler();
  OSM2_TOSOCA_SideRdrFusedTargets4.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace tosoca_siderdrfusedtargetssi

