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
/**        \file  RoadModelFusionExe/include/Array_LinkInfoIDT_Vector/impl_type_array_linkinfoidt_vector.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_ARRAY_LINKINFOIDT_VECTOR_IMPL_TYPE_ARRAY_LINKINFOIDT_VECTOR_H_
#define ROADMODELFUSIONEXE_INCLUDE_ARRAY_LINKINFOIDT_VECTOR_IMPL_TYPE_ARRAY_LINKINFOIDT_VECTOR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "LinkInfoIDT/impl_type_linkinfoidt.h"

namespace Array_LinkInfoIDT_Vector {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type Array_LinkInfoIDT_Vector.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Array_LinkInfoIDT_Vector
 */
using Array_LinkInfoIDT_Vector = std::vector<
  LinkInfoIDT::LinkInfoIDT
>;
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Array_LinkInfoIDT_Vector

#endif  // ROADMODELFUSIONEXE_INCLUDE_ARRAY_LINKINFOIDT_VECTOR_IMPL_TYPE_ARRAY_LINKINFOIDT_VECTOR_H_
