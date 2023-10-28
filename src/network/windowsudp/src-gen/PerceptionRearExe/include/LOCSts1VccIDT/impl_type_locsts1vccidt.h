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
/**        \file  PerceptionRearExe/include/LOCSts1VccIDT/impl_type_locsts1vccidt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_LOCSTS1VCCIDT_IMPL_TYPE_LOCSTS1VCCIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_LOCSTS1VCCIDT_IMPL_TYPE_LOCSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GNSSDatFr1IDT/impl_type_gnssdatfr1idt.h"
#include "GNSSDatLose1IDT/impl_type_gnssdatlose1idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LOCSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LOCSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LOCSts1VccIDT
 */
struct LOCSts1VccIDT {
  using LOCStsChks_generated_type = uint8IDT::uint8IDT;
  using LOCStsCntr_generated_type = uint8IDT::uint8IDT;
  using GNSSDatFr_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;
  using GNSSDatLose_generated_type = GNSSDatLose1IDT::GNSSDatLose1IDT;
  using GNSSDatatt_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;
  using GNSSTimestampLo_generated_type = uint32IDT::uint32IDT;
  using GNSSTimestampHi_generated_type = uint32IDT::uint32IDT;
  using IMUDatSts_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;
  using IMUDatStsfr_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;
  using INSSysStatus_generated_type = uint8IDT::uint8IDT;
  using Reserve1LOCSts_generated_type = uint8IDT::uint8IDT;
  using Reserve2LOCSts_generated_type = uint8IDT::uint8IDT;
  using VehicleDatatt_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;
  using VehicleDatlose_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;
  using VehicleSpedfr_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;
  using Vehicleerr_generated_type = GNSSDatFr1IDT::GNSSDatFr1IDT;

  LOCStsChks_generated_type LOCStsChks;
  LOCStsCntr_generated_type LOCStsCntr;
  GNSSDatFr_generated_type GNSSDatFr;
  GNSSDatLose_generated_type GNSSDatLose;
  GNSSDatatt_generated_type GNSSDatatt;
  GNSSTimestampLo_generated_type GNSSTimestampLo;
  GNSSTimestampHi_generated_type GNSSTimestampHi;
  IMUDatSts_generated_type IMUDatSts;
  IMUDatStsfr_generated_type IMUDatStsfr;
  INSSysStatus_generated_type INSSysStatus;
  Reserve1LOCSts_generated_type Reserve1LOCSts;
  Reserve2LOCSts_generated_type Reserve2LOCSts;
  VehicleDatatt_generated_type VehicleDatatt;
  VehicleDatlose_generated_type VehicleDatlose;
  VehicleSpedfr_generated_type VehicleSpedfr;
  Vehicleerr_generated_type Vehicleerr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LOCSts1VccIDT instance.
 */
inline bool operator==(LOCSts1VccIDT const& l,
                       LOCSts1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.LOCStsChks == r.LOCStsChks)
                         && (l.LOCStsCntr == r.LOCStsCntr)
                         && (l.GNSSDatFr == r.GNSSDatFr)
                         && (l.GNSSDatLose == r.GNSSDatLose)
                         && (l.GNSSDatatt == r.GNSSDatatt)
                         && (l.GNSSTimestampLo == r.GNSSTimestampLo)
                         && (l.GNSSTimestampHi == r.GNSSTimestampHi)
                         && (l.IMUDatSts == r.IMUDatSts)
                         && (l.IMUDatStsfr == r.IMUDatStsfr)
                         && (l.INSSysStatus == r.INSSysStatus)
                         && (l.Reserve1LOCSts == r.Reserve1LOCSts)
                         && (l.Reserve2LOCSts == r.Reserve2LOCSts)
                         && (l.VehicleDatatt == r.VehicleDatatt)
                         && (l.VehicleDatlose == r.VehicleDatlose)
                         && (l.VehicleSpedfr == r.VehicleSpedfr)
                         && (l.Vehicleerr == r.Vehicleerr)
  );
}

/*!
 * \brief Compare for inequality with another LOCSts1VccIDT instance.
 */
inline bool operator!=(LOCSts1VccIDT const& l,
                       LOCSts1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LOCSts1VccIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_LOCSTS1VCCIDT_IMPL_TYPE_LOCSTS1VCCIDT_H_
