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
/**        \file  ObjectFusionModelExe/include/FourDRadarStatusIDT/impl_type_fourdradarstatusidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADARSTATUSIDT_IMPL_TYPE_FOURDRADARSTATUSIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADARSTATUSIDT_IMPL_TYPE_FOURDRADARSTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "FourDRadarECUStsIDT/impl_type_fourdradarecustsidt.h"
#include "FrontFourDRadarSts2VccIDT/impl_type_frontfourdradarsts2vccidt.h"

namespace FourDRadarStatusIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarStatusIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarStatusIDT
 */
struct FourDRadarStatusIDT {
  using FourDRadarECUSts_generated_type = FourDRadarECUStsIDT::FourDRadarECUStsIDT;
  using FrontFourDRadarSts2Vcc_generated_type = FrontFourDRadarSts2VccIDT::FrontFourDRadarSts2VccIDT;
  using FrntRdrObjE2Efail_generated_type = Bool1VccIDT::Bool1VccIDT;
  using FrntRdrObjTO_generated_type = Bool1VccIDT::Bool1VccIDT;

  FourDRadarECUSts_generated_type FourDRadarECUSts;
  FrontFourDRadarSts2Vcc_generated_type FrontFourDRadarSts2Vcc;
  FrntRdrObjE2Efail_generated_type FrntRdrObjE2Efail;
  FrntRdrObjTO_generated_type FrntRdrObjTO;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarStatusIDT instance.
 */
inline bool operator==(FourDRadarStatusIDT const& l,
                       FourDRadarStatusIDT const& r) noexcept {
  return (&l == &r) || ((l.FourDRadarECUSts == r.FourDRadarECUSts)
                         && (l.FrontFourDRadarSts2Vcc == r.FrontFourDRadarSts2Vcc)
                         && (l.FrntRdrObjE2Efail == r.FrntRdrObjE2Efail)
                         && (l.FrntRdrObjTO == r.FrntRdrObjTO)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarStatusIDT instance.
 */
inline bool operator!=(FourDRadarStatusIDT const& l,
                       FourDRadarStatusIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FourDRadarStatusIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADARSTATUSIDT_IMPL_TYPE_FOURDRADARSTATUSIDT_H_
