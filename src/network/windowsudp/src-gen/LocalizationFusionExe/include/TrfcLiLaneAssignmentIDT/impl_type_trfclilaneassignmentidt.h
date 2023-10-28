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
/**        \file  LocalizationFusionExe/include/TrfcLiLaneAssignmentIDT/impl_type_trfclilaneassignmentidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_TRFCLILANEASSIGNMENTIDT_IMPL_TYPE_TRFCLILANEASSIGNMENTIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_TRFCLILANEASSIGNMENTIDT_IMPL_TYPE_TRFCLILANEASSIGNMENTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcLiLaneAssignmentIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcLiLaneAssignmentIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiLaneAssignmentIDT
 */
enum class TrfcLiLaneAssignmentIDT : uint8_t {
  LaneAssignmentTL_None = 0,
  LaneAssignmentTL_Ego = 1,
  LaneAssignmentTL_AdjLeft = 2,
  LaneAssignmentTL_AdjRight = 3,
  LaneAssignmentTL_OthrLeft = 4,
  LaneAssignmentTL_OthrRight = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcLiLaneAssignmentIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_TRFCLILANEASSIGNMENTIDT_IMPL_TYPE_TRFCLILANEASSIGNMENTIDT_H_
