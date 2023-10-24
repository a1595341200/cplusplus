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
/**        \file  PerceptionSideExe/include/VehMtnSt2IDT/impl_type_vehmtnst2idt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_VEHMTNST2IDT_IMPL_TYPE_VEHMTNST2IDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_VEHMTNST2IDT_IMPL_TYPE_VEHMTNST2IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehMtnSt2IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type VehMtnSt2IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehMtnSt2IDT
 */
enum class VehMtnSt2IDT : uint8_t {
  VehMtnStVehMtnSt_Ukwn = 0,
  VehMtnStVehMtnSt_StandStillVal1 = 1,
  VehMtnStVehMtnSt_StandStillVal2 = 2,
  VehMtnStVehMtnSt_StandStillVal3 = 3,
  VehMtnStVehMtnSt_RollgFwdVal1 = 4,
  VehMtnStVehMtnSt_RollgFwdVal2 = 5,
  VehMtnStVehMtnSt_RollgBackwVal1 = 6,
  VehMtnStVehMtnSt_RollgBackwVal2 = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehMtnSt2IDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_VEHMTNST2IDT_IMPL_TYPE_VEHMTNST2IDT_H_
