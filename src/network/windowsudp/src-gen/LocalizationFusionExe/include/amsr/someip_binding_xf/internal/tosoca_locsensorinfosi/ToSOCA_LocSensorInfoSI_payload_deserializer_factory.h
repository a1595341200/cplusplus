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
/**        \file  LocalizationFusionExe/include/amsr/someip_binding_xf/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_payload_deserializer_factory.h
 *        \brief  SOME/IP payload deserialization factory for service 'ToSOCA_LocSensorInfoSI'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PAYLOAD_DESERIALIZER_FACTORY_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PAYLOAD_DESERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_interface.h"
#include "amsr/someip_binding_xf/internal/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_proxy_someip_event_design.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_tosoca_locsensorinfosi {

namespace events {
namespace proxy {
namespace OSM2_Bus_LocSensorInfo {

// ---- Event 'OSM2_Bus_LocSensorInfo' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'OSM2_Bus_LocSensorInfo'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'OSM2_Bus_LocSensorInfo'
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

}  // namespace OSM2_Bus_LocSensorInfo
}  // namespace proxy
}  // namespace events


}  // namespace gen_tosoca_locsensorinfosi

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_PAYLOAD_DESERIALIZER_FACTORY_H_

