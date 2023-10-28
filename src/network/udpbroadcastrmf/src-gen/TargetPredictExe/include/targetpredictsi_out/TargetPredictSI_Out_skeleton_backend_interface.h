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
/**        \file  TargetPredictExe/include/targetpredictsi_out/TargetPredictSI_Out_skeleton_backend_interface.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define TARGETPREDICTEXE_INCLUDE_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "targetpredictsi_out/TargetPredictSI_Out_datatypes.h"

namespace targetpredictsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'TargetPredictSI_Out'.
 * \remark generated
 */
class TargetPredictSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  TargetPredictSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~TargetPredictSI_OutSkeletonBackendInterface() noexcept = default;

  TargetPredictSI_OutSkeletonBackendInterface(TargetPredictSI_OutSkeletonBackendInterface const &) = delete;

  TargetPredictSI_OutSkeletonBackendInterface(TargetPredictSI_OutSkeletonBackendInterface &&) = delete;

  TargetPredictSI_OutSkeletonBackendInterface &operator=(TargetPredictSI_OutSkeletonBackendInterface const &) & = delete;

  TargetPredictSI_OutSkeletonBackendInterface &operator=(TargetPredictSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace targetpredictsi_out

#endif  // TARGETPREDICTEXE_INCLUDE_TARGETPREDICTSI_OUT_TARGETPREDICTSI_OUT_SKELETON_BACKEND_INTERFACE_H_

