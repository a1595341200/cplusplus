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
/**        \file  PerceptionRearExe/include/amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_payload_deserializer_factory.h
 *        \brief  SOME/IP payload deserialization factory for service 'ToSOCA_InfomationSI'
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

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PAYLOAD_DESERIALIZER_FACTORY_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PAYLOAD_DESERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_interface.h"
#include "amsr/someip_binding_xf/internal/tosoca_infomationsi/ToSOCA_InfomationSI_proxy_someip_event_design.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_tosoca_infomationsi {

namespace events {
namespace proxy {
namespace OSM2_Bus_ToSOCA_FunctionInfo {

// ---- Event 'OSM2_Bus_ToSOCA_FunctionInfo' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'OSM2_Bus_ToSOCA_FunctionInfo'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'OSM2_Bus_ToSOCA_FunctionInfo'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace OSM2_Bus_ToSOCA_FunctionInfo
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace OSM2_Bus_ToSOCA_COMInfo {

// ---- Event 'OSM2_Bus_ToSOCA_COMInfo' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'OSM2_Bus_ToSOCA_COMInfo'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'OSM2_Bus_ToSOCA_COMInfo'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace OSM2_Bus_ToSOCA_COMInfo
}  // namespace proxy
}  // namespace events


}  // namespace gen_tosoca_infomationsi

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_INFOMATIONSI_TOSOCA_INFOMATIONSI_PAYLOAD_DESERIALIZER_FACTORY_H_

