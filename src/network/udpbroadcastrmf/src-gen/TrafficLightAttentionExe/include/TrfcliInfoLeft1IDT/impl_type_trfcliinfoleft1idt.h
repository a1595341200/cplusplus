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
/**        \file  TrafficLightAttentionExe/include/TrfcliInfoLeft1IDT/impl_type_trfcliinfoleft1idt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFOLEFT1IDT_IMPL_TYPE_TRFCLIINFOLEFT1IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFOLEFT1IDT_IMPL_TYPE_TRFCLIINFOLEFT1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcliInfoLeft1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcliInfoLeft1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcliInfoLeft1IDT
 */
enum class TrfcliInfoLeft1IDT : uint8_t {
  TrfcliInfoLeft1_Empty = 0,
  TrfcliInfoLeft1_Timetogo = 1,
  TrfcliInfoLeft1_LightenRedCircle = 2,
  TrfcliInfoLeft1_LightenYellowCircle = 3,
  TrfcliInfoLeft1_LightenGreenCircle = 4,
  TrfcliInfoLeft1_LightenRedLeftArrow = 5,
  TrfcliInfoLeft1_LightenYellowLeftArrow = 6,
  TrfcliInfoLeft1_LightenGreenLeftArrow = 7,
  TrfcliInfoLeft1_LightenRedStraightArrow = 8,
  TrfcliInfoLeft1_LightenYellowStraightArrow = 9,
  TrfcliInfoLeft1_LightenGreenStraightArrow = 10,
  TrfcliInfoLeft1_LightenRedRightArrow = 11,
  TrfcliInfoLeft1_LightenYellowRightArrow = 12,
  TrfcliInfoLeft1_LightenGreenRightArrow = 13,
  TrfcliInfoLeft1_UturnRedLight = 14,
  TrfcliInfoLeft1_UturnYellowLight = 15,
  TrfcliInfoLeft1_UturnGreenLight = 16
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcliInfoLeft1IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFOLEFT1IDT_IMPL_TYPE_TRFCLIINFOLEFT1IDT_H_
