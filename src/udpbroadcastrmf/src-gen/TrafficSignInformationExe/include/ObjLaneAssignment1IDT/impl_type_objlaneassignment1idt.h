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
/**        \file  TrafficSignInformationExe/include/ObjLaneAssignment1IDT/impl_type_objlaneassignment1idt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_OBJLANEASSIGNMENT1IDT_IMPL_TYPE_OBJLANEASSIGNMENT1IDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_OBJLANEASSIGNMENT1IDT_IMPL_TYPE_OBJLANEASSIGNMENT1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ObjLaneAssignment1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ObjLaneAssignment1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjLaneAssignment1IDT
 */
enum class ObjLaneAssignment1IDT : uint8_t {
  ObjLaneAssignment1_Unknown = 0,
  ObjLaneAssignment1_EgoLane = 1,
  ObjLaneAssignment1_LeftLane = 2,
  ObjLaneAssignment1_RightLane = 3,
  ObjLaneAssignment1_SecLeft = 4,
  ObjLaneAssignment1_SecRight = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjLaneAssignment1IDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_OBJLANEASSIGNMENT1IDT_IMPL_TYPE_OBJLANEASSIGNMENT1IDT_H_
