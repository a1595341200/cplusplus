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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp
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
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/radaradaptorsi_out/events/deserializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarECUStsIDT/deserializer_FourDRadarECUStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjStIDT/deserializer_FourDRadarObjStIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjStsGrp01_42IDT/deserializer_FourDRadarObjStsGrp01_42IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FrontFourDRadarSts1VccIDT/deserializer_FrontFourDRadarSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FrontFourDRadarVDYIDT/deserializer_FrontFourDRadarVDYIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TFourDRadarDataValidIDT/deserializer_TFourDRadarDataValidIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace radaradaptorsi_out {
namespace events {

deserialization::Result DeserializerFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp::Deserialize(deserialization::Reader &reader, ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp
    using TpPackAlias = internal::TpPack<
        BigEndian,
        internal::SizeOfArrayLengthField<0>, 
        internal::SizeOfVectorLengthField<4>,
        internal::SizeOfMapLengthField<4>,
        internal::SizeOfStringLengthField<4>,
        internal::SizeOfStructLengthField<0>,
        internal::SizeOfUnionLengthField<4>,
        internal::SizeOfUnionTypeSelectorField<4>,
        internal::StringBomActive,
        internal::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace radaradaptorsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

