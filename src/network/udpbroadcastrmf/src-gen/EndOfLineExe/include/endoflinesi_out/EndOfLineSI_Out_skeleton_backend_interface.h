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
/**        \file  EndOfLineExe/include/endoflinesi_out/EndOfLineSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'EndOfLineSI_Out'.
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

#ifndef ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "endoflinesi_out/EndOfLineSI_Out_datatypes.h"

namespace endoflinesi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'EndOfLineSI_Out'.
 * \remark generated
 */
class EndOfLineSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  EndOfLineSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~EndOfLineSI_OutSkeletonBackendInterface() noexcept = default;

  EndOfLineSI_OutSkeletonBackendInterface(EndOfLineSI_OutSkeletonBackendInterface const &) = delete;

  EndOfLineSI_OutSkeletonBackendInterface(EndOfLineSI_OutSkeletonBackendInterface &&) = delete;

  EndOfLineSI_OutSkeletonBackendInterface &operator=(EndOfLineSI_OutSkeletonBackendInterface const &) & = delete;

  EndOfLineSI_OutSkeletonBackendInterface &operator=(EndOfLineSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace endoflinesi_out

#endif  // ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_BACKEND_INTERFACE_H_

