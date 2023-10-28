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
/**        \file  ObjectFusionModelExe/include/EpbSts1VccIDT/impl_type_epbsts1vccidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_EPBSTS1VCCIDT_IMPL_TYPE_EPBSTS1VCCIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_EPBSTS1VCCIDT_IMPL_TYPE_EPBSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EpbSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type EpbSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EpbSts1VccIDT
 */
enum class EpbSts1VccIDT : uint8_t {
  EpbSts1Vcc_Resd0 = 0,
  EpbSts1Vcc_Resd1 = 1,
  EpbSts1Vcc_Resd2 = 2,
  EpbSts1Vcc_AllAppld = 3,
  EpbSts1Vcc_Resd4 = 4,
  EpbSts1Vcc_AllInTran = 5,
  EpbSts1Vcc_BrkgDynByActr = 6,
  EpbSts1Vcc_Resd7 = 7,
  EpbSts1Vcc_Resd8 = 8,
  EpbSts1Vcc_ActrAllReld = 9,
  EpbSts1Vcc_BrkgDynDegraded = 10,
  EpbSts1Vcc_Resd11 = 11,
  EpbSts1Vcc_BrkgDyn = 12,
  EpbSts1Vcc_Resd13 = 13,
  EpbSts1Vcc_Resd14 = 14,
  EpbSts1Vcc_Err = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EpbSts1VccIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_EPBSTS1VCCIDT_IMPL_TYPE_EPBSTS1VCCIDT_H_
