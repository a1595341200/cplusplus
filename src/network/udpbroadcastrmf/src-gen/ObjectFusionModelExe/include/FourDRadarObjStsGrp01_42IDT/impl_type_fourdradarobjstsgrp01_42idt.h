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
/**        \file  ObjectFusionModelExe/include/FourDRadarObjStsGrp01_42IDT/impl_type_fourdradarobjstsgrp01_42idt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP01_42IDT_IMPL_TYPE_FOURDRADAROBJSTSGRP01_42IDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP01_42IDT_IMPL_TYPE_FOURDRADAROBJSTSGRP01_42IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_FourDRadarObjStIDT_42/impl_type_array_fourdradarobjstidt_42.h"
#include "Array_TFourDRadarDataValidIDT_42/impl_type_array_tfourdradardatavalididt_42.h"
#include "Array_uint32IDT_42/impl_type_array_uint32idt_42.h"
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "FourDRadarECUStsIDT/impl_type_fourdradarecustsidt.h"
#include "FrontFourDRadarSts1VccIDT/impl_type_frontfourdradarsts1vccidt.h"
#include "FrontFourDRadarVDYIDT/impl_type_frontfourdradarvdyidt.h"

namespace FourDRadarObjStsGrp01_42IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjStsGrp01_42IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT
 */
struct FourDRadarObjStsGrp01_42IDT {
  using TFourDRadarDataValid01_42_generated_type = Array_TFourDRadarDataValidIDT_42::Array_TFourDRadarDataValidIDT_42;
  using FourDRadarObjSts01_42_generated_type = Array_FourDRadarObjStIDT_42::Array_FourDRadarObjStIDT_42;
  using ErrorStatuse01_42_generated_type = Array_uint32IDT_42::Array_uint32IDT_42;
  using FourDRadarECUSts_generated_type = FourDRadarECUStsIDT::FourDRadarECUStsIDT;
  using FrontFourDRadarSts1Vcc_generated_type = FrontFourDRadarSts1VccIDT::FrontFourDRadarSts1VccIDT;
  using FrntRdrObjE2Efail_generated_type = Bool1VccIDT::Bool1VccIDT;
  using FrntRdrObjTO_generated_type = Bool1VccIDT::Bool1VccIDT;
  using FrontFourDRadarVDY_generated_type = FrontFourDRadarVDYIDT::FrontFourDRadarVDYIDT;

  TFourDRadarDataValid01_42_generated_type TFourDRadarDataValid01_42;
  FourDRadarObjSts01_42_generated_type FourDRadarObjSts01_42;
  ErrorStatuse01_42_generated_type ErrorStatuse01_42;
  FourDRadarECUSts_generated_type FourDRadarECUSts;
  FrontFourDRadarSts1Vcc_generated_type FrontFourDRadarSts1Vcc;
  FrntRdrObjE2Efail_generated_type FrntRdrObjE2Efail;
  FrntRdrObjTO_generated_type FrntRdrObjTO;
  FrontFourDRadarVDY_generated_type FrontFourDRadarVDY;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarObjStsGrp01_42IDT instance.
 */
inline bool operator==(FourDRadarObjStsGrp01_42IDT const& l,
                       FourDRadarObjStsGrp01_42IDT const& r) noexcept {
  return (&l == &r) || ((l.TFourDRadarDataValid01_42 == r.TFourDRadarDataValid01_42)
                         && (l.FourDRadarObjSts01_42 == r.FourDRadarObjSts01_42)
                         && (l.ErrorStatuse01_42 == r.ErrorStatuse01_42)
                         && (l.FourDRadarECUSts == r.FourDRadarECUSts)
                         && (l.FrontFourDRadarSts1Vcc == r.FrontFourDRadarSts1Vcc)
                         && (l.FrntRdrObjE2Efail == r.FrntRdrObjE2Efail)
                         && (l.FrntRdrObjTO == r.FrntRdrObjTO)
                         && (l.FrontFourDRadarVDY == r.FrontFourDRadarVDY)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarObjStsGrp01_42IDT instance.
 */
inline bool operator!=(FourDRadarObjStsGrp01_42IDT const& l,
                       FourDRadarObjStsGrp01_42IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FourDRadarObjStsGrp01_42IDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP01_42IDT_IMPL_TYPE_FOURDRADAROBJSTSGRP01_42IDT_H_
