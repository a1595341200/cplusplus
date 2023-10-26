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
/**        \file  dtcAppExe/include/ADModCtrlInhbn1IDT/impl_type_admodctrlinhbn1idt.h
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

#ifndef DTCAPPEXE_INCLUDE_ADMODCTRLINHBN1IDT_IMPL_TYPE_ADMODCTRLINHBN1IDT_H_
#define DTCAPPEXE_INCLUDE_ADMODCTRLINHBN1IDT_IMPL_TYPE_ADMODCTRLINHBN1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ADModCtrlInhbn1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ADModCtrlInhbn1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ADModCtrlInhbn1IDT
 */
enum class ADModCtrlInhbn1IDT : uint8_t {
  ADModCtrlInhbn1_NoInhb = 0,
  ADModCtrlInhbn1_L12LgtCtrlModInhb = 1,
  ADModCtrlInhbn1_AutoParkingModInhb = 2,
  ADModCtrlInhbn1_L12AndAutoParkingModInhb = 3,
  ADModCtrlInhbn1_L3ADModInhb = 4,
  ADModCtrlInhbn1_L3ADAndL12LgtCtrlModInhb = 5,
  ADModCtrlInhbn1_L3ADAndAutoParkingModInhb = 6,
  ADModCtrlInhbn1_L3ADAndAutoParkingAndL12LgtCtrlModInhb = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ADModCtrlInhbn1IDT

#endif  // DTCAPPEXE_INCLUDE_ADMODCTRLINHBN1IDT_IMPL_TYPE_ADMODCTRLINHBN1IDT_H_
