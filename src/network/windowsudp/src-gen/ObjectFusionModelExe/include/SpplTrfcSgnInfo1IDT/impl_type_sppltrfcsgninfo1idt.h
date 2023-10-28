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
/**        \file  ObjectFusionModelExe/include/SpplTrfcSgnInfo1IDT/impl_type_sppltrfcsgninfo1idt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_SPPLTRFCSGNINFO1IDT_IMPL_TYPE_SPPLTRFCSGNINFO1IDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_SPPLTRFCSGNINFO1IDT_IMPL_TYPE_SPPLTRFCSGNINFO1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SpplTrfcSgnInfo1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SpplTrfcSgnInfo1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpplTrfcSgnInfo1IDT
 */
enum class SpplTrfcSgnInfo1IDT : uint8_t {
  SpplTrfcSgnInfo1_Off = 0,
  SpplTrfcSgnInfo1_Left = 1,
  SpplTrfcSgnInfo1_Right = 2,
  SpplTrfcSgnInfo1_Rain = 3,
  SpplTrfcSgnInfo1_Snow = 4,
  SpplTrfcSgnInfo1_Snowandrain = 5,
  SpplTrfcSgnInfo1_Wet = 6,
  SpplTrfcSgnInfo1_Ice = 7,
  SpplTrfcSgnInfo1_Trailer = 8,
  SpplTrfcSgnInfo1_Zone = 9,
  SpplTrfcSgnInfo1_Timelimit = 10,
  SpplTrfcSgnInfo1_Distanceto = 11,
  SpplTrfcSgnInfo1_Distanceduring = 12,
  SpplTrfcSgnInfo1_Schoolarea = 13,
  SpplTrfcSgnInfo1_Fog = 14,
  SpplTrfcSgnInfo1_Night = 15,
  SpplTrfcSgnInfo1_Ramp = 16,
  SpplTrfcSgnInfo1_Generalsupplementarysign = 17,
  SpplTrfcSgnInfo1_End = 18
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SpplTrfcSgnInfo1IDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_SPPLTRFCSGNINFO1IDT_IMPL_TYPE_SPPLTRFCSGNINFO1IDT_H_
