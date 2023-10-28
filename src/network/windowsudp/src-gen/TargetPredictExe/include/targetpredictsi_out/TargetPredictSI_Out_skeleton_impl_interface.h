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
/**        \file  TargetPredictExe/include/targetpredictsi_out/TargetPredictSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'TargetPredictSI_Out'.
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

#ifndef TARGETPREDICTEXE_INCLUDE_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define TARGETPREDICTEXE_INCLUDE_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "targetpredictsi_out/targetpredictsi_out_common.h"

namespace targetpredictsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'TargetPredictSI_Out'
 */
class TargetPredictSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  TargetPredictSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~TargetPredictSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  TargetPredictSI_OutSkeletonImplInterface(TargetPredictSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  TargetPredictSI_OutSkeletonImplInterface &operator=(TargetPredictSI_OutSkeletonImplInterface &&) & noexcept = default;

  TargetPredictSI_OutSkeletonImplInterface(TargetPredictSI_OutSkeletonImplInterface const &) = delete;

  TargetPredictSI_OutSkeletonImplInterface &operator=(TargetPredictSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'TP_Bus_PredTargets1Vcc'.
   * \details Event sample type: ::Array_ObjPredictIDT_8::Array_ObjPredictIDT_8.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_ObjPredictIDT_8::Array_ObjPredictIDT_8>* GetEventManagerTP_Bus_PredTargets1Vcc() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'TP_Bus_PredTargets2Vcc'.
   * \details Event sample type: ::Array_ObjPredictIDT_8::Array_ObjPredictIDT_8.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_ObjPredictIDT_8::Array_ObjPredictIDT_8>* GetEventManagerTP_Bus_PredTargets2Vcc() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace targetpredictsi_out

#endif  // TARGETPREDICTEXE_INCLUDE_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_IMPL_INTERFACE_H_

