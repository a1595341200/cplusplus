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
/**        \file  TargetPredictExe/src/objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.cpp
 *        \brief  Proxy for service 'ObjectFusionModelSI_Out'.
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
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace objectfusionmodelsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
ObjectFusionModelSI_OutProxy::ConstructionResult ObjectFusionModelSI_OutProxy::Preconstruct(
    ObjectFusionModelSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
ObjectFusionModelSI_OutProxy::ObjectFusionModelSI_OutProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OFM_Bus_FusedTargets01{&(Base::GetProxyBackend().GetEventBackendOFM_Bus_FusedTargets01()), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets01", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OFM_Bus_FusedTargets02{&(Base::GetProxyBackend().GetEventBackendOFM_Bus_FusedTargets02()), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets02", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OFM_Bus_FusedTargets03{&(Base::GetProxyBackend().GetEventBackendOFM_Bus_FusedTargets03()), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets03", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OFM_Bus_FusedTargets04{&(Base::GetProxyBackend().GetEventBackendOFM_Bus_FusedTargets04()), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets04", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OFM_St_SOCFusedSts{&(Base::GetProxyBackend().GetEventBackendOFM_St_SOCFusedSts()), "ObjectFusionModelSI_Out", "OFM_St_SOCFusedSts", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OFM_Bus_FourDRadarStatus{&(Base::GetProxyBackend().GetEventBackendOFM_Bus_FourDRadarStatus()), "ObjectFusionModelSI_Out", "OFM_Bus_FourDRadarStatus", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OFM_Bus_LaneInfo{&(Base::GetProxyBackend().GetEventBackendOFM_Bus_LaneInfo()), "ObjectFusionModelSI_Out", "OFM_Bus_LaneInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
ObjectFusionModelSI_OutProxy::ObjectFusionModelSI_OutProxy(
  ObjectFusionModelSI_OutProxy::HandleType const& handle) noexcept
  : ObjectFusionModelSI_OutProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
ObjectFusionModelSI_OutProxy::~ObjectFusionModelSI_OutProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OFM_Bus_FusedTargets01.Unsubscribe();
  OFM_Bus_FusedTargets01.UnsetReceiveHandler();
  OFM_Bus_FusedTargets01.UnsetSubscriptionStateHandler();
  OFM_Bus_FusedTargets02.Unsubscribe();
  OFM_Bus_FusedTargets02.UnsetReceiveHandler();
  OFM_Bus_FusedTargets02.UnsetSubscriptionStateHandler();
  OFM_Bus_FusedTargets03.Unsubscribe();
  OFM_Bus_FusedTargets03.UnsetReceiveHandler();
  OFM_Bus_FusedTargets03.UnsetSubscriptionStateHandler();
  OFM_Bus_FusedTargets04.Unsubscribe();
  OFM_Bus_FusedTargets04.UnsetReceiveHandler();
  OFM_Bus_FusedTargets04.UnsetSubscriptionStateHandler();
  OFM_St_SOCFusedSts.Unsubscribe();
  OFM_St_SOCFusedSts.UnsetReceiveHandler();
  OFM_St_SOCFusedSts.UnsetSubscriptionStateHandler();
  OFM_Bus_FourDRadarStatus.Unsubscribe();
  OFM_Bus_FourDRadarStatus.UnsetReceiveHandler();
  OFM_Bus_FourDRadarStatus.UnsetSubscriptionStateHandler();
  OFM_Bus_LaneInfo.Unsubscribe();
  OFM_Bus_LaneInfo.UnsetReceiveHandler();
  OFM_Bus_LaneInfo.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace objectfusionmodelsi_out

