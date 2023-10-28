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
/**        \file  LocalizationFusionExe/include/SuppSignType2IDT/impl_type_suppsigntype2idt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_SUPPSIGNTYPE2IDT_IMPL_TYPE_SUPPSIGNTYPE2IDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_SUPPSIGNTYPE2IDT_IMPL_TYPE_SUPPSIGNTYPE2IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SuppSignType2IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SuppSignType2IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SuppSignType2IDT
 */
enum class SuppSignType2IDT : uint8_t {
  SuppSignType2_Empty = 0,
  SuppSignType2_IcyRoad = 1,
  SuppSignType2_WetRoad = 2,
  SuppSignType2_TmRstrct = 3,
  SuppSignType2_Fog = 4,
  SuppSignType2_Rstrct = 5,
  SuppSignType2_RiExit = 6,
  SuppSignType2_LeExit = 7,
  SuppSignType2_SpdZn = 8,
  SuppSignType2_PssgCarTrailer = 9,
  SuppSignType2_SchoolZn = 10,
  SuppSignType2_Night = 11,
  SuppSignType2_IcyOrWet = 12,
  SuppSignType2_ExcptTractors = 13,
  SuppSignType2_DistanceIn = 14,
  SuppSignType2_DistanceFor = 15,
  SuppSignType2_ArrowLeft = 16,
  SuppSignType2_ArrowRight = 17,
  SuppSignType2_Rainy = 18,
  SuppSignType2_Snowy = 19,
  SuppSignType2_Region = 20,
  SuppSignType2_Trailer = 21
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SuppSignType2IDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_SUPPSIGNTYPE2IDT_IMPL_TYPE_SUPPSIGNTYPE2IDT_H_
