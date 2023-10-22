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
/**        \file  LocalizationFusionExe/include/LOCSts1Vcc/impl_type_locsts1vcc.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LOCSTS1VCC_IMPL_TYPE_LOCSTS1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LOCSTS1VCC_IMPL_TYPE_LOCSTS1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GNSSDatFr/impl_type_gnssdatfr.h"
#include "GNSSDatLose/impl_type_gnssdatlose.h"
#include "GNSSDatatt/impl_type_gnssdatatt.h"
#include "GNSSTimestampHi/impl_type_gnsstimestamphi.h"
#include "GNSSTimestampLo/impl_type_gnsstimestamplo.h"
#include "IMUDatSts/impl_type_imudatsts.h"
#include "IMUDatStsfr/impl_type_imudatstsfr.h"
#include "INSSysStatus/impl_type_inssysstatus.h"
#include "LOCStsChks/impl_type_locstschks.h"
#include "LOCStsCntr/impl_type_locstscntr.h"
#include "Reserve1LOCSts/impl_type_reserve1locsts.h"
#include "Reserve2LOCSts/impl_type_reserve2locsts.h"
#include "VehicleDatatt/impl_type_vehicledatatt.h"
#include "VehicleDatlose/impl_type_vehicledatlose.h"
#include "VehicleSpedfr/impl_type_vehiclespedfr.h"
#include "Vehicleerr/impl_type_vehicleerr.h"

namespace LOCSts1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LOCSts1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LOCSts1Vcc
 */
struct LOCSts1Vcc {
  using _LOCStsChks_ref_type = LOCStsChks::LOCStsChks;
  using _LOCStsCntr_ref_type = LOCStsCntr::LOCStsCntr;
  using _GNSSDatFr_ref_type = GNSSDatFr::GNSSDatFr;
  using _GNSSDatLose_ref_type = GNSSDatLose::GNSSDatLose;
  using _GNSSDatatt_ref_type = GNSSDatatt::GNSSDatatt;
  using _GNSSTimestampLo_ref_type = GNSSTimestampLo::GNSSTimestampLo;
  using _GNSSTimestampHi_ref_type = GNSSTimestampHi::GNSSTimestampHi;
  using _IMUDatSts_ref_type = IMUDatSts::IMUDatSts;
  using _IMUDatStsfr_ref_type = IMUDatStsfr::IMUDatStsfr;
  using _INSSysStatus_ref_type = INSSysStatus::INSSysStatus;
  using _Reserve1LOCSts_ref_type = Reserve1LOCSts::Reserve1LOCSts;
  using _Reserve2LOCSts_ref_type = Reserve2LOCSts::Reserve2LOCSts;
  using _VehicleDatatt_ref_type = VehicleDatatt::VehicleDatatt;
  using _VehicleDatlose_ref_type = VehicleDatlose::VehicleDatlose;
  using _VehicleSpedfr_ref_type = VehicleSpedfr::VehicleSpedfr;
  using _Vehicleerr_ref_type = Vehicleerr::Vehicleerr;

  _LOCStsChks_ref_type LOCStsChks_ref;
  _LOCStsCntr_ref_type LOCStsCntr_ref;
  _GNSSDatFr_ref_type GNSSDatFr_ref;
  _GNSSDatLose_ref_type GNSSDatLose_ref;
  _GNSSDatatt_ref_type GNSSDatatt_ref;
  _GNSSTimestampLo_ref_type GNSSTimestampLo_ref;
  _GNSSTimestampHi_ref_type GNSSTimestampHi_ref;
  _IMUDatSts_ref_type IMUDatSts_ref;
  _IMUDatStsfr_ref_type IMUDatStsfr_ref;
  _INSSysStatus_ref_type INSSysStatus_ref;
  _Reserve1LOCSts_ref_type Reserve1LOCSts_ref;
  _Reserve2LOCSts_ref_type Reserve2LOCSts_ref;
  _VehicleDatatt_ref_type VehicleDatatt_ref;
  _VehicleDatlose_ref_type VehicleDatlose_ref;
  _VehicleSpedfr_ref_type VehicleSpedfr_ref;
  _Vehicleerr_ref_type Vehicleerr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LOCSts1Vcc instance.
 */
inline bool operator==(LOCSts1Vcc const& l,
                       LOCSts1Vcc const& r) noexcept {
  return (&l == &r) || ((l.LOCStsChks_ref == r.LOCStsChks_ref)
                         && (l.LOCStsCntr_ref == r.LOCStsCntr_ref)
                         && (l.GNSSDatFr_ref == r.GNSSDatFr_ref)
                         && (l.GNSSDatLose_ref == r.GNSSDatLose_ref)
                         && (l.GNSSDatatt_ref == r.GNSSDatatt_ref)
                         && (l.GNSSTimestampLo_ref == r.GNSSTimestampLo_ref)
                         && (l.GNSSTimestampHi_ref == r.GNSSTimestampHi_ref)
                         && (l.IMUDatSts_ref == r.IMUDatSts_ref)
                         && (l.IMUDatStsfr_ref == r.IMUDatStsfr_ref)
                         && (l.INSSysStatus_ref == r.INSSysStatus_ref)
                         && (l.Reserve1LOCSts_ref == r.Reserve1LOCSts_ref)
                         && (l.Reserve2LOCSts_ref == r.Reserve2LOCSts_ref)
                         && (l.VehicleDatatt_ref == r.VehicleDatatt_ref)
                         && (l.VehicleDatlose_ref == r.VehicleDatlose_ref)
                         && (l.VehicleSpedfr_ref == r.VehicleSpedfr_ref)
                         && (l.Vehicleerr_ref == r.Vehicleerr_ref)
  );
}

/*!
 * \brief Compare for inequality with another LOCSts1Vcc instance.
 */
inline bool operator!=(LOCSts1Vcc const& l,
                       LOCSts1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace LOCSts1Vcc

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LOCSTS1VCC_IMPL_TYPE_LOCSTS1VCC_H_
