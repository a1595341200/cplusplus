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
/**        \file  PerceptionSideExe/include/DynCaliSts1IDT/impl_type_dyncalists1idt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_DYNCALISTS1IDT_IMPL_TYPE_DYNCALISTS1IDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_DYNCALISTS1IDT_IMPL_TYPE_DYNCALISTS1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DynCaliSts1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type DynCaliSts1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DynCaliSts1IDT
 */
enum class DynCaliSts1IDT : uint8_t {
  DynCaliSts1_NotCalibrated = 0,
  DynCaliSts1_Pending = 1,
  DynCaliSts1_CalibrationOngoing = 2,
  DynCaliSts1_CalibrationFailed = 3,
  DynCaliSts1_CalibrationDone = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DynCaliSts1IDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_DYNCALISTS1IDT_IMPL_TYPE_DYNCALISTS1IDT_H_
