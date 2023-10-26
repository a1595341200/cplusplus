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
/**        \file  EDRExe/include/edrsi_out/EDRSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'EDRSI_Out'.
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

#ifndef EDREXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define EDREXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "edrsi_out/EDRSI_Out_datatypes.h"

namespace edrsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'EDRSI_Out'.
 * \remark generated
 */
class EDRSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  EDRSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~EDRSI_OutSkeletonBackendInterface() noexcept = default;

  EDRSI_OutSkeletonBackendInterface(EDRSI_OutSkeletonBackendInterface const &) = delete;

  EDRSI_OutSkeletonBackendInterface(EDRSI_OutSkeletonBackendInterface &&) = delete;

  EDRSI_OutSkeletonBackendInterface &operator=(EDRSI_OutSkeletonBackendInterface const &) & = delete;

  EDRSI_OutSkeletonBackendInterface &operator=(EDRSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace edrsi_out

#endif  // EDREXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_SKELETON_BACKEND_INTERFACE_H_

