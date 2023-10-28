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
/**        \file  RVDCExe/src/rtk_r/rtk_receive_proxy.cpp
 *        \brief  Proxy for service 'Rtk_Receive'.
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
#include "rtk_r/rtk_receive_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace rtk_r {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
Rtk_ReceiveProxy::ConstructionResult Rtk_ReceiveProxy::Preconstruct(
    Rtk_ReceiveProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
Rtk_ReceiveProxy::Rtk_ReceiveProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    GgaData_receive{&(Base::GetProxyBackend().GetEventBackendGgaData_receive()), "Rtk_Receive", "GgaData_receive", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    VIN{&(Base::GetProxyBackend().GetEventBackendVIN()), "Rtk_Receive", "VIN", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    AgnssData_receive{&(Base::GetProxyBackend().GetEventBackendAgnssData_receive()), "Rtk_Receive", "AgnssData_receive", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
Rtk_ReceiveProxy::Rtk_ReceiveProxy(
  Rtk_ReceiveProxy::HandleType const& handle) noexcept
  : Rtk_ReceiveProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
Rtk_ReceiveProxy::~Rtk_ReceiveProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  GgaData_receive.Unsubscribe();
  GgaData_receive.UnsetReceiveHandler();
  GgaData_receive.UnsetSubscriptionStateHandler();
  VIN.Unsubscribe();
  VIN.UnsetReceiveHandler();
  VIN.UnsetSubscriptionStateHandler();
  AgnssData_receive.Unsubscribe();
  AgnssData_receive.UnsetReceiveHandler();
  AgnssData_receive.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace rtk_r

