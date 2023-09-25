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
/**        \file  RtkExe/src/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_binding_init.cpp
 *        \brief  Proxy-side ara::com SOME/IP binding initialization for ServiceInterface 'Rtk_Receive'
 *
 *      \details  Full ServiceInterface path: '/JICA/Service/Interface/Rtk_Receive'
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
#include "amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_binding_init.h"
#include <mutex>
#include "amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_event_manager.h"
#include "amsr/timer/timer_manager.h"
#include "osabstraction/io/reactor1/reactor1.h"
#include "someip_binding/internal/client_manager.h"
#include "someip_binding_transformation_layer/internal/proxy_event_xf.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace rtk_r {

void AraComSomeIpBindingInitializeProxySomeIpEventBackendsRtk_Receive(::amsr::someip_binding::internal::ClientManager<>& client_manager,
                                                           ::osabstraction::io::reactor1::Reactor1* reactor,
                                                           ::amsr::timer::TimerManager& timer_manager,
                                                           bool const is_processing_mode_polling,
                                                           std::recursive_mutex& polling_mode_lock) {
  { // ServiceInstance: 1038
    { // Event: GgaData_receive 
      /*!
       * \brief Alias for templated ProxyEventBackend used by this event
       */
       using Rtk_ReceiveProxySomeIpEventBackendGgaData_receive = ::amsr::someip_binding_transformation_layer::internal::ProxyEventXf<
              Rtk_ReceiveProxySomeIpEventConfigurationGgaData_receive>;
            
      std::unique_ptr<Rtk_ReceiveProxySomeIpEventBackendGgaData_receive> event_backend{
        std::make_unique<Rtk_ReceiveProxySomeIpEventBackendGgaData_receive>(
        1038U, client_manager, *reactor, timer_manager, is_processing_mode_polling, polling_mode_lock)};
      rtk_r::Rtk_ReceiveProxySomeIpEventManagerGgaData_receive::EmplaceBackend(1038U, std::move(event_backend));
    
    }

  }
  // No required service instances to be initialized.

  static_cast<void>(client_manager);
  static_cast<void>(reactor);
  static_cast<void>(timer_manager);
  static_cast<void>(is_processing_mode_polling);
  static_cast<void>(polling_mode_lock);
}

void AraComSomeIpBindingDeInitializeProxySomeIpEventBackendsRtk_Receive() {
  // Event: GgaData_receive 
  rtk_r::Rtk_ReceiveProxySomeIpEventManagerGgaData_receive::ClearBackendList();


}

}  // namespace rtk_r

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

