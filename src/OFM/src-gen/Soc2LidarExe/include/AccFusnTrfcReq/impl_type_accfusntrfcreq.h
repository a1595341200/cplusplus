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
/**        \file  Soc2LidarExe/include/AccFusnTrfcReq/impl_type_accfusntrfcreq.h
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

#ifndef SOC2LIDAREXE_INCLUDE_ACCFUSNTRFCREQ_IMPL_TYPE_ACCFUSNTRFCREQ_H_
#define SOC2LIDAREXE_INCLUDE_ACCFUSNTRFCREQ_IMPL_TYPE_ACCFUSNTRFCREQ_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IdPen/impl_type_accfusntrfcreqidpen.h"
#include "OnOff1/impl_type_accfusntrfcreqonoff1.h"

namespace AccFusnTrfcReq {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AccFusnTrfcReq.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AccFusnTrfcReq
 */
struct AccFusnTrfcReq {
  using _AccFusnTrfcReqOnOff1_ref_type = OnOff1::AccFusnTrfcReqOnOff1;
  using _AccFusnTrfcReqIdPen_ref_type = IdPen::AccFusnTrfcReqIdPen;

  _AccFusnTrfcReqOnOff1_ref_type AccFusnTrfcReqOnOff1_ref;
  _AccFusnTrfcReqIdPen_ref_type AccFusnTrfcReqIdPen_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AccFusnTrfcReq instance.
 */
inline bool operator==(AccFusnTrfcReq const& l,
                       AccFusnTrfcReq const& r) noexcept {
  return (&l == &r) || ((l.AccFusnTrfcReqOnOff1_ref == r.AccFusnTrfcReqOnOff1_ref)
                         && (l.AccFusnTrfcReqIdPen_ref == r.AccFusnTrfcReqIdPen_ref)
  );
}

/*!
 * \brief Compare for inequality with another AccFusnTrfcReq instance.
 */
inline bool operator!=(AccFusnTrfcReq const& l,
                       AccFusnTrfcReq const& r) noexcept {
  return !(l == r);
}

}  // namespace AccFusnTrfcReq

#endif  // SOC2LIDAREXE_INCLUDE_ACCFUSNTRFCREQ_IMPL_TYPE_ACCFUSNTRFCREQ_H_
