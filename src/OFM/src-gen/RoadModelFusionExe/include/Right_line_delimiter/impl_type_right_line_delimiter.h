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
/**        \file  RoadModelFusionExe/include/Right_line_delimiter/impl_type_right_line_delimiter.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_RIGHT_LINE_DELIMITER_IMPL_TYPE_RIGHT_LINE_DELIMITER_H_
#define ROADMODELFUSIONEXE_INCLUDE_RIGHT_LINE_DELIMITER_IMPL_TYPE_RIGHT_LINE_DELIMITER_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "RightCoeffA_C0/impl_type_rightcoeffa_c0.h"
#include "RightCoeffA_C0/impl_type_rightcoeffa_c2.h"
#include "RightCoeffA_C1/impl_type_rightcoeffa_c1.h"
#include "RightCoeffA_C3/impl_type_rightcoeffa_c3.h"
#include "RightCoeffB_C0/impl_type_rightcoeffb_c0.h"
#include "RightCoeffB_C0/impl_type_rightcoeffb_c1.h"
#include "RightCoeffB_C2/impl_type_rightcoeffb_c2.h"
#include "RightCoeffB_C3/impl_type_rightcoeffb_c3.h"
#include "RightCoeffC_C0/impl_type_rightcoeffc_c0.h"
#include "RightCoeffC_C0/impl_type_rightcoeffc_c1.h"
#include "RightCoeffC_C2/impl_type_rightcoeffc_c2.h"
#include "RightCoeffC_C3/impl_type_rightcoeffc_c3.h"
#include "RightCoeffD_C0/impl_type_rightcoeffd_c0.h"
#include "RightCoeffD_C1/impl_type_rightcoeffd_c1.h"
#include "RightCoeffD_C2/impl_type_rightcoeffd_c2.h"
#include "RightCoeffD_C3/impl_type_rightcoeffd_c3.h"
#include "RightFromType/impl_type_rightfromtype.h"
#include "RightLgtSeprtX/impl_type_rightlgtseprtx.h"
#include "RightLgtTypeChg/impl_type_rightlgttypechg.h"
#include "RightToType/impl_type_righttotype.h"
#include "RightXMax/impl_type_rightxmax.h"
#include "RightXMin/impl_type_rightxmin.h"

namespace Right_line_delimiter {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Right_line_delimiter.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Right_line_delimiter
 */
struct Right_line_delimiter {
  using _RightCoeffA_C0_ref_type = RightCoeffA_C0::RightCoeffA_C0;
  using _RightCoeffA_C1_ref_type = RightCoeffA_C1::RightCoeffA_C1;
  using _RightCoeffA_C2_ref_type = RightCoeffA_C0::RightCoeffA_C2;
  using _RightCoeffA_C3_ref_type = RightCoeffA_C3::RightCoeffA_C3;
  using _RightCoeffB_C0_ref_type = RightCoeffB_C0::RightCoeffB_C0;
  using _RightCoeffB_C1_ref_type = RightCoeffB_C0::RightCoeffB_C1;
  using _RightCoeffB_C2_ref_type = RightCoeffB_C2::RightCoeffB_C2;
  using _RightCoeffB_C3_ref_type = RightCoeffB_C3::RightCoeffB_C3;
  using _RightCoeffC_C0_ref_type = RightCoeffC_C0::RightCoeffC_C0;
  using _RightCoeffC_C1_ref_type = RightCoeffC_C0::RightCoeffC_C1;
  using _RightCoeffC_C2_ref_type = RightCoeffC_C2::RightCoeffC_C2;
  using _RightCoeffC_C3_ref_type = RightCoeffC_C3::RightCoeffC_C3;
  using _RightCoeffD_C0_ref_type = RightCoeffD_C0::RightCoeffD_C0;
  using _RightCoeffD_C1_ref_type = RightCoeffD_C1::RightCoeffD_C1;
  using _RightCoeffD_C2_ref_type = RightCoeffD_C2::RightCoeffD_C2;
  using _RightCoeffD_C3_ref_type = RightCoeffD_C3::RightCoeffD_C3;
  using _RightXMin_ref_type = RightXMin::RightXMin;
  using _RightXMax_ref_type = RightXMax::RightXMax;
  using _RightFromType_ref_type = RightFromType::RightFromType;
  using _RightToType_ref_type = RightToType::RightToType;
  using _RightLgtTypeChg_ref_type = RightLgtTypeChg::RightLgtTypeChg;
  using _RightLgtSeprtX_ref_type = RightLgtSeprtX::RightLgtSeprtX;

  _RightCoeffA_C0_ref_type RightCoeffA_C0_ref;
  _RightCoeffA_C1_ref_type RightCoeffA_C1_ref;
  _RightCoeffA_C2_ref_type RightCoeffA_C2_ref;
  _RightCoeffA_C3_ref_type RightCoeffA_C3_ref;
  _RightCoeffB_C0_ref_type RightCoeffB_C0_ref;
  _RightCoeffB_C1_ref_type RightCoeffB_C1_ref;
  _RightCoeffB_C2_ref_type RightCoeffB_C2_ref;
  _RightCoeffB_C3_ref_type RightCoeffB_C3_ref;
  _RightCoeffC_C0_ref_type RightCoeffC_C0_ref;
  _RightCoeffC_C1_ref_type RightCoeffC_C1_ref;
  _RightCoeffC_C2_ref_type RightCoeffC_C2_ref;
  _RightCoeffC_C3_ref_type RightCoeffC_C3_ref;
  _RightCoeffD_C0_ref_type RightCoeffD_C0_ref;
  _RightCoeffD_C1_ref_type RightCoeffD_C1_ref;
  _RightCoeffD_C2_ref_type RightCoeffD_C2_ref;
  _RightCoeffD_C3_ref_type RightCoeffD_C3_ref;
  _RightXMin_ref_type RightXMin_ref;
  _RightXMax_ref_type RightXMax_ref;
  _RightFromType_ref_type RightFromType_ref;
  _RightToType_ref_type RightToType_ref;
  _RightLgtTypeChg_ref_type RightLgtTypeChg_ref;
  _RightLgtSeprtX_ref_type RightLgtSeprtX_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Right_line_delimiter instance.
 */
inline bool operator==(Right_line_delimiter const& l,
                       Right_line_delimiter const& r) noexcept {
  return (&l == &r) || ((l.RightCoeffA_C0_ref == r.RightCoeffA_C0_ref)
                         && (l.RightCoeffA_C1_ref == r.RightCoeffA_C1_ref)
                         && (l.RightCoeffA_C2_ref == r.RightCoeffA_C2_ref)
                         && (l.RightCoeffA_C3_ref == r.RightCoeffA_C3_ref)
                         && (l.RightCoeffB_C0_ref == r.RightCoeffB_C0_ref)
                         && (l.RightCoeffB_C1_ref == r.RightCoeffB_C1_ref)
                         && (l.RightCoeffB_C2_ref == r.RightCoeffB_C2_ref)
                         && (l.RightCoeffB_C3_ref == r.RightCoeffB_C3_ref)
                         && (l.RightCoeffC_C0_ref == r.RightCoeffC_C0_ref)
                         && (l.RightCoeffC_C1_ref == r.RightCoeffC_C1_ref)
                         && (l.RightCoeffC_C2_ref == r.RightCoeffC_C2_ref)
                         && (l.RightCoeffC_C3_ref == r.RightCoeffC_C3_ref)
                         && (l.RightCoeffD_C0_ref == r.RightCoeffD_C0_ref)
                         && (l.RightCoeffD_C1_ref == r.RightCoeffD_C1_ref)
                         && (l.RightCoeffD_C2_ref == r.RightCoeffD_C2_ref)
                         && (l.RightCoeffD_C3_ref == r.RightCoeffD_C3_ref)
                         && (l.RightXMin_ref == r.RightXMin_ref)
                         && (l.RightXMax_ref == r.RightXMax_ref)
                         && (l.RightFromType_ref == r.RightFromType_ref)
                         && (l.RightToType_ref == r.RightToType_ref)
                         && (l.RightLgtTypeChg_ref == r.RightLgtTypeChg_ref)
                         && (l.RightLgtSeprtX_ref == r.RightLgtSeprtX_ref)
  );
}

/*!
 * \brief Compare for inequality with another Right_line_delimiter instance.
 */
inline bool operator!=(Right_line_delimiter const& l,
                       Right_line_delimiter const& r) noexcept {
  return !(l == r);
}

}  // namespace Right_line_delimiter

#endif  // ROADMODELFUSIONEXE_INCLUDE_RIGHT_LINE_DELIMITER_IMPL_TYPE_RIGHT_LINE_DELIMITER_H_
