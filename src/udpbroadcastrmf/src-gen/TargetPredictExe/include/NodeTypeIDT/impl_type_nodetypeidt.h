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
/**        \file  TargetPredictExe/include/NodeTypeIDT/impl_type_nodetypeidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_NODETYPEIDT_IMPL_TYPE_NODETYPEIDT_H_
#define TARGETPREDICTEXE_INCLUDE_NODETYPEIDT_IMPL_TYPE_NODETYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace NodeTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type NodeTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/NodeTypeIDT
 */
enum class NodeTypeIDT : uint8_t {
  NodeType_Unknown = 0,
  NodeType_None = 1,
  NodeType_SolidLine = 2,
  NodeType_DashedLine = 3,
  NodeType_DoubleSolidLine = 4,
  NodeType_DoubleDashedLine = 5,
  NodeType_LeftSolidRightDashed = 6,
  NodeType_RightSolidLeftDashed = 7,
  NodeType_Virtual = 8,
  NodeType_RoadEdge = 9,
  NodeType_CenterLine = 10
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace NodeTypeIDT

#endif  // TARGETPREDICTEXE_INCLUDE_NODETYPEIDT_IMPL_TYPE_NODETYPEIDT_H_
