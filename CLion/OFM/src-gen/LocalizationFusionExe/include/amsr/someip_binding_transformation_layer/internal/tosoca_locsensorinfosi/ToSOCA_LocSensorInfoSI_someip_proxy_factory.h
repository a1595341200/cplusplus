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
/**        \file  LocalizationFusionExe/include/amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_someip_proxy_factory.h
 *        \brief  SOME/IP proxy factory for service 'ToSOCA_LocSensorInfoSI'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_SOMEIP_PROXY_FACTORY_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_SOMEIP_PROXY_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_binding.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace tosoca_locsensorinfosi {


/*!
 * \brief SOME/IP proxy factory for the service interface 'ToSOCA_LocSensorInfoSI'
 * \remark generated
 */
// VECTOR NL AutosarC++17_10-M3.4.1: MD_SOMEIPBINDING_AutosarC++17_10-M3.4.1_CanBeDeclaredLocallyInPrimaryFile
using ToSOCA_LocSensorInfoSISomeIpProxyFactory = ::amsr::someip_binding_transformation_layer::internal::AraComSomeIpProxyFactory<::tosoca_locsensorinfosi::proxy::ToSOCA_LocSensorInfoSIProxy, ToSOCA_LocSensorInfoSIProxySomeIpBinding>;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace tosoca_locsensorinfosi

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_SOMEIP_PROXY_FACTORY_H_

