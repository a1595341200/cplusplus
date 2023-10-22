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
/**        \file  UTC0Exe/include/amsr/someip_binding_transformation_layer/internal/utc0si_in/UTC0SI_In_someip_proxy_factory.h
 *        \brief  SOME/IP proxy factory for service 'UTC0SI_In'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

#ifndef UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_UTC0SI_IN_UTC0SI_IN_SOMEIP_PROXY_FACTORY_H_
#define UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_UTC0SI_IN_UTC0SI_IN_SOMEIP_PROXY_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/utc0si_in/UTC0SI_In_proxy_someip_binding.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace utc0si_in {


/*!
 * \brief SOME/IP proxy factory for the service interface 'UTC0SI_In'
 * \remark generated
 */
// VECTOR NL AutosarC++17_10-M3.4.1: MD_SOMEIPBINDING_AutosarC++17_10-M3.4.1_CanBeDeclaredLocallyInPrimaryFile
using UTC0SI_InSomeIpProxyFactory = ::amsr::someip_binding_transformation_layer::internal::AraComSomeIpProxyFactory<::utc0si_in::proxy::UTC0SI_InProxy, UTC0SI_InProxySomeIpBinding>;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace utc0si_in

#endif  // UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_UTC0SI_IN_UTC0SI_IN_SOMEIP_PROXY_FACTORY_H_

