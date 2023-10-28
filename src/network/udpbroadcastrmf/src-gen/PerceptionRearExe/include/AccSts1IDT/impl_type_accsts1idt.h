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
/**        \file  PerceptionRearExe/include/AccSts1IDT/impl_type_accsts1idt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_ACCSTS1IDT_IMPL_TYPE_ACCSTS1IDT_H_
#define PERCEPTIONREAREXE_INCLUDE_ACCSTS1IDT_IMPL_TYPE_ACCSTS1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AccSts1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AccSts1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AccSts1IDT
 */
enum class AccSts1IDT : uint8_t {
  AccSts1_Off = 1,
  AccSts1_Stb = 2,
  AccSts1_Stop = 3,
  AccSts1_StopTmp = 4,
  AccSts1_Actv = 5,
  AccSts1_Flt = 6,
  AccSts1_Ovrd = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AccSts1IDT

#endif  // PERCEPTIONREAREXE_INCLUDE_ACCSTS1IDT_IMPL_TYPE_ACCSTS1IDT_H_
