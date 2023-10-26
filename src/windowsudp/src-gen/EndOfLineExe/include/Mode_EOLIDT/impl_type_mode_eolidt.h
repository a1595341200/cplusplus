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
/**        \file  EndOfLineExe/include/Mode_EOLIDT/impl_type_mode_eolidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_MODE_EOLIDT_IMPL_TYPE_MODE_EOLIDT_H_
#define ENDOFLINEEXE_INCLUDE_MODE_EOLIDT_IMPL_TYPE_MODE_EOLIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "EEolCamCalibStsIDT/impl_type_eeolcamcalibstsidt.h"

namespace Mode_EOLIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Mode_EOLIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Mode_EOLIDT
 */
struct Mode_EOLIDT {
  using IsValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using EolFrontCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using EolRearCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using EolFrontLeftCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using EolFrontRightCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using EolRearLeftCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using EolRearRightCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;

  IsValid_generated_type IsValid;
  EolFrontCamCalibStatus_generated_type EolFrontCamCalibStatus;
  EolRearCamCalibStatus_generated_type EolRearCamCalibStatus;
  EolFrontLeftCamCalibStatus_generated_type EolFrontLeftCamCalibStatus;
  EolFrontRightCamCalibStatus_generated_type EolFrontRightCamCalibStatus;
  EolRearLeftCamCalibStatus_generated_type EolRearLeftCamCalibStatus;
  EolRearRightCamCalibStatus_generated_type EolRearRightCamCalibStatus;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Mode_EOLIDT instance.
 */
inline bool operator==(Mode_EOLIDT const& l,
                       Mode_EOLIDT const& r) noexcept {
  return (&l == &r) || ((l.IsValid == r.IsValid)
                         && (l.EolFrontCamCalibStatus == r.EolFrontCamCalibStatus)
                         && (l.EolRearCamCalibStatus == r.EolRearCamCalibStatus)
                         && (l.EolFrontLeftCamCalibStatus == r.EolFrontLeftCamCalibStatus)
                         && (l.EolFrontRightCamCalibStatus == r.EolFrontRightCamCalibStatus)
                         && (l.EolRearLeftCamCalibStatus == r.EolRearLeftCamCalibStatus)
                         && (l.EolRearRightCamCalibStatus == r.EolRearRightCamCalibStatus)
  );
}

/*!
 * \brief Compare for inequality with another Mode_EOLIDT instance.
 */
inline bool operator!=(Mode_EOLIDT const& l,
                       Mode_EOLIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Mode_EOLIDT

#endif  // ENDOFLINEEXE_INCLUDE_MODE_EOLIDT_IMPL_TYPE_MODE_EOLIDT_H_
