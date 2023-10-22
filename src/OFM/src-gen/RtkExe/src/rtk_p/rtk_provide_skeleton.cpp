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
/**        \file  RtkExe/src/rtk_p/rtk_provide_skeleton.cpp
 *        \brief  Skeleton for service 'Rtk_Provide'.
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
#include "rtk_p/rtk_provide_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace rtk_p {
namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<Rtk_ProvideSkeleton::ServiceDiscovery*> Rtk_ProvideSkeleton::sd_;

Rtk_ProvideSkeleton::ConstructionResult Rtk_ProvideSkeleton::Preconstruct(
    ara::com::InstanceIdentifier instance_id, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

Rtk_ProvideSkeleton::ConstructionResult Rtk_ProvideSkeleton::Preconstruct(
    ara::core::InstanceSpecifier instance, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

Rtk_ProvideSkeleton::ConstructionResult Rtk_ProvideSkeleton::Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers, ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode);
}

Rtk_ProvideSkeleton::Rtk_ProvideSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, GgaData_provide(this)
, ErrorCode(this)
 {}

Rtk_ProvideSkeleton::Rtk_ProvideSkeleton(ara::com::InstanceIdentifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , GgaData_provide(this)
      , ErrorCode(this)
       {}

Rtk_ProvideSkeleton::Rtk_ProvideSkeleton(ara::core::InstanceSpecifier instance,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance, mode}
      , GgaData_provide(this)
      , ErrorCode(this)
       {}

Rtk_ProvideSkeleton::Rtk_ProvideSkeleton(ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ara::com::MethodCallProcessingMode mode) noexcept
     : Base{instance_identifiers, mode}
      , GgaData_provide(this)
      , ErrorCode(this)
       {}

Rtk_ProvideSkeleton::~Rtk_ProvideSkeleton() noexcept {
  // Next line might block until all running method requests are done.
  StopOfferService();
}

void Rtk_ProvideSkeleton::DoFieldInitializationChecks() noexcept {
}

void Rtk_ProvideSkeleton::SendInitialFieldNotifications() noexcept {
  // Send initial field events for all fields with "hasNotifier = true"
}

void Rtk_ProvideSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->OfferService(instance_id, this);
}

void Rtk_ProvideSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  (*(sd_.GetAccess()))->StopOfferService(instance_id);
}

::amsr::generic::Singleton<Rtk_ProvideSkeleton::ServiceDiscovery*>& Rtk_ProvideSkeleton::GetServiceDiscovery() noexcept {
  return sd_;
}

void Rtk_ProvideSkeleton::RegisterServiceDiscovery(Rtk_ProvideSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void Rtk_ProvideSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }

}  // namespace skeleton
}  // namespace rtk_p

