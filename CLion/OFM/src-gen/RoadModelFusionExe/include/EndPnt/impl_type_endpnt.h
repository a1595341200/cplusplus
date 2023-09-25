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
/**        \file  RoadModelFusionExe/include/EndPnt/impl_type_endpnt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_ENDPNT_IMPL_TYPE_ENDPNT_H_
#define ROADMODELFUSIONEXE_INCLUDE_ENDPNT_IMPL_TYPE_ENDPNT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "EndPntlon_coord/impl_type_endpntlon_coord.h"
#include "Endpntlat_coord/impl_type_endpntlat_coord.h"

namespace EndPnt {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type EndPnt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EndPnt
 */
struct EndPnt {
  using _EndPntlon_coord_ref_type = EndPntlon_coord::EndPntlon_coord;
  using _Endpntlat_coord_ref_type = Endpntlat_coord::Endpntlat_coord;

  _EndPntlon_coord_ref_type EndPntlon_coord_ref;
  _Endpntlat_coord_ref_type Endpntlat_coord_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another EndPnt instance.
 */
inline bool operator==(EndPnt const& l,
                       EndPnt const& r) noexcept {
  return (&l == &r) || ((l.EndPntlon_coord_ref == r.EndPntlon_coord_ref)
                         && (l.Endpntlat_coord_ref == r.Endpntlat_coord_ref)
  );
}

/*!
 * \brief Compare for inequality with another EndPnt instance.
 */
inline bool operator!=(EndPnt const& l,
                       EndPnt const& r) noexcept {
  return !(l == r);
}

}  // namespace EndPnt

#endif  // ROADMODELFUSIONEXE_INCLUDE_ENDPNT_IMPL_TYPE_ENDPNT_H_
