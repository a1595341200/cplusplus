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
/**        \file  TrafficSignInformationExe/src/trafficsigninformationsi_out/trafficsigninformationsi_out_skeleton.cpp
 *        \brief  Skeleton for service 'TrafficSignInformationSI_Out'.
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
#include "trafficsigninformationsi_out/trafficsigninformationsi_out_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace trafficsigninformationsi_out {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<TrafficSignInformationSI_OutSkeleton::ServiceDiscovery*> TrafficSignInformationSI_OutSkeleton::sd_;

TrafficSignInformationSI_OutSkeleton::ConstructionResult TrafficSignInformationSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

TrafficSignInformationSI_OutSkeleton::ConstructionResult TrafficSignInformationSI_OutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

TrafficSignInformationSI_OutSkeleton::ConstructionResult TrafficSignInformationSI_OutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

TrafficSignInformationSI_OutSkeleton::TrafficSignInformationSI_OutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, TSI_Bus_HMIData(this)
 {}

TrafficSignInformationSI_OutSkeleton::TrafficSignInformationSI_OutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , TSI_Bus_HMIData(this)
       {}

TrafficSignInformationSI_OutSkeleton::TrafficSignInformationSI_OutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , TSI_Bus_HMIData(this)
       {}

TrafficSignInformationSI_OutSkeleton::TrafficSignInformationSI_OutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , TSI_Bus_HMIData(this)
       {}

TrafficSignInformationSI_OutSkeleton::~TrafficSignInformationSI_OutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void TrafficSignInformationSI_OutSkeleton::DoFieldInitializationChecks() noexcept {
}

void TrafficSignInformationSI_OutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void TrafficSignInformationSI_OutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void TrafficSignInformationSI_OutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<TrafficSignInformationSI_OutSkeleton::ServiceDiscovery*>& TrafficSignInformationSI_OutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void TrafficSignInformationSI_OutSkeleton::RegisterServiceDiscovery(TrafficSignInformationSI_OutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void TrafficSignInformationSI_OutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace trafficsigninformationsi_out
