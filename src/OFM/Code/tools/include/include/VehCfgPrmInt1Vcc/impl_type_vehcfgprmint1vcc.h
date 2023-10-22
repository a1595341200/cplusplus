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
/**        \file  ObjectFusionModelExe/include/VehCfgPrmInt1Vcc/impl_type_vehcfgprmint1vcc.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_VEHCFGPRMINT1VCC_IMPL_TYPE_VEHCFGPRMINT1VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_VEHCFGPRMINT1VCC_IMPL_TYPE_VEHCFGPRMINT1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ASDMActiveHighBeam/impl_type_asdmactivehighbeam.h"
#include "ASDMBlindSpotInformationSystem/impl_type_asdmblindspotinformationsystem.h"
#include "ASDMCollisionMitigationSupportFront/impl_type_asdmcollisionmitigationsupportfront.h"
#include "ASDMCruiseControl/impl_type_asdmcruisecontrol.h"
#include "ASDMCurveSpeedSupport/impl_type_asdmcurvespeedsupport.h"
#include "ASDMDistanceAlert/impl_type_asdmdistancealert.h"
#include "ASDMDriverImpairmentMonitor/impl_type_asdmdriverimpairmentmonitor.h"
#include "ASDMElectricalReversibleRetractors/impl_type_asdmelectricalreversibleretractors.h"
#include "ASDMElectronicHorizon/impl_type_asdmelectronichorizon.h"
#include "ASDMEmergencyLaneKeepingAid/impl_type_asdmemergencylanekeepingaid.h"
#include "ASDMEvasiveManouvreAssist/impl_type_asdmevasivemanouvreassist.h"
#include "ASDMLaneKeepAid/impl_type_asdmlanekeepaid.h"
#include "ASDMPropulsionType/impl_type_asdmpropulsiontype.h"
#include "ASDMRoadFrictionInformation/impl_type_asdmroadfrictioninformation.h"
#include "ASDMRoadSignInformation/impl_type_asdmroadsigninformation.h"
#include "ASDMSteeringWheelPosition/impl_type_asdmsteeringwheelposition.h"
#include "ASDMTrafficJamAssist/impl_type_asdmtrafficjamassist.h"
#include "ASDMVehicleType/impl_type_asdmvehicletype.h"

namespace VehCfgPrmInt1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehCfgPrmInt1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehCfgPrmInt1Vcc
 */
struct VehCfgPrmInt1Vcc {
  using _ASDMActiveHighBeam_ref_type = ASDMActiveHighBeam::ASDMActiveHighBeam;
  using _ASDMBlindSpotInformationSystem_ref_type = ASDMBlindSpotInformationSystem::ASDMBlindSpotInformationSystem;
  using _ASDMCollisionMitigationSupportFront_ref_type = ASDMCollisionMitigationSupportFront::ASDMCollisionMitigationSupportFront;
  using _ASDMCruiseControl_ref_type = ASDMCruiseControl::ASDMCruiseControl;
  using _ASDMCurveSpeedSupport_ref_type = ASDMCurveSpeedSupport::ASDMCurveSpeedSupport;
  using _ASDMDistanceAlert_ref_type = ASDMDistanceAlert::ASDMDistanceAlert;
  using _ASDMDriverImpairmentMonitor_ref_type = ASDMDriverImpairmentMonitor::ASDMDriverImpairmentMonitor;
  using _ASDMElectricalReversibleRetractors_ref_type = ASDMElectricalReversibleRetractors::ASDMElectricalReversibleRetractors;
  using _ASDMElectronicHorizon_ref_type = ASDMElectronicHorizon::ASDMElectronicHorizon;
  using _ASDMEmergencyLaneKeepingAid_ref_type = ASDMEmergencyLaneKeepingAid::ASDMEmergencyLaneKeepingAid;
  using _ASDMEvasiveManouvreAssist_ref_type = ASDMEvasiveManouvreAssist::ASDMEvasiveManouvreAssist;
  using _ASDMLaneKeepAid_ref_type = ASDMLaneKeepAid::ASDMLaneKeepAid;
  using _ASDMRoadFrictionInformation_ref_type = ASDMRoadFrictionInformation::ASDMRoadFrictionInformation;
  using _ASDMRoadSignInformation_ref_type = ASDMRoadSignInformation::ASDMRoadSignInformation;
  using _ASDMSteeringWheelPosition_ref_type = ASDMSteeringWheelPosition::ASDMSteeringWheelPosition;
  using _ASDMTrafficJamAssist_ref_type = ASDMTrafficJamAssist::ASDMTrafficJamAssist;
  using _ASDMVehicleType_ref_type = ASDMVehicleType::ASDMVehicleType;
  using _ASDMPropulsionType_ref_type = ASDMPropulsionType::ASDMPropulsionType;

  _ASDMActiveHighBeam_ref_type ASDMActiveHighBeam_ref;
  _ASDMBlindSpotInformationSystem_ref_type ASDMBlindSpotInformationSystem_ref;
  _ASDMCollisionMitigationSupportFront_ref_type ASDMCollisionMitigationSupportFront_ref;
  _ASDMCruiseControl_ref_type ASDMCruiseControl_ref;
  _ASDMCurveSpeedSupport_ref_type ASDMCurveSpeedSupport_ref;
  _ASDMDistanceAlert_ref_type ASDMDistanceAlert_ref;
  _ASDMDriverImpairmentMonitor_ref_type ASDMDriverImpairmentMonitor_ref;
  _ASDMElectricalReversibleRetractors_ref_type ASDMElectricalReversibleRetractors_ref;
  _ASDMElectronicHorizon_ref_type ASDMElectronicHorizon_ref;
  _ASDMEmergencyLaneKeepingAid_ref_type ASDMEmergencyLaneKeepingAid_ref;
  _ASDMEvasiveManouvreAssist_ref_type ASDMEvasiveManouvreAssist_ref;
  _ASDMLaneKeepAid_ref_type ASDMLaneKeepAid_ref;
  _ASDMRoadFrictionInformation_ref_type ASDMRoadFrictionInformation_ref;
  _ASDMRoadSignInformation_ref_type ASDMRoadSignInformation_ref;
  _ASDMSteeringWheelPosition_ref_type ASDMSteeringWheelPosition_ref;
  _ASDMTrafficJamAssist_ref_type ASDMTrafficJamAssist_ref;
  _ASDMVehicleType_ref_type ASDMVehicleType_ref;
  _ASDMPropulsionType_ref_type ASDMPropulsionType_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehCfgPrmInt1Vcc instance.
 */
inline bool operator==(VehCfgPrmInt1Vcc const& l,
                       VehCfgPrmInt1Vcc const& r) noexcept {
  return (&l == &r) || ((l.ASDMActiveHighBeam_ref == r.ASDMActiveHighBeam_ref)
                         && (l.ASDMBlindSpotInformationSystem_ref == r.ASDMBlindSpotInformationSystem_ref)
                         && (l.ASDMCollisionMitigationSupportFront_ref == r.ASDMCollisionMitigationSupportFront_ref)
                         && (l.ASDMCruiseControl_ref == r.ASDMCruiseControl_ref)
                         && (l.ASDMCurveSpeedSupport_ref == r.ASDMCurveSpeedSupport_ref)
                         && (l.ASDMDistanceAlert_ref == r.ASDMDistanceAlert_ref)
                         && (l.ASDMDriverImpairmentMonitor_ref == r.ASDMDriverImpairmentMonitor_ref)
                         && (l.ASDMElectricalReversibleRetractors_ref == r.ASDMElectricalReversibleRetractors_ref)
                         && (l.ASDMElectronicHorizon_ref == r.ASDMElectronicHorizon_ref)
                         && (l.ASDMEmergencyLaneKeepingAid_ref == r.ASDMEmergencyLaneKeepingAid_ref)
                         && (l.ASDMEvasiveManouvreAssist_ref == r.ASDMEvasiveManouvreAssist_ref)
                         && (l.ASDMLaneKeepAid_ref == r.ASDMLaneKeepAid_ref)
                         && (l.ASDMRoadFrictionInformation_ref == r.ASDMRoadFrictionInformation_ref)
                         && (l.ASDMRoadSignInformation_ref == r.ASDMRoadSignInformation_ref)
                         && (l.ASDMSteeringWheelPosition_ref == r.ASDMSteeringWheelPosition_ref)
                         && (l.ASDMTrafficJamAssist_ref == r.ASDMTrafficJamAssist_ref)
                         && (l.ASDMVehicleType_ref == r.ASDMVehicleType_ref)
                         && (l.ASDMPropulsionType_ref == r.ASDMPropulsionType_ref)
  );
}

/*!
 * \brief Compare for inequality with another VehCfgPrmInt1Vcc instance.
 */
inline bool operator!=(VehCfgPrmInt1Vcc const& l,
                       VehCfgPrmInt1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace VehCfgPrmInt1Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_VEHCFGPRMINT1VCC_IMPL_TYPE_VEHCFGPRMINT1VCC_H_
