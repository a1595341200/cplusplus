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
/**        \file  ObjectFusionModelExe/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'ObjectFusionModelSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"

namespace objectfusionmodelsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'ObjectFusionModelSI_Out'
 */
class ObjectFusionModelSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~ObjectFusionModelSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonImplInterface(ObjectFusionModelSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  ObjectFusionModelSI_OutSkeletonImplInterface &operator=(ObjectFusionModelSI_OutSkeletonImplInterface &&) & noexcept = default;

  ObjectFusionModelSI_OutSkeletonImplInterface(ObjectFusionModelSI_OutSkeletonImplInterface const &) = delete;

  ObjectFusionModelSI_OutSkeletonImplInterface &operator=(ObjectFusionModelSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets01'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>* GetEventManagerOFM_Bus_FusedTargets01() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets02'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>* GetEventManagerOFM_Bus_FusedTargets02() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets03'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>* GetEventManagerOFM_Bus_FusedTargets03() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets04'.
   * \details Event sample type: ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8>* GetEventManagerOFM_Bus_FusedTargets04() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_St_SOCFusedSts'.
   * \details Event sample type: ::uint16IDT::uint16IDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::uint16IDT::uint16IDT>* GetEventManagerOFM_St_SOCFusedSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FourDRadarStatus'.
   * \details Event sample type: ::FourDRadarStatusIDT::FourDRadarStatusIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarStatusIDT::FourDRadarStatusIDT>* GetEventManagerOFM_Bus_FourDRadarStatus() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_LaneInfo'.
   * \details Event sample type: ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>* GetEventManagerOFM_Bus_LaneInfo() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace objectfusionmodelsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IMPL_INTERFACE_H_

