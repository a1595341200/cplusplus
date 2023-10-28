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
/**        \file  TrafficSignInformationExe/include/LineTypeIDT/impl_type_linetypeidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_LINETYPEIDT_IMPL_TYPE_LINETYPEIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_LINETYPEIDT_IMPL_TYPE_LINETYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LineTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LineTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LineTypeIDT
 */
enum class LineTypeIDT : uint8_t {
  LineType_Unknown = 0,
  LineType_None = 1,
  LineType_SolidLine = 2,
  LineType_DashedLine = 3,
  LineType_DoubleSolidLine = 4,
  LineType_DoubleDashedLine = 5,
  LineType_LeftSolidRightDashed = 6,
  LineType_RightSolidLeftDashed = 7,
  LineType_Virtual = 8
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LineTypeIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_LINETYPEIDT_IMPL_TYPE_LINETYPEIDT_H_
