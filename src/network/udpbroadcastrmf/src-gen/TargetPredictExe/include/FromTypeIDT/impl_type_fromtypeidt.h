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
/**        \file  TargetPredictExe/include/FromTypeIDT/impl_type_fromtypeidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_FROMTYPEIDT_IMPL_TYPE_FROMTYPEIDT_H_
#define TARGETPREDICTEXE_INCLUDE_FROMTYPEIDT_IMPL_TYPE_FROMTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace FromTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type FromTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FromTypeIDT
 */
enum class FromTypeIDT : uint8_t {
  LineType_Unknown = 0,
  LineType_None = 1,
  LineType_SolidLine = 2,
  LineType_DashedLine = 3,
  LineType_DoubleSolidLine = 4,
  LineType_DoubleDashedLine = 5,
  LineType_LeftSolidRightDashed = 6,
  LineType_LineType_RightSolidLeftDashed = 7,
  LineType_Virtual = 8
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FromTypeIDT

#endif  // TARGETPREDICTEXE_INCLUDE_FROMTYPEIDT_IMPL_TYPE_FROMTYPEIDT_H_
