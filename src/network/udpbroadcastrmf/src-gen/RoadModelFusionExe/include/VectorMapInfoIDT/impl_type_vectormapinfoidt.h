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
/**        \file  RoadModelFusionExe/include/VectorMapInfoIDT/impl_type_vectormapinfoidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_VECTORMAPINFOIDT_IMPL_TYPE_VECTORMAPINFOIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_VECTORMAPINFOIDT_IMPL_TYPE_VECTORMAPINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_AreaIDT_Vector/impl_type_array_areaidt_vector.h"

namespace VectorMapInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VectorMapInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VectorMapInfoIDT
 */
struct VectorMapInfoIDT {
  using MapInfo_generated_type = Array_AreaIDT_Vector::Array_AreaIDT_Vector;

  MapInfo_generated_type MapInfo;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VectorMapInfoIDT instance.
 */
inline bool operator==(VectorMapInfoIDT const& l,
                       VectorMapInfoIDT const& r) noexcept {
  return (&l == &r) || (l.MapInfo == r.MapInfo);
}

/*!
 * \brief Compare for inequality with another VectorMapInfoIDT instance.
 */
inline bool operator!=(VectorMapInfoIDT const& l,
                       VectorMapInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VectorMapInfoIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_VECTORMAPINFOIDT_IMPL_TYPE_VECTORMAPINFOIDT_H_
