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
/**        \file  RoadModelFusionExe/src/ehrsi_out/ehrsi_out_proxy.cpp
 *        \brief  Proxy for service 'EHRSI_Out'.
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
#include "ehrsi_out/ehrsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace ehrsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
EHRSI_OutProxy::ConstructionResult EHRSI_OutProxy::Preconstruct(
    EHRSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
EHRSI_OutProxy::EHRSI_OutProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_NOAInfo{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_NOAInfo()), "EHRSI_Out", "EHR_Bus_NOAInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_LaneConnectivitys{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_LaneConnectivitys()), "EHRSI_Out", "EHR_Bus_LaneConnectivitys", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_Nodes{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_Nodes()), "EHRSI_Out", "EHR_Bus_Nodes", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_TrafficSigns{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_TrafficSigns()), "EHRSI_Out", "EHR_Bus_TrafficSigns", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_GeoFences{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_GeoFences()), "EHRSI_Out", "EHR_Bus_GeoFences", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_LinkCurvatures{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_LinkCurvatures()), "EHRSI_Out", "EHR_Bus_LinkCurvatures", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_LinkSlopes{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_LinkSlopes()), "EHRSI_Out", "EHR_Bus_LinkSlopes", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_LaneSpeedLimits{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_LaneSpeedLimits()), "EHRSI_Out", "EHR_Bus_LaneSpeedLimits", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_LinkInfos{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_LinkInfos()), "EHRSI_Out", "EHR_Bus_LinkInfos", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_AllMergePoints{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_AllMergePoints()), "EHRSI_Out", "EHR_Bus_AllMergePoints", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_LinearObjects{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_LinearObjects()), "EHRSI_Out", "EHR_Bus_LinearObjects", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_FormOfWays{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_FormOfWays()), "EHRSI_Out", "EHR_Bus_FormOfWays", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_SequenceId{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_SequenceId()), "EHRSI_Out", "EHR_Bus_SequenceId", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    EHR_Bus_LaneWidthes{&(Base::GetProxyBackend().GetEventBackendEHR_Bus_LaneWidthes()), "EHRSI_Out", "EHR_Bus_LaneWidthes", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
EHRSI_OutProxy::EHRSI_OutProxy(
  EHRSI_OutProxy::HandleType const& handle) noexcept
  : EHRSI_OutProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
EHRSI_OutProxy::~EHRSI_OutProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  EHR_Bus_NOAInfo.Unsubscribe();
  EHR_Bus_NOAInfo.UnsetReceiveHandler();
  EHR_Bus_NOAInfo.UnsetSubscriptionStateHandler();
  EHR_Bus_LaneConnectivitys.Unsubscribe();
  EHR_Bus_LaneConnectivitys.UnsetReceiveHandler();
  EHR_Bus_LaneConnectivitys.UnsetSubscriptionStateHandler();
  EHR_Bus_Nodes.Unsubscribe();
  EHR_Bus_Nodes.UnsetReceiveHandler();
  EHR_Bus_Nodes.UnsetSubscriptionStateHandler();
  EHR_Bus_TrafficSigns.Unsubscribe();
  EHR_Bus_TrafficSigns.UnsetReceiveHandler();
  EHR_Bus_TrafficSigns.UnsetSubscriptionStateHandler();
  EHR_Bus_GeoFences.Unsubscribe();
  EHR_Bus_GeoFences.UnsetReceiveHandler();
  EHR_Bus_GeoFences.UnsetSubscriptionStateHandler();
  EHR_Bus_LinkCurvatures.Unsubscribe();
  EHR_Bus_LinkCurvatures.UnsetReceiveHandler();
  EHR_Bus_LinkCurvatures.UnsetSubscriptionStateHandler();
  EHR_Bus_LinkSlopes.Unsubscribe();
  EHR_Bus_LinkSlopes.UnsetReceiveHandler();
  EHR_Bus_LinkSlopes.UnsetSubscriptionStateHandler();
  EHR_Bus_LaneSpeedLimits.Unsubscribe();
  EHR_Bus_LaneSpeedLimits.UnsetReceiveHandler();
  EHR_Bus_LaneSpeedLimits.UnsetSubscriptionStateHandler();
  EHR_Bus_LinkInfos.Unsubscribe();
  EHR_Bus_LinkInfos.UnsetReceiveHandler();
  EHR_Bus_LinkInfos.UnsetSubscriptionStateHandler();
  EHR_Bus_AllMergePoints.Unsubscribe();
  EHR_Bus_AllMergePoints.UnsetReceiveHandler();
  EHR_Bus_AllMergePoints.UnsetSubscriptionStateHandler();
  EHR_Bus_LinearObjects.Unsubscribe();
  EHR_Bus_LinearObjects.UnsetReceiveHandler();
  EHR_Bus_LinearObjects.UnsetSubscriptionStateHandler();
  EHR_Bus_FormOfWays.Unsubscribe();
  EHR_Bus_FormOfWays.UnsetReceiveHandler();
  EHR_Bus_FormOfWays.UnsetSubscriptionStateHandler();
  EHR_Bus_SequenceId.Unsubscribe();
  EHR_Bus_SequenceId.UnsetReceiveHandler();
  EHR_Bus_SequenceId.UnsetSubscriptionStateHandler();
  EHR_Bus_LaneWidthes.Unsubscribe();
  EHR_Bus_LaneWidthes.UnsetReceiveHandler();
  EHR_Bus_LaneWidthes.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace ehrsi_out

