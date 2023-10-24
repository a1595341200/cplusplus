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
/**        \file  PerceptionRearExe/include/LocSensorInfo1VCCIDT/impl_type_locsensorinfo1vccidt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_LOCSENSORINFO1VCCIDT_IMPL_TYPE_LOCSENSORINFO1VCCIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_LOCSENSORINFO1VCCIDT_IMPL_TYPE_LOCSENSORINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GNSSinf1OutIDT/impl_type_gnssinf1outidt.h"
#include "GNSSinf2VccIDT/impl_type_gnssinf2vccidt.h"
#include "IMUInf1VccIDT/impl_type_imuinf1vccidt.h"
#include "INSinf1OutIDT/impl_type_insinf1outidt.h"
#include "LOCSts1VccIDT/impl_type_locsts1vccidt.h"

namespace LocSensorInfo1VCCIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LocSensorInfo1VCCIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LocSensorInfo1VCCIDT
 */
struct LocSensorInfo1VCCIDT {
  using GNSSinf1Out_generated_type = GNSSinf1OutIDT::GNSSinf1OutIDT;
  using GNSSinf2Vcc_generated_type = GNSSinf2VccIDT::GNSSinf2VccIDT;
  using IMUInf1Vcc_generated_type = IMUInf1VccIDT::IMUInf1VccIDT;
  using INSinf1Out_generated_type = INSinf1OutIDT::INSinf1OutIDT;
  using LOCSts1Vcc_generated_type = LOCSts1VccIDT::LOCSts1VccIDT;

  GNSSinf1Out_generated_type GNSSinf1Out;
  GNSSinf2Vcc_generated_type GNSSinf2Vcc;
  IMUInf1Vcc_generated_type IMUInf1Vcc;
  INSinf1Out_generated_type INSinf1Out;
  LOCSts1Vcc_generated_type LOCSts1Vcc;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LocSensorInfo1VCCIDT instance.
 */
inline bool operator==(LocSensorInfo1VCCIDT const& l,
                       LocSensorInfo1VCCIDT const& r) noexcept {
  return (&l == &r) || ((l.GNSSinf1Out == r.GNSSinf1Out)
                         && (l.GNSSinf2Vcc == r.GNSSinf2Vcc)
                         && (l.IMUInf1Vcc == r.IMUInf1Vcc)
                         && (l.INSinf1Out == r.INSinf1Out)
                         && (l.LOCSts1Vcc == r.LOCSts1Vcc)
  );
}

/*!
 * \brief Compare for inequality with another LocSensorInfo1VCCIDT instance.
 */
inline bool operator!=(LocSensorInfo1VCCIDT const& l,
                       LocSensorInfo1VCCIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LocSensorInfo1VCCIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_LOCSENSORINFO1VCCIDT_IMPL_TYPE_LOCSENSORINFO1VCCIDT_H_
