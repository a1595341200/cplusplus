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
/**        \file  RadarAdaptorExe/include/TFourDRadarDataValidIDT/impl_type_tfourdradardatavalididt.h
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

#ifndef RADARADAPTOREXE_INCLUDE_TFOURDRADARDATAVALIDIDT_IMPL_TYPE_TFOURDRADARDATAVALIDIDT_H_
#define RADARADAPTOREXE_INCLUDE_TFOURDRADARDATAVALIDIDT_IMPL_TYPE_TFOURDRADARDATAVALIDIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "EFourDRadarDataValidIDT/impl_type_efourdradardatavalididt.h"

namespace TFourDRadarDataValidIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TFourDRadarDataValidIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TFourDRadarDataValidIDT
 */
struct TFourDRadarDataValidIDT {
  using ObjValid_generated_type = EFourDRadarDataValidIDT::EFourDRadarDataValidIDT;
  using ErrStsValid_generated_type = EFourDRadarDataValidIDT::EFourDRadarDataValidIDT;

  ObjValid_generated_type ObjValid;
  ErrStsValid_generated_type ErrStsValid;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TFourDRadarDataValidIDT instance.
 */
inline bool operator==(TFourDRadarDataValidIDT const& l,
                       TFourDRadarDataValidIDT const& r) noexcept {
  return (&l == &r) || ((l.ObjValid == r.ObjValid)
                         && (l.ErrStsValid == r.ErrStsValid)
  );
}

/*!
 * \brief Compare for inequality with another TFourDRadarDataValidIDT instance.
 */
inline bool operator!=(TFourDRadarDataValidIDT const& l,
                       TFourDRadarDataValidIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TFourDRadarDataValidIDT

#endif  // RADARADAPTOREXE_INCLUDE_TFOURDRADARDATAVALIDIDT_IMPL_TYPE_TFOURDRADARDATAVALIDIDT_H_
