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
/**        \file  EDRExe/include/RdrObjElevnSts1VccIDT/impl_type_rdrobjelevnsts1vccidt.h
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

#ifndef EDREXE_INCLUDE_RDROBJELEVNSTS1VCCIDT_IMPL_TYPE_RDROBJELEVNSTS1VCCIDT_H_
#define EDREXE_INCLUDE_RDROBJELEVNSTS1VCCIDT_IMPL_TYPE_RDROBJELEVNSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RdrObjElevnSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RdrObjElevnSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RdrObjElevnSts1VccIDT
 */
enum class RdrObjElevnSts1VccIDT : uint8_t {
  RdrObjElevnSts1Vcc_Unknown = 0,
  RdrObjElevnSts1Vcc_OverRidable = 1,
  RdrObjElevnSts1Vcc_Rlv = 2,
  RdrObjElevnSts1Vcc_UnderRidable = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RdrObjElevnSts1VccIDT

#endif  // EDREXE_INCLUDE_RDROBJELEVNSTS1VCCIDT_IMPL_TYPE_RDROBJELEVNSTS1VCCIDT_H_
