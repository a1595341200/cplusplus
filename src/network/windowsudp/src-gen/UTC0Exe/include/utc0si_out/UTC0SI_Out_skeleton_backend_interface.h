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
/**        \file  UTC0Exe/include/utc0si_out/UTC0SI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'UTC0SI_Out'.
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

#ifndef UTC0EXE_INCLUDE_UTC0SI_OUT_UTC0SI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define UTC0EXE_INCLUDE_UTC0SI_OUT_UTC0SI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "utc0si_out/UTC0SI_Out_datatypes.h"

namespace utc0si_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'UTC0SI_Out'.
 * \remark generated
 */
class UTC0SI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  UTC0SI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~UTC0SI_OutSkeletonBackendInterface() noexcept = default;

  UTC0SI_OutSkeletonBackendInterface(UTC0SI_OutSkeletonBackendInterface const &) = delete;

  UTC0SI_OutSkeletonBackendInterface(UTC0SI_OutSkeletonBackendInterface &&) = delete;

  UTC0SI_OutSkeletonBackendInterface &operator=(UTC0SI_OutSkeletonBackendInterface const &) & = delete;

  UTC0SI_OutSkeletonBackendInterface &operator=(UTC0SI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace utc0si_out

#endif  // UTC0EXE_INCLUDE_UTC0SI_OUT_UTC0SI_OUT_SKELETON_BACKEND_INTERFACE_H_

