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
/**        \file  EDRExe/include/SteerExtFctStsRec1VccIDT/impl_type_steerextfctstsrec1vccidt.h
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

#ifndef EDREXE_INCLUDE_STEEREXTFCTSTSREC1VCCIDT_IMPL_TYPE_STEEREXTFCTSTSREC1VCCIDT_H_
#define EDREXE_INCLUDE_STEEREXTFCTSTSREC1VCCIDT_IMPL_TYPE_STEEREXTFCTSTSREC1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Boolean1VccIDT/impl_type_boolean1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace SteerExtFctStsRec1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SteerExtFctStsRec1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SteerExtFctStsRec1VccIDT
 */
struct SteerExtFctStsRec1VccIDT {
  using LatCtrlReqNotInRange_generated_type = Boolean1VccIDT::Boolean1VccIDT;
  using LatAgReqNotInRange_generated_type = Boolean1VccIDT::Boolean1VccIDT;
  using ExtFctUpperLimActive_generated_type = Boolean1VccIDT::Boolean1VccIDT;
  using ExtFctLowerLimActive_generated_type = Boolean1VccIDT::Boolean1VccIDT;
  using ExtSafeLimActive_generated_type = Boolean1VccIDT::Boolean1VccIDT;
  using DrvrSteerOvrd_generated_type = Boolean1VccIDT::Boolean1VccIDT;
  using SteerExtFctStsChks_generated_type = uint8IDT::uint8IDT;
  using SteerExtFctStsChtr_generated_type = uint8IDT::uint8IDT;
  using ExtFctRateLimActive_generated_type = Boolean1VccIDT::Boolean1VccIDT;

  LatCtrlReqNotInRange_generated_type LatCtrlReqNotInRange;
  LatAgReqNotInRange_generated_type LatAgReqNotInRange;
  ExtFctUpperLimActive_generated_type ExtFctUpperLimActive;
  ExtFctLowerLimActive_generated_type ExtFctLowerLimActive;
  ExtSafeLimActive_generated_type ExtSafeLimActive;
  DrvrSteerOvrd_generated_type DrvrSteerOvrd;
  SteerExtFctStsChks_generated_type SteerExtFctStsChks;
  SteerExtFctStsChtr_generated_type SteerExtFctStsChtr;
  ExtFctRateLimActive_generated_type ExtFctRateLimActive;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SteerExtFctStsRec1VccIDT instance.
 */
inline bool operator==(SteerExtFctStsRec1VccIDT const& l,
                       SteerExtFctStsRec1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.LatCtrlReqNotInRange == r.LatCtrlReqNotInRange)
                         && (l.LatAgReqNotInRange == r.LatAgReqNotInRange)
                         && (l.ExtFctUpperLimActive == r.ExtFctUpperLimActive)
                         && (l.ExtFctLowerLimActive == r.ExtFctLowerLimActive)
                         && (l.ExtSafeLimActive == r.ExtSafeLimActive)
                         && (l.DrvrSteerOvrd == r.DrvrSteerOvrd)
                         && (l.SteerExtFctStsChks == r.SteerExtFctStsChks)
                         && (l.SteerExtFctStsChtr == r.SteerExtFctStsChtr)
                         && (l.ExtFctRateLimActive == r.ExtFctRateLimActive)
  );
}

/*!
 * \brief Compare for inequality with another SteerExtFctStsRec1VccIDT instance.
 */
inline bool operator!=(SteerExtFctStsRec1VccIDT const& l,
                       SteerExtFctStsRec1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SteerExtFctStsRec1VccIDT

#endif  // EDREXE_INCLUDE_STEEREXTFCTSTSREC1VCCIDT_IMPL_TYPE_STEEREXTFCTSTSREC1VCCIDT_H_
