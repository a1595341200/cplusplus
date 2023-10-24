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
/**        \file  RVDCExe/src/mcu_data_info/mcu_data_info_proxy.cpp
 *        \brief  Proxy for service 'MCU_Data_Info'.
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
#include "mcu_data_info/mcu_data_info_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace mcu_data_info {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
MCU_Data_InfoProxy::ConstructionResult MCU_Data_InfoProxy::Preconstruct(
    MCU_Data_InfoProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
MCU_Data_InfoProxy::MCU_Data_InfoProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    Ids{&(Base::GetProxyBackend().GetEventBackendIds()), "MCU_Data_Info", "Ids", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    Mcu_Reset_Info1{&(Base::GetProxyBackend().GetEventBackendMcu_Reset_Info1()), "MCU_Data_Info", "Mcu_Reset_Info1", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    Mcu_Reset_Info2{&(Base::GetProxyBackend().GetEventBackendMcu_Reset_Info2()), "MCU_Data_Info", "Mcu_Reset_Info2", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    Mcu_Reset_Info3{&(Base::GetProxyBackend().GetEventBackendMcu_Reset_Info3()), "MCU_Data_Info", "Mcu_Reset_Info3", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    Mcu_Reset_Info4{&(Base::GetProxyBackend().GetEventBackendMcu_Reset_Info4()), "MCU_Data_Info", "Mcu_Reset_Info4", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
MCU_Data_InfoProxy::MCU_Data_InfoProxy(
  MCU_Data_InfoProxy::HandleType const& handle) noexcept
  : MCU_Data_InfoProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
MCU_Data_InfoProxy::~MCU_Data_InfoProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  Ids.Unsubscribe();
  Ids.UnsetReceiveHandler();
  Ids.UnsetSubscriptionStateHandler();
  Mcu_Reset_Info1.Unsubscribe();
  Mcu_Reset_Info1.UnsetReceiveHandler();
  Mcu_Reset_Info1.UnsetSubscriptionStateHandler();
  Mcu_Reset_Info2.Unsubscribe();
  Mcu_Reset_Info2.UnsetReceiveHandler();
  Mcu_Reset_Info2.UnsetSubscriptionStateHandler();
  Mcu_Reset_Info3.Unsubscribe();
  Mcu_Reset_Info3.UnsetReceiveHandler();
  Mcu_Reset_Info3.UnsetSubscriptionStateHandler();
  Mcu_Reset_Info4.Unsubscribe();
  Mcu_Reset_Info4.UnsetReceiveHandler();
  Mcu_Reset_Info4.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace mcu_data_info

