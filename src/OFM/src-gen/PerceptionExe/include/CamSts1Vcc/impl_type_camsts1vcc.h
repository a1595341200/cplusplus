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
/**        \file  PerceptionExe/include/CamSts1Vcc/impl_type_camsts1vcc.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_CAMSTS1VCC_IMPL_TYPE_CAMSTS1VCC_H_
#define PERCEPTIONEXE_INCLUDE_CAMSTS1VCC_IMPL_TYPE_CAMSTS1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Blockage/impl_type_blockage.h"
#include "CamStsChks/impl_type_camstschks.h"
#include "CamStsChks/impl_type_camstscntr.h"
#include "Condensation/impl_type_condensation.h"
#include "DynCalibration/impl_type_dyncalibration.h"
#include "Fault/impl_type_fault.h"
#include "StaticCalibration/impl_type_staticcalibration.h"

namespace CamSts1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type CamSts1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CamSts1Vcc
 */
struct CamSts1Vcc {
  using _Blockage_ref_type = Blockage::Blockage;
  using _Condensation_ref_type = Condensation::Condensation;
  using _StaticCalibration_ref_type = StaticCalibration::StaticCalibration;
  using _DynCalibration_ref_type = DynCalibration::DynCalibration;
  using _Fault_ref_type = Fault::Fault;
  using _CamStsChks_ref_type = CamStsChks::CamStsChks;
  using _CamStsCntr_ref_type = CamStsChks::CamStsCntr;

  _Blockage_ref_type Blockage_ref;
  _Condensation_ref_type Condensation_ref;
  _StaticCalibration_ref_type StaticCalibration_ref;
  _DynCalibration_ref_type DynCalibration_ref;
  _Fault_ref_type Fault_ref;
  _CamStsChks_ref_type CamStsChks_ref;
  _CamStsCntr_ref_type CamStsCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another CamSts1Vcc instance.
 */
inline bool operator==(CamSts1Vcc const& l,
                       CamSts1Vcc const& r) noexcept {
  return (&l == &r) || ((l.Blockage_ref == r.Blockage_ref)
                         && (l.Condensation_ref == r.Condensation_ref)
                         && (l.StaticCalibration_ref == r.StaticCalibration_ref)
                         && (l.DynCalibration_ref == r.DynCalibration_ref)
                         && (l.Fault_ref == r.Fault_ref)
                         && (l.CamStsChks_ref == r.CamStsChks_ref)
                         && (l.CamStsCntr_ref == r.CamStsCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another CamSts1Vcc instance.
 */
inline bool operator!=(CamSts1Vcc const& l,
                       CamSts1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace CamSts1Vcc

#endif  // PERCEPTIONEXE_INCLUDE_CAMSTS1VCC_IMPL_TYPE_CAMSTS1VCC_H_
