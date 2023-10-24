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
/**        \file  PerceptionSideExe/include/CameraStatusIDT/impl_type_camerastatusidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_CAMERASTATUSIDT_IMPL_TYPE_CAMERASTATUSIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_CAMERASTATUSIDT_IMPL_TYPE_CAMERASTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "FLCamSts1VccIDT/impl_type_flcamsts1vccidt.h"
#include "FRCamSts1VccIDT/impl_type_frcamsts1vccidt.h"
#include "RLCamSts1VccIDT/impl_type_rlcamsts1vccidt.h"
#include "RRCamSts1VccIDT/impl_type_rrcamsts1vccidt.h"

namespace CameraStatusIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type CameraStatusIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CameraStatusIDT
 */
struct CameraStatusIDT {
  using FLCamSts1Vcc_generated_type = FLCamSts1VccIDT::FLCamSts1VccIDT;
  using FRCamSts1Vcc_generated_type = FRCamSts1VccIDT::FRCamSts1VccIDT;
  using RLCamSts1Vcc_generated_type = RLCamSts1VccIDT::RLCamSts1VccIDT;
  using RRCamSts1Vcc_generated_type = RRCamSts1VccIDT::RRCamSts1VccIDT;

  FLCamSts1Vcc_generated_type FLCamSts1Vcc;
  FRCamSts1Vcc_generated_type FRCamSts1Vcc;
  RLCamSts1Vcc_generated_type RLCamSts1Vcc;
  RRCamSts1Vcc_generated_type RRCamSts1Vcc;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another CameraStatusIDT instance.
 */
inline bool operator==(CameraStatusIDT const& l,
                       CameraStatusIDT const& r) noexcept {
  return (&l == &r) || ((l.FLCamSts1Vcc == r.FLCamSts1Vcc)
                         && (l.FRCamSts1Vcc == r.FRCamSts1Vcc)
                         && (l.RLCamSts1Vcc == r.RLCamSts1Vcc)
                         && (l.RRCamSts1Vcc == r.RRCamSts1Vcc)
  );
}

/*!
 * \brief Compare for inequality with another CameraStatusIDT instance.
 */
inline bool operator!=(CameraStatusIDT const& l,
                       CameraStatusIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CameraStatusIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_CAMERASTATUSIDT_IMPL_TYPE_CAMERASTATUSIDT_H_
