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
/**        \file  TargetPredictExe/include/ObjPredictIDT/impl_type_objpredictidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_OBJPREDICTIDT_IMPL_TYPE_OBJPREDICTIDT_H_
#define TARGETPREDICTEXE_INCLUDE_OBJPREDICTIDT_IMPL_TYPE_OBJPREDICTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_uint8IDT_5/impl_type_array_uint8idt_5.h"
#include "ObjPredictTrajsIDT/impl_type_objpredicttrajsidt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ObjPredictIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjPredictIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjPredictIDT
 */
struct ObjPredictIDT {
  using PredTargetsTimestamp_generated_type = uint32IDT::uint32IDT;
  using ObjPredictTrajs_generated_type = ObjPredictTrajsIDT::ObjPredictTrajsIDT;
  using PredTargetsIdn_generated_type = uint16IDT::uint16IDT;
  using PredTargetsN_generated_type = uint8IDT::uint8IDT;
  using PredTargetsIntentions_generated_type = Array_uint8IDT_5::Array_uint8IDT_5;

  PredTargetsTimestamp_generated_type PredTargetsTimestamp;
  ObjPredictTrajs_generated_type ObjPredictTrajs;
  PredTargetsIdn_generated_type PredTargetsIdn;
  PredTargetsN_generated_type PredTargetsN;
  PredTargetsIntentions_generated_type PredTargetsIntentions;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ObjPredictIDT instance.
 */
inline bool operator==(ObjPredictIDT const& l,
                       ObjPredictIDT const& r) noexcept {
  return (&l == &r) || ((l.PredTargetsTimestamp == r.PredTargetsTimestamp)
                         && (l.ObjPredictTrajs == r.ObjPredictTrajs)
                         && (l.PredTargetsIdn == r.PredTargetsIdn)
                         && (l.PredTargetsN == r.PredTargetsN)
                         && (l.PredTargetsIntentions == r.PredTargetsIntentions)
  );
}

/*!
 * \brief Compare for inequality with another ObjPredictIDT instance.
 */
inline bool operator!=(ObjPredictIDT const& l,
                       ObjPredictIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjPredictIDT

#endif  // TARGETPREDICTEXE_INCLUDE_OBJPREDICTIDT_IMPL_TYPE_OBJPREDICTIDT_H_
