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
/**        \file  LocalizationFusionExe/include/LocSensorInfo1VCC/impl_type_locsensorinfo1vcc.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LOCSENSORINFO1VCC_IMPL_TYPE_LOCSENSORINFO1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LOCSENSORINFO1VCC_IMPL_TYPE_LOCSENSORINFO1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GNSSinf1Vcc/impl_type_gnssinf1vcc.h"
#include "GNSSinf2Vcc/impl_type_gnssinf2vcc.h"
#include "IMUInf1Vcc/impl_type_imuinf1vcc.h"
#include "INSinf1Vcc/impl_type_insinf1vcc.h"
#include "LOCSts1Vcc/impl_type_locsts1vcc.h"

namespace LocSensorInfo1VCC {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LocSensorInfo1VCC.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LocSensorInfo1VCC
 */
struct LocSensorInfo1VCC {
  using _GNSSinf1Vcc_ref_type = GNSSinf1Vcc::GNSSinf1Vcc;
  using _GNSSinf2Vcc_ref_type = GNSSinf2Vcc::GNSSinf2Vcc;
  using _IMUInf1Vcc_ref_type = IMUInf1Vcc::IMUInf1Vcc;
  using _INSinf1Vcc_ref_type = INSinf1Vcc::INSinf1Vcc;
  using _LOCSts1Vcc_ref_type = LOCSts1Vcc::LOCSts1Vcc;

  _GNSSinf1Vcc_ref_type GNSSinf1Vcc_ref;
  _GNSSinf2Vcc_ref_type GNSSinf2Vcc_ref;
  _IMUInf1Vcc_ref_type IMUInf1Vcc_ref;
  _INSinf1Vcc_ref_type INSinf1Vcc_ref;
  _LOCSts1Vcc_ref_type LOCSts1Vcc_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LocSensorInfo1VCC instance.
 */
inline bool operator==(LocSensorInfo1VCC const& l,
                       LocSensorInfo1VCC const& r) noexcept {
  return (&l == &r) || ((l.GNSSinf1Vcc_ref == r.GNSSinf1Vcc_ref)
                         && (l.GNSSinf2Vcc_ref == r.GNSSinf2Vcc_ref)
                         && (l.IMUInf1Vcc_ref == r.IMUInf1Vcc_ref)
                         && (l.INSinf1Vcc_ref == r.INSinf1Vcc_ref)
                         && (l.LOCSts1Vcc_ref == r.LOCSts1Vcc_ref)
  );
}

/*!
 * \brief Compare for inequality with another LocSensorInfo1VCC instance.
 */
inline bool operator!=(LocSensorInfo1VCC const& l,
                       LocSensorInfo1VCC const& r) noexcept {
  return !(l == r);
}

}  // namespace LocSensorInfo1VCC

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LOCSENSORINFO1VCC_IMPL_TYPE_LOCSENSORINFO1VCC_H_
