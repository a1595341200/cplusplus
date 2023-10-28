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
/**        \file  TrafficLightAttentionExe/include/SurfaceConditionIDT/impl_type_surfaceconditionidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_SURFACECONDITIONIDT_IMPL_TYPE_SURFACECONDITIONIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_SURFACECONDITIONIDT_IMPL_TYPE_SURFACECONDITIONIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SurfaceConditionIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SurfaceConditionIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SurfaceConditionIDT
 */
enum class SurfaceConditionIDT : uint8_t {
  SurfaceCondition_Unknown = 0,
  SurfaceCondition_Dry = 1,
  SurfaceCondition_Puddles = 2,
  SurfaceCondition_Snow = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SurfaceConditionIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_SURFACECONDITIONIDT_IMPL_TYPE_SURFACECONDITIONIDT_H_
