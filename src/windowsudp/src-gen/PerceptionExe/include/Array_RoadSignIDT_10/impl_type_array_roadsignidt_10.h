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
/**        \file  PerceptionExe/include/Array_RoadSignIDT_10/impl_type_array_roadsignidt_10.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_ARRAY_ROADSIGNIDT_10_IMPL_TYPE_ARRAY_ROADSIGNIDT_10_H_
#define PERCEPTIONEXE_INCLUDE_ARRAY_ROADSIGNIDT_10_IMPL_TYPE_ARRAY_ROADSIGNIDT_10_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "RoadSignIDT/impl_type_roadsignidt.h"

namespace Array_RoadSignIDT_10 {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type Array_RoadSignIDT_10.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Array_RoadSignIDT_10
 */
using Array_RoadSignIDT_10 = std::array<
  RoadSignIDT::RoadSignIDT,
  10
>;
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Array_RoadSignIDT_10

#endif  // PERCEPTIONEXE_INCLUDE_ARRAY_ROADSIGNIDT_10_IMPL_TYPE_ARRAY_ROADSIGNIDT_10_H_
