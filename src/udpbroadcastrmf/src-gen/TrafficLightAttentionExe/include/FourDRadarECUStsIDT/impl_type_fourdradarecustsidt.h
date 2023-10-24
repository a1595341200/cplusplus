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
/**        \file  TrafficLightAttentionExe/include/FourDRadarECUStsIDT/impl_type_fourdradarecustsidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_FOURDRADARECUSTSIDT_IMPL_TYPE_FOURDRADARECUSTSIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_FOURDRADARECUSTSIDT_IMPL_TYPE_FOURDRADARECUSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CalibSts1VccIDT/impl_type_calibsts1vccidt.h"
#include "FailrNoFailr1VccIDT/impl_type_failrnofailr1vccidt.h"
#include "OperationMode1IDT/impl_type_operationmode1idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace FourDRadarECUStsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarECUStsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarECUStsIDT
 */
struct FourDRadarECUStsIDT {
  using FourDChks_generated_type = uint8IDT::uint8IDT;
  using ECUFailureVoltage_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using FourDCntr_generated_type = uint8IDT::uint8IDT;
  using CalibrationSts_generated_type = CalibSts1VccIDT::CalibSts1VccIDT;
  using OperationMode_generated_type = OperationMode1IDT::OperationMode1IDT;
  using ECUFailurePlausibility_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using ECUFailureTemperature_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using ECUFailureVDY_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using ECUFailureNVM_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using ECUFailureE2E_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using ECUFailureUB_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using ECUFailureQF_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;
  using ECUFailureVCS_generated_type = FailrNoFailr1VccIDT::FailrNoFailr1VccIDT;

  FourDChks_generated_type FourDChks;
  ECUFailureVoltage_generated_type ECUFailureVoltage;
  FourDCntr_generated_type FourDCntr;
  CalibrationSts_generated_type CalibrationSts;
  OperationMode_generated_type OperationMode;
  ECUFailurePlausibility_generated_type ECUFailurePlausibility;
  ECUFailureTemperature_generated_type ECUFailureTemperature;
  ECUFailureVDY_generated_type ECUFailureVDY;
  ECUFailureNVM_generated_type ECUFailureNVM;
  ECUFailureE2E_generated_type ECUFailureE2E;
  ECUFailureUB_generated_type ECUFailureUB;
  ECUFailureQF_generated_type ECUFailureQF;
  ECUFailureVCS_generated_type ECUFailureVCS;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarECUStsIDT instance.
 */
inline bool operator==(FourDRadarECUStsIDT const& l,
                       FourDRadarECUStsIDT const& r) noexcept {
  return (&l == &r) || ((l.FourDChks == r.FourDChks)
                         && (l.ECUFailureVoltage == r.ECUFailureVoltage)
                         && (l.FourDCntr == r.FourDCntr)
                         && (l.CalibrationSts == r.CalibrationSts)
                         && (l.OperationMode == r.OperationMode)
                         && (l.ECUFailurePlausibility == r.ECUFailurePlausibility)
                         && (l.ECUFailureTemperature == r.ECUFailureTemperature)
                         && (l.ECUFailureVDY == r.ECUFailureVDY)
                         && (l.ECUFailureNVM == r.ECUFailureNVM)
                         && (l.ECUFailureE2E == r.ECUFailureE2E)
                         && (l.ECUFailureUB == r.ECUFailureUB)
                         && (l.ECUFailureQF == r.ECUFailureQF)
                         && (l.ECUFailureVCS == r.ECUFailureVCS)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarECUStsIDT instance.
 */
inline bool operator!=(FourDRadarECUStsIDT const& l,
                       FourDRadarECUStsIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FourDRadarECUStsIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_FOURDRADARECUSTSIDT_IMPL_TYPE_FOURDRADARECUSTSIDT_H_
