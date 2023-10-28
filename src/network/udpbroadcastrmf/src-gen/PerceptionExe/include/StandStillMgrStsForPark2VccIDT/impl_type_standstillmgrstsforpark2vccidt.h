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
/**        \file  PerceptionExe/include/StandStillMgrStsForPark2VccIDT/impl_type_standstillmgrstsforpark2vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_STANDSTILLMGRSTSFORPARK2VCCIDT_IMPL_TYPE_STANDSTILLMGRSTSFORPARK2VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_STANDSTILLMGRSTSFORPARK2VCCIDT_IMPL_TYPE_STANDSTILLMGRSTSFORPARK2VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace StandStillMgrStsForPark2VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type StandStillMgrStsForPark2VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/StandStillMgrStsForPark2VccIDT
 */
enum class StandStillMgrStsForPark2VccIDT : uint8_t {
  StandStillMgrStsForPark2Vcc_ParkNotReqd = 0,
  StandStillMgrStsForPark2Vcc_ParkReqdByDrvr = 1,
  StandStillMgrStsForPark2Vcc_ParkReqdAutByHldTiExcd = 2,
  StandStillMgrStsForPark2Vcc_ParkReqdAut = 3,
  StandStillMgrStsForPark2Vcc_ParkNotAvl = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace StandStillMgrStsForPark2VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_STANDSTILLMGRSTSFORPARK2VCCIDT_IMPL_TYPE_STANDSTILLMGRSTSFORPARK2VCCIDT_H_
