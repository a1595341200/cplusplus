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
/**        \file  EndOfLineExe/include/EyeOnRoadFromDHUIDT/impl_type_eyeonroadfromdhuidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_EYEONROADFROMDHUIDT_IMPL_TYPE_EYEONROADFROMDHUIDT_H_
#define ENDOFLINEEXE_INCLUDE_EYEONROADFROMDHUIDT_IMPL_TYPE_EYEONROADFROMDHUIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EyeOnRoadFromDHUIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type EyeOnRoadFromDHUIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EyeOnRoadFromDHUIDT
 */
enum class EyeOnRoadFromDHUIDT : uint8_t {
  EyeOnRoadFromDHU_Unavailable = 0,
  EyeOnRoadFromDHU_Yes = 1,
  EyeOnRoadFromDHU_No = 2,
  EyeOnRoadFromDHU_Reserved = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EyeOnRoadFromDHUIDT

#endif  // ENDOFLINEEXE_INCLUDE_EYEONROADFROMDHUIDT_IMPL_TYPE_EYEONROADFROMDHUIDT_H_
