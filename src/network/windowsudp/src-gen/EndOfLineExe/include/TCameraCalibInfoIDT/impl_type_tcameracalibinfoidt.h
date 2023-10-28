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
/**        \file  EndOfLineExe/include/TCameraCalibInfoIDT/impl_type_tcameracalibinfoidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_TCAMERACALIBINFOIDT_IMPL_TYPE_TCAMERACALIBINFOIDT_H_
#define ENDOFLINEEXE_INCLUDE_TCAMERACALIBINFOIDT_IMPL_TYPE_TCAMERACALIBINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Mode_AfterSalesIDT/impl_type_mode_aftersalesidt.h"
#include "Mode_EOLIDT/impl_type_mode_eolidt.h"
#include "Mode_OnLineIDT/impl_type_mode_onlineidt.h"

namespace TCameraCalibInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TCameraCalibInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TCameraCalibInfoIDT
 */
struct TCameraCalibInfoIDT {
  using Mode_EOL_generated_type = Mode_EOLIDT::Mode_EOLIDT;
  using Mode_AfterSales_generated_type = Mode_AfterSalesIDT::Mode_AfterSalesIDT;
  using Mode_OnLine_generated_type = Mode_OnLineIDT::Mode_OnLineIDT;

  Mode_EOL_generated_type Mode_EOL;
  Mode_AfterSales_generated_type Mode_AfterSales;
  Mode_OnLine_generated_type Mode_OnLine;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TCameraCalibInfoIDT instance.
 */
inline bool operator==(TCameraCalibInfoIDT const& l,
                       TCameraCalibInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.Mode_EOL == r.Mode_EOL)
                         && (l.Mode_AfterSales == r.Mode_AfterSales)
                         && (l.Mode_OnLine == r.Mode_OnLine)
  );
}

/*!
 * \brief Compare for inequality with another TCameraCalibInfoIDT instance.
 */
inline bool operator!=(TCameraCalibInfoIDT const& l,
                       TCameraCalibInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TCameraCalibInfoIDT

#endif  // ENDOFLINEEXE_INCLUDE_TCAMERACALIBINFOIDT_IMPL_TYPE_TCAMERACALIBINFOIDT_H_
