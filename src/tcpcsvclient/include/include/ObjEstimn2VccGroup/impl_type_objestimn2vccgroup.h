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
/**        \file  ObjectFusionModelExe/include/ObjEstimn2VccGroup/impl_type_objestimn2vccgroup.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJESTIMN2VCCGROUP_IMPL_TYPE_OBJESTIMN2VCCGROUP_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJESTIMN2VCCGROUP_IMPL_TYPE_OBJESTIMN2VCCGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "A/impl_type_a.h"
#include "ALat/impl_type_alat.h"
#include "ALgt/impl_type_algt.h"
#include "AgDir/impl_type_agdir.h"
#include "Crvt/impl_type_crvt.h"
#include "ObjEstimnChks/impl_type_objestimnchks.h"
#include "ObjEstimnCntr/impl_type_objestimncntr.h"
#include "PosnLat/impl_type_posnlat.h"
#include "PosnLgt/impl_type_posnlgt.h"
#include "Spd/impl_type_spd.h"
#include "VLat/impl_type_vlat.h"
#include "VLgt/impl_type_vlgt.h"

namespace ObjEstimn2VccGroup {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjEstimn2VccGroup.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjEstimn2VccGroup
 */
struct ObjEstimn2VccGroup {
  using _PosnLgt_ref_type = PosnLgt::PosnLgt;
  using _PosnLat_ref_type = PosnLat::PosnLat;
  using _Spd_ref_type = Spd::Spd;
  using _VLgt_ref_type = VLgt::VLgt;
  using _VLat_ref_type = VLat::VLat;
  using _A_ref_type = A::A;
  using _ALgt_ref_type = ALgt::ALgt;
  using _ALat_ref_type = ALat::ALat;
  using _AgDir_ref_type = AgDir::AgDir;
  using _Crvt_ref_type = Crvt::Crvt;
  using _ObjEstimnChks_ref_type = ObjEstimnChks::ObjEstimnChks;
  using _ObjEstimnCntr_ref_type = ObjEstimnCntr::ObjEstimnCntr;

  _PosnLgt_ref_type PosnLgt_ref;
  _PosnLat_ref_type PosnLat_ref;
  _Spd_ref_type Spd_ref;
  _VLgt_ref_type VLgt_ref;
  _VLat_ref_type VLat_ref;
  _A_ref_type A_ref;
  _ALgt_ref_type ALgt_ref;
  _ALat_ref_type ALat_ref;
  _AgDir_ref_type AgDir_ref;
  _Crvt_ref_type Crvt_ref;
  _ObjEstimnChks_ref_type ObjEstimnChks_ref;
  _ObjEstimnCntr_ref_type ObjEstimnCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ObjEstimn2VccGroup instance.
 */
inline bool operator==(ObjEstimn2VccGroup const& l,
                       ObjEstimn2VccGroup const& r) noexcept {
  return (&l == &r) || ((l.PosnLgt_ref == r.PosnLgt_ref)
                         && (l.PosnLat_ref == r.PosnLat_ref)
                         && (l.Spd_ref == r.Spd_ref)
                         && (l.VLgt_ref == r.VLgt_ref)
                         && (l.VLat_ref == r.VLat_ref)
                         && (l.A_ref == r.A_ref)
                         && (l.ALgt_ref == r.ALgt_ref)
                         && (l.ALat_ref == r.ALat_ref)
                         && (l.AgDir_ref == r.AgDir_ref)
                         && (l.Crvt_ref == r.Crvt_ref)
                         && (l.ObjEstimnChks_ref == r.ObjEstimnChks_ref)
                         && (l.ObjEstimnCntr_ref == r.ObjEstimnCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another ObjEstimn2VccGroup instance.
 */
inline bool operator!=(ObjEstimn2VccGroup const& l,
                       ObjEstimn2VccGroup const& r) noexcept {
  return !(l == r);
}

}  // namespace ObjEstimn2VccGroup

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJESTIMN2VCCGROUP_IMPL_TYPE_OBJESTIMN2VCCGROUP_H_
