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
/**        \file  EndOfLineExe/include/amsr/someip_binding_xf/internal/endoflinesi_out/EndOfLineSI_Out_payload_serializer_factory.h
 *        \brief  SOME/IP payload serialization factory for service 'EndOfLineSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ENDOFLINESI_OUT_ENDOFLINESI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_
#define ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ENDOFLINESI_OUT_ENDOFLINESI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/endoflinesi_out/EndOfLineSI_Out_skeleton_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_endoflinesi_out {

namespace events {
namespace skeleton {
namespace EOL_Bus_CamCalibStatus {

// ---- Event 'EOL_Bus_CamCalibStatus' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'EOL_Bus_CamCalibStatus'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'EOL_Bus_CamCalibStatus'
   *
   * \param[out] Serializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace EOL_Bus_CamCalibStatus
}  // namespace skeleton
}  // namespace events


}  // namespace gen_endoflinesi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ENDOFLINESI_OUT_ENDOFLINESI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

