// VECTOR Same Line AutosarC++17_10-A1.1.1: MD_SOMEIPBINDING_AutosarC++17_10-A1.1.1_external_identifiers
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
/**        \file  LocalizationFusionExe/src/amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_binding_init.cpp
 *        \brief  Proxy-side ara::com SOME/IP binding initialization for ServiceInterface 'ToSOCA_LocSensorInfoSI'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/ToSOCA_LocSensorInfoSI'
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_binding_init.h"
#include <mutex>
#include "amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_event_manager.h"
#include "amsr/timer/timer_manager.h"
#include "osabstraction/io/reactor1/reactor1.h"
#include "someip_binding/internal/client_manager.h"
#include "someip_binding_transformation_layer/internal/proxy_event_xf.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace tosoca_locsensorinfosi {

void AraComSomeIpBindingInitializeProxySomeIpEventBackendsToSOCA_LocSensorInfoSI(::amsr::someip_binding::internal::ClientManager<>& client_manager,
                                                           ::osabstraction::io::reactor1::Reactor1* reactor,
                                                           ::amsr::timer::TimerManager& timer_manager,
                                                           bool const is_processing_mode_polling,
                                                           std::recursive_mutex& polling_mode_lock) {
  { // ServiceInstance: 1131
    { // Event: OSM2_Bus_LocSensorInfo 
      /*!
       * \brief Alias for templated ProxyEventBackend used by this event
       */
       using ToSOCA_LocSensorInfoSIProxySomeIpEventBackendOSM2_Bus_LocSensorInfo = ::amsr::someip_binding_transformation_layer::internal::ProxyEventXf<
              ToSOCA_LocSensorInfoSIProxySomeIpEventConfigurationOSM2_Bus_LocSensorInfo>;
            
      std::unique_ptr<ToSOCA_LocSensorInfoSIProxySomeIpEventBackendOSM2_Bus_LocSensorInfo> event_backend{
        std::make_unique<ToSOCA_LocSensorInfoSIProxySomeIpEventBackendOSM2_Bus_LocSensorInfo>(
        1131U, client_manager, *reactor, timer_manager, is_processing_mode_polling, polling_mode_lock)};
      tosoca_locsensorinfosi::ToSOCA_LocSensorInfoSIProxySomeIpEventManagerOSM2_Bus_LocSensorInfo::EmplaceBackend(1131U, std::move(event_backend));
    
    }

  }
  // No required service instances to be initialized.

  static_cast<void>(client_manager);
  static_cast<void>(reactor);
  static_cast<void>(timer_manager);
  static_cast<void>(is_processing_mode_polling);
  static_cast<void>(polling_mode_lock);
}

void AraComSomeIpBindingDeInitializeProxySomeIpEventBackendsToSOCA_LocSensorInfoSI() {
  // Event: OSM2_Bus_LocSensorInfo 
  tosoca_locsensorinfosi::ToSOCA_LocSensorInfoSIProxySomeIpEventManagerOSM2_Bus_LocSensorInfo::ClearBackendList();


}

}  // namespace tosoca_locsensorinfosi

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

