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
/**        \file  RadarAdaptorExe/src/radaradaptorsi_out/radaradaptorsi_out_skeleton.cpp
 *        \brief  Skeleton for service 'RadarAdaptorSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "radaradaptorsi_out/radaradaptorsi_out_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace radaradaptorsi_out {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<RadarAdaptorSI_OutSkeleton::ServiceDiscovery*> RadarAdaptorSI_OutSkeleton::sd_;

RadarAdaptorSI_OutSkeleton::ConstructionResult RadarAdaptorSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

RadarAdaptorSI_OutSkeleton::ConstructionResult RadarAdaptorSI_OutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

RadarAdaptorSI_OutSkeleton::ConstructionResult RadarAdaptorSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

RadarAdaptorSI_OutSkeleton::RadarAdaptorSI_OutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts(this)
, FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01(this)
, FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02(this)
, FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03(this)
, FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04(this)
, FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05(this)
 {}

RadarAdaptorSI_OutSkeleton::RadarAdaptorSI_OutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts(this)
      , FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01(this)
      , FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02(this)
      , FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03(this)
      , FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04(this)
      , FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05(this)
       {}

RadarAdaptorSI_OutSkeleton::RadarAdaptorSI_OutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts(this)
      , FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01(this)
      , FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02(this)
      , FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03(this)
      , FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04(this)
      , FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05(this)
       {}

RadarAdaptorSI_OutSkeleton::RadarAdaptorSI_OutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts(this)
      , FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01(this)
      , FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02(this)
      , FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03(this)
      , FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04(this)
      , FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05(this)
       {}

RadarAdaptorSI_OutSkeleton::~RadarAdaptorSI_OutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void RadarAdaptorSI_OutSkeleton::DoFieldInitializationChecks() noexcept {
}

void RadarAdaptorSI_OutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void RadarAdaptorSI_OutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void RadarAdaptorSI_OutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<RadarAdaptorSI_OutSkeleton::ServiceDiscovery*>& RadarAdaptorSI_OutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void RadarAdaptorSI_OutSkeleton::RegisterServiceDiscovery(RadarAdaptorSI_OutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void RadarAdaptorSI_OutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace radaradaptorsi_out

