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
/**        \file  ObjectFusionModelExe/include/FrntCamVisObjIDT/impl_type_frntcamvisobjidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMVISOBJIDT_IMPL_TYPE_FRNTCAMVISOBJIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMVISOBJIDT_IMPL_TYPE_FRNTCAMVISOBJIDT_H_

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
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "CamObjPose1IDT/impl_type_camobjpose1idt.h"
#include "CamObjTyp1IDT/impl_type_camobjtyp1idt.h"
#include "CmsConfidence1IDT/impl_type_cmsconfidence1idt.h"
#include "ObjLaneAssignment1IDT/impl_type_objlaneassignment1idt.h"
#include "ObjNearestSide1IDT/impl_type_objnearestside1idt.h"
#include "ObjTrackSts1IDT/impl_type_objtracksts1idt.h"
#include "ObjTurnIndicator1IDT/impl_type_objturnindicator1idt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "singleIDT/impl_type_singleidt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace FrntCamVisObjIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FrntCamVisObjIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FrntCamVisObjIDT
 */
struct FrntCamVisObjIDT {
  using Angle_generated_type = float32IDT::float32IDT;
  using AngleStdDev_generated_type = float32IDT::float32IDT;
  using HeadingAngle_generated_type = float32IDT::float32IDT;
  using HeadingAngleStdDev_generated_type = float32IDT::float32IDT;
  using Height_generated_type = float32IDT::float32IDT;
  using HeightStdDev_generated_type = float32IDT::float32IDT;
  using ObjWidth_generated_type = float32IDT::float32IDT;
  using WidthStdDev_generated_type = float32IDT::float32IDT;
  using CamObjLength_generated_type = float32IDT::float32IDT;
  using LengthStdDev_generated_type = float32IDT::float32IDT;
  using LgtPos_generated_type = float32IDT::float32IDT;
  using LgtPosStdDev_generated_type = float32IDT::float32IDT;
  using LatPos_generated_type = float32IDT::float32IDT;
  using LatPosStdDev_generated_type = float32IDT::float32IDT;
  using LgtVel_generated_type = float32IDT::float32IDT;
  using LgtVelStdDev_generated_type = float32IDT::float32IDT;
  using LatVel_generated_type = float32IDT::float32IDT;
  using LatVelStdDev_generated_type = float32IDT::float32IDT;
  using LgtAcc_generated_type = float32IDT::float32IDT;
  using LgtAccStdDev_generated_type = float32IDT::float32IDT;
  using LatAcc_generated_type = float32IDT::float32IDT;
  using LatAccStdDev_generated_type = float32IDT::float32IDT;
  using LaneOffsetLeft_generated_type = float32IDT::float32IDT;
  using LaneOffsetLeftStdDev_generated_type = float32IDT::float32IDT;
  using LaneOffsetRight_generated_type = float32IDT::float32IDT;
  using LaneOffsetRightStdDev_generated_type = float32IDT::float32IDT;
  using CamObjId_generated_type = uint8IDT::uint8IDT;
  using CamObjType_generated_type = CamObjTyp1IDT::CamObjTyp1IDT;
  using ClassConfidence_generated_type = float32IDT::float32IDT;
  using ExsistConfidence_generated_type = float32IDT::float32IDT;
  using CamObjPose_generated_type = CamObjPose1IDT::CamObjPose1IDT;
  using DetectionHistory_generated_type = uint8IDT::uint8IDT;
  using LaneAssignment_generated_type = ObjLaneAssignment1IDT::ObjLaneAssignment1IDT;
  using NearestSide_generated_type = ObjNearestSide1IDT::ObjNearestSide1IDT;
  using TrackSts_generated_type = ObjTrackSts1IDT::ObjTrackSts1IDT;
  using TurnIndicator_generated_type = ObjTurnIndicator1IDT::ObjTurnIndicator1IDT;
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using CmsConfidence_generated_type = CmsConfidence1IDT::CmsConfidence1IDT;
  using ImgFrameCtr_generated_type = uint32IDT::uint32IDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;
  using Age2_generated_type = uint32IDT::uint32IDT;
  using Valid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using ISPTimeStamp_generated_type = uint32IDT::uint32IDT;
  using isCIPV_generated_type = Bool1VccIDT::Bool1VccIDT;
  using isSecCIPV_generated_type = Bool1VccIDT::Bool1VccIDT;
  using isLMC_generated_type = Bool1VccIDT::Bool1VccIDT;
  using isRMC_generated_type = Bool1VccIDT::Bool1VccIDT;
  using isMCP_generated_type = Bool1VccIDT::Bool1VccIDT;
  using widthTrunc_generated_type = Bool1VccIDT::Bool1VccIDT;
  using heightTrunc_generated_type = Bool1VccIDT::Bool1VccIDT;
  using occFlag_generated_type = Bool1VccIDT::Bool1VccIDT;
  using occLevel_generated_type = uint8IDT::uint8IDT;
  using CutIn_generated_type = Bool1VccIDT::Bool1VccIDT;
  using CutInLength_generated_type = singleIDT::singleIDT;

  Angle_generated_type Angle;
  AngleStdDev_generated_type AngleStdDev;
  HeadingAngle_generated_type HeadingAngle;
  HeadingAngleStdDev_generated_type HeadingAngleStdDev;
  Height_generated_type Height;
  HeightStdDev_generated_type HeightStdDev;
  ObjWidth_generated_type ObjWidth;
  WidthStdDev_generated_type WidthStdDev;
  CamObjLength_generated_type CamObjLength;
  LengthStdDev_generated_type LengthStdDev;
  LgtPos_generated_type LgtPos;
  LgtPosStdDev_generated_type LgtPosStdDev;
  LatPos_generated_type LatPos;
  LatPosStdDev_generated_type LatPosStdDev;
  LgtVel_generated_type LgtVel;
  LgtVelStdDev_generated_type LgtVelStdDev;
  LatVel_generated_type LatVel;
  LatVelStdDev_generated_type LatVelStdDev;
  LgtAcc_generated_type LgtAcc;
  LgtAccStdDev_generated_type LgtAccStdDev;
  LatAcc_generated_type LatAcc;
  LatAccStdDev_generated_type LatAccStdDev;
  LaneOffsetLeft_generated_type LaneOffsetLeft;
  LaneOffsetLeftStdDev_generated_type LaneOffsetLeftStdDev;
  LaneOffsetRight_generated_type LaneOffsetRight;
  LaneOffsetRightStdDev_generated_type LaneOffsetRightStdDev;
  CamObjId_generated_type CamObjId;
  CamObjType_generated_type CamObjType;
  ClassConfidence_generated_type ClassConfidence;
  ExsistConfidence_generated_type ExsistConfidence;
  CamObjPose_generated_type CamObjPose;
  DetectionHistory_generated_type DetectionHistory;
  LaneAssignment_generated_type LaneAssignment;
  NearestSide_generated_type NearestSide;
  TrackSts_generated_type TrackSts;
  TurnIndicator_generated_type TurnIndicator;
  CamChks_generated_type CamChks;
  CamCntr_generated_type CamCntr;
  CmsConfidence_generated_type CmsConfidence;
  ImgFrameCtr_generated_type ImgFrameCtr;
  CamTimeStamp_generated_type CamTimeStamp;
  Age2_generated_type Age2;
  Valid_generated_type Valid;
  ISPTimeStamp_generated_type ISPTimeStamp;
  isCIPV_generated_type isCIPV;
  isSecCIPV_generated_type isSecCIPV;
  isLMC_generated_type isLMC;
  isRMC_generated_type isRMC;
  isMCP_generated_type isMCP;
  widthTrunc_generated_type widthTrunc;
  heightTrunc_generated_type heightTrunc;
  occFlag_generated_type occFlag;
  occLevel_generated_type occLevel;
  CutIn_generated_type CutIn;
  CutInLength_generated_type CutInLength;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another FrntCamVisObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(FrntCamVisObjIDT const& l,
                       FrntCamVisObjIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.Angle, r.Angle)
                         && compare_float(l.AngleStdDev, r.AngleStdDev)
                         && compare_float(l.HeadingAngle, r.HeadingAngle)
                         && compare_float(l.HeadingAngleStdDev, r.HeadingAngleStdDev)
                         && compare_float(l.Height, r.Height)
                         && compare_float(l.HeightStdDev, r.HeightStdDev)
                         && compare_float(l.ObjWidth, r.ObjWidth)
                         && compare_float(l.WidthStdDev, r.WidthStdDev)
                         && compare_float(l.CamObjLength, r.CamObjLength)
                         && compare_float(l.LengthStdDev, r.LengthStdDev)
                         && compare_float(l.LgtPos, r.LgtPos)
                         && compare_float(l.LgtPosStdDev, r.LgtPosStdDev)
                         && compare_float(l.LatPos, r.LatPos)
                         && compare_float(l.LatPosStdDev, r.LatPosStdDev)
                         && compare_float(l.LgtVel, r.LgtVel)
                         && compare_float(l.LgtVelStdDev, r.LgtVelStdDev)
                         && compare_float(l.LatVel, r.LatVel)
                         && compare_float(l.LatVelStdDev, r.LatVelStdDev)
                         && compare_float(l.LgtAcc, r.LgtAcc)
                         && compare_float(l.LgtAccStdDev, r.LgtAccStdDev)
                         && compare_float(l.LatAcc, r.LatAcc)
                         && compare_float(l.LatAccStdDev, r.LatAccStdDev)
                         && compare_float(l.LaneOffsetLeft, r.LaneOffsetLeft)
                         && compare_float(l.LaneOffsetLeftStdDev, r.LaneOffsetLeftStdDev)
                         && compare_float(l.LaneOffsetRight, r.LaneOffsetRight)
                         && compare_float(l.LaneOffsetRightStdDev, r.LaneOffsetRightStdDev)
                         && (l.CamObjId == r.CamObjId)
                         && (l.CamObjType == r.CamObjType)
                         && compare_float(l.ClassConfidence, r.ClassConfidence)
                         && compare_float(l.ExsistConfidence, r.ExsistConfidence)
                         && (l.CamObjPose == r.CamObjPose)
                         && (l.DetectionHistory == r.DetectionHistory)
                         && (l.LaneAssignment == r.LaneAssignment)
                         && (l.NearestSide == r.NearestSide)
                         && (l.TrackSts == r.TrackSts)
                         && (l.TurnIndicator == r.TurnIndicator)
                         && (l.CamChks == r.CamChks)
                         && (l.CamCntr == r.CamCntr)
                         && (l.CmsConfidence == r.CmsConfidence)
                         && (l.ImgFrameCtr == r.ImgFrameCtr)
                         && (l.CamTimeStamp == r.CamTimeStamp)
                         && (l.Age2 == r.Age2)
                         && (l.Valid == r.Valid)
                         && (l.ISPTimeStamp == r.ISPTimeStamp)
                         && (l.isCIPV == r.isCIPV)
                         && (l.isSecCIPV == r.isSecCIPV)
                         && (l.isLMC == r.isLMC)
                         && (l.isRMC == r.isRMC)
                         && (l.isMCP == r.isMCP)
                         && (l.widthTrunc == r.widthTrunc)
                         && (l.heightTrunc == r.heightTrunc)
                         && (l.occFlag == r.occFlag)
                         && (l.occLevel == r.occLevel)
                         && (l.CutIn == r.CutIn)
                         && compare_float(l.CutInLength, r.CutInLength)
  );
}

/*!
 * \brief   Compare for inequality with another FrntCamVisObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(FrntCamVisObjIDT const& l,
                       FrntCamVisObjIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FrntCamVisObjIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMVISOBJIDT_IMPL_TYPE_FRNTCAMVISOBJIDT_H_
