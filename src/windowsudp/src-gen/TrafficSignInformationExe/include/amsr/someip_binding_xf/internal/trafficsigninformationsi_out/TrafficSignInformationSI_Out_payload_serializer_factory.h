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
/**        \file  TrafficSignInformationExe/include/amsr/someip_binding_xf/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_payload_serializer_factory.h
 *        \brief  SOME/IP payload serialization factory for service 'TrafficSignInformationSI_Out'
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_interface.h"
#include "amsr/someip_binding_xf/internal/trafficsigninformationsi_out/TrafficSignInformationSI_Out_skeleton_someip_event_design.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_trafficsigninformationsi_out {

namespace events {
namespace skeleton {
namespace TSI_Bus_HMIData {

// ---- Event 'TSI_Bus_HMIData' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'TSI_Bus_HMIData'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'TSI_Bus_HMIData'
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

}  // namespace TSI_Bus_HMIData
}  // namespace skeleton
}  // namespace events


}  // namespace gen_trafficsigninformationsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TRAFFICSIGNINFORMATIONSI_OUT_TRAFFICSIGNINFORMATIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

