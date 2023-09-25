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
/**        \file  PerceptionExe/include/amsr/someip_binding_transformation_layer/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_someip_binding_init.h
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_SOMEIP_BINDING_INIT_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_SOMEIP_BINDING_INIT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding/internal/thread_pool_interface.h"
#include "amsr/timer/timer_manager.h"
#include "osabstraction/io/reactor1/reactor1.h"
#include "someip_binding/internal/client_manager.h"
#include "someip_binding/internal/someip_binding.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace tosoca_infomationsi {

/*!
 * \brief   Initialize the SOME/IP binding proxy factories.
 * \details Implemented in separate global function to avoid too complex / big translation units for binding
 *          initialization.
 * \param[in] client_manager ClientManager of the SomeIpBinding.
 * \param[in] thread_pool_interface ThreadPool for Socal.
 * \pre -
 * \context     Init
 * \threadsafe  FALSE
 * \reentrant   FALSE
 * \synchronous TRUE
 */
void AraComSomeIpBindingInitializeServiceInterfaceProxyFactoriesToSOCA_InfomationSI(
    ::amsr::someip_binding::internal::ClientManager<>& client_manager,
    ::amsr::someip_binding::internal::ThreadPoolInterface& thread_pool_interface);

/*!
 * \brief   Initialize the SOME/IP binding proxy event backend objects.
 * \details Implemented in separate global function to avoid too complex / big translation units for binding
 *          initialization.
 * \param[in] client_manager ClientManager of the SomeIpBinding.
 * \param[in] reactor        Reactor of the SomeIpBinding.
 * \param[in] timer_manager  TimerManager of the SomeIpBinding.
 * \param[in] polling_mode_lock The polling mode lock. 
 * \pre -
 * \context     Init
 * \threadsafe  FALSE
 * \reentrant   FALSE
 * \synchronous TRUE
 */
void AraComSomeIpBindingInitializeProxySomeIpEventBackendsToSOCA_InfomationSI(::amsr::someip_binding::internal::ClientManager<>& client_manager,
                                                           ::osabstraction::io::reactor1::Reactor1* reactor,
                                                           ::amsr::timer::TimerManager& timer_manager,
                                                           bool is_processing_mode_polling,
                                                           std::recursive_mutex& polling_mode_lock);

/*!
 * \brief   DeInitialize the SOME/IP binding proxy event backend objects.
 * \details Implemented in separate global function to avoid too complex / big translation units for binding deinitialization.
 * \pre -
 * \context     Shutdown
 * \threadsafe  FALSE
 * \reentrant   FALSE
 * \synchronous TRUE
 */
void AraComSomeIpBindingDeInitializeProxySomeIpEventBackendsToSOCA_InfomationSI();

}  // namespace tosoca_infomationsi

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PROXY_SOMEIP_BINDING_INIT_H_

