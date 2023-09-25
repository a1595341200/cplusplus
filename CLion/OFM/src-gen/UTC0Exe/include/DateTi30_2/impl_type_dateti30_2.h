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
/**        \file  UTC0Exe/include/DateTi30_2/impl_type_dateti30_2.h
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

#ifndef UTC0EXE_INCLUDE_DATETI30_2_IMPL_TYPE_DATETI30_2_H_
#define UTC0EXE_INCLUDE_DATETI30_2_IMPL_TYPE_DATETI30_2_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DataValid/impl_type_datavalid.h"
#include "Day/impl_type_day.h"
#include "Hr1/impl_type_hr1.h"
#include "Mins1/impl_type_mins1.h"
#include "Mins1/impl_type_sec1.h"
#include "Mth1/impl_type_mth1.h"
#include "Yr1/impl_type_yr1.h"

namespace DateTi30_2 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type DateTi30_2.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DateTi30_2
 */
struct DateTi30_2 {
  using _Yr1_ref_type = Yr1::Yr1;
  using _Mth1_ref_type = Mth1::Mth1;
  using _Day_ref_type = Day::Day;
  using _Hr1_ref_type = Hr1::Hr1;
  using _Mins1_ref_type = Mins1::Mins1;
  using _Sec1_ref_type = Mins1::Sec1;
  using _DataValid_ref_type = DataValid::DataValid;

  _Yr1_ref_type Yr1_ref;
  _Mth1_ref_type Mth1_ref;
  _Day_ref_type Day_ref;
  _Hr1_ref_type Hr1_ref;
  _Mins1_ref_type Mins1_ref;
  _Sec1_ref_type Sec1_ref;
  _DataValid_ref_type DataValid_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another DateTi30_2 instance.
 */
inline bool operator==(DateTi30_2 const& l,
                       DateTi30_2 const& r) noexcept {
  return (&l == &r) || ((l.Yr1_ref == r.Yr1_ref)
                         && (l.Mth1_ref == r.Mth1_ref)
                         && (l.Day_ref == r.Day_ref)
                         && (l.Hr1_ref == r.Hr1_ref)
                         && (l.Mins1_ref == r.Mins1_ref)
                         && (l.Sec1_ref == r.Sec1_ref)
                         && (l.DataValid_ref == r.DataValid_ref)
  );
}

/*!
 * \brief Compare for inequality with another DateTi30_2 instance.
 */
inline bool operator!=(DateTi30_2 const& l,
                       DateTi30_2 const& r) noexcept {
  return !(l == r);
}

}  // namespace DateTi30_2

#endif  // UTC0EXE_INCLUDE_DATETI30_2_IMPL_TYPE_DATETI30_2_H_
