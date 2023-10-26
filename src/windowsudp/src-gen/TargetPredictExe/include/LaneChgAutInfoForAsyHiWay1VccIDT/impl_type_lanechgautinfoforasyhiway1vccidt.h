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
/**        \file  TargetPredictExe/include/LaneChgAutInfoForAsyHiWay1VccIDT/impl_type_lanechgautinfoforasyhiway1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_LANECHGAUTINFOFORASYHIWAY1VCCIDT_IMPL_TYPE_LANECHGAUTINFOFORASYHIWAY1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_LANECHGAUTINFOFORASYHIWAY1VCCIDT_IMPL_TYPE_LANECHGAUTINFOFORASYHIWAY1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChgAutInfoForAsyHiWay1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneChgAutInfoForAsyHiWay1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChgAutInfoForAsyHiWay1VccIDT
 */
enum class LaneChgAutInfoForAsyHiWay1VccIDT : uint8_t {
  LaneChgAutInfoForAsyHiWay1Vcc_NoLaneChgAvl = 0,
  LaneChgAutInfoForAsyHiWay1Vcc_LaneChgAvlOnLeSide = 1,
  LaneChgAutInfoForAsyHiWay1Vcc_LaneChgAvlOnRiSide = 2,
  LaneChgAutInfoForAsyHiWay1Vcc_LaneChgAvlOnRiLeSide = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneChgAutInfoForAsyHiWay1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_LANECHGAUTINFOFORASYHIWAY1VCCIDT_IMPL_TYPE_LANECHGAUTINFOFORASYHIWAY1VCCIDT_H_
