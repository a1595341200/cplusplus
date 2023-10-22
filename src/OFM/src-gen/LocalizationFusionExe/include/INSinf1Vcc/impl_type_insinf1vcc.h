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
/**        \file  LocalizationFusionExe/include/INSinf1Vcc/impl_type_insinf1vcc.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_INSINF1VCC_IMPL_TYPE_INSINF1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_INSINF1VCC_IMPL_TYPE_INSINF1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "INSCalStatus/impl_type_inscalstatus.h"
#include "INSEastSpd/impl_type_inseastspd.h"
#include "INSEastSpdStd/impl_type_inseastspdstd.h"
#include "INSGroundSpdStd/impl_type_insgroundspdstd.h"
#include "INSHeadingAngle/impl_type_insheadingangle.h"
#include "INSHeadingAngleStd/impl_type_insheadinganglestd.h"
#include "INSLatitude/impl_type_inslatitude.h"
#include "INSLocatHeight/impl_type_inslocatheight.h"
#include "INSLongitude/impl_type_inslongitude.h"
#include "INSNavStatus/impl_type_insnavstatus.h"
#include "INSNorthSpd/impl_type_insnorthspd.h"
#include "INSNorthSpdStd/impl_type_insnorthspdstd.h"
#include "INSPitchAngle/impl_type_inspitchangle.h"
#include "INSPitchAngleStd/impl_type_inspitchanglestd.h"
#include "INSRollAngle/impl_type_insrollangle.h"
#include "INSRollAngleStd/impl_type_insrollanglestd.h"
#include "INSStdLat/impl_type_insstdlat.h"
#include "INSStdLocatHeight/impl_type_insstdlocatheight.h"
#include "INSStdLon/impl_type_insstdlon.h"
#include "INSTimestampHi/impl_type_instimestamphi.h"
#include "INSTimestampLo/impl_type_instimestamplo.h"
#include "INSToGroundSpd/impl_type_instogroundspd.h"
#include "INS_DR_ValidSta/impl_type_ins_dr_validsta.h"
#include "INS_PreciousLvl/impl_type_ins_preciouslvl.h"
#include "INSinfChks/impl_type_insinfchks.h"
#include "INSinfCntr/impl_type_insinfcntr.h"
#include "INSinfReserve/impl_type_insinfreserve.h"

namespace INSinf1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type INSinf1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/INSinf1Vcc
 */
struct INSinf1Vcc {
  using _INSinfChks_ref_type = INSinfChks::INSinfChks;
  using _INSinfCntr_ref_type = INSinfCntr::INSinfCntr;
  using _INSCalStatus_ref_type = INSCalStatus::INSCalStatus;
  using _INSEastSpd_ref_type = INSEastSpd::INSEastSpd;
  using _INSEastSpdStd_ref_type = INSEastSpdStd::INSEastSpdStd;
  using _INSGroundSpdStd_ref_type = INSGroundSpdStd::INSGroundSpdStd;
  using _INSHeadingAngle_ref_type = INSHeadingAngle::INSHeadingAngle;
  using _INSHeadingAngleStd_ref_type = INSHeadingAngleStd::INSHeadingAngleStd;
  using _INSLatitude_ref_type = INSLatitude::INSLatitude;
  using _INSLocatHeight_ref_type = INSLocatHeight::INSLocatHeight;
  using _INSLongitude_ref_type = INSLongitude::INSLongitude;
  using _INSNavStatus_ref_type = INSNavStatus::INSNavStatus;
  using _INSNorthSpd_ref_type = INSNorthSpd::INSNorthSpd;
  using _INSNorthSpdStd_ref_type = INSNorthSpdStd::INSNorthSpdStd;
  using _INSPitchAngle_ref_type = INSPitchAngle::INSPitchAngle;
  using _INSPitchAngleStd_ref_type = INSPitchAngleStd::INSPitchAngleStd;
  using _INSRollAngle_ref_type = INSRollAngle::INSRollAngle;
  using _INSRollAngleStd_ref_type = INSRollAngleStd::INSRollAngleStd;
  using _INSStdLat_ref_type = INSStdLat::INSStdLat;
  using _INSStdLocatHeight_ref_type = INSStdLocatHeight::INSStdLocatHeight;
  using _INSStdLon_ref_type = INSStdLon::INSStdLon;
  using _INSTimestampHi_ref_type = INSTimestampHi::INSTimestampHi;
  using _INSTimestampLo_ref_type = INSTimestampLo::INSTimestampLo;
  using _INSToGroundSpd_ref_type = INSToGroundSpd::INSToGroundSpd;
  using _INS_DR_ValidSta_ref_type = INS_DR_ValidSta::INS_DR_ValidSta;
  using _INS_PreciousLvl_ref_type = INS_PreciousLvl::INS_PreciousLvl;
  using _INSinfReserve_ref_type = INSinfReserve::INSinfReserve;

  _INSinfChks_ref_type INSinfChks_ref;
  _INSinfCntr_ref_type INSinfCntr_ref;
  _INSCalStatus_ref_type INSCalStatus_ref;
  _INSEastSpd_ref_type INSEastSpd_ref;
  _INSEastSpdStd_ref_type INSEastSpdStd_ref;
  _INSGroundSpdStd_ref_type INSGroundSpdStd_ref;
  _INSHeadingAngle_ref_type INSHeadingAngle_ref;
  _INSHeadingAngleStd_ref_type INSHeadingAngleStd_ref;
  _INSLatitude_ref_type INSLatitude_ref;
  _INSLocatHeight_ref_type INSLocatHeight_ref;
  _INSLongitude_ref_type INSLongitude_ref;
  _INSNavStatus_ref_type INSNavStatus_ref;
  _INSNorthSpd_ref_type INSNorthSpd_ref;
  _INSNorthSpdStd_ref_type INSNorthSpdStd_ref;
  _INSPitchAngle_ref_type INSPitchAngle_ref;
  _INSPitchAngleStd_ref_type INSPitchAngleStd_ref;
  _INSRollAngle_ref_type INSRollAngle_ref;
  _INSRollAngleStd_ref_type INSRollAngleStd_ref;
  _INSStdLat_ref_type INSStdLat_ref;
  _INSStdLocatHeight_ref_type INSStdLocatHeight_ref;
  _INSStdLon_ref_type INSStdLon_ref;
  _INSTimestampHi_ref_type INSTimestampHi_ref;
  _INSTimestampLo_ref_type INSTimestampLo_ref;
  _INSToGroundSpd_ref_type INSToGroundSpd_ref;
  _INS_DR_ValidSta_ref_type INS_DR_ValidSta_ref;
  _INS_PreciousLvl_ref_type INS_PreciousLvl_ref;
  _INSinfReserve_ref_type INSinfReserve_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another INSinf1Vcc instance.
 */
inline bool operator==(INSinf1Vcc const& l,
                       INSinf1Vcc const& r) noexcept {
  return (&l == &r) || ((l.INSinfChks_ref == r.INSinfChks_ref)
                         && (l.INSinfCntr_ref == r.INSinfCntr_ref)
                         && (l.INSCalStatus_ref == r.INSCalStatus_ref)
                         && (l.INSEastSpd_ref == r.INSEastSpd_ref)
                         && (l.INSEastSpdStd_ref == r.INSEastSpdStd_ref)
                         && (l.INSGroundSpdStd_ref == r.INSGroundSpdStd_ref)
                         && (l.INSHeadingAngle_ref == r.INSHeadingAngle_ref)
                         && (l.INSHeadingAngleStd_ref == r.INSHeadingAngleStd_ref)
                         && (l.INSLatitude_ref == r.INSLatitude_ref)
                         && (l.INSLocatHeight_ref == r.INSLocatHeight_ref)
                         && (l.INSLongitude_ref == r.INSLongitude_ref)
                         && (l.INSNavStatus_ref == r.INSNavStatus_ref)
                         && (l.INSNorthSpd_ref == r.INSNorthSpd_ref)
                         && (l.INSNorthSpdStd_ref == r.INSNorthSpdStd_ref)
                         && (l.INSPitchAngle_ref == r.INSPitchAngle_ref)
                         && (l.INSPitchAngleStd_ref == r.INSPitchAngleStd_ref)
                         && (l.INSRollAngle_ref == r.INSRollAngle_ref)
                         && (l.INSRollAngleStd_ref == r.INSRollAngleStd_ref)
                         && (l.INSStdLat_ref == r.INSStdLat_ref)
                         && (l.INSStdLocatHeight_ref == r.INSStdLocatHeight_ref)
                         && (l.INSStdLon_ref == r.INSStdLon_ref)
                         && (l.INSTimestampHi_ref == r.INSTimestampHi_ref)
                         && (l.INSTimestampLo_ref == r.INSTimestampLo_ref)
                         && (l.INSToGroundSpd_ref == r.INSToGroundSpd_ref)
                         && (l.INS_DR_ValidSta_ref == r.INS_DR_ValidSta_ref)
                         && (l.INS_PreciousLvl_ref == r.INS_PreciousLvl_ref)
                         && (l.INSinfReserve_ref == r.INSinfReserve_ref)
  );
}

/*!
 * \brief Compare for inequality with another INSinf1Vcc instance.
 */
inline bool operator!=(INSinf1Vcc const& l,
                       INSinf1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace INSinf1Vcc

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_INSINF1VCC_IMPL_TYPE_INSINF1VCC_H_
