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
/**        \file  EndOfLineExe/src/amsr/someip_binding_transformation_layer/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_someip_binding_init.cpp
 *        \brief  Proxy-side ara::com SOME/IP binding initialization for ServiceInterface 'ToSOCA_InfomationSI'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/ToSOCA_InfomationSI'
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
#include "amsr/someip_binding_transformation_layer/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_someip_binding_init.h"
#include <mutex>
#include "amsr/someip_binding_transformation_layer/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_someip_event_manager.h"
#include "amsr/timer/timer_manager.h"
#include "osabstraction/io/reactor1/reactor1.h"
#include "someip_binding/internal/client_manager.h"
#include "someip_binding_transformation_layer/internal/proxy_event_xf.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace tosoca_infomationsi {

void AraComSomeIpBindingInitializeProxySomeIpEventBackendsToSOCA_InfomationSI(::amsr::someip_binding::internal::ClientManager<>& client_manager,
                                                           ::osabstraction::io::reactor1::Reactor1* reactor,
                                                           ::amsr::timer::TimerManager& timer_manager,
                                                           bool const is_processing_mode_polling,
                                                           std::recursive_mutex& polling_mode_lock) {
  { // ServiceInstance: 1132
    { // Event: OSM2_Bus_ToSOCA_FunctionInfo 
      /*!
       * \brief Alias for templated ProxyEventBackend used by this event
       */
       using ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_FunctionInfo = ::amsr::someip_binding_transformation_layer::internal::ProxyEventXf<
              ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_FunctionInfo>;
            
      std::unique_ptr<ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_FunctionInfo> event_backend{
        std::make_unique<ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_FunctionInfo>(
        1132U, client_manager, *reactor, timer_manager, is_processing_mode_polling, polling_mode_lock)};
      tosoca_infomationsi::ToSOCA_InfomationSIProxySomeIpEventManagerOSM2_Bus_ToSOCA_FunctionInfo::EmplaceBackend(1132U, std::move(event_backend));
    
    }
    { // Event: OSM2_Bus_ToSOCA_COMInfo 
      /*!
       * \brief Alias for templated ProxyEventBackend used by this event
       */
       using ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_COMInfo = ::amsr::someip_binding_transformation_layer::internal::ProxyEventXf<
              ToSOCA_InfomationSIProxySomeIpEventConfigurationOSM2_Bus_ToSOCA_COMInfo>;
            
      std::unique_ptr<ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_COMInfo> event_backend{
        std::make_unique<ToSOCA_InfomationSIProxySomeIpEventBackendOSM2_Bus_ToSOCA_COMInfo>(
        1132U, client_manager, *reactor, timer_manager, is_processing_mode_polling, polling_mode_lock)};
      tosoca_infomationsi::ToSOCA_InfomationSIProxySomeIpEventManagerOSM2_Bus_ToSOCA_COMInfo::EmplaceBackend(1132U, std::move(event_backend));
    
    }

  }
  // No required service instances to be initialized.

  static_cast<void>(client_manager);
  static_cast<void>(reactor);
  static_cast<void>(timer_manager);
  static_cast<void>(is_processing_mode_polling);
  static_cast<void>(polling_mode_lock);
}

void AraComSomeIpBindingDeInitializeProxySomeIpEventBackendsToSOCA_InfomationSI() {
  // Event: OSM2_Bus_ToSOCA_FunctionInfo 
  tosoca_infomationsi::ToSOCA_InfomationSIProxySomeIpEventManagerOSM2_Bus_ToSOCA_FunctionInfo::ClearBackendList();

  // Event: OSM2_Bus_ToSOCA_COMInfo 
  tosoca_infomationsi::ToSOCA_InfomationSIProxySomeIpEventManagerOSM2_Bus_ToSOCA_COMInfo::ClearBackendList();


}

}  // namespace tosoca_infomationsi

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

