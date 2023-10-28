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
/**        \file  TrafficSignInformationExe/include/OffsForSpdWarnSetgSts1IDT/impl_type_offsforspdwarnsetgsts1idt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_OFFSFORSPDWARNSETGSTS1IDT_IMPL_TYPE_OFFSFORSPDWARNSETGSTS1IDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_OFFSFORSPDWARNSETGSTS1IDT_IMPL_TYPE_OFFSFORSPDWARNSETGSTS1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace OffsForSpdWarnSetgSts1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type OffsForSpdWarnSetgSts1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT
 */
enum class OffsForSpdWarnSetgSts1IDT : uint8_t {
  OffsForSpdWarnSetgSts1_Minus10 = 0,
  OffsForSpdWarnSetgSts1_Minus5 = 1,
  OffsForSpdWarnSetgSts1_Zero = 2,
  OffsForSpdWarnSetgSts1_Plus5 = 3,
  OffsForSpdWarnSetgSts1_Plus10 = 4,
  OffsForSpdWarnSetgSts1_Reserved = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace OffsForSpdWarnSetgSts1IDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_OFFSFORSPDWARNSETGSTS1IDT_IMPL_TYPE_OFFSFORSPDWARNSETGSTS1IDT_H_
