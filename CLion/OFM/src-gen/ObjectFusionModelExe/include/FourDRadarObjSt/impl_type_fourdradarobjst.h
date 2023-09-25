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
/**        \file  ObjectFusionModelExe/include/FourDRadarObjSt/impl_type_fourdradarobjst.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJST_IMPL_TYPE_FOURDRADAROBJST_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJST_IMPL_TYPE_FOURDRADAROBJST_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Classification/impl_type_classification.h"
#include "DistX/impl_type_distx.h"
#include "DistXStd/impl_type_distxstd.h"
#include "DistY/impl_type_disty.h"
#include "DistYStd/impl_type_distystd.h"
#include "DistZ/impl_type_distz.h"
#include "DistZStd/impl_type_distzstd.h"
#include "DynamicProperty/impl_type_dynamicproperty.h"
#include "FourDChks/impl_type_fourdobjchks.h"
#include "FourDCntr/impl_type_fourdobjcntr.h"
#include "FourDID/impl_type_fourdid.h"
#include "HeadingAngle/impl_type_fourdheadingangle.h"
#include "LifeCycles/impl_type_lifecycles.h"
#include "ObjBoundingBoxHeight/impl_type_objboundingboxheight.h"
#include "ObjBoundingBoxLength/impl_type_objboundingboxlength.h"
#include "ObjBoundingBoxWidth/impl_type_objboundingboxwidth.h"
#include "ObjNearestPtX/impl_type_objnearestptx.h"
#include "ObjNearestPtY/impl_type_objnearestpty.h"
#include "ObjNearestPtZ/impl_type_objnearestptz.h"
#include "ObjSNR/impl_type_objsnr.h"
#include "ObjXAccRel/impl_type_objxaccrel.h"
#include "ObjYAccRel/impl_type_objyaccrel.h"
#include "ObstacleProbability/impl_type_obstacleprobability.h"
#include "ProbabilityOfExistence/impl_type_probabilityofexistence.h"
#include "RCS/impl_type_rcs.h"
#include "TargetClassificationConfidence/impl_type_targetclassificationconfidence.h"
#include "UpdateFlag/impl_type_updateflag.h"
#include "VabsX/impl_type_vabsx.h"
#include "VabsXStd/impl_type_vabsxstd.h"
#include "VabsY/impl_type_vabsy.h"
#include "VabsYStd/impl_type_vabsystd.h"
#include "ValidFlag/impl_type_validflag.h"

namespace FourDRadarObjSt {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjSt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjSt
 */
struct FourDRadarObjSt {
  using _FourDID_ref_type = FourDID::FourDID;
  using _ObstacleProbability_ref_type = ObstacleProbability::ObstacleProbability;
  using _VabsX_ref_type = VabsX::VabsX;
  using _VabsXStd_ref_type = VabsXStd::VabsXStd;
  using _VabsY_ref_type = VabsY::VabsY;
  using _VabsYStd_ref_type = VabsYStd::VabsYStd;
  using _ValidFlag_ref_type = ValidFlag::ValidFlag;
  using _Classification_ref_type = Classification::Classification;
  using _DynamicProperty_ref_type = DynamicProperty::DynamicProperty;
  using _DistXStd_ref_type = DistXStd::DistXStd;
  using _DistY_ref_type = DistY::DistY;
  using _DistYStd_ref_type = DistYStd::DistYStd;
  using _DistZ_ref_type = DistZ::DistZ;
  using _RCS_ref_type = RCS::RCS;
  using _LifeCycles_ref_type = LifeCycles::LifeCycles;
  using _ProbabilityOfExistence_ref_type = ProbabilityOfExistence::ProbabilityOfExistence;
  using _ObjSNR_ref_type = ObjSNR::ObjSNR;
  using _ObjXAccRel_ref_type = ObjXAccRel::ObjXAccRel;
  using _ObjYAccRel_ref_type = ObjYAccRel::ObjYAccRel;
  using _FourDHeadingAngle_ref_type = HeadingAngle::FourDHeadingAngle;
  using _TargetClassificationConfidence_ref_type = TargetClassificationConfidence::TargetClassificationConfidence;
  using _ObjBoundingBoxHeight_ref_type = ObjBoundingBoxHeight::ObjBoundingBoxHeight;
  using _ObjBoundingBoxLength_ref_type = ObjBoundingBoxLength::ObjBoundingBoxLength;
  using _ObjBoundingBoxWidth_ref_type = ObjBoundingBoxWidth::ObjBoundingBoxWidth;
  using _DistZStd_ref_type = DistZStd::DistZStd;
  using _ObjNearestPtX_ref_type = ObjNearestPtX::ObjNearestPtX;
  using _ObjNearestPtY_ref_type = ObjNearestPtY::ObjNearestPtY;
  using _ObjNearestPtZ_ref_type = ObjNearestPtZ::ObjNearestPtZ;
  using _UpdateFlag_ref_type = UpdateFlag::UpdateFlag;
  using _FourDObjChks_ref_type = FourDChks::FourDObjChks;
  using _DistX_ref_type = DistX::DistX;
  using _FourDObjCntr_ref_type = FourDCntr::FourDObjCntr;

  _FourDID_ref_type FourDID_ref;
  _ObstacleProbability_ref_type ObstacleProbability_ref;
  _VabsX_ref_type VabsX_ref;
  _VabsXStd_ref_type VabsXStd_ref;
  _VabsY_ref_type VabsY_ref;
  _VabsYStd_ref_type VabsYStd_ref;
  _ValidFlag_ref_type ValidFlag_ref;
  _Classification_ref_type Classification_ref;
  _DynamicProperty_ref_type DynamicProperty_ref;
  _DistXStd_ref_type DistXStd_ref;
  _DistY_ref_type DistY_ref;
  _DistYStd_ref_type DistYStd_ref;
  _DistZ_ref_type DistZ_ref;
  _RCS_ref_type RCS_ref;
  _LifeCycles_ref_type LifeCycles_ref;
  _ProbabilityOfExistence_ref_type ProbabilityOfExistence_ref;
  _ObjSNR_ref_type ObjSNR_ref;
  _ObjXAccRel_ref_type ObjXAccRel_ref;
  _ObjYAccRel_ref_type ObjYAccRel_ref;
  _FourDHeadingAngle_ref_type FourDHeadingAngle_ref;
  _TargetClassificationConfidence_ref_type TargetClassificationConfidence_ref;
  _ObjBoundingBoxHeight_ref_type ObjBoundingBoxHeight_ref;
  _ObjBoundingBoxLength_ref_type ObjBoundingBoxLength_ref;
  _ObjBoundingBoxWidth_ref_type ObjBoundingBoxWidth_ref;
  _DistZStd_ref_type DistZStd_ref;
  _ObjNearestPtX_ref_type ObjNearestPtX_ref;
  _ObjNearestPtY_ref_type ObjNearestPtY_ref;
  _ObjNearestPtZ_ref_type ObjNearestPtZ_ref;
  _UpdateFlag_ref_type UpdateFlag_ref;
  _FourDObjChks_ref_type FourDObjChks_ref;
  _DistX_ref_type DistX_ref;
  _FourDObjCntr_ref_type FourDObjCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarObjSt instance.
 */
inline bool operator==(FourDRadarObjSt const& l,
                       FourDRadarObjSt const& r) noexcept {
  return (&l == &r) || ((l.FourDID_ref == r.FourDID_ref)
                         && (l.ObstacleProbability_ref == r.ObstacleProbability_ref)
                         && (l.VabsX_ref == r.VabsX_ref)
                         && (l.VabsXStd_ref == r.VabsXStd_ref)
                         && (l.VabsY_ref == r.VabsY_ref)
                         && (l.VabsYStd_ref == r.VabsYStd_ref)
                         && (l.ValidFlag_ref == r.ValidFlag_ref)
                         && (l.Classification_ref == r.Classification_ref)
                         && (l.DynamicProperty_ref == r.DynamicProperty_ref)
                         && (l.DistXStd_ref == r.DistXStd_ref)
                         && (l.DistY_ref == r.DistY_ref)
                         && (l.DistYStd_ref == r.DistYStd_ref)
                         && (l.DistZ_ref == r.DistZ_ref)
                         && (l.RCS_ref == r.RCS_ref)
                         && (l.LifeCycles_ref == r.LifeCycles_ref)
                         && (l.ProbabilityOfExistence_ref == r.ProbabilityOfExistence_ref)
                         && (l.ObjSNR_ref == r.ObjSNR_ref)
                         && (l.ObjXAccRel_ref == r.ObjXAccRel_ref)
                         && (l.ObjYAccRel_ref == r.ObjYAccRel_ref)
                         && (l.FourDHeadingAngle_ref == r.FourDHeadingAngle_ref)
                         && (l.TargetClassificationConfidence_ref == r.TargetClassificationConfidence_ref)
                         && (l.ObjBoundingBoxHeight_ref == r.ObjBoundingBoxHeight_ref)
                         && (l.ObjBoundingBoxLength_ref == r.ObjBoundingBoxLength_ref)
                         && (l.ObjBoundingBoxWidth_ref == r.ObjBoundingBoxWidth_ref)
                         && (l.DistZStd_ref == r.DistZStd_ref)
                         && (l.ObjNearestPtX_ref == r.ObjNearestPtX_ref)
                         && (l.ObjNearestPtY_ref == r.ObjNearestPtY_ref)
                         && (l.ObjNearestPtZ_ref == r.ObjNearestPtZ_ref)
                         && (l.UpdateFlag_ref == r.UpdateFlag_ref)
                         && (l.FourDObjChks_ref == r.FourDObjChks_ref)
                         && (l.DistX_ref == r.DistX_ref)
                         && (l.FourDObjCntr_ref == r.FourDObjCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarObjSt instance.
 */
inline bool operator!=(FourDRadarObjSt const& l,
                       FourDRadarObjSt const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarObjSt

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJST_IMPL_TYPE_FOURDRADAROBJST_H_
