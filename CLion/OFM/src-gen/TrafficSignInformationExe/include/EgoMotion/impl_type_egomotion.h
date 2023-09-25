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
/**        \file  TrafficSignInformationExe/include/EgoMotion/impl_type_egomotion.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_EGOMOTION_IMPL_TYPE_EGOMOTION_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_EGOMOTION_IMPL_TYPE_EGOMOTION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ALatEgoMotionData/impl_type_alategomotiondata.h"
#include "ALatQfEgoMotionData/impl_type_alatqfegomotiondata.h"
#include "ALgtEgoMotionData/impl_type_algtegomotiondata.h"
#include "ALgtQfEgoMotionData/impl_type_algtqfegomotiondata.h"
#include "AVertEgoMotionData/impl_type_avertegomotiondata.h"
#include "AVertQfEgoMotionData/impl_type_avertqfegomotiondata.h"
#include "AgDirDeltaEgoMotionData/impl_type_agdirdeltaegomotiondata.h"
#include "ChksEgoMotionData/impl_type_chksegomotiondata.h"
#include "CntrEgoMotionData/impl_type_cntregomotiondata.h"
#include "PosnLatDeltaEgoMotionData/impl_type_posnlatdeltaegomotiondata.h"
#include "PosnLgtDeltaEgoMotionData/impl_type_posnlgtdeltaegomotiondata.h"
#include "RollRateEgoMotionData/impl_type_rollrateegomotiondata.h"
#include "RollRateQfEgoMotionData/impl_type_rollrateqfegomotiondata.h"
#include "SpeedEgoMotionData/impl_type_speedegomotiondata.h"
#include "SpeedQfEgoMotionData/impl_type_speedqfegomotiondata.h"
#include "VLatEgoMotionData/impl_type_vlategomotiondata.h"
#include "VLatQfEgoMotionData/impl_type_vlatqfegomotiondata.h"
#include "VLgtEgoMotionData/impl_type_vlgtegomotiondata.h"
#include "VLgtQfEgoMotionData/impl_type_vlgtqfegomotiondata.h"
#include "YawRateEgoMotionData/impl_type_yawrateegomotiondata.h"
#include "YawRateQfEgoMotionData/impl_type_yawrateqfegomotiondata.h"

namespace EgoMotion {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type EgoMotion.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EgoMotion
 */
struct EgoMotion {
  using _SpeedEgoMotionData_ref_type = SpeedEgoMotionData::SpeedEgoMotionData;
  using _SpeedQfEgoMotionData_ref_type = SpeedQfEgoMotionData::SpeedQfEgoMotionData;
  using _VLatEgoMotionData_ref_type = VLatEgoMotionData::VLatEgoMotionData;
  using _VLatQfEgoMotionData_ref_type = VLatQfEgoMotionData::VLatQfEgoMotionData;
  using _VLgtEgoMotionData_ref_type = VLgtEgoMotionData::VLgtEgoMotionData;
  using _VLgtQfEgoMotionData_ref_type = VLgtQfEgoMotionData::VLgtQfEgoMotionData;
  using _ALgtEgoMotionData_ref_type = ALgtEgoMotionData::ALgtEgoMotionData;
  using _ALgtQfEgoMotionData_ref_type = ALgtQfEgoMotionData::ALgtQfEgoMotionData;
  using _ALatEgoMotionData_ref_type = ALatEgoMotionData::ALatEgoMotionData;
  using _ALatQfEgoMotionData_ref_type = ALatQfEgoMotionData::ALatQfEgoMotionData;
  using _YawRateEgoMotionData_ref_type = YawRateEgoMotionData::YawRateEgoMotionData;
  using _PosnLgtDeltaEgoMotionData_ref_type = PosnLgtDeltaEgoMotionData::PosnLgtDeltaEgoMotionData;
  using _PosnLatDeltaEgoMotionData_ref_type = PosnLatDeltaEgoMotionData::PosnLatDeltaEgoMotionData;
  using _AgDirDeltaEgoMotionData_ref_type = AgDirDeltaEgoMotionData::AgDirDeltaEgoMotionData;
  using _AVertEgoMotionData_ref_type = AVertEgoMotionData::AVertEgoMotionData;
  using _AVertQfEgoMotionData_ref_type = AVertQfEgoMotionData::AVertQfEgoMotionData;
  using _RollRateEgoMotionData_ref_type = RollRateEgoMotionData::RollRateEgoMotionData;
  using _RollRateQfEgoMotionData_ref_type = RollRateQfEgoMotionData::RollRateQfEgoMotionData;
  using _YawRateQfEgoMotionData_ref_type = YawRateQfEgoMotionData::YawRateQfEgoMotionData;
  using _ChksEgoMotionData_ref_type = ChksEgoMotionData::ChksEgoMotionData;
  using _CntrEgoMotionData_ref_type = CntrEgoMotionData::CntrEgoMotionData;

  _SpeedEgoMotionData_ref_type SpeedEgoMotionData_ref;
  _SpeedQfEgoMotionData_ref_type SpeedQfEgoMotionData_ref;
  _VLatEgoMotionData_ref_type VLatEgoMotionData_ref;
  _VLatQfEgoMotionData_ref_type VLatQfEgoMotionData_ref;
  _VLgtEgoMotionData_ref_type VLgtEgoMotionData_ref;
  _VLgtQfEgoMotionData_ref_type VLgtQfEgoMotionData_ref;
  _ALgtEgoMotionData_ref_type ALgtEgoMotionData_ref;
  _ALgtQfEgoMotionData_ref_type ALgtQfEgoMotionData_ref;
  _ALatEgoMotionData_ref_type ALatEgoMotionData_ref;
  _ALatQfEgoMotionData_ref_type ALatQfEgoMotionData_ref;
  _YawRateEgoMotionData_ref_type YawRateEgoMotionData_ref;
  _PosnLgtDeltaEgoMotionData_ref_type PosnLgtDeltaEgoMotionData_ref;
  _PosnLatDeltaEgoMotionData_ref_type PosnLatDeltaEgoMotionData_ref;
  _AgDirDeltaEgoMotionData_ref_type AgDirDeltaEgoMotionData_ref;
  _AVertEgoMotionData_ref_type AVertEgoMotionData_ref;
  _AVertQfEgoMotionData_ref_type AVertQfEgoMotionData_ref;
  _RollRateEgoMotionData_ref_type RollRateEgoMotionData_ref;
  _RollRateQfEgoMotionData_ref_type RollRateQfEgoMotionData_ref;
  _YawRateQfEgoMotionData_ref_type YawRateQfEgoMotionData_ref;
  _ChksEgoMotionData_ref_type ChksEgoMotionData_ref;
  _CntrEgoMotionData_ref_type CntrEgoMotionData_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another EgoMotion instance.
 */
inline bool operator==(EgoMotion const& l,
                       EgoMotion const& r) noexcept {
  return (&l == &r) || ((l.SpeedEgoMotionData_ref == r.SpeedEgoMotionData_ref)
                         && (l.SpeedQfEgoMotionData_ref == r.SpeedQfEgoMotionData_ref)
                         && (l.VLatEgoMotionData_ref == r.VLatEgoMotionData_ref)
                         && (l.VLatQfEgoMotionData_ref == r.VLatQfEgoMotionData_ref)
                         && (l.VLgtEgoMotionData_ref == r.VLgtEgoMotionData_ref)
                         && (l.VLgtQfEgoMotionData_ref == r.VLgtQfEgoMotionData_ref)
                         && (l.ALgtEgoMotionData_ref == r.ALgtEgoMotionData_ref)
                         && (l.ALgtQfEgoMotionData_ref == r.ALgtQfEgoMotionData_ref)
                         && (l.ALatEgoMotionData_ref == r.ALatEgoMotionData_ref)
                         && (l.ALatQfEgoMotionData_ref == r.ALatQfEgoMotionData_ref)
                         && (l.YawRateEgoMotionData_ref == r.YawRateEgoMotionData_ref)
                         && (l.PosnLgtDeltaEgoMotionData_ref == r.PosnLgtDeltaEgoMotionData_ref)
                         && (l.PosnLatDeltaEgoMotionData_ref == r.PosnLatDeltaEgoMotionData_ref)
                         && (l.AgDirDeltaEgoMotionData_ref == r.AgDirDeltaEgoMotionData_ref)
                         && (l.AVertEgoMotionData_ref == r.AVertEgoMotionData_ref)
                         && (l.AVertQfEgoMotionData_ref == r.AVertQfEgoMotionData_ref)
                         && (l.RollRateEgoMotionData_ref == r.RollRateEgoMotionData_ref)
                         && (l.RollRateQfEgoMotionData_ref == r.RollRateQfEgoMotionData_ref)
                         && (l.YawRateQfEgoMotionData_ref == r.YawRateQfEgoMotionData_ref)
                         && (l.ChksEgoMotionData_ref == r.ChksEgoMotionData_ref)
                         && (l.CntrEgoMotionData_ref == r.CntrEgoMotionData_ref)
  );
}

/*!
 * \brief Compare for inequality with another EgoMotion instance.
 */
inline bool operator!=(EgoMotion const& l,
                       EgoMotion const& r) noexcept {
  return !(l == r);
}

}  // namespace EgoMotion

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_EGOMOTION_IMPL_TYPE_EGOMOTION_H_
