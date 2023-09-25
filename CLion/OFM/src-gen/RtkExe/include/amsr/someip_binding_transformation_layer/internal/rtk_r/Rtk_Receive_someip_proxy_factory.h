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
/**        \file  RtkExe/include/amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_someip_proxy_factory.h
 *        \brief  SOME/IP proxy factory for service 'Rtk_Receive'
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

#ifndef RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_RTK_R_RTK_RECEIVE_SOMEIP_PROXY_FACTORY_H_
#define RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_RTK_R_RTK_RECEIVE_SOMEIP_PROXY_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/rtk_r/Rtk_Receive_proxy_someip_binding.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace rtk_r {


/*!
 * \brief SOME/IP proxy factory for the service interface 'Rtk_Receive'
 * \remark generated
 */
// VECTOR NL AutosarC++17_10-M3.4.1: MD_SOMEIPBINDING_AutosarC++17_10-M3.4.1_CanBeDeclaredLocallyInPrimaryFile
using Rtk_ReceiveSomeIpProxyFactory = ::amsr::someip_binding_transformation_layer::internal::AraComSomeIpProxyFactory<::rtk_r::proxy::Rtk_ReceiveProxy, Rtk_ReceiveProxySomeIpBinding>;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace rtk_r

#endif  // RTKEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_RTK_R_RTK_RECEIVE_SOMEIP_PROXY_FACTORY_H_

