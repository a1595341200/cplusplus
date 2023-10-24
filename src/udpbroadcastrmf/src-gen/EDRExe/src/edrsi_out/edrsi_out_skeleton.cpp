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
/**        \file  EDRExe/src/edrsi_out/edrsi_out_skeleton.cpp
 *        \brief  Skeleton for service 'EDRSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "edrsi_out/edrsi_out_skeleton.h"
#include "amsr/socal/internal/instance_specifier_lookup_table.h"

/*!
 * \trace SPEC-4980240
 * \trace SPEC-4980241
 */
namespace edrsi_out {



namespace skeleton {

/*!
 * \brief Static instance of service discovery.
 */
// VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
::amsr::generic::Singleton<EDRSI_OutSkeleton::ServiceDiscovery*> EDRSI_OutSkeleton::sd_;

EDRSI_OutSkeleton::ConstructionResult EDRSI_OutSkeleton::Preconstruct(
    ::ara::com::InstanceIdentifier instance_id, ::ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_id, mode);
}

EDRSI_OutSkeleton::ConstructionResult EDRSI_OutSkeleton::Preconstruct(
    ::ara::core::InstanceSpecifier instance, ::ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance, mode);
}

EDRSI_OutSkeleton::ConstructionResult EDRSI_OutSkeleton::Preconstruct(
    ::ara::com::InstanceIdentifierContainer instance_identifiers, ::ara::com::MethodCallProcessingMode mode) noexcept {
return Base::Preconstruct(instance_identifiers, mode); // VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS
}

EDRSI_OutSkeleton::EDRSI_OutSkeleton(ConstructionToken&& token) noexcept
: Base{std::move(token)}
, EDR_Bus_EDRInfo(this)
{}

EDRSI_OutSkeleton::EDRSI_OutSkeleton(::ara::com::InstanceIdentifier instance,
                                               ::ara::com::MethodCallProcessingMode mode) noexcept
     : EDRSI_OutSkeleton{Preconstruct(instance, mode).Value()} {}  // VCA_SOCAL_COPY_CTOR_WITH_CTOR_ARGUMENT

EDRSI_OutSkeleton::EDRSI_OutSkeleton(::ara::core::InstanceSpecifier instance,
                                               ::ara::com::MethodCallProcessingMode mode) noexcept
     : EDRSI_OutSkeleton{Preconstruct(instance, mode).Value()} {}

EDRSI_OutSkeleton::EDRSI_OutSkeleton(::ara::com::InstanceIdentifierContainer instance_identifiers,
                                               ::ara::com::MethodCallProcessingMode mode) noexcept
     // VCA_SOCAL_CALLING_STL_APIS, VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS, VCA_SOCAL_COPY_CTOR_WITH_CTOR_ARGUMENT
     : EDRSI_OutSkeleton{Preconstruct(instance_identifiers, mode).Value()} {}

// VCA_SOCAL_FREEING_STATICALLY_ALLOCATED_MEMORY
EDRSI_OutSkeleton::~EDRSI_OutSkeleton() noexcept {
  if (IsServiceOffered()) {
    logger_.LogFatal([](::ara::log::LogStream& s) { s << "Skeleton must stop offering the service before destruction."; },
                    static_cast<char const*>(__func__), __LINE__);
    ::ara::core::Abort("Skeleton must stop offering the service before destruction.");
  }
}

// VECTOR NC AutosarC++17_10-M0.1.8: MD_SOCAL_M0.1.8_VoidFunctionHasNoExternalSideEffect
// VECTOR NC Metric-HIS.PATH: MD_SOCAL_Metric-HIS.PATH_FieldInitChecks
void EDRSI_OutSkeleton::DoFieldInitializationChecks() noexcept {
}

// VECTOR NC AutosarC++17_10-M0.1.8: MD_SOCAL_M0.1.8_VoidFunctionHasNoExternalSideEffect
// VECTOR NC AutosarC++17_10-M9.3.3: MD_SOCAL_M9.3.3_Method_can_be_declared_static
void EDRSI_OutSkeleton::SendInitialFieldNotifications(SkeletonImplInterfacePtr const concrete_impl_interface) const noexcept {
  // No field notifiers are configured
  static_cast<void>(concrete_impl_interface);
}

void EDRSI_OutSkeleton::OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  // VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS
  (*(sd_.GetAccess()))->OfferService(instance_id, this);  // VCA_SOCAL_SERVICE_DISCOVERY_POINTER
}

void EDRSI_OutSkeleton::StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept {
  // VCA_SOCAL_CALLING_DESTRUCTOR_OF_STACK_OBJECTS
  (*(sd_.GetAccess()))->StopOfferService(instance_id);  // VCA_SOCAL_SERVICE_DISCOVERY_POINTER
}

::amsr::generic::Singleton<EDRSI_OutSkeleton::ServiceDiscovery*>& EDRSI_OutSkeleton::GetServiceDiscovery() noexcept {
  return sd_;  // VCA_SOCAL_SERVICE_DISCOVERY_GETTER
}

void EDRSI_OutSkeleton::RegisterServiceDiscovery(EDRSI_OutSkeleton::ServiceDiscovery* service_discovery) noexcept {
  sd_.Create(service_discovery);
}

void EDRSI_OutSkeleton::DeRegisterServiceDiscovery() noexcept { sd_.Destroy(); }


// VECTOR NC AutosarC++17_10-M0.1.8: MD_SOCAL_M0.1.8_VoidFunctionHasNoExternalSideEffectButTriggersAnotherOperation
void EDRSI_OutSkeleton::PrepareEventsAndFieldNotifiers(SkeletonImplInterfacePtr const concrete_impl_interface) noexcept {
   EDR_Bus_EDRInfo.InitializePreallocatedValue(concrete_impl_interface);
  SendInitialFieldNotifications(concrete_impl_interface);  // VCA_SOCAL_MEMBER_FUNCTION_THIS_PTR
}



}  // namespace skeleton
}  // namespace edrsi_out

