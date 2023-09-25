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
/**        \file  RadarAdaptorExe/src/amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/serialization/ser_wrapper.h"

#include "amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjSt/serializer_FourDRadarObjSt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjStsGrp21_30/serializer_FourDRadarObjStsGrp21_30.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TFourDRadarDataValid/serializer_TFourDRadarDataValid.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace radaradaptorsi_out {
namespace events {

void SerializerFourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03::Serialize(serialization::Writer
&writer, ::FourDRadarObjStsGrp21_30::FourDRadarObjStsGrp21_30 const &data) {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStsGrp21_30)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace radaradaptorsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

