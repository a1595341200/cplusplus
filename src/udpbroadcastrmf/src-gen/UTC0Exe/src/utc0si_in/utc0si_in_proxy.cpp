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
/**        \file  UTC0Exe/src/utc0si_in/utc0si_in_proxy.cpp
 *        \brief  Proxy for service 'UTC0SI_In'.
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
#include "utc0si_in/utc0si_in_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace utc0si_in {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
UTC0SI_InProxy::ConstructionResult UTC0SI_InProxy::Preconstruct(
    UTC0SI_InProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
UTC0SI_InProxy::UTC0SI_InProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OSM2_Bus_VehTiAndData{&(Base::GetProxyBackend().GetEventBackendOSM2_Bus_VehTiAndData()), "UTC0SI_In", "OSM2_Bus_VehTiAndData", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
UTC0SI_InProxy::UTC0SI_InProxy(
  UTC0SI_InProxy::HandleType const& handle) noexcept
  : UTC0SI_InProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
UTC0SI_InProxy::~UTC0SI_InProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OSM2_Bus_VehTiAndData.Unsubscribe();
  OSM2_Bus_VehTiAndData.UnsetReceiveHandler();
  OSM2_Bus_VehTiAndData.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace utc0si_in

