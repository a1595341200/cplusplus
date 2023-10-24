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
/**        \file  PerceptionRearExe/include/perceptionrearsi_out/PerceptionRearSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionRearSI_Out'.
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

#ifndef PERCEPTIONREAREXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define PERCEPTIONREAREXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "perceptionrearsi_out/PerceptionRearSI_Out_datatypes.h"

namespace perceptionrearsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'PerceptionRearSI_Out'.
 * \remark generated
 */
class PerceptionRearSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  PerceptionRearSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~PerceptionRearSI_OutSkeletonBackendInterface() noexcept = default;

  PerceptionRearSI_OutSkeletonBackendInterface(PerceptionRearSI_OutSkeletonBackendInterface const &) = delete;

  PerceptionRearSI_OutSkeletonBackendInterface(PerceptionRearSI_OutSkeletonBackendInterface &&) = delete;

  PerceptionRearSI_OutSkeletonBackendInterface &operator=(PerceptionRearSI_OutSkeletonBackendInterface const &) & = delete;

  PerceptionRearSI_OutSkeletonBackendInterface &operator=(PerceptionRearSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionrearsi_out

#endif  // PERCEPTIONREAREXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_BACKEND_INTERFACE_H_

