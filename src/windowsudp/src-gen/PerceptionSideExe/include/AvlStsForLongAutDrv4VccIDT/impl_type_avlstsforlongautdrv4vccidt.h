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
/**        \file  PerceptionSideExe/include/AvlStsForLongAutDrv4VccIDT/impl_type_avlstsforlongautdrv4vccidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AVLSTSFORLONGAUTDRV4VCCIDT_IMPL_TYPE_AVLSTSFORLONGAUTDRV4VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AVLSTSFORLONGAUTDRV4VCCIDT_IMPL_TYPE_AVLSTSFORLONGAUTDRV4VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AvlStsForLongAutDrv4VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AvlStsForLongAutDrv4VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AvlStsForLongAutDrv4VccIDT
 */
enum class AvlStsForLongAutDrv4VccIDT : uint8_t {
  AvlStsForLongAutDrv4Vcc_NoMsg = 0,
  AvlStsForLongAutDrv4Vcc_LgtCtrlNotAvl = 1,
  AvlStsForLongAutDrv4Vcc_AccCncl = 2,
  AvlStsForLongAutDrv4Vcc_NoVehAhd = 3,
  AvlStsForLongAutDrv4Vcc_DrvrBucdRqrd = 4,
  AvlStsForLongAutDrv4Vcc_DrvrDoorNotClsd = 5,
  AvlStsForLongAutDrv4Vcc_GearNotInDrv = 6,
  AvlStsForLongAutDrv4Vcc_GearNeut = 7,
  AvlStsForLongAutDrv4Vcc_SnsrBlkd = 8,
  AvlStsForLongAutDrv4Vcc_HldTiMaxExcdd = 9,
  AvlStsForLongAutDrv4Vcc_OvrdTiMaxExcdd = 10,
  AvlStsForLongAutDrv4Vcc_SpdLowLimExcdd = 11,
  AvlStsForLongAutDrv4Vcc_DrvModSeldNotOk = 12,
  AvlStsForLongAutDrv4Vcc_EpbAppld = 13,
  AvlStsForLongAutDrv4Vcc_ESC_OFF = 14,
  AvlStsForLongAutDrv4Vcc_HDC_ON = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AvlStsForLongAutDrv4VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AVLSTSFORLONGAUTDRV4VCCIDT_IMPL_TYPE_AVLSTSFORLONGAUTDRV4VCCIDT_H_
