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
/**        \file  PerceptionSideExe/include/VehModMngtGlbSafe1/impl_type_vehmodmngtglbsafe1.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_VEHMODMNGTGLBSAFE1_IMPL_TYPE_VEHMODMNGTGLBSAFE1_H_
#define PERCEPTIONSIDEEXE_INCLUDE_VEHMODMNGTGLBSAFE1_IMPL_TYPE_VEHMODMNGTGLBSAFE1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CarModSts1/impl_type_carmodsts1.h"
#include "CarModSubtypWdCarModSubtyp/impl_type_carmodsubtypwdcarmodsubtyp.h"
#include "EgyLvlElecMai/impl_type_egylvlelecmai.h"
#include "EgyLvlElecSubtyp/impl_type_egylvlelecsubtyp.h"
#include "FltEgyCnsWdSts/impl_type_fltegycnswdsts.h"
#include "PwrLvlElecMai/impl_type_pwrlvlelecmai.h"
#include "PwrLvlElecSubtyp/impl_type_pwrlvlelecsubtyp.h"
#include "UsgModSts/impl_type_usgmodsts.h"
#include "VehModChks/impl_type_vehmodchks.h"
#include "VehModCntr/impl_type_vehmodcntr.h"

namespace VehModMngtGlbSafe1 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehModMngtGlbSafe1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehModMngtGlbSafe1
 */
struct VehModMngtGlbSafe1 {
  using _UsgModSts_ref_type = UsgModSts::UsgModSts;
  using _CarModSts1_ref_type = CarModSts1::CarModSts1;
  using _CarModSubtypWdCarModSubtyp_ref_type = CarModSubtypWdCarModSubtyp::CarModSubtypWdCarModSubtyp;
  using _EgyLvlElecMai_ref_type = EgyLvlElecMai::EgyLvlElecMai;
  using _EgyLvlElecSubtyp_ref_type = EgyLvlElecSubtyp::EgyLvlElecSubtyp;
  using _PwrLvlElecMai_ref_type = PwrLvlElecMai::PwrLvlElecMai;
  using _PwrLvlElecSubtyp_ref_type = PwrLvlElecSubtyp::PwrLvlElecSubtyp;
  using _FltEgyCnsWdSts_ref_type = FltEgyCnsWdSts::FltEgyCnsWdSts;
  using _VehModChks_ref_type = VehModChks::VehModChks;
  using _VehModCntr_ref_type = VehModCntr::VehModCntr;

  _UsgModSts_ref_type UsgModSts_ref;
  _CarModSts1_ref_type CarModSts1_ref;
  _CarModSubtypWdCarModSubtyp_ref_type CarModSubtypWdCarModSubtyp_ref;
  _EgyLvlElecMai_ref_type EgyLvlElecMai_ref;
  _EgyLvlElecSubtyp_ref_type EgyLvlElecSubtyp_ref;
  _PwrLvlElecMai_ref_type PwrLvlElecMai_ref;
  _PwrLvlElecSubtyp_ref_type PwrLvlElecSubtyp_ref;
  _FltEgyCnsWdSts_ref_type FltEgyCnsWdSts_ref;
  _VehModChks_ref_type VehModChks_ref;
  _VehModCntr_ref_type VehModCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehModMngtGlbSafe1 instance.
 */
inline bool operator==(VehModMngtGlbSafe1 const& l,
                       VehModMngtGlbSafe1 const& r) noexcept {
  return (&l == &r) || ((l.UsgModSts_ref == r.UsgModSts_ref)
                         && (l.CarModSts1_ref == r.CarModSts1_ref)
                         && (l.CarModSubtypWdCarModSubtyp_ref == r.CarModSubtypWdCarModSubtyp_ref)
                         && (l.EgyLvlElecMai_ref == r.EgyLvlElecMai_ref)
                         && (l.EgyLvlElecSubtyp_ref == r.EgyLvlElecSubtyp_ref)
                         && (l.PwrLvlElecMai_ref == r.PwrLvlElecMai_ref)
                         && (l.PwrLvlElecSubtyp_ref == r.PwrLvlElecSubtyp_ref)
                         && (l.FltEgyCnsWdSts_ref == r.FltEgyCnsWdSts_ref)
                         && (l.VehModChks_ref == r.VehModChks_ref)
                         && (l.VehModCntr_ref == r.VehModCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another VehModMngtGlbSafe1 instance.
 */
inline bool operator!=(VehModMngtGlbSafe1 const& l,
                       VehModMngtGlbSafe1 const& r) noexcept {
  return !(l == r);
}

}  // namespace VehModMngtGlbSafe1

#endif  // PERCEPTIONSIDEEXE_INCLUDE_VEHMODMNGTGLBSAFE1_IMPL_TYPE_VEHMODMNGTGLBSAFE1_H_
