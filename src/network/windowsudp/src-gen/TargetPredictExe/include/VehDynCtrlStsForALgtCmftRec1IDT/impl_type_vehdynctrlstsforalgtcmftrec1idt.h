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
/**        \file  TargetPredictExe/include/VehDynCtrlStsForALgtCmftRec1IDT/impl_type_vehdynctrlstsforalgtcmftrec1idt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_IMPL_TYPE_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_H_
#define TARGETPREDICTEXE_INCLUDE_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_IMPL_TYPE_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Flg1VccIDT/impl_type_flg1vccidt.h"
#include "StandStillMgrStsForPark2VccIDT/impl_type_standstillmgrstsforpark2vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace VehDynCtrlStsForALgtCmftRec1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehDynCtrlStsForALgtCmftRec1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT
 */
struct VehDynCtrlStsForALgtCmftRec1IDT {
  using VehDynCtrlStsNotEna_generated_type = Flg1VccIDT::Flg1VccIDT;
  using VehDynCtrlStsDend_generated_type = Flg1VccIDT::Flg1VccIDT;
  using VehDynCtrlStsForBrkPrecActv_generated_type = Flg1VccIDT::Flg1VccIDT;
  using VehDynCtrlStsForWhlBrkWrm_generated_type = Flg1VccIDT::Flg1VccIDT;
  using VehDynCtrlStsForBrkActv_generated_type = Flg1VccIDT::Flg1VccIDT;
  using VehDynCtrlStsForStandStillMgrForPark_generated_type = StandStillMgrStsForPark2VccIDT::StandStillMgrStsForPark2VccIDT;
  using VehDynCtrlStsChks_generated_type = uint8IDT::uint8IDT;
  using VehDynCtrlStsCntr_generated_type = uint8IDT::uint8IDT;

  VehDynCtrlStsNotEna_generated_type VehDynCtrlStsNotEna;
  VehDynCtrlStsDend_generated_type VehDynCtrlStsDend;
  VehDynCtrlStsForBrkPrecActv_generated_type VehDynCtrlStsForBrkPrecActv;
  VehDynCtrlStsForWhlBrkWrm_generated_type VehDynCtrlStsForWhlBrkWrm;
  VehDynCtrlStsForBrkActv_generated_type VehDynCtrlStsForBrkActv;
  VehDynCtrlStsForStandStillMgrForPark_generated_type VehDynCtrlStsForStandStillMgrForPark;
  VehDynCtrlStsChks_generated_type VehDynCtrlStsChks;
  VehDynCtrlStsCntr_generated_type VehDynCtrlStsCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehDynCtrlStsForALgtCmftRec1IDT instance.
 */
inline bool operator==(VehDynCtrlStsForALgtCmftRec1IDT const& l,
                       VehDynCtrlStsForALgtCmftRec1IDT const& r) noexcept {
  return (&l == &r) || ((l.VehDynCtrlStsNotEna == r.VehDynCtrlStsNotEna)
                         && (l.VehDynCtrlStsDend == r.VehDynCtrlStsDend)
                         && (l.VehDynCtrlStsForBrkPrecActv == r.VehDynCtrlStsForBrkPrecActv)
                         && (l.VehDynCtrlStsForWhlBrkWrm == r.VehDynCtrlStsForWhlBrkWrm)
                         && (l.VehDynCtrlStsForBrkActv == r.VehDynCtrlStsForBrkActv)
                         && (l.VehDynCtrlStsForStandStillMgrForPark == r.VehDynCtrlStsForStandStillMgrForPark)
                         && (l.VehDynCtrlStsChks == r.VehDynCtrlStsChks)
                         && (l.VehDynCtrlStsCntr == r.VehDynCtrlStsCntr)
  );
}

/*!
 * \brief Compare for inequality with another VehDynCtrlStsForALgtCmftRec1IDT instance.
 */
inline bool operator!=(VehDynCtrlStsForALgtCmftRec1IDT const& l,
                       VehDynCtrlStsForALgtCmftRec1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehDynCtrlStsForALgtCmftRec1IDT

#endif  // TARGETPREDICTEXE_INCLUDE_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_IMPL_TYPE_VEHDYNCTRLSTSFORALGTCMFTREC1IDT_H_
