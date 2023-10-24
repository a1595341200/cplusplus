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
/**        \file  TrafficSignInformationExe/include/TrfcLiColorIDT/impl_type_trfclicoloridt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCLICOLORIDT_IMPL_TYPE_TRFCLICOLORIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCLICOLORIDT_IMPL_TYPE_TRFCLICOLORIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcLiColorIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcLiColorIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiColorIDT
 */
enum class TrfcLiColorIDT : uint8_t {
  TrfcLiColor_Unkwn = 0,
  TrfcLiColor_Red = 1,
  TrfcLiColor_Yllw = 2,
  TrfcLiColor_Green = 3,
  TrfcLiColor_BlnkGreen = 4,
  TrfcLiColor_BlnkYllw = 5,
  TrfcLiColor_BlnkRed = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcLiColorIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCLICOLORIDT_IMPL_TYPE_TRFCLICOLORIDT_H_
