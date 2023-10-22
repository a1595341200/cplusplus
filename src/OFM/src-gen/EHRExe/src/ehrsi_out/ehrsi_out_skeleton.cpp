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
/**        \file  EHRExe/src/ehrsi_out/ehrsi_out_skeleton.cpp
 *        \brief  Skeleton for service 'EHRSI_Out'.
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
#include "ehrsi_out/ehrsi_out_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace ehrsi_out {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<EHRSI_OutSkeleton::ServiceDiscovery*> EHRSI_OutSkeleton::sd_;

EHRSI_OutSkeleton::ConstructionResult EHRSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

EHRSI_OutSkeleton::ConstructionResult EHRSI_OutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

EHRSI_OutSkeleton::ConstructionResult EHRSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

EHRSI_OutSkeleton::EHRSI_OutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, EHR_Bus_NOAInfo(this)
, EHR_Bus_LaneConnectivitys(this)
, EHR_Bus_Nodes(this)
, EHR_Bus_TrafficSigns(this)
, EHR_Bus_GeoFences(this)
, EHR_Bus_LinkCurvatures(this)
, EHR_Bus_LinkSlopes(this)
, EHR_Bus_LaneSpeedLimits(this)
, EHR_Bus_LinkInfos(this)
, EHR_Bus_MergePoints(this)
, EHR_Bus_GeofennceJudge(this)
 {}

EHRSI_OutSkeleton::EHRSI_OutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , EHR_Bus_NOAInfo(this)
      , EHR_Bus_LaneConnectivitys(this)
      , EHR_Bus_Nodes(this)
      , EHR_Bus_TrafficSigns(this)
      , EHR_Bus_GeoFences(this)
      , EHR_Bus_LinkCurvatures(this)
      , EHR_Bus_LinkSlopes(this)
      , EHR_Bus_LaneSpeedLimits(this)
      , EHR_Bus_LinkInfos(this)
      , EHR_Bus_MergePoints(this)
      , EHR_Bus_GeofennceJudge(this)
       {}

EHRSI_OutSkeleton::EHRSI_OutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , EHR_Bus_NOAInfo(this)
      , EHR_Bus_LaneConnectivitys(this)
      , EHR_Bus_Nodes(this)
      , EHR_Bus_TrafficSigns(this)
      , EHR_Bus_GeoFences(this)
      , EHR_Bus_LinkCurvatures(this)
      , EHR_Bus_LinkSlopes(this)
      , EHR_Bus_LaneSpeedLimits(this)
      , EHR_Bus_LinkInfos(this)
      , EHR_Bus_MergePoints(this)
      , EHR_Bus_GeofennceJudge(this)
       {}

EHRSI_OutSkeleton::EHRSI_OutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , EHR_Bus_NOAInfo(this)
      , EHR_Bus_LaneConnectivitys(this)
      , EHR_Bus_Nodes(this)
      , EHR_Bus_TrafficSigns(this)
      , EHR_Bus_GeoFences(this)
      , EHR_Bus_LinkCurvatures(this)
      , EHR_Bus_LinkSlopes(this)
      , EHR_Bus_LaneSpeedLimits(this)
      , EHR_Bus_LinkInfos(this)
      , EHR_Bus_MergePoints(this)
      , EHR_Bus_GeofennceJudge(this)
       {}

EHRSI_OutSkeleton::~EHRSI_OutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void EHRSI_OutSkeleton::DoFieldInitializationChecks() noexcept {
}

void EHRSI_OutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void EHRSI_OutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void EHRSI_OutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<EHRSI_OutSkeleton::ServiceDiscovery*>& EHRSI_OutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void EHRSI_OutSkeleton::RegisterServiceDiscovery(EHRSI_OutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void EHRSI_OutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace ehrsi_out

