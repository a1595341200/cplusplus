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
/**        \file  TrafficSignInformationExe/include/SpplTrfcSgnInfoIDT/impl_type_sppltrfcsgninfoidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPPLTRFCSGNINFOIDT_IMPL_TYPE_SPPLTRFCSGNINFOIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPPLTRFCSGNINFOIDT_IMPL_TYPE_SPPLTRFCSGNINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpplTrfcSgnInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SpplTrfcSgnInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpplTrfcSgnInfoIDT
 */
enum class SpplTrfcSgnInfoIDT : uint8_t {
  SpplTrfcSgnInfo_Off = 0,
  SpplTrfcSgnInfo_Left = 1,
  SpplTrfcSgnInfo_Right = 2,
  SpplTrfcSgnInfo_Rain = 3,
  SpplTrfcSgnInfo_Snow = 4,
  SpplTrfcSgnInfo_Snowandrain = 5,
  SpplTrfcSgnInfo_Wet = 6,
  SpplTrfcSgnInfo_Ice = 7,
  SpplTrfcSgnInfo_Trailer = 8,
  SpplTrfcSgnInfo_Zone = 9,
  SpplTrfcSgnInfo_Timelimit = 10,
  SpplTrfcSgnInfo_Distanceto = 11,
  SpplTrfcSgnInfo_Distanceduring = 12,
  SpplTrfcSgnInfo_Schoolarea = 13,
  SpplTrfcSgnInfo_Fog = 14,
  SpplTrfcSgnInfo_Night = 15,
  SpplTrfcSgnInfo_Ramp = 16,
  SpplTrfcSgnInfo_Generalsupplementarysign = 17,
  SpplTrfcSgnInfo_End = 18
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SpplTrfcSgnInfoIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_SPPLTRFCSGNINFOIDT_IMPL_TYPE_SPPLTRFCSGNINFOIDT_H_
