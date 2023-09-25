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
/**        \file  RoadModelFusionExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkInfos.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/EHRSI_Out/EHR_Bus_LinkInfos
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
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LinkInfos.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GeometryPoint/deserializer_GeometryPoint.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneInfo/deserializer_LaneInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneWidth1/deserializer_LaneWidth1.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LinearObject/deserializer_LinearObject.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LinkInfo/deserializer_LinkInfo.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace ehrsi_out {
namespace events {

deserialization::Result DeserializerEHR_Bus_LinkInfos::Deserialize(deserialization::Reader &reader, ::LinkInfos::LinkInfos &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/EHRSI_Out/EHR_Bus_LinkInfos
    using TpPackAlias = deserialization::TpPack<
        BigEndian,
        deserialization::SizeOfArrayLengthField<0>, 
        deserialization::SizeOfVectorLengthField<4>,
        deserialization::SizeOfMapLengthField<4>,
        deserialization::SizeOfStringLengthField<4>,
        deserialization::SizeOfStructLengthField<0>,
        deserialization::SizeOfUnionLengthField<4>,
        deserialization::SizeOfUnionTypeSelectorField<4>,
        deserialization::StringBomActive,
        deserialization::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of vector length field and max. container size (/CppImplementationDataTypes/LinkInfos)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>, deserialization::ArraySizeInactive,
      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinkInfo)
      // Config of struct length field (/CppImplementationDataTypes/LinkInfo)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinkInfo)

      >(deserialization::SizeToken<::LinkInfos::LinkInfos>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of vector length field and max. container size (/CppImplementationDataTypes/LinkInfos)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>, deserialization::ArraySizeInactive,
      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinkInfo)
      // Config of struct length field (/CppImplementationDataTypes/LinkInfo)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinkInfo)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace ehrsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

