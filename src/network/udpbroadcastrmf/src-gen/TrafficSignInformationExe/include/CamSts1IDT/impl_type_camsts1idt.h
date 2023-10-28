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
/**        \file  TrafficSignInformationExe/include/CamSts1IDT/impl_type_camsts1idt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_CAMSTS1IDT_IMPL_TYPE_CAMSTS1IDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_CAMSTS1IDT_IMPL_TYPE_CAMSTS1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "NoYes1VccIDT/impl_type_noyes1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace CamSts1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type CamSts1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CamSts1IDT
 */
struct CamSts1IDT {
  using CamCamFrntCalNotCmpl_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamCamHeatrActv_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd1_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd2_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd3_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd4_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd5_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd6_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd7_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntBlkd8_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrntCalNotStrtd_generated_type = uint8IDT::uint8IDT;
  using CamFrntFaulty_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamFrontEna_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamMissCom_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using CamStsFrntChks_generated_type = uint8IDT::uint8IDT;
  using CamStsFrntCntr_generated_type = uint8IDT::uint8IDT;

  CamCamFrntCalNotCmpl_generated_type CamCamFrntCalNotCmpl;
  CamCamHeatrActv_generated_type CamCamHeatrActv;
  CamFrntBlkd1_generated_type CamFrntBlkd1;
  CamFrntBlkd2_generated_type CamFrntBlkd2;
  CamFrntBlkd3_generated_type CamFrntBlkd3;
  CamFrntBlkd4_generated_type CamFrntBlkd4;
  CamFrntBlkd5_generated_type CamFrntBlkd5;
  CamFrntBlkd6_generated_type CamFrntBlkd6;
  CamFrntBlkd7_generated_type CamFrntBlkd7;
  CamFrntBlkd8_generated_type CamFrntBlkd8;
  CamFrntCalNotStrtd_generated_type CamFrntCalNotStrtd;
  CamFrntFaulty_generated_type CamFrntFaulty;
  CamFrontEna_generated_type CamFrontEna;
  CamMissCom_generated_type CamMissCom;
  CamStsFrntChks_generated_type CamStsFrntChks;
  CamStsFrntCntr_generated_type CamStsFrntCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another CamSts1IDT instance.
 */
inline bool operator==(CamSts1IDT const& l,
                       CamSts1IDT const& r) noexcept {
  return (&l == &r) || ((l.CamCamFrntCalNotCmpl == r.CamCamFrntCalNotCmpl)
                         && (l.CamCamHeatrActv == r.CamCamHeatrActv)
                         && (l.CamFrntBlkd1 == r.CamFrntBlkd1)
                         && (l.CamFrntBlkd2 == r.CamFrntBlkd2)
                         && (l.CamFrntBlkd3 == r.CamFrntBlkd3)
                         && (l.CamFrntBlkd4 == r.CamFrntBlkd4)
                         && (l.CamFrntBlkd5 == r.CamFrntBlkd5)
                         && (l.CamFrntBlkd6 == r.CamFrntBlkd6)
                         && (l.CamFrntBlkd7 == r.CamFrntBlkd7)
                         && (l.CamFrntBlkd8 == r.CamFrntBlkd8)
                         && (l.CamFrntCalNotStrtd == r.CamFrntCalNotStrtd)
                         && (l.CamFrntFaulty == r.CamFrntFaulty)
                         && (l.CamFrontEna == r.CamFrontEna)
                         && (l.CamMissCom == r.CamMissCom)
                         && (l.CamStsFrntChks == r.CamStsFrntChks)
                         && (l.CamStsFrntCntr == r.CamStsFrntCntr)
  );
}

/*!
 * \brief Compare for inequality with another CamSts1IDT instance.
 */
inline bool operator!=(CamSts1IDT const& l,
                       CamSts1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CamSts1IDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_CAMSTS1IDT_IMPL_TYPE_CAMSTS1IDT_H_
