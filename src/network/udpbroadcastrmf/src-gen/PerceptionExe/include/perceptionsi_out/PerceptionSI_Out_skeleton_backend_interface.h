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
/**        \file  PerceptionExe/include/perceptionsi_out/PerceptionSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSI_Out'.
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "perceptionsi_out/PerceptionSI_Out_datatypes.h"

namespace perceptionsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'PerceptionSI_Out'.
 * \remark generated
 */
class PerceptionSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  PerceptionSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~PerceptionSI_OutSkeletonBackendInterface() noexcept = default;

  PerceptionSI_OutSkeletonBackendInterface(PerceptionSI_OutSkeletonBackendInterface const &) = delete;

  PerceptionSI_OutSkeletonBackendInterface(PerceptionSI_OutSkeletonBackendInterface &&) = delete;

  PerceptionSI_OutSkeletonBackendInterface &operator=(PerceptionSI_OutSkeletonBackendInterface const &) & = delete;

  PerceptionSI_OutSkeletonBackendInterface &operator=(PerceptionSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_out

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

