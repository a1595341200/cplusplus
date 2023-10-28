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
/**        \file  ObjectFusionModelExe/include/RoadSgnInfoActv0/impl_type_roadsgninfoactv0.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_ROADSGNINFOACTV0_IMPL_TYPE_ROADSGNINFOACTV0_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_ROADSGNINFOACTV0_IMPL_TYPE_ROADSGNINFOACTV0_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "RoadSgnInfoActvPen/impl_type_roadsgninfoactvpen.h"
#include "RoadSgnInfoActvSts/impl_type_roadsgninfoactvsts.h"

namespace RoadSgnInfoActv0 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RoadSgnInfoActv0.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadSgnInfoActv0
 */
struct RoadSgnInfoActv0 {
  using _RoadSgnInfoActvSts_ref_type = RoadSgnInfoActvSts::RoadSgnInfoActvSts;
  using _RoadSgnInfoActvPen_ref_type = RoadSgnInfoActvPen::RoadSgnInfoActvPen;

  _RoadSgnInfoActvSts_ref_type RoadSgnInfoActvSts_ref;
  _RoadSgnInfoActvPen_ref_type RoadSgnInfoActvPen_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RoadSgnInfoActv0 instance.
 */
inline bool operator==(RoadSgnInfoActv0 const& l,
                       RoadSgnInfoActv0 const& r) noexcept {
  return (&l == &r) || ((l.RoadSgnInfoActvSts_ref == r.RoadSgnInfoActvSts_ref)
                         && (l.RoadSgnInfoActvPen_ref == r.RoadSgnInfoActvPen_ref)
  );
}

/*!
 * \brief Compare for inequality with another RoadSgnInfoActv0 instance.
 */
inline bool operator!=(RoadSgnInfoActv0 const& l,
                       RoadSgnInfoActv0 const& r) noexcept {
  return !(l == r);
}

}  // namespace RoadSgnInfoActv0

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_ROADSGNINFOACTV0_IMPL_TYPE_ROADSGNINFOACTV0_H_
