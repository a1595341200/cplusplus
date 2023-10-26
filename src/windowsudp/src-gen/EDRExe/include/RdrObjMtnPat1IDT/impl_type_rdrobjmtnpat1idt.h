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
/**        \file  EDRExe/include/RdrObjMtnPat1IDT/impl_type_rdrobjmtnpat1idt.h
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

#ifndef EDREXE_INCLUDE_RDROBJMTNPAT1IDT_IMPL_TYPE_RDROBJMTNPAT1IDT_H_
#define EDREXE_INCLUDE_RDROBJMTNPAT1IDT_IMPL_TYPE_RDROBJMTNPAT1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RdrObjMtnPat1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RdrObjMtnPat1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RdrObjMtnPat1IDT
 */
enum class RdrObjMtnPat1IDT : uint8_t {
  RdrObjMtnPat1_Ukwn = 0,
  RdrObjMtnPat1_Staty = 1,
  RdrObjMtnPat1_StatyFromMovg = 2,
  RdrObjMtnPat1_Movg = 3,
  RdrObjMtnPat1_Receding = 4,
  RdrObjMtnPat1_Oncoming = 5,
  RdrObjMtnPat1_CrossingFromLe = 6,
  RdrObjMtnPat1_CrossingFromRi = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RdrObjMtnPat1IDT

#endif  // EDREXE_INCLUDE_RDROBJMTNPAT1IDT_IMPL_TYPE_RDROBJMTNPAT1IDT_H_
