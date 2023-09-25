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
/**        \file  RoadModelFusionExe/include/CenterLine/impl_type_centerline.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_CENTERLINE_IMPL_TYPE_CENTERLINE_H_
#define ROADMODELFUSIONEXE_INCLUDE_CENTERLINE_IMPL_TYPE_CENTERLINE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CenterCoeffA_C0/impl_type_centercoeffa_c0.h"
#include "CenterCoeffA_C1/impl_type_centercoeffa_c1.h"
#include "CenterCoeffA_C2/impl_type_centercoeffa_c2.h"
#include "CenterCoeffA_C3/impl_type_centercoeffa_c3.h"
#include "CenterCoeffB_C0/impl_type_centercoeffb_c0.h"
#include "CenterCoeffB_C1/impl_type_centercoeffb_c1.h"
#include "CenterCoeffB_C2/impl_type_centercoeffb_c2.h"
#include "CenterCoeffB_C3/impl_type_centercoeffb_c3.h"
#include "CenterCoeffC_C0/impl_type_centercoeffc_c0.h"
#include "CenterCoeffC_C1/impl_type_centercoeffc_c1.h"
#include "CenterCoeffC_C2/impl_type_centercoeffc_c2.h"
#include "CenterCoeffC_C3/impl_type_centercoeffc_c3.h"
#include "CenterCoeffD_C0/impl_type_centercoeffd_c0.h"
#include "CenterCoeffD_C1/impl_type_centercoeffd_c1.h"
#include "CenterCoeffD_C2/impl_type_centercoeffd_c2.h"
#include "CenterCoeffD_C3/impl_type_centercoeffd_c3.h"
#include "CenterLgtSeprtX/impl_type_centerlgtseprtx.h"
#include "CenterXMax/impl_type_centerxmax.h"
#include "CenterXMin/impl_type_centerxmin.h"

namespace CenterLine {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type CenterLine.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CenterLine
 */
struct CenterLine {
  using _CenterCoeffA_C0_ref_type = CenterCoeffA_C0::CenterCoeffA_C0;
  using _CenterCoeffA_C1_ref_type = CenterCoeffA_C1::CenterCoeffA_C1;
  using _CenterCoeffA_C2_ref_type = CenterCoeffA_C2::CenterCoeffA_C2;
  using _CenterCoeffA_C3_ref_type = CenterCoeffA_C3::CenterCoeffA_C3;
  using _CenterCoeffB_C0_ref_type = CenterCoeffB_C0::CenterCoeffB_C0;
  using _CenterCoeffB_C1_ref_type = CenterCoeffB_C1::CenterCoeffB_C1;
  using _CenterCoeffB_C2_ref_type = CenterCoeffB_C2::CenterCoeffB_C2;
  using _CenterCoeffB_C3_ref_type = CenterCoeffB_C3::CenterCoeffB_C3;
  using _CenterCoeffC_C0_ref_type = CenterCoeffC_C0::CenterCoeffC_C0;
  using _CenterCoeffC_C1_ref_type = CenterCoeffC_C1::CenterCoeffC_C1;
  using _CenterCoeffC_C2_ref_type = CenterCoeffC_C2::CenterCoeffC_C2;
  using _CenterCoeffC_C3_ref_type = CenterCoeffC_C3::CenterCoeffC_C3;
  using _CenterCoeffD_C0_ref_type = CenterCoeffD_C0::CenterCoeffD_C0;
  using _CenterCoeffD_C1_ref_type = CenterCoeffD_C1::CenterCoeffD_C1;
  using _CenterCoeffD_C2_ref_type = CenterCoeffD_C2::CenterCoeffD_C2;
  using _CenterCoeffD_C3_ref_type = CenterCoeffD_C3::CenterCoeffD_C3;
  using _CenterXMin_ref_type = CenterXMin::CenterXMin;
  using _CenterXMax_ref_type = CenterXMax::CenterXMax;
  using _CenterLgtSeprtX_ref_type = CenterLgtSeprtX::CenterLgtSeprtX;

  _CenterCoeffA_C0_ref_type CenterCoeffA_C0_ref;
  _CenterCoeffA_C1_ref_type CenterCoeffA_C1_ref;
  _CenterCoeffA_C2_ref_type CenterCoeffA_C2_ref;
  _CenterCoeffA_C3_ref_type CenterCoeffA_C3_ref;
  _CenterCoeffB_C0_ref_type CenterCoeffB_C0_ref;
  _CenterCoeffB_C1_ref_type CenterCoeffB_C1_ref;
  _CenterCoeffB_C2_ref_type CenterCoeffB_C2_ref;
  _CenterCoeffB_C3_ref_type CenterCoeffB_C3_ref;
  _CenterCoeffC_C0_ref_type CenterCoeffC_C0_ref;
  _CenterCoeffC_C1_ref_type CenterCoeffC_C1_ref;
  _CenterCoeffC_C2_ref_type CenterCoeffC_C2_ref;
  _CenterCoeffC_C3_ref_type CenterCoeffC_C3_ref;
  _CenterCoeffD_C0_ref_type CenterCoeffD_C0_ref;
  _CenterCoeffD_C1_ref_type CenterCoeffD_C1_ref;
  _CenterCoeffD_C2_ref_type CenterCoeffD_C2_ref;
  _CenterCoeffD_C3_ref_type CenterCoeffD_C3_ref;
  _CenterXMin_ref_type CenterXMin_ref;
  _CenterXMax_ref_type CenterXMax_ref;
  _CenterLgtSeprtX_ref_type CenterLgtSeprtX_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another CenterLine instance.
 */
inline bool operator==(CenterLine const& l,
                       CenterLine const& r) noexcept {
  return (&l == &r) || ((l.CenterCoeffA_C0_ref == r.CenterCoeffA_C0_ref)
                         && (l.CenterCoeffA_C1_ref == r.CenterCoeffA_C1_ref)
                         && (l.CenterCoeffA_C2_ref == r.CenterCoeffA_C2_ref)
                         && (l.CenterCoeffA_C3_ref == r.CenterCoeffA_C3_ref)
                         && (l.CenterCoeffB_C0_ref == r.CenterCoeffB_C0_ref)
                         && (l.CenterCoeffB_C1_ref == r.CenterCoeffB_C1_ref)
                         && (l.CenterCoeffB_C2_ref == r.CenterCoeffB_C2_ref)
                         && (l.CenterCoeffB_C3_ref == r.CenterCoeffB_C3_ref)
                         && (l.CenterCoeffC_C0_ref == r.CenterCoeffC_C0_ref)
                         && (l.CenterCoeffC_C1_ref == r.CenterCoeffC_C1_ref)
                         && (l.CenterCoeffC_C2_ref == r.CenterCoeffC_C2_ref)
                         && (l.CenterCoeffC_C3_ref == r.CenterCoeffC_C3_ref)
                         && (l.CenterCoeffD_C0_ref == r.CenterCoeffD_C0_ref)
                         && (l.CenterCoeffD_C1_ref == r.CenterCoeffD_C1_ref)
                         && (l.CenterCoeffD_C2_ref == r.CenterCoeffD_C2_ref)
                         && (l.CenterCoeffD_C3_ref == r.CenterCoeffD_C3_ref)
                         && (l.CenterXMin_ref == r.CenterXMin_ref)
                         && (l.CenterXMax_ref == r.CenterXMax_ref)
                         && (l.CenterLgtSeprtX_ref == r.CenterLgtSeprtX_ref)
  );
}

/*!
 * \brief Compare for inequality with another CenterLine instance.
 */
inline bool operator!=(CenterLine const& l,
                       CenterLine const& r) noexcept {
  return !(l == r);
}

}  // namespace CenterLine

#endif  // ROADMODELFUSIONEXE_INCLUDE_CENTERLINE_IMPL_TYPE_CENTERLINE_H_
