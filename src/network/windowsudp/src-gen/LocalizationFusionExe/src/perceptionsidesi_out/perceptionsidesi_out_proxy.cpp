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
/**        \file  LocalizationFusionExe/src/perceptionsidesi_out/perceptionsidesi_out_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSideSI_Out'.
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
#include "perceptionsidesi_out/perceptionsidesi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionsidesi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionSideSI_OutProxy::ConstructionResult PerceptionSideSI_OutProxy::Preconstruct(
    PerceptionSideSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
PerceptionSideSI_OutProxy::PerceptionSideSI_OutProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FRCam_Bus_VisnObj{&(Base::GetProxyBackend().GetEventBackendFRCam_Bus_VisnObj()), "PerceptionSideSI_Out", "FRCam_Bus_VisnObj", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FLCam_Bus_VisnObj{&(Base::GetProxyBackend().GetEventBackendFLCam_Bus_VisnObj()), "PerceptionSideSI_Out", "FLCam_Bus_VisnObj", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    RLCam_Bus_VisnObj{&(Base::GetProxyBackend().GetEventBackendRLCam_Bus_VisnObj()), "PerceptionSideSI_Out", "RLCam_Bus_VisnObj", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    RRCam_Bus_VisnObj{&(Base::GetProxyBackend().GetEventBackendRRCam_Bus_VisnObj()), "PerceptionSideSI_Out", "RRCam_Bus_VisnObj", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    PerceptionSide_Bus_CameraStatus{&(Base::GetProxyBackend().GetEventBackendPerceptionSide_Bus_CameraStatus()), "PerceptionSideSI_Out", "PerceptionSide_Bus_CameraStatus", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
PerceptionSideSI_OutProxy::PerceptionSideSI_OutProxy(
  PerceptionSideSI_OutProxy::HandleType const& handle) noexcept
  : PerceptionSideSI_OutProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
PerceptionSideSI_OutProxy::~PerceptionSideSI_OutProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FRCam_Bus_VisnObj.Unsubscribe();
  FRCam_Bus_VisnObj.UnsetReceiveHandler();
  FRCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  FLCam_Bus_VisnObj.Unsubscribe();
  FLCam_Bus_VisnObj.UnsetReceiveHandler();
  FLCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  RLCam_Bus_VisnObj.Unsubscribe();
  RLCam_Bus_VisnObj.UnsetReceiveHandler();
  RLCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  RRCam_Bus_VisnObj.Unsubscribe();
  RRCam_Bus_VisnObj.UnsetReceiveHandler();
  RRCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  PerceptionSide_Bus_CameraStatus.Unsubscribe();
  PerceptionSide_Bus_CameraStatus.UnsetReceiveHandler();
  PerceptionSide_Bus_CameraStatus.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace perceptionsidesi_out

