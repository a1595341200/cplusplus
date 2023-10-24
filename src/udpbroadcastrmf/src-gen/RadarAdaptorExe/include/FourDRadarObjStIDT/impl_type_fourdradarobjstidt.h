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
/**        \file  RadarAdaptorExe/include/FourDRadarObjStIDT/impl_type_fourdradarobjstidt.h
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

#ifndef RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTIDT_IMPL_TYPE_FOURDRADAROBJSTIDT_H_
#define RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTIDT_IMPL_TYPE_FOURDRADAROBJSTIDT_H_

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
#include "Boolean_2IDT/impl_type_boolean_2idt.h"
#include "EClassification1_1IDT/impl_type_eclassification1_1idt.h"
#include "EDynamicProperty_1IDT/impl_type_edynamicproperty_1idt.h"
#include "Validity_1IDT/impl_type_validity_1idt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace FourDRadarObjStIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjStIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjStIDT
 */
struct FourDRadarObjStIDT {
  using FourDID_generated_type = uint8IDT::uint8IDT;
  using ObstacleProbability_generated_type = float32IDT::float32IDT;
  using VabsX_generated_type = float32IDT::float32IDT;
  using VabsXStd_generated_type = float32IDT::float32IDT;
  using VabsY_generated_type = float32IDT::float32IDT;
  using VabsYStd_generated_type = float32IDT::float32IDT;
  using ValidFlag_generated_type = Validity_1IDT::Validity_1IDT;
  using Classification_generated_type = EClassification1_1IDT::EClassification1_1IDT;
  using DynamicProperty_generated_type = EDynamicProperty_1IDT::EDynamicProperty_1IDT;
  using DistXStd_generated_type = float32IDT::float32IDT;
  using DistY_generated_type = float32IDT::float32IDT;
  using DistYStd_generated_type = float32IDT::float32IDT;
  using DistZ_generated_type = float32IDT::float32IDT;
  using RCS_generated_type = float32IDT::float32IDT;
  using LifeCycles_generated_type = uint8IDT::uint8IDT;
  using ProbabilityOfExistence_generated_type = float32IDT::float32IDT;
  using ObjSNR_generated_type = float32IDT::float32IDT;
  using ObjXAccRel_generated_type = float32IDT::float32IDT;
  using ObjYAccRel_generated_type = float32IDT::float32IDT;
  using FourDHeadingAngle_generated_type = float32IDT::float32IDT;
  using TargetClassificationConfidence_generated_type = float32IDT::float32IDT;
  using ObjBoundingBoxHeight_generated_type = float32IDT::float32IDT;
  using ObjBoundingBoxLength_generated_type = float32IDT::float32IDT;
  using ObjBoundingBoxWidth_generated_type = float32IDT::float32IDT;
  using DistZStd_generated_type = float32IDT::float32IDT;
  using ObjNearestPtX_generated_type = float32IDT::float32IDT;
  using ObjNearestPtY_generated_type = float32IDT::float32IDT;
  using ObjNearestPtZ_generated_type = float32IDT::float32IDT;
  using UpdateFlag_generated_type = Boolean_2IDT::Boolean_2IDT;
  using FourDObjChks_generated_type = uint8IDT::uint8IDT;
  using DistX_generated_type = float32IDT::float32IDT;
  using FourDObjCntr_generated_type = uint8IDT::uint8IDT;

  FourDID_generated_type FourDID;
  ObstacleProbability_generated_type ObstacleProbability;
  VabsX_generated_type VabsX;
  VabsXStd_generated_type VabsXStd;
  VabsY_generated_type VabsY;
  VabsYStd_generated_type VabsYStd;
  ValidFlag_generated_type ValidFlag;
  Classification_generated_type Classification;
  DynamicProperty_generated_type DynamicProperty;
  DistXStd_generated_type DistXStd;
  DistY_generated_type DistY;
  DistYStd_generated_type DistYStd;
  DistZ_generated_type DistZ;
  RCS_generated_type RCS;
  LifeCycles_generated_type LifeCycles;
  ProbabilityOfExistence_generated_type ProbabilityOfExistence;
  ObjSNR_generated_type ObjSNR;
  ObjXAccRel_generated_type ObjXAccRel;
  ObjYAccRel_generated_type ObjYAccRel;
  FourDHeadingAngle_generated_type FourDHeadingAngle;
  TargetClassificationConfidence_generated_type TargetClassificationConfidence;
  ObjBoundingBoxHeight_generated_type ObjBoundingBoxHeight;
  ObjBoundingBoxLength_generated_type ObjBoundingBoxLength;
  ObjBoundingBoxWidth_generated_type ObjBoundingBoxWidth;
  DistZStd_generated_type DistZStd;
  ObjNearestPtX_generated_type ObjNearestPtX;
  ObjNearestPtY_generated_type ObjNearestPtY;
  ObjNearestPtZ_generated_type ObjNearestPtZ;
  UpdateFlag_generated_type UpdateFlag;
  FourDObjChks_generated_type FourDObjChks;
  DistX_generated_type DistX;
  FourDObjCntr_generated_type FourDObjCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another FourDRadarObjStIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(FourDRadarObjStIDT const& l,
                       FourDRadarObjStIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.FourDID == r.FourDID)
                         && compare_float(l.ObstacleProbability, r.ObstacleProbability)
                         && compare_float(l.VabsX, r.VabsX)
                         && compare_float(l.VabsXStd, r.VabsXStd)
                         && compare_float(l.VabsY, r.VabsY)
                         && compare_float(l.VabsYStd, r.VabsYStd)
                         && (l.ValidFlag == r.ValidFlag)
                         && (l.Classification == r.Classification)
                         && (l.DynamicProperty == r.DynamicProperty)
                         && compare_float(l.DistXStd, r.DistXStd)
                         && compare_float(l.DistY, r.DistY)
                         && compare_float(l.DistYStd, r.DistYStd)
                         && compare_float(l.DistZ, r.DistZ)
                         && compare_float(l.RCS, r.RCS)
                         && (l.LifeCycles == r.LifeCycles)
                         && compare_float(l.ProbabilityOfExistence, r.ProbabilityOfExistence)
                         && compare_float(l.ObjSNR, r.ObjSNR)
                         && compare_float(l.ObjXAccRel, r.ObjXAccRel)
                         && compare_float(l.ObjYAccRel, r.ObjYAccRel)
                         && compare_float(l.FourDHeadingAngle, r.FourDHeadingAngle)
                         && compare_float(l.TargetClassificationConfidence, r.TargetClassificationConfidence)
                         && compare_float(l.ObjBoundingBoxHeight, r.ObjBoundingBoxHeight)
                         && compare_float(l.ObjBoundingBoxLength, r.ObjBoundingBoxLength)
                         && compare_float(l.ObjBoundingBoxWidth, r.ObjBoundingBoxWidth)
                         && compare_float(l.DistZStd, r.DistZStd)
                         && compare_float(l.ObjNearestPtX, r.ObjNearestPtX)
                         && compare_float(l.ObjNearestPtY, r.ObjNearestPtY)
                         && compare_float(l.ObjNearestPtZ, r.ObjNearestPtZ)
                         && (l.UpdateFlag == r.UpdateFlag)
                         && (l.FourDObjChks == r.FourDObjChks)
                         && compare_float(l.DistX, r.DistX)
                         && (l.FourDObjCntr == r.FourDObjCntr)
  );
}

/*!
 * \brief   Compare for inequality with another FourDRadarObjStIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(FourDRadarObjStIDT const& l,
                       FourDRadarObjStIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FourDRadarObjStIDT

#endif  // RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTIDT_IMPL_TYPE_FOURDRADAROBJSTIDT_H_
