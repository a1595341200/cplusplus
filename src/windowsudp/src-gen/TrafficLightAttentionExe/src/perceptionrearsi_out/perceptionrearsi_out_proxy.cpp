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
/**        \file  TrafficLightAttentionExe/src/perceptionrearsi_out/perceptionrearsi_out_proxy.cpp
 *        \brief  Proxy for service 'PerceptionRearSI_Out'.
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
#include "perceptionrearsi_out/perceptionrearsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionrearsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionRearSI_OutProxy::ConstructionResult PerceptionRearSI_OutProxy::Preconstruct(
    PerceptionRearSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
PerceptionRearSI_OutProxy::PerceptionRearSI_OutProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    PerceptionRear_Bus_LaneInfo{&(Base::GetProxyBackend().GetEventBackendPerceptionRear_Bus_LaneInfo()), "PerceptionRearSI_Out", "PerceptionRear_Bus_LaneInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    PerceptionRear_Bus_CameraStatus{&(Base::GetProxyBackend().GetEventBackendPerceptionRear_Bus_CameraStatus()), "PerceptionRearSI_Out", "PerceptionRear_Bus_CameraStatus", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    PerceptionRear_Bus_VisnObj{&(Base::GetProxyBackend().GetEventBackendPerceptionRear_Bus_VisnObj()), "PerceptionRearSI_Out", "PerceptionRear_Bus_VisnObj", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
PerceptionRearSI_OutProxy::PerceptionRearSI_OutProxy(
  PerceptionRearSI_OutProxy::HandleType const& handle) noexcept
  : PerceptionRearSI_OutProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
PerceptionRearSI_OutProxy::~PerceptionRearSI_OutProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  PerceptionRear_Bus_LaneInfo.Unsubscribe();
  PerceptionRear_Bus_LaneInfo.UnsetReceiveHandler();
  PerceptionRear_Bus_LaneInfo.UnsetSubscriptionStateHandler();
  PerceptionRear_Bus_CameraStatus.Unsubscribe();
  PerceptionRear_Bus_CameraStatus.UnsetReceiveHandler();
  PerceptionRear_Bus_CameraStatus.UnsetSubscriptionStateHandler();
  PerceptionRear_Bus_VisnObj.Unsubscribe();
  PerceptionRear_Bus_VisnObj.UnsetReceiveHandler();
  PerceptionRear_Bus_VisnObj.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace perceptionrearsi_out

