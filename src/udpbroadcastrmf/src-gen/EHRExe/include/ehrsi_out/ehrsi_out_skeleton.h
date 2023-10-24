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
/**        \file  EHRExe/include/ehrsi_out/ehrsi_out_skeleton.h
 *        \brief  Skeleton for service 'EHRSI_Out'.
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

#ifndef EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_H_
#define EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_H_

/*!
 * \trace SPEC-4980239
 */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/generic/singleton_wrapper.h"
#include "amsr/socal/definitions.h"
#include "amsr/socal/events/skeleton_event.h"
#include "amsr/socal/fields/skeleton_field.h"
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "amsr/socal/internal/methods/skeleton_method.h"
#include "amsr/socal/internal/methods/skeleton_method_fire_and_forget.h"
#include "amsr/socal/internal/service_discovery/service_discovery.h"
#include "amsr/socal/internal/specialization_types_thread_driven.h"
#include "amsr/socal/skeleton.h"
#include "ara/core/future.h"
#include "ara/core/instance_specifier.h"
#include "ehrsi_out/EHRSI_Out_skeleton_backend_interface.h"
#include "ehrsi_out/EHRSI_Out_skeleton_impl_interface.h"
#include "ehrsi_out/EHRSI_Out_types.h"
#include "ehrsi_out/ehrsi_out_common.h"

/*!
 * \trace SPEC-4980240
 */
namespace ehrsi_out {
/*!
 * \trace SPEC-4980241
 */
namespace skeleton {
/*!
 * \brief Forward declaration for inserting as a type into the template class SkeletonEvent
 */
class EHRSI_OutSkeleton;

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
 * \brief Type alias for service event 'EHR_Bus_NOAInfo', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_NOAInfo = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::NOAInfoIDT::NOAInfoIDT,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::NOAInfoIDT::NOAInfoIDT>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_NOAInfo>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneConnectivitys', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LaneConnectivitys = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LaneConnectivitys>;

/*!
 * \brief Type alias for service event 'EHR_Bus_Nodes', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_Nodes = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_Nodes>;

/*!
 * \brief Type alias for service event 'EHR_Bus_TrafficSigns', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_TrafficSigns = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_TrafficSigns>;

/*!
 * \brief Type alias for service event 'EHR_Bus_GeoFences', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_GeoFences = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_GeoFences>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkCurvatures', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LinkCurvatures = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LinkCurvatures>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkSlopes', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LinkSlopes = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LinkSlopes>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneSpeedLimits', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LaneSpeedLimits = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LaneSpeedLimits>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinkInfos', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LinkInfos = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LinkInfos>;

/*!
 * \brief Type alias for service event 'EHR_Bus_AllMergePoints', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_AllMergePoints = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_AllMergePoints>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LinearObjects', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LinearObjects = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LinearObjects>;

/*!
 * \brief Type alias for service event 'EHR_Bus_FormOfWays', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_FormOfWays = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_FormOfWays>;

/*!
 * \brief Type alias for service event 'EHR_Bus_SequenceId', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_SequenceId = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::uint64IDT::uint64IDT,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::uint64IDT::uint64IDT>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_SequenceId>;

/*!
 * \brief Type alias for service event 'EHR_Bus_LaneWidthes', that is part of the skeleton.
 *
 * \trace SPEC-4980342
 */
using EHR_Bus_LaneWidthes = ::amsr::socal::events::SkeletonEvent<
    ehrsi_out::skeleton::EHRSI_OutSkeleton,
    ::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector,
    ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
    ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector>,
    &ehrsi_out::internal::EHRSI_OutSkeletonImplInterface::GetEventManagerEHR_Bus_LaneWidthes>;

}  // namespace events

/*!
 * \trace SPEC-4980245
 */
namespace fields {

}  // namespace fields

/*!
 * \brief Skeleton interface class for the service 'EHRSI_Out'.
 *
 * \vpublic
 * \trace SPEC-4980341
 * \unit Socal::Skeleton::Skeleton
 */
// VECTOR NC Metric-OO.WMC.One: MD_SOCAL_Metric.OO.WMC.One_GeneratedClass
class EHRSI_OutSkeleton
    : public ::amsr::socal::Skeleton<ehrsi_out::EHRSI_Out,
                                          ehrsi_out::internal::EHRSI_OutSkeletonImplInterface,
                                          ::amsr::socal::kRuntimeProcessingMode>,
      public       ehrsi_out::internal::EHRSI_OutSkeletonBackendInterface {
 public:
// ---- Constructors / Destructors -----------------------------------------------------------------------------------
/*!
 * \brief Exception-less pre-construction of EHRSI_Out.
 *
 * \param[in] instance_id The InstanceIdentifier of the service instance to be created.
 *                        Expected format: "<Binding type/prefix>:<binding specific instance ID>".
 *                        The InstanceIdentifier must fulfill the following preconditions:
 *                        - Must be configured in the ARXML model.
 *                        - Must belong to the service interface.
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
 * \threadsafe FALSE against all overloads of Preconstruct.
 * \reentrant FALSE against all overloads of Preconstruct.
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053551
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ::ara::com::InstanceIdentifier instance_id,
    ::ara::com::MethodCallProcessingMode const mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of EHRSI_OutSkeleton.
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
 *      created skeleton object, the instantiation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE against all overloads of Preconstruct.
 * \reentrant FALSE against all overloads of Preconstruct.
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053553
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ::ara::core::InstanceSpecifier instance,
    ::ara::com::MethodCallProcessingMode const mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less pre-construction of EHRSI_OutSkeleton.
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
 *      created skeleton object, the instantiation for the same service instance will be possible.
 * \context App
 * \threadsafe FALSE against all overloads of Preconstruct.
 * \reentrant FALSE against all overloads of Preconstruct.
 * \vpublic
 * \synchronous TRUE
 * \trace SPEC-8053555
 * \trace SPEC-8053550
 */
static ConstructionResult Preconstruct(
    ::ara::com::InstanceIdentifierContainer instance_identifiers,
    ::ara::com::MethodCallProcessingMode const mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

/*!
 * \brief Exception-less constructor of EHRSI_OutSkeleton.
 * \details Because of internal resource management strategy, all created skeletons shall be released before the
 *          Runtime is destroyed; i.e. they cannot not be stored in variables with longer life period than the
 *          application's main(). If not followed, it's not guaranteed that the communication middleware is shut down
 *          properly and may lead to segmentation fault.
 *
 * \param[in] token ConstructionToken created with Preconstruct() API.
 * \pre     -
 * \context App
 * \threadsafe FALSE
 * \reentrant FALSE
 * \vpublic
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 * \trace SPEC-8053551
 * \trace SPEC-8053553
 * \trace SPEC-8053555
 */
explicit EHRSI_OutSkeleton(ConstructionToken&& token) noexcept;

  /*!
   * \brief Delete default constructor.
   */
  EHRSI_OutSkeleton() = delete;
  /*!
   * \brief Delete copy constructor.
   */
  EHRSI_OutSkeleton(EHRSI_OutSkeleton const &) = delete;
  /*!
   * \brief Delete move constructor.
   */
  EHRSI_OutSkeleton(EHRSI_OutSkeleton &&) = delete;
  /*!
   * \brief Delete copy assignment.
   */
  EHRSI_OutSkeleton &operator=(EHRSI_OutSkeleton const &) & = delete;
  /*!
   * \brief Delete move assignment.
   */
  EHRSI_OutSkeleton &operator=(EHRSI_OutSkeleton &&) & = delete;

  /*!
   * \brief Constructor of EHRSI_OutSkeleton.
   *
   * \remark Because of internal resource management strategy, all created skeletons shall be released before the Runtime
   * is destroyed; i.e. they cannot not be stored in variables with longer life period than the application's main().
   * If not followed, it's not guaranteed that the communication middleware is shut down properly and may lead to
   * segmentation fault.
   *
   * \param[in] instance The identifier of a specific instance of a service, needed to distinguish different instances of
   *                     exactly the same service in the system.
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
   * \trace SPEC-4980351
   * \trace SPEC-4980356
   */
   explicit EHRSI_OutSkeleton(
      ::ara::com::InstanceIdentifier instance,
      ::ara::com::MethodCallProcessingMode mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of EHRSI_OutSkeleton.
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
   explicit EHRSI_OutSkeleton(
      ::ara::core::InstanceSpecifier instance,
      ::ara::com::MethodCallProcessingMode mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;

  /*!
   * \brief Constructor of EHRSI_OutSkeleton.
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
   explicit EHRSI_OutSkeleton(
      ::ara::com::InstanceIdentifierContainer instance_identifiers,
      ::ara::com::MethodCallProcessingMode mode = ::ara::com::MethodCallProcessingMode::kEvent) noexcept;


  /*!
   * \brief       Destroys the skeleton.
   * \pre         The service must have been stopped via StopOfferService() prior to the destruction.
   * \context     App
   * \threadsafe  FALSE for same class instance, FALSE for different instances.
   *              FALSE against all overloads of Preconstruct API for same/different class instances.
   * \reentrant   FALSE for same class instance, FALSE for different instances.
   *              FALSE against all overloads of Preconstruct API for same/different class instances.
   * \vpublic
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  ~EHRSI_OutSkeleton() noexcept override;

  /*!
   * \brief Type alias for ServiceDiscovery.
   */
  using ServiceDiscovery = ::amsr::socal::internal::service_discovery::ServiceDiscovery<EHRSI_OutSkeleton>;

  /*!
   * \brief       Returns the service discovery singleton.
   * \return      Reference to service discovery singleton.
   * \pre         Service discovery has been registered via RegisterServiceDiscovery.
   * \context     ANY
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \vprivate    Vector product private API.
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
   * \brief The skeleton event 'EHR_Bus_NOAInfo' which can be used by application developer.
   * \details 
   * Data of type ::NOAInfoIDT::NOAInfoIDT
   * \vpublic
   */
  events::EHR_Bus_NOAInfo EHR_Bus_NOAInfo;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LaneConnectivitys' which can be used by application developer.
   * \details 
   * Data of type ::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_LaneConnectivitys EHR_Bus_LaneConnectivitys;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_Nodes' which can be used by application developer.
   * \details 
   * Data of type ::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_Nodes EHR_Bus_Nodes;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_TrafficSigns' which can be used by application developer.
   * \details 
   * Data of type ::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_TrafficSigns EHR_Bus_TrafficSigns;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_GeoFences' which can be used by application developer.
   * \details 
   * Data of type ::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_GeoFences EHR_Bus_GeoFences;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LinkCurvatures' which can be used by application developer.
   * \details 
   * Data of type ::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_LinkCurvatures EHR_Bus_LinkCurvatures;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LinkSlopes' which can be used by application developer.
   * \details 
   * Data of type ::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_LinkSlopes EHR_Bus_LinkSlopes;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LaneSpeedLimits' which can be used by application developer.
   * \details 
   * Data of type ::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_LaneSpeedLimits EHR_Bus_LaneSpeedLimits;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LinkInfos' which can be used by application developer.
   * \details 
   * Data of type ::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_LinkInfos EHR_Bus_LinkInfos;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_AllMergePoints' which can be used by application developer.
   * \details 
   * Data of type ::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_AllMergePoints EHR_Bus_AllMergePoints;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LinearObjects' which can be used by application developer.
   * \details 
   * Data of type ::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_LinearObjects EHR_Bus_LinearObjects;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_FormOfWays' which can be used by application developer.
   * \details 
   * Data of type ::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_FormOfWays EHR_Bus_FormOfWays;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_SequenceId' which can be used by application developer.
   * \details 
   * Data of type ::uint64IDT::uint64IDT
   * \vpublic
   */
  events::EHR_Bus_SequenceId EHR_Bus_SequenceId;

  // VECTOR NC VectorC++-V11.0.2: MD_SOCAL_V11-0-2_public_member_in_generated_code
  /*!
   * \brief The skeleton event 'EHR_Bus_LaneWidthes' which can be used by application developer.
   * \details 
   * Data of type ::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector
   * \vpublic
   */
  events::EHR_Bus_LaneWidthes EHR_Bus_LaneWidthes;

  // ---- Fields ---------------------------------------------------------------------------------------------------


 private:
  /*!
   * \brief Type alias for the base class.
   */
  using Base = ::amsr::socal::Skeleton<ehrsi_out::EHRSI_Out, ehrsi_out::internal::EHRSI_OutSkeletonImplInterface, ::amsr::socal::kRuntimeProcessingMode>;

  /*!
   * \copydoc Base::DoFieldInitializationChecks()
   */
  void DoFieldInitializationChecks() noexcept override;

  /*!
   * \brief Sends all initial events for the fields that have notifiers.
   * \param[in] concrete_impl_interface A communication object created for this skeleton. This must not be a nullptr.
   * \pre -
   * \context App
   */
  void SendInitialFieldNotifications(SkeletonImplInterfacePtr const concrete_impl_interface) const noexcept;

  /*!
   * \copydoc Base::OfferServiceInternal()
   */
  void OfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \copydoc Base::StopOfferServiceInternal()
   */
  void StopOfferServiceInternal(::ara::com::InstanceIdentifier const& instance_id) noexcept override;

  /*!
   * \copydoc Base::PrepareEventsAndFieldNotifiers()
   */
  void PrepareEventsAndFieldNotifiers(SkeletonImplInterfacePtr const concrete_impl_interface) noexcept override;

  /*!
   * \brief The service discovery instance.
   */
  // VECTOR NC AutosarC++17_10-A3.3.2: MD_SOCAL_AutosarC++17_10-A3.3.2_StaticStorageDurationOfNonPODType
  static ::amsr::generic::Singleton<ServiceDiscovery*> sd_;

};  // class EHRSI_OutSkeleton

}  // namespace skeleton
}  // namespace ehrsi_out

#endif  // EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_H_

