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
/**        \file  EndOfLineExe/include/Mode_OnLineIDT/impl_type_mode_onlineidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_MODE_ONLINEIDT_IMPL_TYPE_MODE_ONLINEIDT_H_
#define ENDOFLINEEXE_INCLUDE_MODE_ONLINEIDT_IMPL_TYPE_MODE_ONLINEIDT_H_

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

namespace Mode_OnLineIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Mode_OnLineIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Mode_OnLineIDT
 */
struct Mode_OnLineIDT {
  using IsValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using OnLineFrontCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using OnLineRearCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using OnLineFrontLeftCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using OnLineFrontRightCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using OnLineRearLeftCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using OnLineRearRightCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;

  IsValid_generated_type IsValid;
  OnLineFrontCamCalibStatus_generated_type OnLineFrontCamCalibStatus;
  OnLineRearCamCalibStatus_generated_type OnLineRearCamCalibStatus;
  OnLineFrontLeftCamCalibStatus_generated_type OnLineFrontLeftCamCalibStatus;
  OnLineFrontRightCamCalibStatus_generated_type OnLineFrontRightCamCalibStatus;
  OnLineRearLeftCamCalibStatus_generated_type OnLineRearLeftCamCalibStatus;
  OnLineRearRightCamCalibStatus_generated_type OnLineRearRightCamCalibStatus;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Mode_OnLineIDT instance.
 */
inline bool operator==(Mode_OnLineIDT const& l,
                       Mode_OnLineIDT const& r) noexcept {
  return (&l == &r) || ((l.IsValid == r.IsValid)
                         && (l.OnLineFrontCamCalibStatus == r.OnLineFrontCamCalibStatus)
                         && (l.OnLineRearCamCalibStatus == r.OnLineRearCamCalibStatus)
                         && (l.OnLineFrontLeftCamCalibStatus == r.OnLineFrontLeftCamCalibStatus)
                         && (l.OnLineFrontRightCamCalibStatus == r.OnLineFrontRightCamCalibStatus)
                         && (l.OnLineRearLeftCamCalibStatus == r.OnLineRearLeftCamCalibStatus)
                         && (l.OnLineRearRightCamCalibStatus == r.OnLineRearRightCamCalibStatus)
  );
}

/*!
 * \brief Compare for inequality with another Mode_OnLineIDT instance.
 */
inline bool operator!=(Mode_OnLineIDT const& l,
                       Mode_OnLineIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Mode_OnLineIDT

#endif  // ENDOFLINEEXE_INCLUDE_MODE_ONLINEIDT_IMPL_TYPE_MODE_ONLINEIDT_H_
