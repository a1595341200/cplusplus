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
/**        \file  TargetPredictExe/include/ObjPredictTrajsIDT/impl_type_objpredicttrajsidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_OBJPREDICTTRAJSIDT_IMPL_TYPE_OBJPREDICTTRAJSIDT_H_
#define TARGETPREDICTEXE_INCLUDE_OBJPREDICTTRAJSIDT_IMPL_TYPE_OBJPREDICTTRAJSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_ObjPredictTrajsPointIDT_10/impl_type_array_objpredicttrajspointidt_10.h"

namespace ObjPredictTrajsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjPredictTrajsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjPredictTrajsIDT
 */
struct ObjPredictTrajsIDT {
  using ObjPredictTrajsPoints_generated_type = Array_ObjPredictTrajsPointIDT_10::Array_ObjPredictTrajsPointIDT_10;

  ObjPredictTrajsPoints_generated_type ObjPredictTrajsPoints;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ObjPredictTrajsIDT instance.
 */
inline bool operator==(ObjPredictTrajsIDT const& l,
                       ObjPredictTrajsIDT const& r) noexcept {
  return (&l == &r) || (l.ObjPredictTrajsPoints == r.ObjPredictTrajsPoints);
}

/*!
 * \brief Compare for inequality with another ObjPredictTrajsIDT instance.
 */
inline bool operator!=(ObjPredictTrajsIDT const& l,
                       ObjPredictTrajsIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjPredictTrajsIDT

#endif  // TARGETPREDICTEXE_INCLUDE_OBJPREDICTTRAJSIDT_IMPL_TYPE_OBJPREDICTTRAJSIDT_H_
