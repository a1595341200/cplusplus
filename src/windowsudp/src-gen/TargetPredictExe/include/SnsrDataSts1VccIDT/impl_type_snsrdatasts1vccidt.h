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
/**        \file  TargetPredictExe/include/SnsrDataSts1VccIDT/impl_type_snsrdatasts1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_SNSRDATASTS1VCCIDT_IMPL_TYPE_SNSRDATASTS1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_SNSRDATASTS1VCCIDT_IMPL_TYPE_SNSRDATASTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SnsrDataSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SnsrDataSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SnsrDataSts1VccIDT
 */
enum class SnsrDataSts1VccIDT : uint8_t {
  SnsrDataSts1Vcc_Invld = 0,
  SnsrDataSts1Vcc_Fusn = 1,
  SnsrDataSts1Vcc_New = 2,
  SnsrDataSts1Vcc_PredNew = 3,
  SnsrDataSts1Vcc_UpdNew = 4,
  SnsrDataSts1Vcc_Upd = 5,
  SnsrDataSts1Vcc_Pred = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SnsrDataSts1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_SNSRDATASTS1VCCIDT_IMPL_TYPE_SNSRDATASTS1VCCIDT_H_
