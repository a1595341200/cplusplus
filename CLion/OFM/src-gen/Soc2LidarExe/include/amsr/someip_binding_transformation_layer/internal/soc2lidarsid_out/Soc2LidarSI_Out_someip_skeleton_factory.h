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
/**        \file  Soc2LidarExe/include/amsr/someip_binding_transformation_layer/internal/soc2lidarsid_out/Soc2LidarSI_Out_someip_skeleton_factory.h
 *        \brief  SOME/IP skeleton factory for service 'Soc2LidarSI_Out'
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

#ifndef SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_SOC2LIDARSID_OUT_SOC2LIDARSI_OUT_SOMEIP_SKELETON_FACTORY_H_
#define SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_SOC2LIDARSID_OUT_SOC2LIDARSI_OUT_SOMEIP_SKELETON_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/soc2lidarsid_out/Soc2LidarSI_Out_skeleton_someip_binding.h"
#include "soc2lidarsid_out/soc2lidarsi_out_skeleton.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace soc2lidarsid_out {

/*!
 * \brief SOME/IP skeleton factory for the service interface 'Soc2LidarSI_Out'
 * \remark generated
 */
// VECTOR NL AutosarC++17_10-M3.4.1: MD_SOMEIPBINDING_AutosarC++17_10-M3.4.1_CanBeDeclaredLocallyInPrimaryFile
using Soc2LidarSI_OutSomeIpSkeletonFactory = ::amsr::someip_binding_transformation_layer::internal::AraComSomeIpSkeletonFactory<::soc2lidarsid_out::skeleton::Soc2LidarSI_OutSkeleton, Soc2LidarSI_OutSkeletonSomeIpBinding>;

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace soc2lidarsid_out

#endif  // SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_SOC2LIDARSID_OUT_SOC2LIDARSI_OUT_SOMEIP_SKELETON_FACTORY_H_

