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
/**        \file  EHRExe/include/GeometryPointIDT/impl_type_geometrypointidt.h
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

#ifndef EHREXE_INCLUDE_GEOMETRYPOINTIDT_IMPL_TYPE_GEOMETRYPOINTIDT_H_
#define EHREXE_INCLUDE_GEOMETRYPOINTIDT_IMPL_TYPE_GEOMETRYPOINTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "sint32IDT/impl_type_sint32idt.h"

namespace GeometryPointIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GeometryPointIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeometryPointIDT
 */
struct GeometryPointIDT {
  using Latitude_generated_type = sint32IDT::sint32IDT;
  using Longitude_generated_type = sint32IDT::sint32IDT;
  using Altitude_generated_type = sint32IDT::sint32IDT;

  Latitude_generated_type Latitude;
  Longitude_generated_type Longitude;
  Altitude_generated_type Altitude;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another GeometryPointIDT instance.
 */
inline bool operator==(GeometryPointIDT const& l,
                       GeometryPointIDT const& r) noexcept {
  return (&l == &r) || ((l.Latitude == r.Latitude)
                         && (l.Longitude == r.Longitude)
                         && (l.Altitude == r.Altitude)
  );
}

/*!
 * \brief Compare for inequality with another GeometryPointIDT instance.
 */
inline bool operator!=(GeometryPointIDT const& l,
                       GeometryPointIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace GeometryPointIDT

#endif  // EHREXE_INCLUDE_GEOMETRYPOINTIDT_IMPL_TYPE_GEOMETRYPOINTIDT_H_
