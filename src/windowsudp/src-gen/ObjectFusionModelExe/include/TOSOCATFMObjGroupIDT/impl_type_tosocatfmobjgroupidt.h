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
/**        \file  ObjectFusionModelExe/include/TOSOCATFMObjGroupIDT/impl_type_tosocatfmobjgroupidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TOSOCATFMOBJGROUPIDT_IMPL_TYPE_TOSOCATFMOBJGROUPIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TOSOCATFMOBJGROUPIDT_IMPL_TYPE_TOSOCATFMOBJGROUPIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TOSOCAObjEstimn1VccGroupIDT/impl_type_tosocaobjestimn1vccgroupidt.h"
#include "TOSOCAObjInfo1VccGroupIDT/impl_type_tosocaobjinfo1vccgroupidt.h"
#include "TOSOCAObjPpty1VccGroupIDT/impl_type_tosocaobjppty1vccgroupidt.h"

namespace TOSOCATFMObjGroupIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TOSOCATFMObjGroupIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TOSOCATFMObjGroupIDT
 */
struct TOSOCATFMObjGroupIDT {
  using ObjEstimn1Vcc_generated_type = TOSOCAObjEstimn1VccGroupIDT::TOSOCAObjEstimn1VccGroupIDT;
  using ObjInfo1Vcc_generated_type = TOSOCAObjInfo1VccGroupIDT::TOSOCAObjInfo1VccGroupIDT;
  using ObjPpty1Vcc_generated_type = TOSOCAObjPpty1VccGroupIDT::TOSOCAObjPpty1VccGroupIDT;

  ObjEstimn1Vcc_generated_type ObjEstimn1Vcc;
  ObjInfo1Vcc_generated_type ObjInfo1Vcc;
  ObjPpty1Vcc_generated_type ObjPpty1Vcc;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TOSOCATFMObjGroupIDT instance.
 */
inline bool operator==(TOSOCATFMObjGroupIDT const& l,
                       TOSOCATFMObjGroupIDT const& r) noexcept {
  return (&l == &r) || ((l.ObjEstimn1Vcc == r.ObjEstimn1Vcc)
                         && (l.ObjInfo1Vcc == r.ObjInfo1Vcc)
                         && (l.ObjPpty1Vcc == r.ObjPpty1Vcc)
  );
}

/*!
 * \brief Compare for inequality with another TOSOCATFMObjGroupIDT instance.
 */
inline bool operator!=(TOSOCATFMObjGroupIDT const& l,
                       TOSOCATFMObjGroupIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TOSOCATFMObjGroupIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TOSOCATFMOBJGROUPIDT_IMPL_TYPE_TOSOCATFMOBJGROUPIDT_H_
