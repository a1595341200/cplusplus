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
/**        \file  TargetPredictExe/include/ObjMtnPat1VccIDT/impl_type_objmtnpat1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_OBJMTNPAT1VCCIDT_IMPL_TYPE_OBJMTNPAT1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_OBJMTNPAT1VCCIDT_IMPL_TYPE_OBJMTNPAT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ObjMtnPat1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ObjMtnPat1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjMtnPat1VccIDT
 */
enum class ObjMtnPat1VccIDT : uint8_t {
  ObjMtnPat1Vcc_Ukwn = 0,
  ObjMtnPat1Vcc_Staty = 1,
  ObjMtnPat1Vcc_MovgFromSelf = 2,
  ObjMtnPat1Vcc_MovgToSelf = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjMtnPat1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_OBJMTNPAT1VCCIDT_IMPL_TYPE_OBJMTNPAT1VCCIDT_H_
