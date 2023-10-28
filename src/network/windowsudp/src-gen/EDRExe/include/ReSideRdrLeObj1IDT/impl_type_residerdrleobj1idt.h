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
/**        \file  EDRExe/include/ReSideRdrLeObj1IDT/impl_type_residerdrleobj1idt.h
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

#ifndef EDREXE_INCLUDE_RESIDERDRLEOBJ1IDT_IMPL_TYPE_RESIDERDRLEOBJ1IDT_H_
#define EDREXE_INCLUDE_RESIDERDRLEOBJ1IDT_IMPL_TYPE_RESIDERDRLEOBJ1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cmath>
#include <cstdint>
#include <limits>
#include <map>
#include <string>
#include <vector>
#include "RdrObjElevnSts1VccIDT/impl_type_rdrobjelevnsts1vccidt.h"
#include "RdrObjMtnPat1IDT/impl_type_rdrobjmtnpat1idt.h"
#include "RdrObjTrackSts1IDT/impl_type_rdrobjtracksts1idt.h"
#include "RdrObjTyp1IDT/impl_type_rdrobjtyp1idt.h"
#include "RdrObjUsedTracker1IDT/impl_type_rdrobjusedtracker1idt.h"
#include "YesNo2VccIDT/impl_type_yesno2vccidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ReSideRdrLeObj1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ReSideRdrLeObj1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ReSideRdrLeObj1IDT
 */
struct ReSideRdrLeObj1IDT {
  using RdrObjChks_generated_type = uint8IDT::uint8IDT;
  using RdrObjAx_generated_type = float32IDT::float32IDT;
  using RdrObjAy_generated_type = float32IDT::float32IDT;
  using RdrObjCoastCnt_generated_type = uint8IDT::uint8IDT;
  using RdrObjCntr_generated_type = uint8IDT::uint8IDT;
  using RdrObjConf_generated_type = float32IDT::float32IDT;
  using RdrObjDx_generated_type = float32IDT::float32IDT;
  using RdrObjDxStdDe_generated_type = float32IDT::float32IDT;
  using RdrObjElevnConf_generated_type = float32IDT::float32IDT;
  using RdrObjElevnSts_generated_type = RdrObjElevnSts1VccIDT::RdrObjElevnSts1VccIDT;
  using RdrObjBoxCenterLat_generated_type = float32IDT::float32IDT;
  using RdrObjBoxCenterLgt_generated_type = float32IDT::float32IDT;
  using RdrObjID_generated_type = uint8IDT::uint8IDT;
  using RdrObjIsInFreeSpace_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrObjMirrProblty_generated_type = float32IDT::float32IDT;
  using RdrObjMtnPat_generated_type = RdrObjMtnPat1IDT::RdrObjMtnPat1IDT;
  using RdrObjNotRealProblty_generated_type = float32IDT::float32IDT;
  using RdrObjStatyCnt_generated_type = uint8IDT::uint8IDT;
  using RdrObjTrackSts_generated_type = RdrObjTrackSts1IDT::RdrObjTrackSts1IDT;
  using RdrObjTypConfBike_generated_type = float32IDT::float32IDT;
  using RdrObjTypConfPed_generated_type = float32IDT::float32IDT;
  using RdrObjTypConfVeh_generated_type = float32IDT::float32IDT;
  using RdrObjTiAlv_generated_type = uint8IDT::uint8IDT;
  using RdrObjVxStdDe_generated_type = uint8IDT::uint8IDT;
  using RdrObjVx_generated_type = float32IDT::float32IDT;
  using RdrObjVyStdDe_generated_type = uint8IDT::uint8IDT;
  using RdrObjVy_generated_type = float32IDT::float32IDT;
  using RdrObjDy_generated_type = float32IDT::float32IDT;
  using RdrObjDyStdDe_generated_type = float32IDT::float32IDT;
  using RdrObjTyp_generated_type = RdrObjTyp1IDT::RdrObjTyp1IDT;
  using RdrObjHeading_generated_type = float32IDT::float32IDT;
  using RdrObjRelVx_generated_type = float32IDT::float32IDT;
  using RdrObjObservationHist_generated_type = uint32IDT::uint32IDT;
  using RdrObjRelVy_generated_type = float32IDT::float32IDT;
  using RdrObjBoxWidth_generated_type = float32IDT::float32IDT;
  using RdrObjBoxLength_generated_type = float32IDT::float32IDT;
  using RdrObjUsedTracker_generated_type = RdrObjUsedTracker1IDT::RdrObjUsedTracker1IDT;
  using RdrObjQualityBits_generated_type = uint32IDT::uint32IDT;

  RdrObjChks_generated_type RdrObjChks;
  RdrObjAx_generated_type RdrObjAx;
  RdrObjAy_generated_type RdrObjAy;
  RdrObjCoastCnt_generated_type RdrObjCoastCnt;
  RdrObjCntr_generated_type RdrObjCntr;
  RdrObjConf_generated_type RdrObjConf;
  RdrObjDx_generated_type RdrObjDx;
  RdrObjDxStdDe_generated_type RdrObjDxStdDe;
  RdrObjElevnConf_generated_type RdrObjElevnConf;
  RdrObjElevnSts_generated_type RdrObjElevnSts;
  RdrObjBoxCenterLat_generated_type RdrObjBoxCenterLat;
  RdrObjBoxCenterLgt_generated_type RdrObjBoxCenterLgt;
  RdrObjID_generated_type RdrObjID;
  RdrObjIsInFreeSpace_generated_type RdrObjIsInFreeSpace;
  RdrObjMirrProblty_generated_type RdrObjMirrProblty;
  RdrObjMtnPat_generated_type RdrObjMtnPat;
  RdrObjNotRealProblty_generated_type RdrObjNotRealProblty;
  RdrObjStatyCnt_generated_type RdrObjStatyCnt;
  RdrObjTrackSts_generated_type RdrObjTrackSts;
  RdrObjTypConfBike_generated_type RdrObjTypConfBike;
  RdrObjTypConfPed_generated_type RdrObjTypConfPed;
  RdrObjTypConfVeh_generated_type RdrObjTypConfVeh;
  RdrObjTiAlv_generated_type RdrObjTiAlv;
  RdrObjVxStdDe_generated_type RdrObjVxStdDe;
  RdrObjVx_generated_type RdrObjVx;
  RdrObjVyStdDe_generated_type RdrObjVyStdDe;
  RdrObjVy_generated_type RdrObjVy;
  RdrObjDy_generated_type RdrObjDy;
  RdrObjDyStdDe_generated_type RdrObjDyStdDe;
  RdrObjTyp_generated_type RdrObjTyp;
  RdrObjHeading_generated_type RdrObjHeading;
  RdrObjRelVx_generated_type RdrObjRelVx;
  RdrObjObservationHist_generated_type RdrObjObservationHist;
  RdrObjRelVy_generated_type RdrObjRelVy;
  RdrObjBoxWidth_generated_type RdrObjBoxWidth;
  RdrObjBoxLength_generated_type RdrObjBoxLength;
  RdrObjUsedTracker_generated_type RdrObjUsedTracker;
  RdrObjQualityBits_generated_type RdrObjQualityBits;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another ReSideRdrLeObj1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(ReSideRdrLeObj1IDT const& l,
                       ReSideRdrLeObj1IDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.RdrObjChks == r.RdrObjChks)
                         && compare_float(l.RdrObjAx, r.RdrObjAx)
                         && compare_float(l.RdrObjAy, r.RdrObjAy)
                         && (l.RdrObjCoastCnt == r.RdrObjCoastCnt)
                         && (l.RdrObjCntr == r.RdrObjCntr)
                         && compare_float(l.RdrObjConf, r.RdrObjConf)
                         && compare_float(l.RdrObjDx, r.RdrObjDx)
                         && compare_float(l.RdrObjDxStdDe, r.RdrObjDxStdDe)
                         && compare_float(l.RdrObjElevnConf, r.RdrObjElevnConf)
                         && (l.RdrObjElevnSts == r.RdrObjElevnSts)
                         && compare_float(l.RdrObjBoxCenterLat, r.RdrObjBoxCenterLat)
                         && compare_float(l.RdrObjBoxCenterLgt, r.RdrObjBoxCenterLgt)
                         && (l.RdrObjID == r.RdrObjID)
                         && (l.RdrObjIsInFreeSpace == r.RdrObjIsInFreeSpace)
                         && compare_float(l.RdrObjMirrProblty, r.RdrObjMirrProblty)
                         && (l.RdrObjMtnPat == r.RdrObjMtnPat)
                         && compare_float(l.RdrObjNotRealProblty, r.RdrObjNotRealProblty)
                         && (l.RdrObjStatyCnt == r.RdrObjStatyCnt)
                         && (l.RdrObjTrackSts == r.RdrObjTrackSts)
                         && compare_float(l.RdrObjTypConfBike, r.RdrObjTypConfBike)
                         && compare_float(l.RdrObjTypConfPed, r.RdrObjTypConfPed)
                         && compare_float(l.RdrObjTypConfVeh, r.RdrObjTypConfVeh)
                         && (l.RdrObjTiAlv == r.RdrObjTiAlv)
                         && (l.RdrObjVxStdDe == r.RdrObjVxStdDe)
                         && compare_float(l.RdrObjVx, r.RdrObjVx)
                         && (l.RdrObjVyStdDe == r.RdrObjVyStdDe)
                         && compare_float(l.RdrObjVy, r.RdrObjVy)
                         && compare_float(l.RdrObjDy, r.RdrObjDy)
                         && compare_float(l.RdrObjDyStdDe, r.RdrObjDyStdDe)
                         && (l.RdrObjTyp == r.RdrObjTyp)
                         && compare_float(l.RdrObjHeading, r.RdrObjHeading)
                         && compare_float(l.RdrObjRelVx, r.RdrObjRelVx)
                         && (l.RdrObjObservationHist == r.RdrObjObservationHist)
                         && compare_float(l.RdrObjRelVy, r.RdrObjRelVy)
                         && compare_float(l.RdrObjBoxWidth, r.RdrObjBoxWidth)
                         && compare_float(l.RdrObjBoxLength, r.RdrObjBoxLength)
                         && (l.RdrObjUsedTracker == r.RdrObjUsedTracker)
                         && (l.RdrObjQualityBits == r.RdrObjQualityBits)
  );
}

/*!
 * \brief   Compare for inequality with another ReSideRdrLeObj1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(ReSideRdrLeObj1IDT const& l,
                       ReSideRdrLeObj1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ReSideRdrLeObj1IDT

#endif  // EDREXE_INCLUDE_RESIDERDRLEOBJ1IDT_IMPL_TYPE_RESIDERDRLEOBJ1IDT_H_
