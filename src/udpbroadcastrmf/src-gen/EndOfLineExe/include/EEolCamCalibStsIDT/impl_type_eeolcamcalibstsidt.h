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
/**        \file  EndOfLineExe/include/EEolCamCalibStsIDT/impl_type_eeolcamcalibstsidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_EEOLCAMCALIBSTSIDT_IMPL_TYPE_EEOLCAMCALIBSTSIDT_H_
#define ENDOFLINEEXE_INCLUDE_EEOLCAMCALIBSTSIDT_IMPL_TYPE_EEOLCAMCALIBSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EEolCamCalibStsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type EEolCamCalibStsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EEolCamCalibStsIDT
 */
enum class EEolCamCalibStsIDT : uint8_t {
  CalibSts_NotCalibrated = 0,
  CalibSts_CalibrateOngoing = 1,
  CalibSts_CalibrateFailed = 2,
  CalibSts_CalibrateDone = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EEolCamCalibStsIDT

#endif  // ENDOFLINEEXE_INCLUDE_EEOLCAMCALIBSTSIDT_IMPL_TYPE_EEOLCAMCALIBSTSIDT_H_
