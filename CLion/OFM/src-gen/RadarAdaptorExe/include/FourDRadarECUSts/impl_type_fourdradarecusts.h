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
/**        \file  RadarAdaptorExe/include/FourDRadarECUSts/impl_type_fourdradarecusts.h
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

#ifndef RADARADAPTOREXE_INCLUDE_FOURDRADARECUSTS_IMPL_TYPE_FOURDRADARECUSTS_H_
#define RADARADAPTOREXE_INCLUDE_FOURDRADARECUSTS_IMPL_TYPE_FOURDRADARECUSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CalibrationSts/impl_type_calibrationsts.h"
#include "ECUFailureE2E/impl_type_ecufailuree2e.h"
#include "ECUFailureNVM/impl_type_ecufailurenvm.h"
#include "ECUFailurePlausibility/impl_type_ecufailureplausibility.h"
#include "ECUFailureQF/impl_type_ecufailureqf.h"
#include "ECUFailureTemperature/impl_type_ecufailuretemperature.h"
#include "ECUFailureUB/impl_type_ecufailureub.h"
#include "ECUFailureVCS/impl_type_ecufailurevcs.h"
#include "ECUFailureVDY/impl_type_ecufailurevdy.h"
#include "ECUFailureVoltage/impl_type_ecufailurevoltage.h"
#include "FourDChks/impl_type_fourdchks.h"
#include "FourDCntr/impl_type_fourdcntr.h"
#include "OperationMode/impl_type_operationmode.h"

namespace FourDRadarECUSts {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarECUSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarECUSts
 */
struct FourDRadarECUSts {
  using _FourDChks_ref_type = FourDChks::FourDChks;
  using _ECUFailureVoltage_ref_type = ECUFailureVoltage::ECUFailureVoltage;
  using _FourDCntr_ref_type = FourDCntr::FourDCntr;
  using _CalibrationSts_ref_type = CalibrationSts::CalibrationSts;
  using _OperationMode_ref_type = OperationMode::OperationMode;
  using _ECUFailurePlausibility_ref_type = ECUFailurePlausibility::ECUFailurePlausibility;
  using _ECUFailureTemperature_ref_type = ECUFailureTemperature::ECUFailureTemperature;
  using _ECUFailureVDY_ref_type = ECUFailureVDY::ECUFailureVDY;
  using _ECUFailureNVM_ref_type = ECUFailureNVM::ECUFailureNVM;
  using _ECUFailureE2E_ref_type = ECUFailureE2E::ECUFailureE2E;
  using _ECUFailureUB_ref_type = ECUFailureUB::ECUFailureUB;
  using _ECUFailureQF_ref_type = ECUFailureQF::ECUFailureQF;
  using _ECUFailureVCS_ref_type = ECUFailureVCS::ECUFailureVCS;

  _FourDChks_ref_type FourDChks_ref;
  _ECUFailureVoltage_ref_type ECUFailureVoltage_ref;
  _FourDCntr_ref_type FourDCntr_ref;
  _CalibrationSts_ref_type CalibrationSts_ref;
  _OperationMode_ref_type OperationMode_ref;
  _ECUFailurePlausibility_ref_type ECUFailurePlausibility_ref;
  _ECUFailureTemperature_ref_type ECUFailureTemperature_ref;
  _ECUFailureVDY_ref_type ECUFailureVDY_ref;
  _ECUFailureNVM_ref_type ECUFailureNVM_ref;
  _ECUFailureE2E_ref_type ECUFailureE2E_ref;
  _ECUFailureUB_ref_type ECUFailureUB_ref;
  _ECUFailureQF_ref_type ECUFailureQF_ref;
  _ECUFailureVCS_ref_type ECUFailureVCS_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarECUSts instance.
 */
inline bool operator==(FourDRadarECUSts const& l,
                       FourDRadarECUSts const& r) noexcept {
  return (&l == &r) || ((l.FourDChks_ref == r.FourDChks_ref)
                         && (l.ECUFailureVoltage_ref == r.ECUFailureVoltage_ref)
                         && (l.FourDCntr_ref == r.FourDCntr_ref)
                         && (l.CalibrationSts_ref == r.CalibrationSts_ref)
                         && (l.OperationMode_ref == r.OperationMode_ref)
                         && (l.ECUFailurePlausibility_ref == r.ECUFailurePlausibility_ref)
                         && (l.ECUFailureTemperature_ref == r.ECUFailureTemperature_ref)
                         && (l.ECUFailureVDY_ref == r.ECUFailureVDY_ref)
                         && (l.ECUFailureNVM_ref == r.ECUFailureNVM_ref)
                         && (l.ECUFailureE2E_ref == r.ECUFailureE2E_ref)
                         && (l.ECUFailureUB_ref == r.ECUFailureUB_ref)
                         && (l.ECUFailureQF_ref == r.ECUFailureQF_ref)
                         && (l.ECUFailureVCS_ref == r.ECUFailureVCS_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarECUSts instance.
 */
inline bool operator!=(FourDRadarECUSts const& l,
                       FourDRadarECUSts const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarECUSts

#endif  // RADARADAPTOREXE_INCLUDE_FOURDRADARECUSTS_IMPL_TYPE_FOURDRADARECUSTS_H_
