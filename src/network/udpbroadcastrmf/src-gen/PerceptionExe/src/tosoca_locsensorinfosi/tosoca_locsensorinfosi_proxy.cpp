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
/**        \file  PerceptionExe/src/tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.cpp
 *        \brief  Proxy for service 'ToSOCA_LocSensorInfoSI'.
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
#include "tosoca_locsensorinfosi/tosoca_locsensorinfosi_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace tosoca_locsensorinfosi {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
ToSOCA_LocSensorInfoSIProxy::ConstructionResult ToSOCA_LocSensorInfoSIProxy::Preconstruct(
    ToSOCA_LocSensorInfoSIProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetRequiredInstanceId(), handle.GetProvidedInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
  // VCA Disable [SLC-10, SLC-22] : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF
ToSOCA_LocSensorInfoSIProxy::ToSOCA_LocSensorInfoSIProxy(ConstructionToken&& token) noexcept
  : Base{std::move(token)},
    // VECTOR NC VectorC++-V5.0.1: MD_SOCAL_VectorC++-V5.0.1_unsequenced_call_false_positive
    // VCA_SOCAL_CALLING_STL_APIS
    OSM2_Bus_LocSensorInfo{&(Base::GetProxyBackend().GetEventBackendOSM2_Bus_LocSensorInfo()), "ToSOCA_LocSensorInfoSI", "OSM2_Bus_LocSensorInfo", Base::GetProvidedInstanceId().GetAraComInstanceIdentifier()}    {}
  // VCA Enable : VCA_SOCAL_GENERATED_PROXY_GET_BACKEND_REF

// ====================== Proxy constructor ======================
ToSOCA_LocSensorInfoSIProxy::ToSOCA_LocSensorInfoSIProxy(
  ToSOCA_LocSensorInfoSIProxy::HandleType const& handle) noexcept
  : ToSOCA_LocSensorInfoSIProxy{Preconstruct(handle).Value()} {}

// ============================= Proxy destructor =============================
ToSOCA_LocSensorInfoSIProxy::~ToSOCA_LocSensorInfoSIProxy() noexcept {  // VCA_SOCAL_DESTRUCTOR_STATIC_MEMORY
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OSM2_Bus_LocSensorInfo.Unsubscribe();
  OSM2_Bus_LocSensorInfo.UnsetReceiveHandler();
  OSM2_Bus_LocSensorInfo.UnsetSubscriptionStateHandler();

  // Fields
  
}

}  // namespace proxy
}  // namespace tosoca_locsensorinfosi

