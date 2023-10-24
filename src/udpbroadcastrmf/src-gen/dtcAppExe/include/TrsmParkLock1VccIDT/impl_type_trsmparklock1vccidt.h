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
/**        \file  dtcAppExe/include/TrsmParkLock1VccIDT/impl_type_trsmparklock1vccidt.h
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

#ifndef DTCAPPEXE_INCLUDE_TRSMPARKLOCK1VCCIDT_IMPL_TYPE_TRSMPARKLOCK1VCCIDT_H_
#define DTCAPPEXE_INCLUDE_TRSMPARKLOCK1VCCIDT_IMPL_TYPE_TRSMPARKLOCK1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrsmParkLock1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrsmParkLock1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrsmParkLock1VccIDT
 */
enum class TrsmParkLock1VccIDT : uint8_t {
  TrsmParkLock1Vcc_ParkNotEngd = 0,
  TrsmParkLock1Vcc_ParkEngd = 1,
  TrsmParkLock1Vcc_NotInUse = 2,
  TrsmParkLock1Vcc_Undefd = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrsmParkLock1VccIDT

#endif  // DTCAPPEXE_INCLUDE_TRSMPARKLOCK1VCCIDT_IMPL_TYPE_TRSMPARKLOCK1VCCIDT_H_
