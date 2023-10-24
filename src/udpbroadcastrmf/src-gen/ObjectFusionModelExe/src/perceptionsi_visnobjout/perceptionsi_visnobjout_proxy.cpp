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
/**        \file  ObjectFusionModelExe/src/perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.cpp
 *        \brief  Proxy for service 'PerceptionSI_VisnObjOut'.
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
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace perceptionsi_visnobjout {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
PerceptionSI_VisnObjOutProxy::ConstructionResult PerceptionSI_VisnObjOutProxy::Preconstruct(
    PerceptionSI_VisnObjOutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
PerceptionSI_VisnObjOutProxy::PerceptionSI_VisnObjOutProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FrntCam_Bus_VisnObj{&(Base::GetProxyBackend().GetEventBackendFrntCam_Bus_VisnObj()), "PerceptionSI_VisnObjOut", "FrntCam_Bus_VisnObj", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    FrntCam_Bus_UnfilteredObj{&(Base::GetProxyBackend().GetEventBackendFrntCam_Bus_UnfilteredObj()), "PerceptionSI_VisnObjOut", "FrntCam_Bus_UnfilteredObj", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
PerceptionSI_VisnObjOutProxy::PerceptionSI_VisnObjOutProxy(
  PerceptionSI_VisnObjOutProxy::HandleType const& handle) noexcept
  : PerceptionSI_VisnObjOutProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
PerceptionSI_VisnObjOutProxy::~PerceptionSI_VisnObjOutProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FrntCam_Bus_VisnObj.Unsubscribe();
  FrntCam_Bus_VisnObj.UnsetReceiveHandler();
  FrntCam_Bus_VisnObj.UnsetSubscriptionStateHandler();
  FrntCam_Bus_UnfilteredObj.Unsubscribe();
  FrntCam_Bus_UnfilteredObj.UnsetReceiveHandler();
  FrntCam_Bus_UnfilteredObj.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace perceptionsi_visnobjout

