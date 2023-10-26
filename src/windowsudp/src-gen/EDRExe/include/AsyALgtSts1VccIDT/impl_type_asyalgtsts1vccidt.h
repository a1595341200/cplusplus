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
/**        \file  EDRExe/include/AsyALgtSts1VccIDT/impl_type_asyalgtsts1vccidt.h
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

#ifndef EDREXE_INCLUDE_ASYALGTSTS1VCCIDT_IMPL_TYPE_ASYALGTSTS1VCCIDT_H_
#define EDREXE_INCLUDE_ASYALGTSTS1VCCIDT_IMPL_TYPE_ASYALGTSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyALgtSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyALgtSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyALgtSts1VccIDT
 */
enum class AsyALgtSts1VccIDT : uint8_t {
  AsyALgtSts1Vcc_Reserved1 = 0,
  AsyALgtSts1Vcc_AccSts1_StandBy = 1,
  AsyALgtSts1Vcc_AccSts1_Active = 2,
  AsyALgtSts1Vcc_Reserved2 = 3,
  AsyALgtSts1Vcc_AccSts1_Override = 4,
  AsyALgtSts1Vcc_AccSts1_StandActive = 5,
  AsyALgtSts1Vcc_AccSts1_StandWait = 6,
  AsyALgtSts1Vcc_AccSts1_TemporaryFailure = 7,
  AsyALgtSts1Vcc_AccSts1_PermanentFailure = 8,
  AsyALgtSts1Vcc_Reserved3 = 9
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyALgtSts1VccIDT

#endif  // EDREXE_INCLUDE_ASYALGTSTS1VCCIDT_IMPL_TYPE_ASYALGTSTS1VCCIDT_H_
