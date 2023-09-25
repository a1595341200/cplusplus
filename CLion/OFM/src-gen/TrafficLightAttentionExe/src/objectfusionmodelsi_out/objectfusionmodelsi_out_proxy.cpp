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
/**        \file  TrafficLightAttentionExe/src/objectfusionmodelsi_out/objectfusionmodelsi_out_proxy.cpp
 *        \brief  Proxy for service 'ObjectFusionModelSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
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
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
ObjectFusionModelSI_OutProxy::ObjectFusionModelSI_OutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "ObjectFusionModelSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OFM_Bus_FusedTargets_11{&(proxy_update_manager_.GetEventBackendOFM_Bus_FusedTargets_11()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets_11", GetInstanceId()},
    OFM_St_SOCFusedSts{&(proxy_update_manager_.GetEventBackendOFM_St_SOCFusedSts()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_St_SOCFusedSts", GetInstanceId()},
    OFM_Bus_FourDRadarECUSts{&(proxy_update_manager_.GetEventBackendOFM_Bus_FourDRadarECUSts()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FourDRadarECUSts", GetInstanceId()},
    OFM_Bus_FrontFourDRadarSts{&(proxy_update_manager_.GetEventBackendOFM_Bus_FrontFourDRadarSts()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FrontFourDRadarSts", GetInstanceId()},
    OFM_Bus_FusedTargets_22{&(proxy_update_manager_.GetEventBackendOFM_Bus_FusedTargets_22()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets_22", GetInstanceId()},
    OFM_Bus_FusedTargets_32{&(proxy_update_manager_.GetEventBackendOFM_Bus_FusedTargets_32()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets_32", GetInstanceId()},
    OFM_St_FrntRdrObjE2Efail{&(proxy_update_manager_.GetEventBackendOFM_St_FrntRdrObjE2Efail()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_St_FrntRdrObjE2Efail", GetInstanceId()},
    OFM_St_FrntRdrObjTO{&(proxy_update_manager_.GetEventBackendOFM_St_FrntRdrObjTO()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_St_FrntRdrObjTO", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
ObjectFusionModelSI_OutProxy::ObjectFusionModelSI_OutProxy(
  ObjectFusionModelSI_OutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "ObjectFusionModelSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    OFM_Bus_FusedTargets_11{&(proxy_update_manager_.GetEventBackendOFM_Bus_FusedTargets_11()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets_11", GetInstanceId()},
    OFM_St_SOCFusedSts{&(proxy_update_manager_.GetEventBackendOFM_St_SOCFusedSts()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_St_SOCFusedSts", GetInstanceId()},
    OFM_Bus_FourDRadarECUSts{&(proxy_update_manager_.GetEventBackendOFM_Bus_FourDRadarECUSts()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FourDRadarECUSts", GetInstanceId()},
    OFM_Bus_FrontFourDRadarSts{&(proxy_update_manager_.GetEventBackendOFM_Bus_FrontFourDRadarSts()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FrontFourDRadarSts", GetInstanceId()},
    OFM_Bus_FusedTargets_22{&(proxy_update_manager_.GetEventBackendOFM_Bus_FusedTargets_22()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets_22", GetInstanceId()},
    OFM_Bus_FusedTargets_32{&(proxy_update_manager_.GetEventBackendOFM_Bus_FusedTargets_32()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_Bus_FusedTargets_32", GetInstanceId()},
    OFM_St_FrntRdrObjE2Efail{&(proxy_update_manager_.GetEventBackendOFM_St_FrntRdrObjE2Efail()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_St_FrntRdrObjE2Efail", GetInstanceId()},
    OFM_St_FrntRdrObjTO{&(proxy_update_manager_.GetEventBackendOFM_St_FrntRdrObjTO()), Base::GetRuntime(), "ObjectFusionModelSI_Out", "OFM_St_FrntRdrObjTO", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
ObjectFusionModelSI_OutProxy::~ObjectFusionModelSI_OutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  OFM_Bus_FusedTargets_11.UnsetReceiveHandler();
  OFM_Bus_FusedTargets_11.UnsetSubscriptionStateHandler();
  OFM_Bus_FusedTargets_11.Unsubscribe();
  OFM_St_SOCFusedSts.UnsetReceiveHandler();
  OFM_St_SOCFusedSts.UnsetSubscriptionStateHandler();
  OFM_St_SOCFusedSts.Unsubscribe();
  OFM_Bus_FourDRadarECUSts.UnsetReceiveHandler();
  OFM_Bus_FourDRadarECUSts.UnsetSubscriptionStateHandler();
  OFM_Bus_FourDRadarECUSts.Unsubscribe();
  OFM_Bus_FrontFourDRadarSts.UnsetReceiveHandler();
  OFM_Bus_FrontFourDRadarSts.UnsetSubscriptionStateHandler();
  OFM_Bus_FrontFourDRadarSts.Unsubscribe();
  OFM_Bus_FusedTargets_22.UnsetReceiveHandler();
  OFM_Bus_FusedTargets_22.UnsetSubscriptionStateHandler();
  OFM_Bus_FusedTargets_22.Unsubscribe();
  OFM_Bus_FusedTargets_32.UnsetReceiveHandler();
  OFM_Bus_FusedTargets_32.UnsetSubscriptionStateHandler();
  OFM_Bus_FusedTargets_32.Unsubscribe();
  OFM_St_FrntRdrObjE2Efail.UnsetReceiveHandler();
  OFM_St_FrntRdrObjE2Efail.UnsetSubscriptionStateHandler();
  OFM_St_FrntRdrObjE2Efail.Unsubscribe();
  OFM_St_FrntRdrObjTO.UnsetReceiveHandler();
  OFM_St_FrntRdrObjTO.UnsetSubscriptionStateHandler();
  OFM_St_FrntRdrObjTO.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState ObjectFusionModelSI_OutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace objectfusionmodelsi_out

