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
/**        \file  PerceptionExe/src/perceptionsi_staticobjout/perceptionsi_staticobjout_skeleton.cpp
 *        \brief  Skeleton for service 'PerceptionSI_StaticObjOut'.
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
#include "perceptionsi_staticobjout/perceptionsi_staticobjout_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace perceptionsi_staticobjout {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<PerceptionSI_StaticObjOutSkeleton::ServiceDiscovery*> PerceptionSI_StaticObjOutSkeleton::sd_;

PerceptionSI_StaticObjOutSkeleton::ConstructionResult PerceptionSI_StaticObjOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

PerceptionSI_StaticObjOutSkeleton::ConstructionResult PerceptionSI_StaticObjOutSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

PerceptionSI_StaticObjOutSkeleton::ConstructionResult PerceptionSI_StaticObjOutSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

PerceptionSI_StaticObjOutSkeleton::PerceptionSI_StaticObjOutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, FrntCam_Bus_StaticObj(this)
 {}

PerceptionSI_StaticObjOutSkeleton::PerceptionSI_StaticObjOutSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FrntCam_Bus_StaticObj(this)
       {}

PerceptionSI_StaticObjOutSkeleton::PerceptionSI_StaticObjOutSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , FrntCam_Bus_StaticObj(this)
       {}

PerceptionSI_StaticObjOutSkeleton::PerceptionSI_StaticObjOutSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , FrntCam_Bus_StaticObj(this)
       {}

PerceptionSI_StaticObjOutSkeleton::~PerceptionSI_StaticObjOutSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void PerceptionSI_StaticObjOutSkeleton::DoFieldInitializationChecks() noexcept {
}

void PerceptionSI_StaticObjOutSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void PerceptionSI_StaticObjOutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void PerceptionSI_StaticObjOutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<PerceptionSI_StaticObjOutSkeleton::ServiceDiscovery*>& PerceptionSI_StaticObjOutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void PerceptionSI_StaticObjOutSkeleton::RegisterServiceDiscovery(PerceptionSI_StaticObjOutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void PerceptionSI_StaticObjOutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace perceptionsi_staticobjout

