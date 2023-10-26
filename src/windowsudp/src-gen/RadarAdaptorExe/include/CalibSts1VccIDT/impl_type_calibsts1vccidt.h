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
/**        \file  RadarAdaptorExe/include/CalibSts1VccIDT/impl_type_calibsts1vccidt.h
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

#ifndef RADARADAPTOREXE_INCLUDE_CALIBSTS1VCCIDT_IMPL_TYPE_CALIBSTS1VCCIDT_H_
#define RADARADAPTOREXE_INCLUDE_CALIBSTS1VCCIDT_IMPL_TYPE_CALIBSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CalibSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CalibSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CalibSts1VccIDT
 */
enum class CalibSts1VccIDT : uint8_t {
  CalibSts1Vcc_Unknown = 0,
  CalibSts1Vcc_Calibrated = 1,
  CalibSts1Vcc_SensorMisalignmentDetected = 2,
  CalibSts1Vcc_CalibrationInProgress = 3,
  CalibSts1Vcc_Reserved1 = 4,
  CalibSts1Vcc_Reserved2 = 5,
  CalibSts1Vcc_Reserved3 = 6,
  CalibSts1Vcc_Reserved4 = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CalibSts1VccIDT

#endif  // RADARADAPTOREXE_INCLUDE_CALIBSTS1VCCIDT_IMPL_TYPE_CALIBSTS1VCCIDT_H_
