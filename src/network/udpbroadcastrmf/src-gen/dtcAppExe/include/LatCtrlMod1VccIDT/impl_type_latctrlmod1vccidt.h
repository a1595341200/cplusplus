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
/**        \file  dtcAppExe/include/LatCtrlMod1VccIDT/impl_type_latctrlmod1vccidt.h
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

#ifndef DTCAPPEXE_INCLUDE_LATCTRLMOD1VCCIDT_IMPL_TYPE_LATCTRLMOD1VCCIDT_H_
#define DTCAPPEXE_INCLUDE_LATCTRLMOD1VCCIDT_IMPL_TYPE_LATCTRLMOD1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LatCtrlMod1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LatCtrlMod1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LatCtrlMod1VccIDT
 */
enum class LatCtrlMod1VccIDT : uint8_t {
  LatCtrlMod1Vcc_NoReq = 0,
  LatCtrlMod1Vcc_HighWayAssist = 1,
  LatCtrlMod1Vcc_EmgyLaneKeepAidForObjRe = 2,
  LatCtrlMod1Vcc_EmgyLaneKeepAidForStat = 3,
  LatCtrlMod1Vcc_SftyLaneKeepAid = 4,
  LatCtrlMod1Vcc_SteerAssc = 5,
  LatCtrlMod1Vcc_DsrOversteer = 6,
  LatCtrlMod1Vcc_DsrMueSplit = 7,
  LatCtrlMod1Vcc_DsrTrlrStaby = 8,
  LatCtrlMod1Vcc_EmgyManvAssi = 9,
  LatCtrlMod1Vcc_Reserved1 = 10,
  LatCtrlMod1Vcc_Reserved2 = 11,
  LatCtrlMod1Vcc_SHWA = 12,
  LatCtrlMod1Vcc_APA = 13,
  LatCtrlMod1Vcc_RPA = 14,
  LatCtrlMod1Vcc_HPA = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LatCtrlMod1VccIDT

#endif  // DTCAPPEXE_INCLUDE_LATCTRLMOD1VCCIDT_IMPL_TYPE_LATCTRLMOD1VCCIDT_H_
