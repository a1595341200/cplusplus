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
/**        \file  EDRExe/include/LaneChgAutStsForAsyHiWay2IDT/impl_type_lanechgautstsforasyhiway2idt.h
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

#ifndef EDREXE_INCLUDE_LANECHGAUTSTSFORASYHIWAY2IDT_IMPL_TYPE_LANECHGAUTSTSFORASYHIWAY2IDT_H_
#define EDREXE_INCLUDE_LANECHGAUTSTSFORASYHIWAY2IDT_IMPL_TYPE_LANECHGAUTSTSFORASYHIWAY2IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChgAutStsForAsyHiWay2IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneChgAutStsForAsyHiWay2IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChgAutStsForAsyHiWay2IDT
 */
enum class LaneChgAutStsForAsyHiWay2IDT : uint8_t {
  HiWay2_NoLaneChg = 0,
  HiWay2_LaneChgOnLeSideFinsh = 1,
  HiWay2_LaneChgOnRiSideFinsh = 2,
  HiWay2_LaneChgFailrOnLeSide = 3,
  HiWay2_LaneChgFailrOnRiSide = 4,
  HiWay2_LaneChgNotAvlOnLeSide = 5,
  HiWay2_LaneChgNotAvlOnRiSide = 6,
  HiWay2_LaneChgOnLeSideProgress = 7,
  HiWay2_LaneChgOnRiSideProgress = 8,
  HiWay2_LaneChgCncOnLeSide = 9,
  HiWay2_LaneChgCncOnRiSide = 10
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneChgAutStsForAsyHiWay2IDT

#endif  // EDREXE_INCLUDE_LANECHGAUTSTSFORASYHIWAY2IDT_IMPL_TYPE_LANECHGAUTSTSFORASYHIWAY2IDT_H_
