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
/**        \file  ObjectFusionModelExe/src/perceptionsi_out/perceptionsi_out_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSI_Out'.
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
#include "perceptionsi_out/perceptionsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionSI_OutProxy::ConstructionResult PerceptionSI_OutProxy::Preconstruct(
    PerceptionSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
PerceptionSI_OutProxy::PerceptionSI_OutProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    Perception_Bus_LaneInfo{&(Base::GetProxyBackend().GetEventBackendPerception_Bus_LaneInfo()), "PerceptionSI_Out", "Perception_Bus_LaneInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    Perception_Bus_FrntCamInfo{&(Base::GetProxyBackend().GetEventBackendPerception_Bus_FrntCamInfo()), "PerceptionSI_Out", "Perception_Bus_FrntCamInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FrntCam_Bus_TrafficInfo{&(Base::GetProxyBackend().GetEventBackendFrntCam_Bus_TrafficInfo()), "PerceptionSI_Out", "FrntCam_Bus_TrafficInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FrntCam_Bus_TrfcLi{&(Base::GetProxyBackend().GetEventBackendFrntCam_Bus_TrfcLi()), "PerceptionSI_Out", "FrntCam_Bus_TrfcLi", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FrntCam_Bus_LineSignGroup{&(Base::GetProxyBackend().GetEventBackendFrntCam_Bus_LineSignGroup()), "PerceptionSI_Out", "FrntCam_Bus_LineSignGroup", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FrntCam_Bus_ExtInfo{&(Base::GetProxyBackend().GetEventBackendFrntCam_Bus_ExtInfo()), "PerceptionSI_Out", "FrntCam_Bus_ExtInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
PerceptionSI_OutProxy::PerceptionSI_OutProxy(
  PerceptionSI_OutProxy::HandleType const& handle) noexcept
  : PerceptionSI_OutProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
PerceptionSI_OutProxy::~PerceptionSI_OutProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  Perception_Bus_LaneInfo.Unsubscribe();
  Perception_Bus_LaneInfo.UnsetReceiveHandler();
  Perception_Bus_LaneInfo.UnsetSubscriptionStateHandler();
  Perception_Bus_FrntCamInfo.Unsubscribe();
  Perception_Bus_FrntCamInfo.UnsetReceiveHandler();
  Perception_Bus_FrntCamInfo.UnsetSubscriptionStateHandler();
  FrntCam_Bus_TrafficInfo.Unsubscribe();
  FrntCam_Bus_TrafficInfo.UnsetReceiveHandler();
  FrntCam_Bus_TrafficInfo.UnsetSubscriptionStateHandler();
  FrntCam_Bus_TrfcLi.Unsubscribe();
  FrntCam_Bus_TrfcLi.UnsetReceiveHandler();
  FrntCam_Bus_TrfcLi.UnsetSubscriptionStateHandler();
  FrntCam_Bus_LineSignGroup.Unsubscribe();
  FrntCam_Bus_LineSignGroup.UnsetReceiveHandler();
  FrntCam_Bus_LineSignGroup.UnsetSubscriptionStateHandler();
  FrntCam_Bus_ExtInfo.Unsubscribe();
  FrntCam_Bus_ExtInfo.UnsetReceiveHandler();
  FrntCam_Bus_ExtInfo.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace perceptionsi_out

