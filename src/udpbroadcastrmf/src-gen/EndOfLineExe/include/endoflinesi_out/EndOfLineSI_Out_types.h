
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
/**        \file  EndOfLineExe/include/endoflinesi_out/EndOfLineSI_Out_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'EndOfLineSI_Out'
 *
 *      \details  Definition of common input-/output structs used for simplified argument / marshalling handling. For all elements like methods, events fields structs with the related in-/output arguments are generated.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_TYPES_H_
#define ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "endoflinesi_out/EndOfLineSI_Out_datatypes.h"
#include "endoflinesi_out/endoflinesi_out_common.h"

namespace endoflinesi_out {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'EndOfLineSI_Out'.
 * \trace SPEC-4980259
 */
class EndOfLineSI_OutHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace endoflinesi_out

#endif  // ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_TYPES_H_

