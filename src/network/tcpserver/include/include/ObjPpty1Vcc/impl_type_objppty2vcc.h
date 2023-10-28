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
/**        \file  ObjectFusionModelExe/include/ObjPpty1Vcc/impl_type_objppty2vcc.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJPPTY1VCC_IMPL_TYPE_OBJPPTY2VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJPPTY1VCC_IMPL_TYPE_OBJPPTY2VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "AStdDe/impl_type_astdde.h"
#include "AgDirStdDe/impl_type_agdirstdde.h"
#include "Age2/impl_type_age2.h"
#include "ClassConf/impl_type_classconf.h"
#include "CllsnMtgtnByBrkgPrimQly/impl_type_cllsnmtgtnbybrkgprimqly.h"
#include "CllsnMtgtnByBrkgSecQly/impl_type_cllsnmtgtnbybrkgsecqly.h"
#include "CllsnWarnFwdQly/impl_type_cllsnwarnfwdqly.h"
#include "DstLatFromMidOfLaneSelfQly/impl_type_dstlatfrommidoflaneselfqly.h"
#include "EmgyLaneKeepAidPosnQly/impl_type_emgylanekeepaidposnqly.h"
#include "ExistConf/impl_type_existconf.h"
#include "FusnSrc/impl_type_fusnsrc.h"
#include "Idn/impl_type_idn.h"
#include "MdlOfMtn/impl_type_mdlofmtn.h"
#include "ObjPptyChks/impl_type_objpptychks.h"
#include "ObjPptyCntr/impl_type_objpptycntr.h"
#include "ObjTrfcJamAssiQly/impl_type_objtrfcjamassiqly.h"
#include "PosnLatStdDe/impl_type_posnlatstdde.h"
#include "PosnLgtStdDe/impl_type_posnlgtstdde.h"
#include "SpdStdDe/impl_type_spdstdde.h"
#include "Sts/impl_type_sts.h"
#include "TimeStamp/impl_type_timestamp.h"
#include "TrfcSceno/impl_type_trfcsceno.h"
#include "VisnId/impl_type_visnid.h"

namespace ObjPpty1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjPpty2Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjPpty2Vcc
 */
struct ObjPpty2Vcc {
  using _Idn_ref_type = Idn::Idn;
  using _VisnId_ref_type = VisnId::VisnId;
  using _Sts_ref_type = Sts::Sts;
  using _MdlOfMtn_ref_type = MdlOfMtn::MdlOfMtn;
  using _TrfcSceno_ref_type = TrfcSceno::TrfcSceno;
  using _CllsnMtgtnByBrkgPrimQly_ref_type = CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly;
  using _CllsnMtgtnByBrkgSecQly_ref_type = CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly;
  using _CllsnWarnFwdQly_ref_type = CllsnWarnFwdQly::CllsnWarnFwdQly;
  using _ObjTrfcJamAssiQly_ref_type = ObjTrfcJamAssiQly::ObjTrfcJamAssiQly;
  using _DstLatFromMidOfLaneSelfQly_ref_type = DstLatFromMidOfLaneSelfQly::DstLatFromMidOfLaneSelfQly;
  using _EmgyLaneKeepAidPosnQly_ref_type = EmgyLaneKeepAidPosnQly::EmgyLaneKeepAidPosnQly;
  using _PosnLgtStdDe_ref_type = PosnLgtStdDe::PosnLgtStdDe;
  using _PosnLatStdDe_ref_type = PosnLatStdDe::PosnLatStdDe;
  using _AgDirStdDe_ref_type = AgDirStdDe::AgDirStdDe;
  using _SpdStdDe_ref_type = SpdStdDe::SpdStdDe;
  using _AStdDe_ref_type = AStdDe::AStdDe;
  using _FusnSrc_ref_type = FusnSrc::FusnSrc;
  using _TimeStamp_ref_type = TimeStamp::TimeStamp;
  using _Age2_ref_type = Age2::Age2;
  using _ExistConf_ref_type = ExistConf::ExistConf;
  using _ClassConf_ref_type = ClassConf::ClassConf;
  using _ObjPptyChks_ref_type = ObjPptyChks::ObjPptyChks;
  using _ObjPptyCntr_ref_type = ObjPptyCntr::ObjPptyCntr;

  _Idn_ref_type Idn_ref;
  _VisnId_ref_type VisnId_ref;
  _Sts_ref_type Sts_ref;
  _MdlOfMtn_ref_type MdlOfMtn_ref;
  _TrfcSceno_ref_type TrfcSceno_ref;
  _CllsnMtgtnByBrkgPrimQly_ref_type CllsnMtgtnByBrkgPrimQly_ref;
  _CllsnMtgtnByBrkgSecQly_ref_type CllsnMtgtnByBrkgSecQly_ref;
  _CllsnWarnFwdQly_ref_type CllsnWarnFwdQly_ref;
  _ObjTrfcJamAssiQly_ref_type ObjTrfcJamAssiQly_ref;
  _DstLatFromMidOfLaneSelfQly_ref_type DstLatFromMidOfLaneSelfQly_ref;
  _EmgyLaneKeepAidPosnQly_ref_type EmgyLaneKeepAidPosnQly_ref;
  _PosnLgtStdDe_ref_type PosnLgtStdDe_ref;
  _PosnLatStdDe_ref_type PosnLatStdDe_ref;
  _AgDirStdDe_ref_type AgDirStdDe_ref;
  _SpdStdDe_ref_type SpdStdDe_ref;
  _AStdDe_ref_type AStdDe_ref;
  _FusnSrc_ref_type FusnSrc_ref;
  _TimeStamp_ref_type TimeStamp_ref;
  _Age2_ref_type Age2_ref;
  _ExistConf_ref_type ExistConf_ref;
  _ClassConf_ref_type ClassConf_ref;
  _ObjPptyChks_ref_type ObjPptyChks_ref;
  _ObjPptyCntr_ref_type ObjPptyCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ObjPpty2Vcc instance.
 */
inline bool operator==(ObjPpty2Vcc const& l,
                       ObjPpty2Vcc const& r) noexcept {
  return (&l == &r) || ((l.Idn_ref == r.Idn_ref)
                         && (l.VisnId_ref == r.VisnId_ref)
                         && (l.Sts_ref == r.Sts_ref)
                         && (l.MdlOfMtn_ref == r.MdlOfMtn_ref)
                         && (l.TrfcSceno_ref == r.TrfcSceno_ref)
                         && (l.CllsnMtgtnByBrkgPrimQly_ref == r.CllsnMtgtnByBrkgPrimQly_ref)
                         && (l.CllsnMtgtnByBrkgSecQly_ref == r.CllsnMtgtnByBrkgSecQly_ref)
                         && (l.CllsnWarnFwdQly_ref == r.CllsnWarnFwdQly_ref)
                         && (l.ObjTrfcJamAssiQly_ref == r.ObjTrfcJamAssiQly_ref)
                         && (l.DstLatFromMidOfLaneSelfQly_ref == r.DstLatFromMidOfLaneSelfQly_ref)
                         && (l.EmgyLaneKeepAidPosnQly_ref == r.EmgyLaneKeepAidPosnQly_ref)
                         && (l.PosnLgtStdDe_ref == r.PosnLgtStdDe_ref)
                         && (l.PosnLatStdDe_ref == r.PosnLatStdDe_ref)
                         && (l.AgDirStdDe_ref == r.AgDirStdDe_ref)
                         && (l.SpdStdDe_ref == r.SpdStdDe_ref)
                         && (l.AStdDe_ref == r.AStdDe_ref)
                         && (l.FusnSrc_ref == r.FusnSrc_ref)
                         && (l.TimeStamp_ref == r.TimeStamp_ref)
                         && (l.Age2_ref == r.Age2_ref)
                         && (l.ExistConf_ref == r.ExistConf_ref)
                         && (l.ClassConf_ref == r.ClassConf_ref)
                         && (l.ObjPptyChks_ref == r.ObjPptyChks_ref)
                         && (l.ObjPptyCntr_ref == r.ObjPptyCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another ObjPpty2Vcc instance.
 */
inline bool operator!=(ObjPpty2Vcc const& l,
                       ObjPpty2Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace ObjPpty1Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJPPTY1VCC_IMPL_TYPE_OBJPPTY2VCC_H_
