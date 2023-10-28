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
/**        \file  RVDCExe/include/TrfcInfoMiscFirst1IDT/impl_type_trfcinfomiscfirst1idt.h
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

#ifndef RVDCEXE_INCLUDE_TRFCINFOMISCFIRST1IDT_IMPL_TYPE_TRFCINFOMISCFIRST1IDT_H_
#define RVDCEXE_INCLUDE_TRFCINFOMISCFIRST1IDT_IMPL_TYPE_TRFCINFOMISCFIRST1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcInfoMiscFirst1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcInfoMiscFirst1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcInfoMiscFirst1IDT
 */
enum class TrfcInfoMiscFirst1IDT : uint8_t {
  TrfcInfoMiscFirst1_Off = 0,
  TrfcInfoMiscFirst1_NoEntrance = 1,
  TrfcInfoMiscFirst1_VehiclePassingNotAllowed = 2,
  TrfcInfoMiscFirst1_EndOfVehiclePassingNotAllowed = 3,
  TrfcInfoMiscFirst1_Stop = 4,
  TrfcInfoMiscFirst1_SpeedLimitControl = 5,
  TrfcInfoMiscFirst1_USNightSpeedLimit = 6,
  TrfcInfoMiscFirst1_Schoolandchildrenwarning = 7,
  TrfcInfoMiscFirst1_Roadwork = 8,
  TrfcInfoMiscFirst1_Leftcurve = 9,
  TrfcInfoMiscFirst1_Rightcurve = 10,
  TrfcInfoMiscFirst1_Seriescurves = 11,
  TrfcInfoMiscFirst1_Reserved = 12
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcInfoMiscFirst1IDT

#endif  // RVDCEXE_INCLUDE_TRFCINFOMISCFIRST1IDT_IMPL_TYPE_TRFCINFOMISCFIRST1IDT_H_
