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
/**        \file  PerceptionSideExe/include/EyeGazeZone1VccIDT/impl_type_eyegazezone1vccidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_EYEGAZEZONE1VCCIDT_IMPL_TYPE_EYEGAZEZONE1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_EYEGAZEZONE1VCCIDT_IMPL_TYPE_EYEGAZEZONE1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EyeGazeZone1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type EyeGazeZone1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EyeGazeZone1VccIDT
 */
enum class EyeGazeZone1VccIDT : uint8_t {
  EyeGazeZone1Vcc_Unavilable = 0,
  EyeGazeZone1Vcc_windshielddriver = 1,
  EyeGazeZone1Vcc_rearmirrorinner = 2,
  EyeGazeZone1Vcc_windshieldpassager = 3,
  EyeGazeZone1Vcc_HUD = 4,
  EyeGazeZone1Vcc_DIM = 5,
  EyeGazeZone1Vcc_IHU = 6,
  EyeGazeZone1Vcc_windowdriver = 7,
  EyeGazeZone1Vcc_rearmirrordriver = 8,
  EyeGazeZone1Vcc_doordriver = 9,
  EyeGazeZone1Vcc_windowpassagner = 10,
  EyeGazeZone1Vcc_rearmirrorpassanger = 11,
  EyeGazeZone1Vcc_doorpassanger = 12,
  EyeGazeZone1Vcc_floordriver = 13,
  EyeGazeZone1Vcc_floorpassanger = 14,
  EyeGazeZone1Vcc_other = 15,
  EyeGazeZone1Vcc_greenzone_1_3_4 = 16,
  EyeGazeZone1Vcc_yellowzone_2_5_6_7_8_10_11 = 17,
  EyeGazeZone1Vcc_redzone_9_12_13_14 = 18,
  EyeGazeZone1Vcc_SteerWheelLe = 19,
  EyeGazeZone1Vcc_SteerWheelRi = 20,
  EyeGazeZone1Vcc_Reserved3 = 21,
  EyeGazeZone1Vcc_Reserved4 = 22,
  EyeGazeZone1Vcc_Reserved5 = 23,
  EyeGazeZone1Vcc_Reserved6 = 24
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EyeGazeZone1VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_EYEGAZEZONE1VCCIDT_IMPL_TYPE_EYEGAZEZONE1VCCIDT_H_
