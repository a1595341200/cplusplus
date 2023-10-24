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
/**        \file  TargetPredictExe/include/ObjGroup2VccIDT/impl_type_objgroup2vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_OBJGROUP2VCCIDT_IMPL_TYPE_OBJGROUP2VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_OBJGROUP2VCCIDT_IMPL_TYPE_OBJGROUP2VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ObjEstimn2VccGroup_1IDT/impl_type_objestimn2vccgroup_1idt.h"
#include "ObjInfo2VccGroup_1IDT/impl_type_objinfo2vccgroup_1idt.h"
#include "ObjPpty2VccGroup_1IDT/impl_type_objppty2vccgroup_1idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ObjGroup2VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjGroup2VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjGroup2VccIDT
 */
struct ObjGroup2VccIDT {
  using ObjEstimn2Vcc_generated_type = ObjEstimn2VccGroup_1IDT::ObjEstimn2VccGroup_1IDT;
  using ObjInfo2Vcc_generated_type = ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT;
  using ObjPpty2Vcc_generated_type = ObjPpty2VccGroup_1IDT::ObjPpty2VccGroup_1IDT;
  using Chks_generated_type = uint32IDT::uint32IDT;
  using Cntr_generated_type = uint8IDT::uint8IDT;

  ObjEstimn2Vcc_generated_type ObjEstimn2Vcc;
  ObjInfo2Vcc_generated_type ObjInfo2Vcc;
  ObjPpty2Vcc_generated_type ObjPpty2Vcc;
  Chks_generated_type Chks;
  Cntr_generated_type Cntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ObjGroup2VccIDT instance.
 */
inline bool operator==(ObjGroup2VccIDT const& l,
                       ObjGroup2VccIDT const& r) noexcept {
  return (&l == &r) || ((l.ObjEstimn2Vcc == r.ObjEstimn2Vcc)
                         && (l.ObjInfo2Vcc == r.ObjInfo2Vcc)
                         && (l.ObjPpty2Vcc == r.ObjPpty2Vcc)
                         && (l.Chks == r.Chks)
                         && (l.Cntr == r.Cntr)
  );
}

/*!
 * \brief Compare for inequality with another ObjGroup2VccIDT instance.
 */
inline bool operator!=(ObjGroup2VccIDT const& l,
                       ObjGroup2VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjGroup2VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_OBJGROUP2VCCIDT_IMPL_TYPE_OBJGROUP2VCCIDT_H_
