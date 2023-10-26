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
/**        \file  RVDCExe/include/EgoMotionIDT/impl_type_egomotionidt.h
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

#ifndef RVDCEXE_INCLUDE_EGOMOTIONIDT_IMPL_TYPE_EGOMOTIONIDT_H_
#define RVDCEXE_INCLUDE_EGOMOTIONIDT_IMPL_TYPE_EGOMOTIONIDT_H_

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
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace EgoMotionIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type EgoMotionIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EgoMotionIDT
 */
struct EgoMotionIDT {
  using SpeedEgoMotionData_generated_type = float32IDT::float32IDT;
  using SpeedQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using VLatEgoMotionData_generated_type = float32IDT::float32IDT;
  using VLatQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using VLgtEgoMotionData_generated_type = float32IDT::float32IDT;
  using VLgtQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using ALgtEgoMotionData_generated_type = float32IDT::float32IDT;
  using ALgtQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using ALatEgoMotionData_generated_type = float32IDT::float32IDT;
  using ALatQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using YawRateEgoMotionData_generated_type = float32IDT::float32IDT;
  using PosnLgtDeltaEgoMotionData_generated_type = float32IDT::float32IDT;
  using PosnLatDeltaEgoMotionData_generated_type = float32IDT::float32IDT;
  using AgDirDeltaEgoMotionData_generated_type = float32IDT::float32IDT;
  using AVertEgoMotionData_generated_type = float32IDT::float32IDT;
  using AVertQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using RollRateEgoMotionData_generated_type = float32IDT::float32IDT;
  using RollRateQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using YawRateQfEgoMotionData_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using ChksEgoMotionData_generated_type = uint8IDT::uint8IDT;
  using CntrEgoMotionData_generated_type = uint8IDT::uint8IDT;

  SpeedEgoMotionData_generated_type SpeedEgoMotionData;
  SpeedQfEgoMotionData_generated_type SpeedQfEgoMotionData;
  VLatEgoMotionData_generated_type VLatEgoMotionData;
  VLatQfEgoMotionData_generated_type VLatQfEgoMotionData;
  VLgtEgoMotionData_generated_type VLgtEgoMotionData;
  VLgtQfEgoMotionData_generated_type VLgtQfEgoMotionData;
  ALgtEgoMotionData_generated_type ALgtEgoMotionData;
  ALgtQfEgoMotionData_generated_type ALgtQfEgoMotionData;
  ALatEgoMotionData_generated_type ALatEgoMotionData;
  ALatQfEgoMotionData_generated_type ALatQfEgoMotionData;
  YawRateEgoMotionData_generated_type YawRateEgoMotionData;
  PosnLgtDeltaEgoMotionData_generated_type PosnLgtDeltaEgoMotionData;
  PosnLatDeltaEgoMotionData_generated_type PosnLatDeltaEgoMotionData;
  AgDirDeltaEgoMotionData_generated_type AgDirDeltaEgoMotionData;
  AVertEgoMotionData_generated_type AVertEgoMotionData;
  AVertQfEgoMotionData_generated_type AVertQfEgoMotionData;
  RollRateEgoMotionData_generated_type RollRateEgoMotionData;
  RollRateQfEgoMotionData_generated_type RollRateQfEgoMotionData;
  YawRateQfEgoMotionData_generated_type YawRateQfEgoMotionData;
  ChksEgoMotionData_generated_type ChksEgoMotionData;
  CntrEgoMotionData_generated_type CntrEgoMotionData;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another EgoMotionIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(EgoMotionIDT const& l,
                       EgoMotionIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.SpeedEgoMotionData, r.SpeedEgoMotionData)
                         && (l.SpeedQfEgoMotionData == r.SpeedQfEgoMotionData)
                         && compare_float(l.VLatEgoMotionData, r.VLatEgoMotionData)
                         && (l.VLatQfEgoMotionData == r.VLatQfEgoMotionData)
                         && compare_float(l.VLgtEgoMotionData, r.VLgtEgoMotionData)
                         && (l.VLgtQfEgoMotionData == r.VLgtQfEgoMotionData)
                         && compare_float(l.ALgtEgoMotionData, r.ALgtEgoMotionData)
                         && (l.ALgtQfEgoMotionData == r.ALgtQfEgoMotionData)
                         && compare_float(l.ALatEgoMotionData, r.ALatEgoMotionData)
                         && (l.ALatQfEgoMotionData == r.ALatQfEgoMotionData)
                         && compare_float(l.YawRateEgoMotionData, r.YawRateEgoMotionData)
                         && compare_float(l.PosnLgtDeltaEgoMotionData, r.PosnLgtDeltaEgoMotionData)
                         && compare_float(l.PosnLatDeltaEgoMotionData, r.PosnLatDeltaEgoMotionData)
                         && compare_float(l.AgDirDeltaEgoMotionData, r.AgDirDeltaEgoMotionData)
                         && compare_float(l.AVertEgoMotionData, r.AVertEgoMotionData)
                         && (l.AVertQfEgoMotionData == r.AVertQfEgoMotionData)
                         && compare_float(l.RollRateEgoMotionData, r.RollRateEgoMotionData)
                         && (l.RollRateQfEgoMotionData == r.RollRateQfEgoMotionData)
                         && (l.YawRateQfEgoMotionData == r.YawRateQfEgoMotionData)
                         && (l.ChksEgoMotionData == r.ChksEgoMotionData)
                         && (l.CntrEgoMotionData == r.CntrEgoMotionData)
  );
}

/*!
 * \brief   Compare for inequality with another EgoMotionIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(EgoMotionIDT const& l,
                       EgoMotionIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EgoMotionIDT

#endif  // RVDCEXE_INCLUDE_EGOMOTIONIDT_IMPL_TYPE_EGOMOTIONIDT_H_
