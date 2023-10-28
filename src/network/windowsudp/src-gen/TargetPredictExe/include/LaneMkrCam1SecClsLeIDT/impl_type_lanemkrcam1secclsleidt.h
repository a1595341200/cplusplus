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
/**        \file  TargetPredictExe/include/LaneMkrCam1SecClsLeIDT/impl_type_lanemkrcam1secclsleidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_LANEMKRCAM1SECCLSLEIDT_IMPL_TYPE_LANEMKRCAM1SECCLSLEIDT_H_
#define TARGETPREDICTEXE_INCLUDE_LANEMKRCAM1SECCLSLEIDT_IMPL_TYPE_LANEMKRCAM1SECCLSLEIDT_H_

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
#include "CamLineTypeIDT/impl_type_camlinetypeidt.h"
#include "LaneTrackStsIDT/impl_type_lanetrackstsidt.h"
#include "LineColor1VccIDT/impl_type_linecolor1vccidt.h"
#include "TypRoadIDT/impl_type_typroadidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LaneMkrCam1SecClsLeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneMkrCam1SecClsLeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT
 */
struct LaneMkrCam1SecClsLeIDT {
  using C0Minus_generated_type = float32IDT::float32IDT;
  using C0MinusVariance_generated_type = float32IDT::float32IDT;
  using C1Minus_generated_type = float32IDT::float32IDT;
  using C1MinusVariance_generated_type = float32IDT::float32IDT;
  using C2Minus_generated_type = float32IDT::float32IDT;
  using C2MinusVariance_generated_type = float32IDT::float32IDT;
  using C3Minus_generated_type = float32IDT::float32IDT;
  using C3MinusVariance_generated_type = float32IDT::float32IDT;
  using MinusStartPoint_generated_type = float32IDT::float32IDT;
  using MinusEndPoint_generated_type = float32IDT::float32IDT;
  using C0First_generated_type = float32IDT::float32IDT;
  using C0FirstVariance_generated_type = float32IDT::float32IDT;
  using C1First_generated_type = float32IDT::float32IDT;
  using C1FirstVariance_generated_type = float32IDT::float32IDT;
  using C2First_generated_type = float32IDT::float32IDT;
  using C2FirstVariance_generated_type = float32IDT::float32IDT;
  using C3First_generated_type = float32IDT::float32IDT;
  using C3FirstVariance_generated_type = float32IDT::float32IDT;
  using FirstStartPoint_generated_type = float32IDT::float32IDT;
  using FirstEndPoint_generated_type = float32IDT::float32IDT;
  using C0Sec_generated_type = float32IDT::float32IDT;
  using C0SecVariance_generated_type = float32IDT::float32IDT;
  using C1Sec_generated_type = float32IDT::float32IDT;
  using C1SecVariance_generated_type = float32IDT::float32IDT;
  using C2Sec_generated_type = float32IDT::float32IDT;
  using C2SecVariance_generated_type = float32IDT::float32IDT;
  using C3Sec_generated_type = float32IDT::float32IDT;
  using C3SecVariance_generated_type = float32IDT::float32IDT;
  using SecStartPoint_generated_type = float32IDT::float32IDT;
  using SecEndPoint_generated_type = float32IDT::float32IDT;
  using IsSecValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using PriStartPoint_generated_type = float32IDT::float32IDT;
  using PriEndPoint_generated_type = float32IDT::float32IDT;
  using CamObjId_generated_type = uint8IDT::uint8IDT;
  using IsFirstValid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using ColorLane_generated_type = LineColor1VccIDT::LineColor1VccIDT;
  using TypeLane_generated_type = CamLineTypeIDT::CamLineTypeIDT;
  using TrackStsLane_generated_type = LaneTrackStsIDT::LaneTrackStsIDT;
  using MeasQlyLane_generated_type = float32IDT::float32IDT;
  using MdlQlyLane_generated_type = float32IDT::float32IDT;
  using MrkWidth_generated_type = float32IDT::float32IDT;
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using IsVerified_generated_type = Bool1VccIDT::Bool1VccIDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;
  using TypChgPoint_generated_type = float32IDT::float32IDT;
  using TypAftChgPoint_generated_type = CamLineTypeIDT::CamLineTypeIDT;
  using TypRoad_generated_type = TypRoadIDT::TypRoadIDT;
  using ISPTimeStamp_generated_type = uint32IDT::uint32IDT;
  using LaneMkrAge_generated_type = uint32IDT::uint32IDT;

  C0Minus_generated_type C0Minus;
  C0MinusVariance_generated_type C0MinusVariance;
  C1Minus_generated_type C1Minus;
  C1MinusVariance_generated_type C1MinusVariance;
  C2Minus_generated_type C2Minus;
  C2MinusVariance_generated_type C2MinusVariance;
  C3Minus_generated_type C3Minus;
  C3MinusVariance_generated_type C3MinusVariance;
  MinusStartPoint_generated_type MinusStartPoint;
  MinusEndPoint_generated_type MinusEndPoint;
  C0First_generated_type C0First;
  C0FirstVariance_generated_type C0FirstVariance;
  C1First_generated_type C1First;
  C1FirstVariance_generated_type C1FirstVariance;
  C2First_generated_type C2First;
  C2FirstVariance_generated_type C2FirstVariance;
  C3First_generated_type C3First;
  C3FirstVariance_generated_type C3FirstVariance;
  FirstStartPoint_generated_type FirstStartPoint;
  FirstEndPoint_generated_type FirstEndPoint;
  C0Sec_generated_type C0Sec;
  C0SecVariance_generated_type C0SecVariance;
  C1Sec_generated_type C1Sec;
  C1SecVariance_generated_type C1SecVariance;
  C2Sec_generated_type C2Sec;
  C2SecVariance_generated_type C2SecVariance;
  C3Sec_generated_type C3Sec;
  C3SecVariance_generated_type C3SecVariance;
  SecStartPoint_generated_type SecStartPoint;
  SecEndPoint_generated_type SecEndPoint;
  IsSecValid_generated_type IsSecValid;
  PriStartPoint_generated_type PriStartPoint;
  PriEndPoint_generated_type PriEndPoint;
  CamObjId_generated_type CamObjId;
  IsFirstValid_generated_type IsFirstValid;
  ColorLane_generated_type ColorLane;
  TypeLane_generated_type TypeLane;
  TrackStsLane_generated_type TrackStsLane;
  MeasQlyLane_generated_type MeasQlyLane;
  MdlQlyLane_generated_type MdlQlyLane;
  MrkWidth_generated_type MrkWidth;
  CamChks_generated_type CamChks;
  CamCntr_generated_type CamCntr;
  IsVerified_generated_type IsVerified;
  CamTimeStamp_generated_type CamTimeStamp;
  TypChgPoint_generated_type TypChgPoint;
  TypAftChgPoint_generated_type TypAftChgPoint;
  TypRoad_generated_type TypRoad;
  ISPTimeStamp_generated_type ISPTimeStamp;
  LaneMkrAge_generated_type LaneMkrAge;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another LaneMkrCam1SecClsLeIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(LaneMkrCam1SecClsLeIDT const& l,
                       LaneMkrCam1SecClsLeIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.C0Minus, r.C0Minus)
                         && compare_float(l.C0MinusVariance, r.C0MinusVariance)
                         && compare_float(l.C1Minus, r.C1Minus)
                         && compare_float(l.C1MinusVariance, r.C1MinusVariance)
                         && compare_float(l.C2Minus, r.C2Minus)
                         && compare_float(l.C2MinusVariance, r.C2MinusVariance)
                         && compare_float(l.C3Minus, r.C3Minus)
                         && compare_float(l.C3MinusVariance, r.C3MinusVariance)
                         && compare_float(l.MinusStartPoint, r.MinusStartPoint)
                         && compare_float(l.MinusEndPoint, r.MinusEndPoint)
                         && compare_float(l.C0First, r.C0First)
                         && compare_float(l.C0FirstVariance, r.C0FirstVariance)
                         && compare_float(l.C1First, r.C1First)
                         && compare_float(l.C1FirstVariance, r.C1FirstVariance)
                         && compare_float(l.C2First, r.C2First)
                         && compare_float(l.C2FirstVariance, r.C2FirstVariance)
                         && compare_float(l.C3First, r.C3First)
                         && compare_float(l.C3FirstVariance, r.C3FirstVariance)
                         && compare_float(l.FirstStartPoint, r.FirstStartPoint)
                         && compare_float(l.FirstEndPoint, r.FirstEndPoint)
                         && compare_float(l.C0Sec, r.C0Sec)
                         && compare_float(l.C0SecVariance, r.C0SecVariance)
                         && compare_float(l.C1Sec, r.C1Sec)
                         && compare_float(l.C1SecVariance, r.C1SecVariance)
                         && compare_float(l.C2Sec, r.C2Sec)
                         && compare_float(l.C2SecVariance, r.C2SecVariance)
                         && compare_float(l.C3Sec, r.C3Sec)
                         && compare_float(l.C3SecVariance, r.C3SecVariance)
                         && compare_float(l.SecStartPoint, r.SecStartPoint)
                         && compare_float(l.SecEndPoint, r.SecEndPoint)
                         && (l.IsSecValid == r.IsSecValid)
                         && compare_float(l.PriStartPoint, r.PriStartPoint)
                         && compare_float(l.PriEndPoint, r.PriEndPoint)
                         && (l.CamObjId == r.CamObjId)
                         && (l.IsFirstValid == r.IsFirstValid)
                         && (l.ColorLane == r.ColorLane)
                         && (l.TypeLane == r.TypeLane)
                         && (l.TrackStsLane == r.TrackStsLane)
                         && compare_float(l.MeasQlyLane, r.MeasQlyLane)
                         && compare_float(l.MdlQlyLane, r.MdlQlyLane)
                         && compare_float(l.MrkWidth, r.MrkWidth)
                         && (l.CamChks == r.CamChks)
                         && (l.CamCntr == r.CamCntr)
                         && (l.IsVerified == r.IsVerified)
                         && (l.CamTimeStamp == r.CamTimeStamp)
                         && compare_float(l.TypChgPoint, r.TypChgPoint)
                         && (l.TypAftChgPoint == r.TypAftChgPoint)
                         && (l.TypRoad == r.TypRoad)
                         && (l.ISPTimeStamp == r.ISPTimeStamp)
                         && (l.LaneMkrAge == r.LaneMkrAge)
  );
}

/*!
 * \brief   Compare for inequality with another LaneMkrCam1SecClsLeIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(LaneMkrCam1SecClsLeIDT const& l,
                       LaneMkrCam1SecClsLeIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneMkrCam1SecClsLeIDT

#endif  // TARGETPREDICTEXE_INCLUDE_LANEMKRCAM1SECCLSLEIDT_IMPL_TYPE_LANEMKRCAM1SECCLSLEIDT_H_
