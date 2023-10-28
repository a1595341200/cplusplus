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
/**        \file  TrafficLightAttentionExe/include/TrfcliInfoRight1IDT/impl_type_trfcliinforight1idt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFORIGHT1IDT_IMPL_TYPE_TRFCLIINFORIGHT1IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFORIGHT1IDT_IMPL_TYPE_TRFCLIINFORIGHT1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcliInfoRight1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcliInfoRight1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcliInfoRight1IDT
 */
enum class TrfcliInfoRight1IDT : uint8_t {
  TrfcliInfoRight1_Empty = 0,
  TrfcliInfoRight1_Timetogo = 1,
  TrfcliInfoRight1_LightenRedCircle = 2,
  TrfcliInfoRight1_LightenYellowCircle = 3,
  TrfcliInfoRight1_LightenGreenCircle = 4,
  TrfcliInfoRight1_LightenRedLeftArrow = 5,
  TrfcliInfoRight1_LightenYellowLeftArrow = 6,
  TrfcliInfoRight1_LightenGreenLeftArrow = 7,
  TrfcliInfoRight1_LightenRedStraightArrow = 8,
  TrfcliInfoRight1_LightenYellowStraightArrow = 9,
  TrfcliInfoRight1_LightenGreenStraightArrow = 10,
  TrfcliInfoRight1_LightenRedRightArrow = 11,
  TrfcliInfoRight1_LightenYellowRightArrow = 12,
  TrfcliInfoRight1_LightenGreenRightArrow = 13,
  TrfcliInfoRight1_UturnRedLight = 14,
  TrfcliInfoRight1_UturnYellowLight = 15,
  TrfcliInfoRight1_UturnGreenLight = 16
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcliInfoRight1IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFORIGHT1IDT_IMPL_TYPE_TRFCLIINFORIGHT1IDT_H_
