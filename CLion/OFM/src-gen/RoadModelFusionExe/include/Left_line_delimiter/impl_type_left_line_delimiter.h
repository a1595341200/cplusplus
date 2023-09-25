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
/**        \file  RoadModelFusionExe/include/Left_line_delimiter/impl_type_left_line_delimiter.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LEFT_LINE_DELIMITER_IMPL_TYPE_LEFT_LINE_DELIMITER_H_
#define ROADMODELFUSIONEXE_INCLUDE_LEFT_LINE_DELIMITER_IMPL_TYPE_LEFT_LINE_DELIMITER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "LeftCoeffA_C0/impl_type_leftcoeffa_c0.h"
#include "LeftCoeffA_C1/impl_type_leftcoeffa_c1.h"
#include "LeftCoeffA_C2/impl_type_leftcoeffa_c2.h"
#include "LeftCoeffA_C3/impl_type_leftcoeffa_c3.h"
#include "LeftCoeffB_C0/impl_type_leftcoeffb_c0.h"
#include "LeftCoeffB_C1/impl_type_leftcoeffb_c1.h"
#include "LeftCoeffB_C2/impl_type_leftcoeffb_c2.h"
#include "LeftCoeffB_C3/impl_type_leftcoeffb_c3.h"
#include "LeftCoeffC_C0/impl_type_leftcoeffc_c0.h"
#include "LeftCoeffC_C1/impl_type_leftcoeffc_c1.h"
#include "LeftCoeffC_C2/impl_type_leftcoeffc_c2.h"
#include "LeftCoeffC_C3/impl_type_leftcoeffc_c3.h"
#include "LeftCoeffD_C0/impl_type_leftcoeffd_c0.h"
#include "LeftCoeffD_C1/impl_type_leftcoeffd_c1.h"
#include "LeftCoeffD_C2/impl_type_leftcoeffd_c2.h"
#include "LeftCoeffD_C3/impl_type_leftcoeffd_c3.h"
#include "LeftFromType/impl_type_leftfromtype.h"
#include "LeftLgtSeprtX/impl_type_leftlgtseprtx.h"
#include "LeftLgtTypeChg/impl_type_leftlgttypechg.h"
#include "LeftToType/impl_type_lefttotype.h"
#include "LeftXMax/impl_type_leftxmax.h"
#include "LeftXMin/impl_type_leftxmin.h"

namespace Left_line_delimiter {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Left_line_delimiter.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Left_line_delimiter
 */
struct Left_line_delimiter {
  using _LeftCoeffA_C0_ref_type = LeftCoeffA_C0::LeftCoeffA_C0;
  using _LeftCoeffA_C1_ref_type = LeftCoeffA_C1::LeftCoeffA_C1;
  using _LeftCoeffA_C2_ref_type = LeftCoeffA_C2::LeftCoeffA_C2;
  using _LeftCoeffA_C3_ref_type = LeftCoeffA_C3::LeftCoeffA_C3;
  using _LeftCoeffB_C0_ref_type = LeftCoeffB_C0::LeftCoeffB_C0;
  using _LeftCoeffB_C1_ref_type = LeftCoeffB_C1::LeftCoeffB_C1;
  using _LeftCoeffB_C2_ref_type = LeftCoeffB_C2::LeftCoeffB_C2;
  using _LeftCoeffB_C3_ref_type = LeftCoeffB_C3::LeftCoeffB_C3;
  using _LeftCoeffC_C0_ref_type = LeftCoeffC_C0::LeftCoeffC_C0;
  using _LeftCoeffC_C1_ref_type = LeftCoeffC_C1::LeftCoeffC_C1;
  using _LeftCoeffC_C2_ref_type = LeftCoeffC_C2::LeftCoeffC_C2;
  using _LeftCoeffC_C3_ref_type = LeftCoeffC_C3::LeftCoeffC_C3;
  using _LeftCoeffD_C0_ref_type = LeftCoeffD_C0::LeftCoeffD_C0;
  using _LeftCoeffD_C1_ref_type = LeftCoeffD_C1::LeftCoeffD_C1;
  using _LeftCoeffD_C2_ref_type = LeftCoeffD_C2::LeftCoeffD_C2;
  using _LeftCoeffD_C3_ref_type = LeftCoeffD_C3::LeftCoeffD_C3;
  using _LeftXMin_ref_type = LeftXMin::LeftXMin;
  using _LeftXMax_ref_type = LeftXMax::LeftXMax;
  using _LeftFromType_ref_type = LeftFromType::LeftFromType;
  using _LeftToType_ref_type = LeftToType::LeftToType;
  using _LeftLgtTypeChg_ref_type = LeftLgtTypeChg::LeftLgtTypeChg;
  using _LeftLgtSeprtX_ref_type = LeftLgtSeprtX::LeftLgtSeprtX;

  _LeftCoeffA_C0_ref_type LeftCoeffA_C0_ref;
  _LeftCoeffA_C1_ref_type LeftCoeffA_C1_ref;
  _LeftCoeffA_C2_ref_type LeftCoeffA_C2_ref;
  _LeftCoeffA_C3_ref_type LeftCoeffA_C3_ref;
  _LeftCoeffB_C0_ref_type LeftCoeffB_C0_ref;
  _LeftCoeffB_C1_ref_type LeftCoeffB_C1_ref;
  _LeftCoeffB_C2_ref_type LeftCoeffB_C2_ref;
  _LeftCoeffB_C3_ref_type LeftCoeffB_C3_ref;
  _LeftCoeffC_C0_ref_type LeftCoeffC_C0_ref;
  _LeftCoeffC_C1_ref_type LeftCoeffC_C1_ref;
  _LeftCoeffC_C2_ref_type LeftCoeffC_C2_ref;
  _LeftCoeffC_C3_ref_type LeftCoeffC_C3_ref;
  _LeftCoeffD_C0_ref_type LeftCoeffD_C0_ref;
  _LeftCoeffD_C1_ref_type LeftCoeffD_C1_ref;
  _LeftCoeffD_C2_ref_type LeftCoeffD_C2_ref;
  _LeftCoeffD_C3_ref_type LeftCoeffD_C3_ref;
  _LeftXMin_ref_type LeftXMin_ref;
  _LeftXMax_ref_type LeftXMax_ref;
  _LeftFromType_ref_type LeftFromType_ref;
  _LeftToType_ref_type LeftToType_ref;
  _LeftLgtTypeChg_ref_type LeftLgtTypeChg_ref;
  _LeftLgtSeprtX_ref_type LeftLgtSeprtX_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Left_line_delimiter instance.
 */
inline bool operator==(Left_line_delimiter const& l,
                       Left_line_delimiter const& r) noexcept {
  return (&l == &r) || ((l.LeftCoeffA_C0_ref == r.LeftCoeffA_C0_ref)
                         && (l.LeftCoeffA_C1_ref == r.LeftCoeffA_C1_ref)
                         && (l.LeftCoeffA_C2_ref == r.LeftCoeffA_C2_ref)
                         && (l.LeftCoeffA_C3_ref == r.LeftCoeffA_C3_ref)
                         && (l.LeftCoeffB_C0_ref == r.LeftCoeffB_C0_ref)
                         && (l.LeftCoeffB_C1_ref == r.LeftCoeffB_C1_ref)
                         && (l.LeftCoeffB_C2_ref == r.LeftCoeffB_C2_ref)
                         && (l.LeftCoeffB_C3_ref == r.LeftCoeffB_C3_ref)
                         && (l.LeftCoeffC_C0_ref == r.LeftCoeffC_C0_ref)
                         && (l.LeftCoeffC_C1_ref == r.LeftCoeffC_C1_ref)
                         && (l.LeftCoeffC_C2_ref == r.LeftCoeffC_C2_ref)
                         && (l.LeftCoeffC_C3_ref == r.LeftCoeffC_C3_ref)
                         && (l.LeftCoeffD_C0_ref == r.LeftCoeffD_C0_ref)
                         && (l.LeftCoeffD_C1_ref == r.LeftCoeffD_C1_ref)
                         && (l.LeftCoeffD_C2_ref == r.LeftCoeffD_C2_ref)
                         && (l.LeftCoeffD_C3_ref == r.LeftCoeffD_C3_ref)
                         && (l.LeftXMin_ref == r.LeftXMin_ref)
                         && (l.LeftXMax_ref == r.LeftXMax_ref)
                         && (l.LeftFromType_ref == r.LeftFromType_ref)
                         && (l.LeftToType_ref == r.LeftToType_ref)
                         && (l.LeftLgtTypeChg_ref == r.LeftLgtTypeChg_ref)
                         && (l.LeftLgtSeprtX_ref == r.LeftLgtSeprtX_ref)
  );
}

/*!
 * \brief Compare for inequality with another Left_line_delimiter instance.
 */
inline bool operator!=(Left_line_delimiter const& l,
                       Left_line_delimiter const& r) noexcept {
  return !(l == r);
}

}  // namespace Left_line_delimiter

#endif  // ROADMODELFUSIONEXE_INCLUDE_LEFT_LINE_DELIMITER_IMPL_TYPE_LEFT_LINE_DELIMITER_H_
