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
/**        \file  PerceptionSideExe/include/MisAlign1VccIDT/impl_type_misalign1vccidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_MISALIGN1VCCIDT_IMPL_TYPE_MISALIGN1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_MISALIGN1VCCIDT_IMPL_TYPE_MISALIGN1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace MisAlign1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type MisAlign1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MisAlign1VccIDT
 */
enum class MisAlign1VccIDT : uint8_t {
  MisAlign1Vcc_CalibrationNotStart = 0,
  MisAlign1Vcc_SuccessfullyCalibratedInFactoryOrAftersales = 1,
  MisAlign1Vcc_SuccessfullyAutoCalibrated = 2,
  MisAlign1Vcc_StaticCalibrationFail = 3,
  MisAlign1Vcc_CanNotBeCalibratedStaticallyCauseOtherReason = 4,
  MisAlign1Vcc_CauseMisalignDegIsLarThanThresholdOrOtherReason = 5,
  MisAlign1Vcc_DynamicCalibrationFailInFactoryOrAftersales = 6,
  MisAlign1Vcc_CanNotBeCalibratedDynamicallyCauseOtherReason = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace MisAlign1VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_MISALIGN1VCCIDT_IMPL_TYPE_MISALIGN1VCCIDT_H_
