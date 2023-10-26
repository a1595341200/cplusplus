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
/**        \file  TrafficLightAttentionExe/include/AsyAutDrvgAvl1VccIDT/impl_type_asyautdrvgavl1vccidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_ASYAUTDRVGAVL1VCCIDT_IMPL_TYPE_ASYAUTDRVGAVL1VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_ASYAUTDRVGAVL1VCCIDT_IMPL_TYPE_ASYAUTDRVGAVL1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyAutDrvgAvl1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyAutDrvgAvl1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyAutDrvgAvl1VccIDT
 */
enum class AsyAutDrvgAvl1VccIDT : uint8_t {
  AsyAutDrvgAvl1Vcc_NoMsg = 0,
  AsyAutDrvgAvl1Vcc_LatCtrlNotAvl = 1,
  AsyAutDrvgAvl1Vcc_HiSpd = 2,
  AsyAutDrvgAvl1Vcc_VehToFolwMiss = 3,
  AsyAutDrvgAvl1Vcc_OvrdTiMaxExcdd = 4,
  AsyAutDrvgAvl1Vcc_DrvrNotInLoopDetd = 5,
  AsyAutDrvgAvl1Vcc_DrvrBucdRqrd = 6,
  AsyAutDrvgAvl1Vcc_DrvrDoorNotClsd = 7,
  AsyAutDrvgAvl1Vcc_GearNotInDrv = 8,
  AsyAutDrvgAvl1Vcc_SnsrBlkd = 9,
  AsyAutDrvgAvl1Vcc_HldTiMaxExcdd = 10,
  AsyAutDrvgAvl1Vcc_DrvModSeldNotOk = 11,
  AsyAutDrvgAvl1Vcc_EpbAppld = 12,
  AsyAutDrvgAvl1Vcc_SpdLowLimExcdd = 13,
  AsyAutDrvgAvl1Vcc_TrlrPrsnt = 14,
  AsyAutDrvgAvl1Vcc_MltpleMonRoadReq = 15,
  AsyAutDrvgAvl1Vcc_EndOfHndsOffAllwdArea = 16,
  AsyAutDrvgAvl1Vcc_RoadMonWm = 17,
  AsyAutDrvgAvl1Vcc_CannotReactivate = 18,
  AsyAutDrvgAvl1Vcc_NotInUse1 = 19,
  AsyAutDrvgAvl1Vcc_ESC_OF = 20,
  AsyAutDrvgAvl1Vcc_HDC_ON = 21,
  AsyAutDrvgAvl1Vcc_Reserved3 = 22,
  AsyAutDrvgAvl1Vcc_Reserved4 = 23,
  AsyAutDrvgAvl1Vcc_Reserved5 = 24,
  AsyAutDrvgAvl1Vcc_Reserved6 = 25,
  AsyAutDrvgAvl1Vcc_Reserved7 = 26,
  AsyAutDrvgAvl1Vcc_Reserved8 = 27,
  AsyAutDrvgAvl1Vcc_Reserved9 = 28,
  AsyAutDrvgAvl1Vcc_Reserved10 = 29,
  AsyAutDrvgAvl1Vcc_Reserved11 = 30,
  AsyAutDrvgAvl1Vcc_Reserved12 = 31
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyAutDrvgAvl1VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_ASYAUTDRVGAVL1VCCIDT_IMPL_TYPE_ASYAUTDRVGAVL1VCCIDT_H_
