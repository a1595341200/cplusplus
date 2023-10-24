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
/**        \file  TargetPredictExe/include/RMFInfoIDT/impl_type_rmfinfoidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_RMFINFOIDT_IMPL_TYPE_RMFINFOIDT_H_
#define TARGETPREDICTEXE_INCLUDE_RMFINFOIDT_IMPL_TYPE_RMFINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_BusRefLinePointIDT_71/impl_type_array_busreflinepointidt_71.h"
#include "Array_ExtractedLaneIDT_3/impl_type_array_extractedlaneidt_3.h"
#include "Array_RefPathGlobalIDT_6/impl_type_array_refpathglobalidt_6.h"
#include "ExtractedMapInfIDT/impl_type_extractedmapinfidt.h"
#include "RefLineSpeedInfIDT/impl_type_reflinespeedinfidt.h"

namespace RMFInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RMFInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RMFInfoIDT
 */
struct RMFInfoIDT {
  using ExtractedMapInf_generated_type = ExtractedMapInfIDT::ExtractedMapInfIDT;
  using RefPathGlobals_generated_type = Array_RefPathGlobalIDT_6::Array_RefPathGlobalIDT_6;
  using ExtractedLanes_generated_type = Array_ExtractedLaneIDT_3::Array_ExtractedLaneIDT_3;
  using RefLineSpeedInf_generated_type = RefLineSpeedInfIDT::RefLineSpeedInfIDT;
  using BusRefLinePoints_generated_type = Array_BusRefLinePointIDT_71::Array_BusRefLinePointIDT_71;

  ExtractedMapInf_generated_type ExtractedMapInf;
  RefPathGlobals_generated_type RefPathGlobals;
  ExtractedLanes_generated_type ExtractedLanes;
  RefLineSpeedInf_generated_type RefLineSpeedInf;
  BusRefLinePoints_generated_type BusRefLinePoints;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RMFInfoIDT instance.
 */
inline bool operator==(RMFInfoIDT const& l,
                       RMFInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.ExtractedMapInf == r.ExtractedMapInf)
                         && (l.RefPathGlobals == r.RefPathGlobals)
                         && (l.ExtractedLanes == r.ExtractedLanes)
                         && (l.RefLineSpeedInf == r.RefLineSpeedInf)
                         && (l.BusRefLinePoints == r.BusRefLinePoints)
  );
}

/*!
 * \brief Compare for inequality with another RMFInfoIDT instance.
 */
inline bool operator!=(RMFInfoIDT const& l,
                       RMFInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RMFInfoIDT

#endif  // TARGETPREDICTEXE_INCLUDE_RMFINFOIDT_IMPL_TYPE_RMFINFOIDT_H_
