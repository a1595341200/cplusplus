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
/**        \file  TrafficSignInformationExe/include/TrfcLiTypIDT/impl_type_trfclitypidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCLITYPIDT_IMPL_TYPE_TRFCLITYPIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCLITYPIDT_IMPL_TYPE_TRFCLITYPIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcLiTypIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcLiTypIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiTypIDT
 */
enum class TrfcLiTypIDT : uint8_t {
  TrfcLiTyp_Uknwn = 0,
  TrfcLiTyp_SldCrcl = 1,
  TrfcLiTyp_LftArrw = 2,
  TrfcLiTyp_RghtArrw = 3,
  TrfcLiTyp_FwdArrw = 4,
  TrfcLiTyp_LftFwdArrw = 5,
  TrfcLiTyp_RgtFwdArrw = 6,
  TrfcLiTyp_U_turn = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcLiTypIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCLITYPIDT_IMPL_TYPE_TRFCLITYPIDT_H_
