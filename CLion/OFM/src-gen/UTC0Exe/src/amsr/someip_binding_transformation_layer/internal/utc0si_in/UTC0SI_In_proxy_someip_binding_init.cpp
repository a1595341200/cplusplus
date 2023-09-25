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
/**        \file  UTC0Exe/src/amsr/someip_binding_transformation_layer/internal/utc0si_in/UTC0SI_In_proxy_someip_binding_init.cpp
 *        \brief  Proxy-side ara::com SOME/IP binding initialization for ServiceInterface 'UTC0SI_In'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/UTC0SI_In'
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
#include "amsr/someip_binding_transformation_layer/internal/utc0si_in/UTC0SI_In_proxy_someip_binding_init.h"
#include <mutex>
#include "amsr/someip_binding_transformation_layer/internal/utc0si_in/UTC0SI_In_proxy_someip_event_manager.h"
#include "amsr/timer/timer_manager.h"
#include "osabstraction/io/reactor1/reactor1.h"
#include "someip_binding/internal/client_manager.h"
#include "someip_binding_transformation_layer/internal/proxy_event_xf.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace utc0si_in {

void AraComSomeIpBindingInitializeProxySomeIpEventBackendsUTC0SI_In(::amsr::someip_binding::internal::ClientManager<>& client_manager,
                                                           ::osabstraction::io::reactor1::Reactor1* reactor,
                                                           ::amsr::timer::TimerManager& timer_manager,
                                                           bool const is_processing_mode_polling,
                                                           std::recursive_mutex& polling_mode_lock) {
  { // ServiceInstance: 1101
    { // Event: OSM2_Bus_VehTiAndData 
      /*!
       * \brief Alias for templated ProxyEventBackend used by this event
       */
       using UTC0SI_InProxySomeIpEventBackendOSM2_Bus_VehTiAndData = ::amsr::someip_binding_transformation_layer::internal::ProxyEventXf<
              UTC0SI_InProxySomeIpEventConfigurationOSM2_Bus_VehTiAndData>;
            
      std::unique_ptr<UTC0SI_InProxySomeIpEventBackendOSM2_Bus_VehTiAndData> event_backend{
        std::make_unique<UTC0SI_InProxySomeIpEventBackendOSM2_Bus_VehTiAndData>(
        1101U, client_manager, *reactor, timer_manager, is_processing_mode_polling, polling_mode_lock)};
      utc0si_in::UTC0SI_InProxySomeIpEventManagerOSM2_Bus_VehTiAndData::EmplaceBackend(1101U, std::move(event_backend));
    
    }

  }
  // No required service instances to be initialized.

  static_cast<void>(client_manager);
  static_cast<void>(reactor);
  static_cast<void>(timer_manager);
  static_cast<void>(is_processing_mode_polling);
  static_cast<void>(polling_mode_lock);
}

void AraComSomeIpBindingDeInitializeProxySomeIpEventBackendsUTC0SI_In() {
  // Event: OSM2_Bus_VehTiAndData 
  utc0si_in::UTC0SI_InProxySomeIpEventManagerOSM2_Bus_VehTiAndData::ClearBackendList();


}

}  // namespace utc0si_in

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

