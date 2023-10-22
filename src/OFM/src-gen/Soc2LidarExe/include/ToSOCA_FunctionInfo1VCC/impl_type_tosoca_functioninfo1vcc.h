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
/**        \file  Soc2LidarExe/include/ToSOCA_FunctionInfo1VCC/impl_type_tosoca_functioninfo1vcc.h
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

#ifndef SOC2LIDAREXE_INCLUDE_TOSOCA_FUNCTIONINFO1VCC_IMPL_TYPE_TOSOCA_FUNCTIONINFO1VCC_H_
#define SOC2LIDAREXE_INCLUDE_TOSOCA_FUNCTIONINFO1VCC_IMPL_TYPE_TOSOCA_FUNCTIONINFO1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DynCalPrmForAxleDstReToVehFrnt/impl_type_dyncalprmforaxledstretovehfrnt.h"
#include "DynCalPrmForCamLatDistToVehFrnt/impl_type_dyncalprmforcamlatdisttovehfrnt.h"
#include "DynCalPrmForCamLongDistToVehFrnt/impl_type_dyncalprmforcamlongdisttovehfrnt.h"
#include "DynCalPrmForVehTyp/impl_type_dyncalprmforvehtyp.h"
#include "LppLaneChgSts/impl_type_lpplanechgsts.h"
#include "NgpSts1/impl_type_ngpsts1.h"
#include "TjaSts/impl_type_tjasts.h"
#include "TlaFaultSts/impl_type_tlafaultsts.h"
#include "TrfcLiAttentionEna/impl_type_trfcliattentionena.h"
#include "TrfcSignInfoEna/impl_type_trfcsigninfoena.h"
#include "TsiFaultSts/impl_type_tsifaultsts.h"
#include "VehInLaneChg/impl_type_vehinlanechg.h"

namespace ToSOCA_FunctionInfo1VCC {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ToSOCA_FunctionInfo1VCC.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCC
 */
struct ToSOCA_FunctionInfo1VCC {
  using _LppLaneChgSts_ref_type = LppLaneChgSts::LppLaneChgSts;
  using _TrfcLiAttentionEna_ref_type = TrfcLiAttentionEna::TrfcLiAttentionEna;
  using _TrfcSignInfoEna_ref_type = TrfcSignInfoEna::TrfcSignInfoEna;
  using _VehInLaneChg_ref_type = VehInLaneChg::VehInLaneChg;
  using _DynCalPrmForAxleDstReToVehFrnt_ref_type = DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt;
  using _DynCalPrmForCamLatDistToVehFrnt_ref_type = DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt;
  using _DynCalPrmForCamLongDistToVehFrnt_ref_type = DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt;
  using _DynCalPrmForVehTyp_ref_type = DynCalPrmForVehTyp::DynCalPrmForVehTyp;
  using _TjaSts_ref_type = TjaSts::TjaSts;
  using _NgpSts1_ref_type = NgpSts1::NgpSts1;
  using _TlaFaultSts_ref_type = TlaFaultSts::TlaFaultSts;
  using _TsiFaultSts_ref_type = TsiFaultSts::TsiFaultSts;

  _LppLaneChgSts_ref_type LppLaneChgSts_ref;
  _TrfcLiAttentionEna_ref_type TrfcLiAttentionEna_ref;
  _TrfcSignInfoEna_ref_type TrfcSignInfoEna_ref;
  _VehInLaneChg_ref_type VehInLaneChg_ref;
  _DynCalPrmForAxleDstReToVehFrnt_ref_type DynCalPrmForAxleDstReToVehFrnt_ref;
  _DynCalPrmForCamLatDistToVehFrnt_ref_type DynCalPrmForCamLatDistToVehFrnt_ref;
  _DynCalPrmForCamLongDistToVehFrnt_ref_type DynCalPrmForCamLongDistToVehFrnt_ref;
  _DynCalPrmForVehTyp_ref_type DynCalPrmForVehTyp_ref;
  _TjaSts_ref_type TjaSts_ref;
  _NgpSts1_ref_type NgpSts1_ref;
  _TlaFaultSts_ref_type TlaFaultSts_ref;
  _TsiFaultSts_ref_type TsiFaultSts_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ToSOCA_FunctionInfo1VCC instance.
 */
inline bool operator==(ToSOCA_FunctionInfo1VCC const& l,
                       ToSOCA_FunctionInfo1VCC const& r) noexcept {
  return (&l == &r) || ((l.LppLaneChgSts_ref == r.LppLaneChgSts_ref)
                         && (l.TrfcLiAttentionEna_ref == r.TrfcLiAttentionEna_ref)
                         && (l.TrfcSignInfoEna_ref == r.TrfcSignInfoEna_ref)
                         && (l.VehInLaneChg_ref == r.VehInLaneChg_ref)
                         && (l.DynCalPrmForAxleDstReToVehFrnt_ref == r.DynCalPrmForAxleDstReToVehFrnt_ref)
                         && (l.DynCalPrmForCamLatDistToVehFrnt_ref == r.DynCalPrmForCamLatDistToVehFrnt_ref)
                         && (l.DynCalPrmForCamLongDistToVehFrnt_ref == r.DynCalPrmForCamLongDistToVehFrnt_ref)
                         && (l.DynCalPrmForVehTyp_ref == r.DynCalPrmForVehTyp_ref)
                         && (l.TjaSts_ref == r.TjaSts_ref)
                         && (l.NgpSts1_ref == r.NgpSts1_ref)
                         && (l.TlaFaultSts_ref == r.TlaFaultSts_ref)
                         && (l.TsiFaultSts_ref == r.TsiFaultSts_ref)
  );
}

/*!
 * \brief Compare for inequality with another ToSOCA_FunctionInfo1VCC instance.
 */
inline bool operator!=(ToSOCA_FunctionInfo1VCC const& l,
                       ToSOCA_FunctionInfo1VCC const& r) noexcept {
  return !(l == r);
}

}  // namespace ToSOCA_FunctionInfo1VCC

#endif  // SOC2LIDAREXE_INCLUDE_TOSOCA_FUNCTIONINFO1VCC_IMPL_TYPE_TOSOCA_FUNCTIONINFO1VCC_H_
