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
/**        \file  EHRExe/include/ehrsi_out/EHRSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'EHRSI_Out'.
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

#ifndef EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "ehrsi_out/ehrsi_out_common.h"

namespace ehrsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'EHRSI_Out'
 */
class EHRSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  EHRSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~EHRSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  EHRSI_OutSkeletonImplInterface(EHRSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  EHRSI_OutSkeletonImplInterface &operator=(EHRSI_OutSkeletonImplInterface &&) & noexcept = default;

  EHRSI_OutSkeletonImplInterface(EHRSI_OutSkeletonImplInterface const &) = delete;

  EHRSI_OutSkeletonImplInterface &operator=(EHRSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_NOAInfo'.
   * \details Event sample type: ::NOAInfoIDT::NOAInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::NOAInfoIDT::NOAInfoIDT>* GetEventManagerEHR_Bus_NOAInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneConnectivitys'.
   * \details Event sample type: ::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector>* GetEventManagerEHR_Bus_LaneConnectivitys() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_Nodes'.
   * \details Event sample type: ::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector>* GetEventManagerEHR_Bus_Nodes() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_TrafficSigns'.
   * \details Event sample type: ::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector>* GetEventManagerEHR_Bus_TrafficSigns() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeoFences'.
   * \details Event sample type: ::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector>* GetEventManagerEHR_Bus_GeoFences() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkCurvatures'.
   * \details Event sample type: ::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkCurvatureIDT_Vector::Array_LinkCurvatureIDT_Vector>* GetEventManagerEHR_Bus_LinkCurvatures() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkSlopes'.
   * \details Event sample type: ::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkSlopeIDT_Vector::Array_LinkSlopeIDT_Vector>* GetEventManagerEHR_Bus_LinkSlopes() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneSpeedLimits'.
   * \details Event sample type: ::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector>* GetEventManagerEHR_Bus_LaneSpeedLimits() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkInfos'.
   * \details Event sample type: ::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector>* GetEventManagerEHR_Bus_LinkInfos() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_AllMergePoints'.
   * \details Event sample type: ::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector>* GetEventManagerEHR_Bus_AllMergePoints() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinearObjects'.
   * \details Event sample type: ::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector>* GetEventManagerEHR_Bus_LinearObjects() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_FormOfWays'.
   * \details Event sample type: ::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector>* GetEventManagerEHR_Bus_FormOfWays() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_SequenceId'.
   * \details Event sample type: ::uint64IDT::uint64IDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::uint64IDT::uint64IDT>* GetEventManagerEHR_Bus_SequenceId() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneWidthes'.
   * \details Event sample type: ::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector>* GetEventManagerEHR_Bus_LaneWidthes() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace ehrsi_out

#endif  // EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_IMPL_INTERFACE_H_

