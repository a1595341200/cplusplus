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
/**        \file  EndOfLineExe/include/Mode_AfterSalesIDT/impl_type_mode_aftersalesidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_MODE_AFTERSALESIDT_IMPL_TYPE_MODE_AFTERSALESIDT_H_
#define ENDOFLINEEXE_INCLUDE_MODE_AFTERSALESIDT_IMPL_TYPE_MODE_AFTERSALESIDT_H_

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

namespace Mode_AfterSalesIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Mode_AfterSalesIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Mode_AfterSalesIDT
 */
struct Mode_AfterSalesIDT {
  using IsValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using AfterSalesFrontCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using AfterSalesRearCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using AfterSalesFrontLeftCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using AfterSalesFrontRightCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using AfterSalesRearLeftCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;
  using AfterSalesRearRightCamCalibStatus_generated_type = EEolCamCalibStsIDT::EEolCamCalibStsIDT;

  IsValid_generated_type IsValid;
  AfterSalesFrontCamCalibStatus_generated_type AfterSalesFrontCamCalibStatus;
  AfterSalesRearCamCalibStatus_generated_type AfterSalesRearCamCalibStatus;
  AfterSalesFrontLeftCamCalibStatus_generated_type AfterSalesFrontLeftCamCalibStatus;
  AfterSalesFrontRightCamCalibStatus_generated_type AfterSalesFrontRightCamCalibStatus;
  AfterSalesRearLeftCamCalibStatus_generated_type AfterSalesRearLeftCamCalibStatus;
  AfterSalesRearRightCamCalibStatus_generated_type AfterSalesRearRightCamCalibStatus;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Mode_AfterSalesIDT instance.
 */
inline bool operator==(Mode_AfterSalesIDT const& l,
                       Mode_AfterSalesIDT const& r) noexcept {
  return (&l == &r) || ((l.IsValid == r.IsValid)
                         && (l.AfterSalesFrontCamCalibStatus == r.AfterSalesFrontCamCalibStatus)
                         && (l.AfterSalesRearCamCalibStatus == r.AfterSalesRearCamCalibStatus)
                         && (l.AfterSalesFrontLeftCamCalibStatus == r.AfterSalesFrontLeftCamCalibStatus)
                         && (l.AfterSalesFrontRightCamCalibStatus == r.AfterSalesFrontRightCamCalibStatus)
                         && (l.AfterSalesRearLeftCamCalibStatus == r.AfterSalesRearLeftCamCalibStatus)
                         && (l.AfterSalesRearRightCamCalibStatus == r.AfterSalesRearRightCamCalibStatus)
  );
}

/*!
 * \brief Compare for inequality with another Mode_AfterSalesIDT instance.
 */
inline bool operator!=(Mode_AfterSalesIDT const& l,
                       Mode_AfterSalesIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Mode_AfterSalesIDT

#endif  // ENDOFLINEEXE_INCLUDE_MODE_AFTERSALESIDT_IMPL_TYPE_MODE_AFTERSALESIDT_H_
