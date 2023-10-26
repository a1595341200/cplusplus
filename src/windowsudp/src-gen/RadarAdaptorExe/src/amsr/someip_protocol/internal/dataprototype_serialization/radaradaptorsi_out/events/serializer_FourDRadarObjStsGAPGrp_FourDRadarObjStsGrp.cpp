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
/**        \file  RadarAdaptorExe/src/amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/serialization/ser_wrapper.h"

#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUStsIDT/serializer_FourDRadarECUStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjStIDT/serializer_FourDRadarObjStIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjStsGrp01_42IDT/serializer_FourDRadarObjStsGrp01_42IDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarSts1VccIDT/serializer_FrontFourDRadarSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarVDYIDT/serializer_FrontFourDRadarVDYIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TFourDRadarDataValidIDT/serializer_TFourDRadarDataValidIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace radaradaptorsi_out {
namespace events {

void SerializerFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::Serialize(serialization::Writer
&writer, ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace radaradaptorsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

