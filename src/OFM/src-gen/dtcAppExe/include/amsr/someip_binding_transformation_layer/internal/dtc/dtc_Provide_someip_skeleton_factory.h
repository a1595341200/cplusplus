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
/**        \file  dtcAppExe/include/amsr/someip_binding_transformation_layer/internal/dtc/dtc_Provide_someip_skeleton_factory.h
 *        \brief  SOME/IP skeleton factory for service 'dtc_Provide'
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

#ifndef DTCAPPEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_DTC_DTC_PROVIDE_SOMEIP_SKELETON_FACTORY_H_
#define DTCAPPEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_DTC_DTC_PROVIDE_SOMEIP_SKELETON_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/dtc/dtc_Provide_skeleton_someip_binding.h"
#include "dtc/dtc_provide_skeleton.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace dtc {

/*!
 * \brief SOME/IP skeleton factory for the service interface 'dtc_Provide'
 * \remark generated
 */
// VECTOR NL AutosarC++17_10-M3.4.1: MD_SOMEIPBINDING_AutosarC++17_10-M3.4.1_CanBeDeclaredLocallyInPrimaryFile
using dtc_ProvideSomeIpSkeletonFactory = ::amsr::someip_binding_transformation_layer::internal::AraComSomeIpSkeletonFactory<::dtc::skeleton::dtc_ProvideSkeleton, dtc_ProvideSkeletonSomeIpBinding>;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace dtc

#endif  // DTCAPPEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_DTC_DTC_PROVIDE_SOMEIP_SKELETON_FACTORY_H_

