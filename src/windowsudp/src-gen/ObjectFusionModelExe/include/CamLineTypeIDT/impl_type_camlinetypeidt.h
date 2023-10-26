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
/**        \file  ObjectFusionModelExe/include/CamLineTypeIDT/impl_type_camlinetypeidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_CAMLINETYPEIDT_IMPL_TYPE_CAMLINETYPEIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_CAMLINETYPEIDT_IMPL_TYPE_CAMLINETYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CamLineTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CamLineTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CamLineTypeIDT
 */
enum class CamLineTypeIDT : uint8_t {
  CamLineType_None = 0,
  CamLineType_Solid = 1,
  CamLineType_Dashed = 2,
  CamLineType_DoubleSolid = 3,
  CamLineType_DoubleDashed = 4,
  CamLineType_SolidDashed = 5,
  CamLineType_DashedSolid = 6,
  CamLineType_Fishbone = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CamLineTypeIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_CAMLINETYPEIDT_IMPL_TYPE_CAMLINETYPEIDT_H_
