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
/**        \file  TrafficLightAttentionExe/include/ObjInfo2VccGroup/impl_type_objinfo2vccgroup.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJINFO2VCCGROUP_IMPL_TYPE_OBJINFO2VCCGROUP_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJINFO2VCCGROUP_IMPL_TYPE_OBJINFO2VCCGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DstLatFromMidOfLaneSelf/impl_type_dstlatfrommidoflaneself.h"
#include "FuseObjHei/impl_type_fuseobjhei.h"
#include "FuseObjLength/impl_type_fuseobjlength.h"
#include "FuseObjTyp/impl_type_fuseobjtyp.h"
#include "FuseObjWidth/impl_type_fuseobjwidth.h"
#include "IndcrBrkLi/impl_type_indcrbrkli.h"
#include "IndcrHzrdLi/impl_type_indcrhzrdli.h"
#include "IndcrTurn/impl_type_indcrturn.h"
#include "MtnPat/impl_type_mtnpat.h"
#include "MtnPatHist/impl_type_mtnpathist.h"
#include "ObjInfoChks/impl_type_objinfochks.h"
#include "ObjInfoCntr/impl_type_objinfocntr.h"

namespace ObjInfo2VccGroup {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjInfo2VccGroup.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjInfo2VccGroup
 */
struct ObjInfo2VccGroup {
  using _FuseObjTyp_ref_type = FuseObjTyp::FuseObjTyp;
  using _FuseObjWidth_ref_type = FuseObjWidth::FuseObjWidth;
  using _FuseObjLength_ref_type = FuseObjLength::FuseObjLength;
  using _FuseObjHei_ref_type = FuseObjHei::FuseObjHei;
  using _IndcrTurn_ref_type = IndcrTurn::IndcrTurn;
  using _IndcrBrkLi_ref_type = IndcrBrkLi::IndcrBrkLi;
  using _IndcrHzrdLi_ref_type = IndcrHzrdLi::IndcrHzrdLi;
  using _MtnPat_ref_type = MtnPat::MtnPat;
  using _MtnPatHist_ref_type = MtnPatHist::MtnPatHist;
  using _DstLatFromMidOfLaneSelf_ref_type = DstLatFromMidOfLaneSelf::DstLatFromMidOfLaneSelf;
  using _ObjInfoChks_ref_type = ObjInfoChks::ObjInfoChks;
  using _ObjInfoCntr_ref_type = ObjInfoCntr::ObjInfoCntr;

  _FuseObjTyp_ref_type FuseObjTyp_ref;
  _FuseObjWidth_ref_type FuseObjWidth_ref;
  _FuseObjLength_ref_type FuseObjLength_ref;
  _FuseObjHei_ref_type FuseObjHei_ref;
  _IndcrTurn_ref_type IndcrTurn_ref;
  _IndcrBrkLi_ref_type IndcrBrkLi_ref;
  _IndcrHzrdLi_ref_type IndcrHzrdLi_ref;
  _MtnPat_ref_type MtnPat_ref;
  _MtnPatHist_ref_type MtnPatHist_ref;
  _DstLatFromMidOfLaneSelf_ref_type DstLatFromMidOfLaneSelf_ref;
  _ObjInfoChks_ref_type ObjInfoChks_ref;
  _ObjInfoCntr_ref_type ObjInfoCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ObjInfo2VccGroup instance.
 */
inline bool operator==(ObjInfo2VccGroup const& l,
                       ObjInfo2VccGroup const& r) noexcept {
  return (&l == &r) || ((l.FuseObjTyp_ref == r.FuseObjTyp_ref)
                         && (l.FuseObjWidth_ref == r.FuseObjWidth_ref)
                         && (l.FuseObjLength_ref == r.FuseObjLength_ref)
                         && (l.FuseObjHei_ref == r.FuseObjHei_ref)
                         && (l.IndcrTurn_ref == r.IndcrTurn_ref)
                         && (l.IndcrBrkLi_ref == r.IndcrBrkLi_ref)
                         && (l.IndcrHzrdLi_ref == r.IndcrHzrdLi_ref)
                         && (l.MtnPat_ref == r.MtnPat_ref)
                         && (l.MtnPatHist_ref == r.MtnPatHist_ref)
                         && (l.DstLatFromMidOfLaneSelf_ref == r.DstLatFromMidOfLaneSelf_ref)
                         && (l.ObjInfoChks_ref == r.ObjInfoChks_ref)
                         && (l.ObjInfoCntr_ref == r.ObjInfoCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another ObjInfo2VccGroup instance.
 */
inline bool operator!=(ObjInfo2VccGroup const& l,
                       ObjInfo2VccGroup const& r) noexcept {
  return !(l == r);
}

}  // namespace ObjInfo2VccGroup

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJINFO2VCCGROUP_IMPL_TYPE_OBJINFO2VCCGROUP_H_
