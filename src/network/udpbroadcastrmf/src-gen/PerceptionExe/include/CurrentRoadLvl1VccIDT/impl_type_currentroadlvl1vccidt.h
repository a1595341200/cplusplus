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
/**        \file  PerceptionExe/include/CurrentRoadLvl1VccIDT/impl_type_currentroadlvl1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_CURRENTROADLVL1VCCIDT_IMPL_TYPE_CURRENTROADLVL1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_CURRENTROADLVL1VCCIDT_IMPL_TYPE_CURRENTROADLVL1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CurrentRoadLvl1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CurrentRoadLvl1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CurrentRoadLvl1VccIDT
 */
enum class CurrentRoadLvl1VccIDT : uint8_t {
  CurrentRoadLvl1Vcc_Unknown = 0,
  CurrentRoadLvl1Vcc_CityFastWay = 1,
  CurrentRoadLvl1Vcc_Countryway = 2,
  CurrentRoadLvl1Vcc_Ferryway = 3,
  CurrentRoadLvl1Vcc_HighWay = 4,
  CurrentRoadLvl1Vcc_Level9Way = 5,
  CurrentRoadLvl1Vcc_NationWay = 6,
  CurrentRoadLvl1Vcc_ProvinceWay = 7,
  CurrentRoadLvl1Vcc_TownWay = 8,
  CurrentRoadLvl1Vcc_WalkWay = 9,
  CurrentRoadLvl1Vcc_OtherWay = 10
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CurrentRoadLvl1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_CURRENTROADLVL1VCCIDT_IMPL_TYPE_CURRENTROADLVL1VCCIDT_H_
