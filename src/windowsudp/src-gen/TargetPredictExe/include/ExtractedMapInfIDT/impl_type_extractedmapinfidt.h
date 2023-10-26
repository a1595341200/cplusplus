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
/**        \file  TargetPredictExe/include/ExtractedMapInfIDT/impl_type_extractedmapinfidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_EXTRACTEDMAPINFIDT_IMPL_TYPE_EXTRACTEDMAPINFIDT_H_
#define TARGETPREDICTEXE_INCLUDE_EXTRACTEDMAPINFIDT_IMPL_TYPE_EXTRACTEDMAPINFIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "Left_line_delimiterIDT/impl_type_left_line_delimiteridt.h"
#include "RampIDT/impl_type_rampidt.h"
#include "Right_line_delimiterIDT/impl_type_right_line_delimiteridt.h"
#include "SpecialSituationIDT/impl_type_specialsituationidt.h"
#include "uint32IDT/impl_type_uint32idt.h"

namespace ExtractedMapInfIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ExtractedMapInfIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtractedMapInfIDT
 */
struct ExtractedMapInfIDT {
  using Is_active_generated_type = Bool1VccIDT::Bool1VccIDT;
  using Sequence_id_generated_type = uint32IDT::uint32IDT;
  using TimestampRMF_generated_type = uint32IDT::uint32IDT;
  using Left_line_delimiter_generated_type = Left_line_delimiterIDT::Left_line_delimiterIDT;
  using Right_line_delimiter_generated_type = Right_line_delimiterIDT::Right_line_delimiterIDT;
  using SpecialSituation_generated_type = SpecialSituationIDT::SpecialSituationIDT;
  using Ramp_generated_type = RampIDT::RampIDT;

  Is_active_generated_type Is_active;
  Sequence_id_generated_type Sequence_id;
  TimestampRMF_generated_type TimestampRMF;
  Left_line_delimiter_generated_type Left_line_delimiter;
  Right_line_delimiter_generated_type Right_line_delimiter;
  SpecialSituation_generated_type SpecialSituation;
  Ramp_generated_type Ramp;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ExtractedMapInfIDT instance.
 */
inline bool operator==(ExtractedMapInfIDT const& l,
                       ExtractedMapInfIDT const& r) noexcept {
  return (&l == &r) || ((l.Is_active == r.Is_active)
                         && (l.Sequence_id == r.Sequence_id)
                         && (l.TimestampRMF == r.TimestampRMF)
                         && (l.Left_line_delimiter == r.Left_line_delimiter)
                         && (l.Right_line_delimiter == r.Right_line_delimiter)
                         && (l.SpecialSituation == r.SpecialSituation)
                         && (l.Ramp == r.Ramp)
  );
}

/*!
 * \brief Compare for inequality with another ExtractedMapInfIDT instance.
 */
inline bool operator!=(ExtractedMapInfIDT const& l,
                       ExtractedMapInfIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ExtractedMapInfIDT

#endif  // TARGETPREDICTEXE_INCLUDE_EXTRACTEDMAPINFIDT_IMPL_TYPE_EXTRACTEDMAPINFIDT_H_
