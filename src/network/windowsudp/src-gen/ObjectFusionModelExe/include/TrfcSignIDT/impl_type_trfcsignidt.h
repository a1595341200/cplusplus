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
/**        \file  ObjectFusionModelExe/include/TrfcSignIDT/impl_type_trfcsignidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TRFCSIGNIDT_IMPL_TYPE_TRFCSIGNIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TRFCSIGNIDT_IMPL_TYPE_TRFCSIGNIDT_H_

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
#include "SignMainTypeIDT/impl_type_signmaintypeidt.h"
#include "SignShapeIDT/impl_type_signshapeidt.h"
#include "SuppSignType1IDT/impl_type_suppsigntype1idt.h"
#include "SuppSignType2IDT/impl_type_suppsigntype2idt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace TrfcSignIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrfcSignIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcSignIDT
 */
struct TrfcSignIDT {
  using Confidence_generated_type = float32IDT::float32IDT;
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using CamObjId_generated_type = uint8IDT::uint8IDT;
  using LatPosTrfcSign_generated_type = float32IDT::float32IDT;
  using LatPosVariance_generated_type = float32IDT::float32IDT;
  using LongPosTrfcSign_generated_type = float32IDT::float32IDT;
  using LongPosVariance_generated_type = float32IDT::float32IDT;
  using SuppSignType1_generated_type = SuppSignType1IDT::SuppSignType1IDT;
  using SuppSignType2_generated_type = SuppSignType2IDT::SuppSignType2IDT;
  using MainType_generated_type = SignMainTypeIDT::SignMainTypeIDT;
  using Shape_generated_type = SignShapeIDT::SignShapeIDT;
  using WidthTrfcSign_generated_type = float32IDT::float32IDT;
  using HeightTrfcSign_generated_type = float32IDT::float32IDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;
  using VertPos_generated_type = float32IDT::float32IDT;
  using VertPosVariance_generated_type = float32IDT::float32IDT;
  using VertAgBot_generated_type = float32IDT::float32IDT;
  using VertAgTop_generated_type = float32IDT::float32IDT;
  using HozlAgLe_generated_type = float32IDT::float32IDT;
  using HozlAgRi_generated_type = float32IDT::float32IDT;
  using ISPTimeStamp_generated_type = uint32IDT::uint32IDT;
  using GroupId_generated_type = uint32IDT::uint32IDT;

  Confidence_generated_type Confidence;
  CamChks_generated_type CamChks;
  CamCntr_generated_type CamCntr;
  CamObjId_generated_type CamObjId;
  LatPosTrfcSign_generated_type LatPosTrfcSign;
  LatPosVariance_generated_type LatPosVariance;
  LongPosTrfcSign_generated_type LongPosTrfcSign;
  LongPosVariance_generated_type LongPosVariance;
  SuppSignType1_generated_type SuppSignType1;
  SuppSignType2_generated_type SuppSignType2;
  MainType_generated_type MainType;
  Shape_generated_type Shape;
  WidthTrfcSign_generated_type WidthTrfcSign;
  HeightTrfcSign_generated_type HeightTrfcSign;
  CamTimeStamp_generated_type CamTimeStamp;
  VertPos_generated_type VertPos;
  VertPosVariance_generated_type VertPosVariance;
  VertAgBot_generated_type VertAgBot;
  VertAgTop_generated_type VertAgTop;
  HozlAgLe_generated_type HozlAgLe;
  HozlAgRi_generated_type HozlAgRi;
  ISPTimeStamp_generated_type ISPTimeStamp;
  GroupId_generated_type GroupId;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another TrfcSignIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(TrfcSignIDT const& l,
                       TrfcSignIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.Confidence, r.Confidence)
                         && (l.CamChks == r.CamChks)
                         && (l.CamCntr == r.CamCntr)
                         && (l.CamObjId == r.CamObjId)
                         && compare_float(l.LatPosTrfcSign, r.LatPosTrfcSign)
                         && compare_float(l.LatPosVariance, r.LatPosVariance)
                         && compare_float(l.LongPosTrfcSign, r.LongPosTrfcSign)
                         && compare_float(l.LongPosVariance, r.LongPosVariance)
                         && (l.SuppSignType1 == r.SuppSignType1)
                         && (l.SuppSignType2 == r.SuppSignType2)
                         && (l.MainType == r.MainType)
                         && (l.Shape == r.Shape)
                         && compare_float(l.WidthTrfcSign, r.WidthTrfcSign)
                         && compare_float(l.HeightTrfcSign, r.HeightTrfcSign)
                         && (l.CamTimeStamp == r.CamTimeStamp)
                         && compare_float(l.VertPos, r.VertPos)
                         && compare_float(l.VertPosVariance, r.VertPosVariance)
                         && compare_float(l.VertAgBot, r.VertAgBot)
                         && compare_float(l.VertAgTop, r.VertAgTop)
                         && compare_float(l.HozlAgLe, r.HozlAgLe)
                         && compare_float(l.HozlAgRi, r.HozlAgRi)
                         && (l.ISPTimeStamp == r.ISPTimeStamp)
                         && (l.GroupId == r.GroupId)
  );
}

/*!
 * \brief   Compare for inequality with another TrfcSignIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(TrfcSignIDT const& l,
                       TrfcSignIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcSignIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TRFCSIGNIDT_IMPL_TYPE_TRFCSIGNIDT_H_
