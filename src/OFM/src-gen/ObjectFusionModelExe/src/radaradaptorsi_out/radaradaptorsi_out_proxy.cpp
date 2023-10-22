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
/**        \file  ObjectFusionModelExe/src/radaradaptorsi_out/radaradaptorsi_out_proxy.cpp
 *        \brief  Proxy for service 'RadarAdaptorSI_Out'.
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
#include "radaradaptorsi_out/radaradaptorsi_out_proxy.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980242
 */
namespace radaradaptorsi_out {
namespace proxy {

 /*!
  * \trace SPEC-8053550
  */
// ============ Proxy preconstructor (returns a token or an error) ============
RadarAdaptorSI_OutProxy::ConstructionResult RadarAdaptorSI_OutProxy::Preconstruct(
    RadarAdaptorSI_OutProxy::HandleType const& handle) noexcept {
    return Base::Preconstruct(handle.GetInstanceId());
}

/*!
 * \trace SPEC-8053550
 */
// ====================== Proxy constructor (token based) =====================
RadarAdaptorSI_OutProxy::RadarAdaptorSI_OutProxy(ConstructionToken&& token) noexcept
  : Base(std::move(token)),
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "RadarAdaptorSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts{&(proxy_update_manager_.GetEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts", GetInstanceId()},
    FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01", GetInstanceId()},
    FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02", GetInstanceId()},
    FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03", GetInstanceId()},
    FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04", GetInstanceId()},
    FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05", GetInstanceId()}
    {}

// ====================== Proxy constructor ======================
RadarAdaptorSI_OutProxy::RadarAdaptorSI_OutProxy(
  RadarAdaptorSI_OutProxy::HandleType const& handle) noexcept
  : Base{handle.GetInstanceId()},
    logger_(amsr::socal::internal::logging::kAraComLoggerContextId, amsr::socal::internal::logging::kAraComLoggerContextDescription,
            "RadarAdaptorSI_OutProxy"),
    proxy_update_manager_{Base::GetInstanceId(), Base::GetServiceDiscovery()},
    FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts{&(proxy_update_manager_.GetEventBackendFourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts", GetInstanceId()},
    FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01", GetInstanceId()},
    FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02", GetInstanceId()},
    FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03", GetInstanceId()},
    FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04", GetInstanceId()},
    FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05{&(proxy_update_manager_.GetEventBackendFourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05()), Base::GetRuntime(), "RadarAdaptorSI_Out", "FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05", GetInstanceId()}
    {}

// ============================= Proxy destructor =============================
RadarAdaptorSI_OutProxy::~RadarAdaptorSI_OutProxy() noexcept {
  // Start cleanup of proxy by unsubscribing all event and field notifications
  // Events
  FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts.UnsetReceiveHandler();
  FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts.UnsetSubscriptionStateHandler();
  FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts.Unsubscribe();
  FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01.UnsetReceiveHandler();
  FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01.UnsetSubscriptionStateHandler();
  FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01.Unsubscribe();
  FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02.UnsetReceiveHandler();
  FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02.UnsetSubscriptionStateHandler();
  FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02.Unsubscribe();
  FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.UnsetReceiveHandler();
  FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.UnsetSubscriptionStateHandler();
  FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.Unsubscribe();
  FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04.UnsetReceiveHandler();
  FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04.UnsetSubscriptionStateHandler();
  FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04.Unsubscribe();
  FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05.UnsetReceiveHandler();
  FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05.UnsetSubscriptionStateHandler();
  FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05.Unsubscribe();

  // Fields
  
}

::amsr::socal::ServiceState RadarAdaptorSI_OutProxy::ReadServiceState() noexcept {
  return proxy_update_manager_.ReadServiceState();
}

}  // namespace proxy
}  // namespace radaradaptorsi_out

