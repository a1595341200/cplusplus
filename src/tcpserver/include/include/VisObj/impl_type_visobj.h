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
/**        \file  ObjectFusionModelExe/include/VisObj/impl_type_visobj.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_VISOBJ_IMPL_TYPE_VISOBJ_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_VISOBJ_IMPL_TYPE_VISOBJ_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Age2/impl_type_age2.h"
#include "Angle/impl_type_angle.h"
#include "AngleStdDev/impl_type_anglestddev.h"
#include "CamChks/impl_type_camchks.h"
#include "CamCntr/impl_type_camcntr.h"
#include "CamObjId/impl_type_camobjid.h"
#include "CamObjLength/impl_type_camobjlength.h"
#include "CamObjPose/impl_type_camobjpose.h"
#include "CamObjType/impl_type_camobjtype.h"
#include "CamTimeStamp/impl_type_camtimestamp.h"
#include "ClassConfidence/impl_type_classconfidence.h"
#include "CmsConfidence/impl_type_cmsconfidence.h"
#include "DetectionHistory/impl_type_detectionhistory.h"
#include "ExsistConfidence/impl_type_exsistconfidence.h"
#include "HeadingAngle/impl_type_headingangle.h"
#include "HeadingAngleStdDev/impl_type_headinganglestddev.h"
#include "Height/impl_type_height.h"
#include "HeightStdDev/impl_type_heightstddev.h"
#include "ImgFrameCtr/impl_type_imgframectr.h"
#include "LaneAssignment/impl_type_laneassignment.h"
#include "LaneOffsetLeft/impl_type_laneoffsetleft.h"
#include "LaneOffsetLeftStdDev/impl_type_laneoffsetleftstddev.h"
#include "LaneOffsetRight/impl_type_laneoffsetright.h"
#include "LaneOffsetRightStdDev/impl_type_laneoffsetrightstddev.h"
#include "LatAcc/impl_type_latacc.h"
#include "LatAccStdDev/impl_type_lataccstddev.h"
#include "LatPos/impl_type_latpos.h"
#include "LatPosStdDev/impl_type_latposstddev.h"
#include "LatVel/impl_type_latvel.h"
#include "LatVelStdDev/impl_type_latvelstddev.h"
#include "LengthStdDev/impl_type_lengthstddev.h"
#include "LgtAcc/impl_type_lgtacc.h"
#include "LgtAccStdDev/impl_type_lgtaccstddev.h"
#include "LgtPos/impl_type_lgtpos.h"
#include "LgtPosStdDev/impl_type_lgtposstddev.h"
#include "LgtVel/impl_type_lgtvel.h"
#include "LgtVelStdDev/impl_type_lgtvelstddev.h"
#include "NearestSide/impl_type_nearestside.h"
#include "ObjWidth/impl_type_objwidth.h"
#include "TrackSts/impl_type_tracksts.h"
#include "TurnIndicator/impl_type_turnindicator.h"
#include "Valid/impl_type_valid.h"
#include "WidthStdDev/impl_type_widthstddev.h"

namespace VisObj {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VisObj.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VisObj
 */
struct VisObj {
  using _Angle_ref_type = Angle::Angle;
  using _AngleStdDev_ref_type = AngleStdDev::AngleStdDev;
  using _HeadingAngle_ref_type = HeadingAngle::HeadingAngle;
  using _HeadingAngleStdDev_ref_type = HeadingAngleStdDev::HeadingAngleStdDev;
  using _Height_ref_type = Height::Height;
  using _HeightStdDev_ref_type = HeightStdDev::HeightStdDev;
  using _ObjWidth_ref_type = ObjWidth::ObjWidth;
  using _WidthStdDev_ref_type = WidthStdDev::WidthStdDev;
  using _CamObjLength_ref_type = CamObjLength::CamObjLength;
  using _LengthStdDev_ref_type = LengthStdDev::LengthStdDev;
  using _LgtPos_ref_type = LgtPos::LgtPos;
  using _LgtPosStdDev_ref_type = LgtPosStdDev::LgtPosStdDev;
  using _LatPos_ref_type = LatPos::LatPos;
  using _LatPosStdDev_ref_type = LatPosStdDev::LatPosStdDev;
  using _LgtVel_ref_type = LgtVel::LgtVel;
  using _LgtVelStdDev_ref_type = LgtVelStdDev::LgtVelStdDev;
  using _LatVel_ref_type = LatVel::LatVel;
  using _LatVelStdDev_ref_type = LatVelStdDev::LatVelStdDev;
  using _LgtAcc_ref_type = LgtAcc::LgtAcc;
  using _LgtAccStdDev_ref_type = LgtAccStdDev::LgtAccStdDev;
  using _LatAcc_ref_type = LatAcc::LatAcc;
  using _LatAccStdDev_ref_type = LatAccStdDev::LatAccStdDev;
  using _LaneOffsetLeft_ref_type = LaneOffsetLeft::LaneOffsetLeft;
  using _LaneOffsetLeftStdDev_ref_type = LaneOffsetLeftStdDev::LaneOffsetLeftStdDev;
  using _LaneOffsetRight_ref_type = LaneOffsetRight::LaneOffsetRight;
  using _LaneOffsetRightStdDev_ref_type = LaneOffsetRightStdDev::LaneOffsetRightStdDev;
  using _CamObjId_ref_type = CamObjId::CamObjId;
  using _CamObjType_ref_type = CamObjType::CamObjType;
  using _ClassConfidence_ref_type = ClassConfidence::ClassConfidence;
  using _ExsistConfidence_ref_type = ExsistConfidence::ExsistConfidence;
  using _CamObjPose_ref_type = CamObjPose::CamObjPose;
  using _DetectionHistory_ref_type = DetectionHistory::DetectionHistory;
  using _LaneAssignment_ref_type = LaneAssignment::LaneAssignment;
  using _NearestSide_ref_type = NearestSide::NearestSide;
  using _TrackSts_ref_type = TrackSts::TrackSts;
  using _TurnIndicator_ref_type = TurnIndicator::TurnIndicator;
  using _CamChks_ref_type = CamChks::CamChks;
  using _CamCntr_ref_type = CamCntr::CamCntr;
  using _CmsConfidence_ref_type = CmsConfidence::CmsConfidence;
  using _ImgFrameCtr_ref_type = ImgFrameCtr::ImgFrameCtr;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;
  using _Age2_ref_type = Age2::Age2;
  using _Valid_ref_type = Valid::Valid;

  _Angle_ref_type Angle_ref;
  _AngleStdDev_ref_type AngleStdDev_ref;
  _HeadingAngle_ref_type HeadingAngle_ref;
  _HeadingAngleStdDev_ref_type HeadingAngleStdDev_ref;
  _Height_ref_type Height_ref;
  _HeightStdDev_ref_type HeightStdDev_ref;
  _ObjWidth_ref_type ObjWidth_ref;
  _WidthStdDev_ref_type WidthStdDev_ref;
  _CamObjLength_ref_type CamObjLength_ref;
  _LengthStdDev_ref_type LengthStdDev_ref;
  _LgtPos_ref_type LgtPos_ref;
  _LgtPosStdDev_ref_type LgtPosStdDev_ref;
  _LatPos_ref_type LatPos_ref;
  _LatPosStdDev_ref_type LatPosStdDev_ref;
  _LgtVel_ref_type LgtVel_ref;
  _LgtVelStdDev_ref_type LgtVelStdDev_ref;
  _LatVel_ref_type LatVel_ref;
  _LatVelStdDev_ref_type LatVelStdDev_ref;
  _LgtAcc_ref_type LgtAcc_ref;
  _LgtAccStdDev_ref_type LgtAccStdDev_ref;
  _LatAcc_ref_type LatAcc_ref;
  _LatAccStdDev_ref_type LatAccStdDev_ref;
  _LaneOffsetLeft_ref_type LaneOffsetLeft_ref;
  _LaneOffsetLeftStdDev_ref_type LaneOffsetLeftStdDev_ref;
  _LaneOffsetRight_ref_type LaneOffsetRight_ref;
  _LaneOffsetRightStdDev_ref_type LaneOffsetRightStdDev_ref;
  _CamObjId_ref_type CamObjId_ref;
  _CamObjType_ref_type CamObjType_ref;
  _ClassConfidence_ref_type ClassConfidence_ref;
  _ExsistConfidence_ref_type ExsistConfidence_ref;
  _CamObjPose_ref_type CamObjPose_ref;
  _DetectionHistory_ref_type DetectionHistory_ref;
  _LaneAssignment_ref_type LaneAssignment_ref;
  _NearestSide_ref_type NearestSide_ref;
  _TrackSts_ref_type TrackSts_ref;
  _TurnIndicator_ref_type TurnIndicator_ref;
  _CamChks_ref_type CamChks_ref;
  _CamCntr_ref_type CamCntr_ref;
  _CmsConfidence_ref_type CmsConfidence_ref;
  _ImgFrameCtr_ref_type ImgFrameCtr_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
  _Age2_ref_type Age2_ref;
  _Valid_ref_type Valid_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VisObj instance.
 */
inline bool operator==(VisObj const& l,
                       VisObj const& r) noexcept {
  return (&l == &r) || ((l.Angle_ref == r.Angle_ref)
                         && (l.AngleStdDev_ref == r.AngleStdDev_ref)
                         && (l.HeadingAngle_ref == r.HeadingAngle_ref)
                         && (l.HeadingAngleStdDev_ref == r.HeadingAngleStdDev_ref)
                         && (l.Height_ref == r.Height_ref)
                         && (l.HeightStdDev_ref == r.HeightStdDev_ref)
                         && (l.ObjWidth_ref == r.ObjWidth_ref)
                         && (l.WidthStdDev_ref == r.WidthStdDev_ref)
                         && (l.CamObjLength_ref == r.CamObjLength_ref)
                         && (l.LengthStdDev_ref == r.LengthStdDev_ref)
                         && (l.LgtPos_ref == r.LgtPos_ref)
                         && (l.LgtPosStdDev_ref == r.LgtPosStdDev_ref)
                         && (l.LatPos_ref == r.LatPos_ref)
                         && (l.LatPosStdDev_ref == r.LatPosStdDev_ref)
                         && (l.LgtVel_ref == r.LgtVel_ref)
                         && (l.LgtVelStdDev_ref == r.LgtVelStdDev_ref)
                         && (l.LatVel_ref == r.LatVel_ref)
                         && (l.LatVelStdDev_ref == r.LatVelStdDev_ref)
                         && (l.LgtAcc_ref == r.LgtAcc_ref)
                         && (l.LgtAccStdDev_ref == r.LgtAccStdDev_ref)
                         && (l.LatAcc_ref == r.LatAcc_ref)
                         && (l.LatAccStdDev_ref == r.LatAccStdDev_ref)
                         && (l.LaneOffsetLeft_ref == r.LaneOffsetLeft_ref)
                         && (l.LaneOffsetLeftStdDev_ref == r.LaneOffsetLeftStdDev_ref)
                         && (l.LaneOffsetRight_ref == r.LaneOffsetRight_ref)
                         && (l.LaneOffsetRightStdDev_ref == r.LaneOffsetRightStdDev_ref)
                         && (l.CamObjId_ref == r.CamObjId_ref)
                         && (l.CamObjType_ref == r.CamObjType_ref)
                         && (l.ClassConfidence_ref == r.ClassConfidence_ref)
                         && (l.ExsistConfidence_ref == r.ExsistConfidence_ref)
                         && (l.CamObjPose_ref == r.CamObjPose_ref)
                         && (l.DetectionHistory_ref == r.DetectionHistory_ref)
                         && (l.LaneAssignment_ref == r.LaneAssignment_ref)
                         && (l.NearestSide_ref == r.NearestSide_ref)
                         && (l.TrackSts_ref == r.TrackSts_ref)
                         && (l.TurnIndicator_ref == r.TurnIndicator_ref)
                         && (l.CamChks_ref == r.CamChks_ref)
                         && (l.CamCntr_ref == r.CamCntr_ref)
                         && (l.CmsConfidence_ref == r.CmsConfidence_ref)
                         && (l.ImgFrameCtr_ref == r.ImgFrameCtr_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
                         && (l.Age2_ref == r.Age2_ref)
                         && (l.Valid_ref == r.Valid_ref)
  );
}

/*!
 * \brief Compare for inequality with another VisObj instance.
 */
inline bool operator!=(VisObj const& l,
                       VisObj const& r) noexcept {
  return !(l == r);
}

}  // namespace VisObj

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_VISOBJ_IMPL_TYPE_VISOBJ_H_
