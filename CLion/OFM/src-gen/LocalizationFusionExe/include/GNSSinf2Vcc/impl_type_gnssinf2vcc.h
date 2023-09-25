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
/**        \file  LocalizationFusionExe/include/GNSSinf2Vcc/impl_type_gnssinf2vcc.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF2VCC_IMPL_TYPE_GNSSINF2VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF2VCC_IMPL_TYPE_GNSSINF2VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CN0/impl_type_cn0.h"
#include "GNSSinf2Chks/impl_type_gnssinf2chks.h"
#include "GNSSinf2Cntr/impl_type_gnssinf2cntr.h"
#include "GNSSinf2Reserve/impl_type_gnssinf2reserve.h"
#include "Hdop/impl_type_hdop.h"
#include "Leap/impl_type_leap.h"
#include "PVTErrcode/impl_type_pvterrcode.h"
#include "PVTTimestampHi2/impl_type_pvttimestamphi2.h"
#include "PVTTimestampLo2/impl_type_pvttimestamplo2.h"
#include "PVTeDOP/impl_type_pvtedop.h"
#include "PVTgDOP/impl_type_pvtgdop.h"
#include "PVTnDOP/impl_type_pvtndop.h"
#include "PVTsAcc/impl_type_pvtsacc.h"
#include "PVTtAcc2/impl_type_pvttacc2.h"
#include "PVTtDOP/impl_type_pvttdop.h"
#include "PVTvelD/impl_type_pvtveld.h"
#include "PVTvelDStd/impl_type_pvtveldstd.h"
#include "PVTvelE/impl_type_pvtvele.h"
#include "PVTvelEStd/impl_type_pvtvelestd.h"
#include "PVTvelN/impl_type_pvtveln.h"
#include "PVTvelNStd/impl_type_pvtvelnstd.h"
#include "Svtrk/impl_type_svtrk.h"
#include "Svused/impl_type_svused.h"

namespace GNSSinf2Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GNSSinf2Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GNSSinf2Vcc
 */
struct GNSSinf2Vcc {
  using _CN0_ref_type = CN0::CN0;
  using _GNSSinf2Chks_ref_type = GNSSinf2Chks::GNSSinf2Chks;
  using _GNSSinf2Cntr_ref_type = GNSSinf2Cntr::GNSSinf2Cntr;
  using _Hdop_ref_type = Hdop::Hdop;
  using _Leap_ref_type = Leap::Leap;
  using _PVTErrcode_ref_type = PVTErrcode::PVTErrcode;
  using _PVTTimestampHi2_ref_type = PVTTimestampHi2::PVTTimestampHi2;
  using _PVTTimestampLo2_ref_type = PVTTimestampLo2::PVTTimestampLo2;
  using _PVTeDOP_ref_type = PVTeDOP::PVTeDOP;
  using _PVTgDOP_ref_type = PVTgDOP::PVTgDOP;
  using _PVTnDOP_ref_type = PVTnDOP::PVTnDOP;
  using _PVTsAcc_ref_type = PVTsAcc::PVTsAcc;
  using _PVTtAcc2_ref_type = PVTtAcc2::PVTtAcc2;
  using _PVTtDOP_ref_type = PVTtDOP::PVTtDOP;
  using _PVTvelD_ref_type = PVTvelD::PVTvelD;
  using _PVTvelDStd_ref_type = PVTvelDStd::PVTvelDStd;
  using _PVTvelE_ref_type = PVTvelE::PVTvelE;
  using _PVTvelEStd_ref_type = PVTvelEStd::PVTvelEStd;
  using _PVTvelN_ref_type = PVTvelN::PVTvelN;
  using _PVTvelNStd_ref_type = PVTvelNStd::PVTvelNStd;
  using _GNSSinf2Reserve_ref_type = GNSSinf2Reserve::GNSSinf2Reserve;
  using _Svtrk_ref_type = Svtrk::Svtrk;
  using _Svused_ref_type = Svused::Svused;

  _CN0_ref_type CN0_ref;
  _GNSSinf2Chks_ref_type GNSSinf2Chks_ref;
  _GNSSinf2Cntr_ref_type GNSSinf2Cntr_ref;
  _Hdop_ref_type Hdop_ref;
  _Leap_ref_type Leap_ref;
  _PVTErrcode_ref_type PVTErrcode_ref;
  _PVTTimestampHi2_ref_type PVTTimestampHi2_ref;
  _PVTTimestampLo2_ref_type PVTTimestampLo2_ref;
  _PVTeDOP_ref_type PVTeDOP_ref;
  _PVTgDOP_ref_type PVTgDOP_ref;
  _PVTnDOP_ref_type PVTnDOP_ref;
  _PVTsAcc_ref_type PVTsAcc_ref;
  _PVTtAcc2_ref_type PVTtAcc2_ref;
  _PVTtDOP_ref_type PVTtDOP_ref;
  _PVTvelD_ref_type PVTvelD_ref;
  _PVTvelDStd_ref_type PVTvelDStd_ref;
  _PVTvelE_ref_type PVTvelE_ref;
  _PVTvelEStd_ref_type PVTvelEStd_ref;
  _PVTvelN_ref_type PVTvelN_ref;
  _PVTvelNStd_ref_type PVTvelNStd_ref;
  _GNSSinf2Reserve_ref_type GNSSinf2Reserve_ref;
  _Svtrk_ref_type Svtrk_ref;
  _Svused_ref_type Svused_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another GNSSinf2Vcc instance.
 */
inline bool operator==(GNSSinf2Vcc const& l,
                       GNSSinf2Vcc const& r) noexcept {
  return (&l == &r) || ((l.CN0_ref == r.CN0_ref)
                         && (l.GNSSinf2Chks_ref == r.GNSSinf2Chks_ref)
                         && (l.GNSSinf2Cntr_ref == r.GNSSinf2Cntr_ref)
                         && (l.Hdop_ref == r.Hdop_ref)
                         && (l.Leap_ref == r.Leap_ref)
                         && (l.PVTErrcode_ref == r.PVTErrcode_ref)
                         && (l.PVTTimestampHi2_ref == r.PVTTimestampHi2_ref)
                         && (l.PVTTimestampLo2_ref == r.PVTTimestampLo2_ref)
                         && (l.PVTeDOP_ref == r.PVTeDOP_ref)
                         && (l.PVTgDOP_ref == r.PVTgDOP_ref)
                         && (l.PVTnDOP_ref == r.PVTnDOP_ref)
                         && (l.PVTsAcc_ref == r.PVTsAcc_ref)
                         && (l.PVTtAcc2_ref == r.PVTtAcc2_ref)
                         && (l.PVTtDOP_ref == r.PVTtDOP_ref)
                         && (l.PVTvelD_ref == r.PVTvelD_ref)
                         && (l.PVTvelDStd_ref == r.PVTvelDStd_ref)
                         && (l.PVTvelE_ref == r.PVTvelE_ref)
                         && (l.PVTvelEStd_ref == r.PVTvelEStd_ref)
                         && (l.PVTvelN_ref == r.PVTvelN_ref)
                         && (l.PVTvelNStd_ref == r.PVTvelNStd_ref)
                         && (l.GNSSinf2Reserve_ref == r.GNSSinf2Reserve_ref)
                         && (l.Svtrk_ref == r.Svtrk_ref)
                         && (l.Svused_ref == r.Svused_ref)
  );
}

/*!
 * \brief Compare for inequality with another GNSSinf2Vcc instance.
 */
inline bool operator!=(GNSSinf2Vcc const& l,
                       GNSSinf2Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace GNSSinf2Vcc

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_GNSSINF2VCC_IMPL_TYPE_GNSSINF2VCC_H_
