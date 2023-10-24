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
/**        \file  TrafficSignInformationExe/src/roadmodelfusionsi_out/roadmodelfusionsi_out_proxy.cpp
 *        \brief  Proxy for service 'RoadModelFusionSI_Out'.
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
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace roadmodelfusionsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
RoadModelFusionSI_OutProxy::ConstructionResult RoadModelFusionSI_OutProxy::Preconstruct(
    RoadModelFusionSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
RoadModelFusionSI_OutProxy::RoadModelFusionSI_OutProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    RMF_Bus_RMFInfo{&(Base::GetProxyBackend().GetEventBackendRMF_Bus_RMFInfo()), "RoadModelFusionSI_Out", "RMF_Bus_RMFInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    RMF_Bus_MapInfo{&(Base::GetProxyBackend().GetEventBackendRMF_Bus_MapInfo()), "RoadModelFusionSI_Out", "RMF_Bus_MapInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    RMF_Bus_VectorMapInfo{&(Base::GetProxyBackend().GetEventBackendRMF_Bus_VectorMapInfo()), "RoadModelFusionSI_Out", "RMF_Bus_VectorMapInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    RMF_Bus_Position{&(Base::GetProxyBackend().GetEventBackendRMF_Bus_Position()), "RoadModelFusionSI_Out", "RMF_Bus_Position", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
RoadModelFusionSI_OutProxy::RoadModelFusionSI_OutProxy(
  RoadModelFusionSI_OutProxy::HandleType const& handle) noexcept
  : RoadModelFusionSI_OutProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
RoadModelFusionSI_OutProxy::~RoadModelFusionSI_OutProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  RMF_Bus_RMFInfo.Unsubscribe();
  RMF_Bus_RMFInfo.UnsetReceiveHandler();
  RMF_Bus_RMFInfo.UnsetSubscriptionStateHandler();
  RMF_Bus_MapInfo.Unsubscribe();
  RMF_Bus_MapInfo.UnsetReceiveHandler();
  RMF_Bus_MapInfo.UnsetSubscriptionStateHandler();
  RMF_Bus_VectorMapInfo.Unsubscribe();
  RMF_Bus_VectorMapInfo.UnsetReceiveHandler();
  RMF_Bus_VectorMapInfo.UnsetSubscriptionStateHandler();
  RMF_Bus_Position.Unsubscribe();
  RMF_Bus_Position.UnsetReceiveHandler();
  RMF_Bus_Position.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace roadmodelfusionsi_out

