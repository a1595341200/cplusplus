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
/**        \file  LocalizationFusionExe/include/localizationfusionsi_out/localizationfusionsi_out_skeleton.h
 *        \brief  Skeleton for service 'LocalizationFusionSI_Out'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_H_

/*!
 * \trace SPEC-4980239
 */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/events/skeleton_event.h"
#include "amsr/socal/fields/skeleton_field.h"
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/socal/skeleton.h"
#include "ara/core/future.h"
#include "ara/core/instance_specifier.h"
#include "localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_impl_interface.h"
#include "localizationfusionsi_out/LocalizationFusionSI_Out_types.h"

/*!
 * \trace SPEC-4980240
 */
namespace localizationfusionsi_out {
/*!
 * \trace SPEC-4980241
 */
namespace skeleton {
/*!
 * \brief Forward declaration for inserting as a type into the template class SkeletonEvent
 */
class LocalizationFusionSI_OutSkeleton;

/*!
 * \trace SPEC-4980244
 */
namespace methods {

}  // namespace methods

/*!
 * \trace SPEC-4980243
 */
namespace events {

/*!
 * \brief Type alias for service event 'LFM_Bus_MapErrorSts', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using LFM_Bus_MapErrorSts = ::amsr::socal::events::SkeletonEvent<
    localizationfusionsi_out::skeleton::LocalizationFusionSI_OutSkeleton,
    ::MapErrorSts::MapErrorSts,
    localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::MapErrorSts::MapErrorSts>,
    &localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface::GetEventManagerLFM_Bus_MapErrorSts>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Skeleton interface class for the service 'LocalizationFusionSI_Out'.
 *
 * \vpublic
 * \trace SPEC-4980341
 */
class LocalizationFusionSI_OutSkeleton
    : public ::amsr::socal::Skeleton<localizationfusionsi_out::LocalizationFusionSI_Out,
                                          localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface> {
 public:
// ---- Constructors / Destructors -----------------------------------------------------------------------------------
/*!
 * \brief Exception-less pre-construction of LocalizationFusionSI_Out.
 *
 * \param[in] instance The InstanceIdentifier of the service instance to be created.
 *                     Expected format: "<Binding type/prefix>:<binding specific instance ID>".
 *                     The InstanceIdentifier must fulfill the following preconditions:
 *                     - Must be configured in the ARXML model.
 *                     - Must belong to the service interface.
 * \param[in] mode The mode of the service implementation for processing service method invocations.
 *                 Default: Event-driven processing.
 *                 Preconditions to be fulfilled:
 *                 - If the mode 'kEventSingleThread' is used, a possible user-defined ThreadPool must have exactly one
 *                   worker thread configured.
 * \return Result<ConstructionToken> Result containing construction token from which a skeleton object can be
 *         constructed.
 *
 * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
 *      created skeleton object, the instantiation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053551
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ara::com::InstanceIdentifier instance_id,
    ara::com::MethodCallProcessingMode const mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of LocalizationFusionSI_OutSkeleton.
 *
 * \param[in] instance InstanceSpecifier of this service.
 *                     The provided InstanceSpecifier must fulfill the following preconditions:
 *                     - Must be configured in the ARXML model.
 *                     - Must belong to the service interface.
 * \param[in] mode The mode of the service implementation for processing service method invocations.
 *                 Default: Event-driven processing.
 *                 Preconditions to be fulfilled:
 *                 - If the mode 'kEventSingleThread' is used, a possible user-defined ThreadPool must have exactly one
 *                   worker thread configured.
 * \return Result<ConstructionToken> Result containing construction token from which a skeleton object can be
 *         constructed.
 *
 * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
 *      created skeleton object, the instantation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053553
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ara::core::InstanceSpecifier instance,
    ara::com::MethodCallProcessingMode const mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of LocalizationFusionSI_OutSkeleton.
 *
 * \param[in] instance_identifiers The container of instances of a service, each instance element needed to distinguish
 *                                 different instances of exactly the same service in the system.
 *                                 The provided InstanceIdentifierContainer must fulfill the following preconditions:
 *                                 - Every InstanceIdentifier of the container must be configured in the ARXML model.
 *                                 - Every InstanceIdentifier of the container must belong to the service interface to be
 *                                   instantiated.
 *                                 - The container must not be empty.
 *                                 - All elements of the container must be unique (no duplicates).
 * \param[in] mode The mode of the service implementation for processing service method invocations.
 *                 Default: Event-driven processing.
 *                 Preconditions to be fulfilled:
 *                 - If the mode 'kEventSingleThread' is used, a possible user-defined ThreadPool must have exactly one
 *                   worker thread configured.
 * \return Result<ConstructionToken> Result containing construction token from which a skeleton object can be
 *         constructed.
 *
 * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
 *      created skeleton object, the instantation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053555
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ara::com::InstanceIdentifierContainer instance_identifiers,
    ara::com::MethodCallProcessingMode const mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less constructor of LocalizationFusionSI_OutSkeleton.
 * \details Because of internal resource management strategy, all created skeletons shall be released before the
 *          Runtime is destroyed; i.e. they cannot not be stored in variables with longer life period than the
 *          application's main(). If not followed, it's not guaranteed that the communication middleware is shut down
 *          properly and may lead to segmentation fault.
 *
 * \param[in] token ConstructionToken created with Preconstruct() API.
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053551
 * \trace SPEC-8053553
 * \trace SPEC-8053555
 */
explicit LocalizationFusionSI_OutSkeleton(ConstructionToken&& token) noexcept;

  /*!
   * \brief Delete default constructor.
   */
  LocalizationFusionSI_OutSkeleton() = delete;
  /*!
   * \brief Delete copy constructor.
   */
  LocalizationFusionSI_OutSkeleton(LocalizationFusionSI_OutSkeleton const &) = delete;
  /*!
   * \brief Delete move constructor.
   */
  LocalizationFusionSI_OutSkeleton(LocalizationFusionSI_OutSkeleton &&) = delete;
  /*!
   * \brief Delete copy assignment.
   */
  LocalizationFusionSI_OutSkeleton &operator=(LocalizationFusionSI_OutSkeleton const &) & = delete;
  /*!
   * \brief Delete move assignment.
   */
  LocalizationFusionSI_OutSkeleton &operator=(LocalizationFusionSI_OutSkeleton &&) & = delete;

  /*!
   * \brief Constructor of LocalizationFusionSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance The identifier of a specific instance of a service, needed to distinguish different instances of
   *                     exactly the same service in the system.
   *
   * \param[in] mode The mode of the service implpementation for processing service method invocations.
   *                 Default: Event-driven processing
   *
   * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
   *      created skeleton object, the instantiation for the same service instance will be possible.
   *
   * \context App
   * \threadsafe FALSE
   * \reentrant FALSE
   * \vprivate Vector component internal API.
   * \synchronous TRUE
   * \trace SPEC-4980351
   * \trace SPEC-4980356
   */
   explicit LocalizationFusionSI_OutSkeleton(
      ara::com::InstanceIdentifier instance,
      ara::com::MethodCallProcessingMode mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of LocalizationFusionSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance The InstanceSpecifier of a specific service instance, needed to distinguish different instances
   *                     of exactly the same service in the system.
   *
   * \param[in] mode The mode of the service implementation for processing service method invocations.
   *                 Default: Event-driven processing
   *
   * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
   *      created skeleton object, the instantiation for the same service instance will be possible.
   *
   * \context App
   * \threadsafe FALSE
   * \reentrant FALSE
   * \vprivate Vector component internal API.
   * \synchronous TRUE
   * \trace SPEC-8053552
   * \trace SPEC-4980356
   */
   explicit LocalizationFusionSI_OutSkeleton(
      ara::core::InstanceSpecifier instance,
      ara::com::MethodCallProcessingMode mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of LocalizationFusionSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance_identifiers The container of instances of a service, each instance element needed to
   *                                 distinguish different instances of exactly the same service in the system.
   *
   * \param[in] mode The mode of the service implementation for processing service method invocations.
   *                 Default: Event-driven processing
   *
   * \pre No other service skeleton for the same instance must exist concurrently. After destruction of an already
   *      created skeleton object, the instantiation for the same service instance will be possible.
   *
   * \context App
   * \threadsafe FALSE
   * \reentrant FALSE
   * \vprivate Vector component internal API.
   * \synchronous TRUE
   * \trace SPEC-8053554
   * \trace SPEC-4980356
   */
   explicit LocalizationFusionSI_OutSkeleton(
      ara::com::InstanceIdentifierContainer instance_identifiers,
      ara::com::MethodCallProcessingMode mode = ara::com::MethodCallProcessingMode::kEvent) noexcept;


  /*!
   * \brief Stops the service if it is currently offered.
   * \details This call will be blocked until all current method requests are finished/canceled.
   * \pre -
   * \context App
   * \vpublic
   * \synchronous TRUE
   * \trace SPEC-4980351
   */
  ~LocalizationFusionSI_OutSkeleton() noexcept override;

  /*!
   * \brief Type alias for ServiceDiscovery.
   */
  using ServiceDiscovery = ::amsr::socal::internal::service_discovery::ServiceDiscovery<LocalizationFusionSI_OutSkeleton>;

  /*!
   * \brief       Returns the service discovery singleton.
   * \return      Reference to service discovery singleton.
   * \pre         Service discovery has been registered via RegisterServiceDiscovery.
   * \context     ANY
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate
   * \synchronous TRUE
   */
  static ::amsr::generic::Singleton<ServiceDiscovery*>& GetServiceDiscovery() noexcept;

  /*!
   * \brief       Registers the service discovery.
   * \param[in]   service_discovery Pointer to service discovery.
   * \pre         -
   * \context     Init
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate
   * \synchronous TRUE
   */
  static void RegisterServiceDiscovery(ServiceDiscovery* service_discovery) noexcept;

  /*!
   * \brief       Deregisters the service discovery.
   * \pre         RegisterServiceDiscovery has been called.
   * \context     Shutdown
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate
   * \synchronous TRUE
   */
  static void DeRegisterServiceDiscovery() noexcept;

  // ---- Methods --------------------------------------------------------------------------------------------------

  // ---- Events ---------------------------------------------------------------------------------------------------

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'LFM_Bus_MapErrorSts' which can be used by application developer.
   * \details 
   * Data of type ::MapErrorSts::MapErrorSts
   * \vpublic
   */
  events::LFM_Bus_MapErrorSts LFM_Bus_MapErrorSts;

  // ---- Fields ---------------------------------------------------------------------------------------------------

 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Skeleton<localizationfusionsi_out::LocalizationFusionSI_Out, localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface>;

  /*!
   * \copydoc amsr::socal::Skeleton<localizationfusionsi_out::LocalizationFusionSI_Out,localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface>::DoFieldInitializationChecks()
   */
  void DoFieldInitializationChecks() noexcept override;

  /*!
   * \copydoc amsr::socal::Skeleton<localizationfusionsi_out::LocalizationFusionSI_Out,localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface>::SendInitialFieldNotifications()
   */
  void SendInitialFieldNotifications() noexcept override;

  /*!
   * \copydoc amsr::socal::Skeleton<localizationfusionsi_out::LocalizationFusionSI_Out,localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface>::OfferServiceInternal()
   */
  void OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \copydoc amsr::socal::Skeleton<localizationfusionsi_out::LocalizationFusionSI_Out,localizationfusionsi_out::internal::LocalizationFusionSI_OutSkeletonImplInterface>::StopOfferServiceInternal()
   */
  void StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \brief The service discovery instance.
   */
  // VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
  static ::amsr::generic::Singleton<ServiceDiscovery*> sd_;
};  // class LocalizationFusionSI_OutSkeleton

}  // namespace skeleton
}  // namespace localizationfusionsi_out

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_H_
