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
/**        \file  EHRExe/include/Array_PairConnectivityIDT_Vector/impl_type_array_pairconnectivityidt_vector.h
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

#ifndef EHREXE_INCLUDE_ARRAY_PAIRCONNECTIVITYIDT_VECTOR_IMPL_TYPE_ARRAY_PAIRCONNECTIVITYIDT_VECTOR_H_
#define EHREXE_INCLUDE_ARRAY_PAIRCONNECTIVITYIDT_VECTOR_IMPL_TYPE_ARRAY_PAIRCONNECTIVITYIDT_VECTOR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "PairConnectivityIDT/impl_type_pairconnectivityidt.h"

namespace Array_PairConnectivityIDT_Vector {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type Array_PairConnectivityIDT_Vector.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Array_PairConnectivityIDT_Vector
 */
using Array_PairConnectivityIDT_Vector = std::vector<
  PairConnectivityIDT::PairConnectivityIDT
>;
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Array_PairConnectivityIDT_Vector

#endif  // EHREXE_INCLUDE_ARRAY_PAIRCONNECTIVITYIDT_VECTOR_IMPL_TYPE_ARRAY_PAIRCONNECTIVITYIDT_VECTOR_H_
