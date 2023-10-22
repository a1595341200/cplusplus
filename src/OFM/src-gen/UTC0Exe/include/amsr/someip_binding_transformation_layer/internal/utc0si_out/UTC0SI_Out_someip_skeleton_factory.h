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
/**        \file  UTC0Exe/include/amsr/someip_binding_transformation_layer/internal/utc0si_out/UTC0SI_Out_someip_skeleton_factory.h
 *        \brief  SOME/IP skeleton factory for service 'UTC0SI_Out'
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

#ifndef UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_UTC0SI_OUT_UTC0SI_OUT_SOMEIP_SKELETON_FACTORY_H_
#define UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_UTC0SI_OUT_UTC0SI_OUT_SOMEIP_SKELETON_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/utc0si_out/UTC0SI_Out_skeleton_someip_binding.h"
#include "utc0si_out/utc0si_out_skeleton.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace utc0si_out {

/*!
 * \brief SOME/IP skeleton factory for the service interface 'UTC0SI_Out'
 * \remark generated
 */
// VECTOR NL AutosarC++17_10-M3.4.1: MD_SOMEIPBINDING_AutosarC++17_10-M3.4.1_CanBeDeclaredLocallyInPrimaryFile
using UTC0SI_OutSomeIpSkeletonFactory = ::amsr::someip_binding_transformation_layer::internal::AraComSomeIpSkeletonFactory<::utc0si_out::skeleton::UTC0SI_OutSkeleton, UTC0SI_OutSkeletonSomeIpBinding>;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace utc0si_out

#endif  // UTC0EXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_UTC0SI_OUT_UTC0SI_OUT_SOMEIP_SKELETON_FACTORY_H_

