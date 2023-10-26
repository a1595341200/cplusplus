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
/**        \file  TrafficLightAttentionExe/include/ObjPpty2VccGroup_1IDT/impl_type_objppty2vccgroup_1idt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJPPTY2VCCGROUP_1IDT_IMPL_TYPE_OBJPPTY2VCCGROUP_1IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJPPTY2VCCGROUP_1IDT_IMPL_TYPE_OBJPPTY2VCCGROUP_1IDT_H_

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
#include "ObjLaneAssignment1IDT/impl_type_objlaneassignment1idt.h"
#include "ObjNearestSide1IDT/impl_type_objnearestside1idt.h"
#include "ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT/impl_type_objppty1vccemgylanekeepaidposnqly0idt.h"
#include "ObjPpty1VccMdlOfMtn0IDT/impl_type_objppty1vccmdlofmtn0idt.h"
#include "ObjPpty1VccTrfcJamAssiQly0IDT/impl_type_objppty1vcctrfcjamassiqly0idt.h"
#include "ObjPpty1VccTrfcSceno0IDT/impl_type_objppty1vcctrfcsceno0idt.h"
#include "Relbl1VccIDT/impl_type_relbl1vccidt.h"
#include "Relbl3VccIDT/impl_type_relbl3vccidt.h"
#include "Relbl4VccIDT/impl_type_relbl4vccidt.h"
#include "SnsrDataSts1VccIDT/impl_type_snsrdatasts1vccidt.h"
#include "e_ObjLostSts_tIDT/impl_type_e_objloststs_tidt.h"
#include "singleIDT/impl_type_singleidt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ObjPpty2VccGroup_1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjPpty2VccGroup_1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjPpty2VccGroup_1IDT
 */
struct ObjPpty2VccGroup_1IDT {
  using Idn_generated_type = uint8IDT::uint8IDT;
  using VisnId_generated_type = uint8IDT::uint8IDT;
  using Sts_generated_type = SnsrDataSts1VccIDT::SnsrDataSts1VccIDT;
  using MdlOfMtn_generated_type = ObjPpty1VccMdlOfMtn0IDT::ObjPpty1VccMdlOfMtn0IDT;
  using TrfcSceno_generated_type = ObjPpty1VccTrfcSceno0IDT::ObjPpty1VccTrfcSceno0IDT;
  using CllsnMtgtnByBrkgPrimQly_generated_type = Relbl4VccIDT::Relbl4VccIDT;
  using CllsnMtgtnByBrkgSecQly_generated_type = Relbl1VccIDT::Relbl1VccIDT;
  using CllsnWarnFwdQly_generated_type = Relbl1VccIDT::Relbl1VccIDT;
  using ObjTrfcJamAssiQly_generated_type = ObjPpty1VccTrfcJamAssiQly0IDT::ObjPpty1VccTrfcJamAssiQly0IDT;
  using DstLatFromMidOfLaneSelfQly_generated_type = Relbl3VccIDT::Relbl3VccIDT;
  using EmgyLaneKeepAidPosnQly_generated_type = ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT::ObjPpty1VccEmgyLaneKeepAidPosnQly0IDT;
  using PosnLgtStdDe_generated_type = singleIDT::singleIDT;
  using PosnLatStdDe_generated_type = singleIDT::singleIDT;
  using AgDirStdDe_generated_type = singleIDT::singleIDT;
  using SpdStdDe_generated_type = singleIDT::singleIDT;
  using AStdDe_generated_type = singleIDT::singleIDT;
  using FusnSrc_generated_type = uint8IDT::uint8IDT;
  using TimeStamp_generated_type = uint32IDT::uint32IDT;
  using Age_generated_type = uint32IDT::uint32IDT;
  using ExistConf_generated_type = singleIDT::singleIDT;
  using ClassConf_generated_type = singleIDT::singleIDT;
  using NearestSide_generated_type = ObjNearestSide1IDT::ObjNearestSide1IDT;
  using DistanceToLeftLaneLine_generated_type = singleIDT::singleIDT;
  using DistanceToRightLaneLine_generated_type = singleIDT::singleIDT;
  using DistanceToLeftLaneLineSTD_generated_type = singleIDT::singleIDT;
  using DistanceToRightLaneLineSTD_generated_type = singleIDT::singleIDT;
  using LaneAssignment_generated_type = ObjLaneAssignment1IDT::ObjLaneAssignment1IDT;
  using ObjLostSts_generated_type = e_ObjLostSts_tIDT::e_ObjLostSts_tIDT;
  using Score_generated_type = singleIDT::singleIDT;

  Idn_generated_type Idn;
  VisnId_generated_type VisnId;
  Sts_generated_type Sts;
  MdlOfMtn_generated_type MdlOfMtn;
  TrfcSceno_generated_type TrfcSceno;
  CllsnMtgtnByBrkgPrimQly_generated_type CllsnMtgtnByBrkgPrimQly;
  CllsnMtgtnByBrkgSecQly_generated_type CllsnMtgtnByBrkgSecQly;
  CllsnWarnFwdQly_generated_type CllsnWarnFwdQly;
  ObjTrfcJamAssiQly_generated_type ObjTrfcJamAssiQly;
  DstLatFromMidOfLaneSelfQly_generated_type DstLatFromMidOfLaneSelfQly;
  EmgyLaneKeepAidPosnQly_generated_type EmgyLaneKeepAidPosnQly;
  PosnLgtStdDe_generated_type PosnLgtStdDe;
  PosnLatStdDe_generated_type PosnLatStdDe;
  AgDirStdDe_generated_type AgDirStdDe;
  SpdStdDe_generated_type SpdStdDe;
  AStdDe_generated_type AStdDe;
  FusnSrc_generated_type FusnSrc;
  TimeStamp_generated_type TimeStamp;
  Age_generated_type Age;
  ExistConf_generated_type ExistConf;
  ClassConf_generated_type ClassConf;
  NearestSide_generated_type NearestSide;
  DistanceToLeftLaneLine_generated_type DistanceToLeftLaneLine;
  DistanceToRightLaneLine_generated_type DistanceToRightLaneLine;
  DistanceToLeftLaneLineSTD_generated_type DistanceToLeftLaneLineSTD;
  DistanceToRightLaneLineSTD_generated_type DistanceToRightLaneLineSTD;
  LaneAssignment_generated_type LaneAssignment;
  ObjLostSts_generated_type ObjLostSts;
  Score_generated_type Score;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another ObjPpty2VccGroup_1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(ObjPpty2VccGroup_1IDT const& l,
                       ObjPpty2VccGroup_1IDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.Idn == r.Idn)
                         && (l.VisnId == r.VisnId)
                         && (l.Sts == r.Sts)
                         && (l.MdlOfMtn == r.MdlOfMtn)
                         && (l.TrfcSceno == r.TrfcSceno)
                         && (l.CllsnMtgtnByBrkgPrimQly == r.CllsnMtgtnByBrkgPrimQly)
                         && (l.CllsnMtgtnByBrkgSecQly == r.CllsnMtgtnByBrkgSecQly)
                         && (l.CllsnWarnFwdQly == r.CllsnWarnFwdQly)
                         && (l.ObjTrfcJamAssiQly == r.ObjTrfcJamAssiQly)
                         && (l.DstLatFromMidOfLaneSelfQly == r.DstLatFromMidOfLaneSelfQly)
                         && (l.EmgyLaneKeepAidPosnQly == r.EmgyLaneKeepAidPosnQly)
                         && compare_float(l.PosnLgtStdDe, r.PosnLgtStdDe)
                         && compare_float(l.PosnLatStdDe, r.PosnLatStdDe)
                         && compare_float(l.AgDirStdDe, r.AgDirStdDe)
                         && compare_float(l.SpdStdDe, r.SpdStdDe)
                         && compare_float(l.AStdDe, r.AStdDe)
                         && (l.FusnSrc == r.FusnSrc)
                         && (l.TimeStamp == r.TimeStamp)
                         && (l.Age == r.Age)
                         && compare_float(l.ExistConf, r.ExistConf)
                         && compare_float(l.ClassConf, r.ClassConf)
                         && (l.NearestSide == r.NearestSide)
                         && compare_float(l.DistanceToLeftLaneLine, r.DistanceToLeftLaneLine)
                         && compare_float(l.DistanceToRightLaneLine, r.DistanceToRightLaneLine)
                         && compare_float(l.DistanceToLeftLaneLineSTD, r.DistanceToLeftLaneLineSTD)
                         && compare_float(l.DistanceToRightLaneLineSTD, r.DistanceToRightLaneLineSTD)
                         && (l.LaneAssignment == r.LaneAssignment)
                         && (l.ObjLostSts == r.ObjLostSts)
                         && compare_float(l.Score, r.Score)
  );
}

/*!
 * \brief   Compare for inequality with another ObjPpty2VccGroup_1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(ObjPpty2VccGroup_1IDT const& l,
                       ObjPpty2VccGroup_1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjPpty2VccGroup_1IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJPPTY2VCCGROUP_1IDT_IMPL_TYPE_OBJPPTY2VCCGROUP_1IDT_H_
