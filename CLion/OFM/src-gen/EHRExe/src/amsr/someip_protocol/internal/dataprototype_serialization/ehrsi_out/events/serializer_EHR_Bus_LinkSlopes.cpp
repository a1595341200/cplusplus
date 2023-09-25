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
/**        \file  EHRExe/src/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/EHRSI_Out/EHR_Bus_LinkSlopes
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LinkSlopes.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneSlope/serializer_LaneSlope.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LinkSlope/serializer_LinkSlope.h"
#include "amsr/someip_protocol/internal/datatype_serialization/SlopePoint/serializer_SlopePoint.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace ehrsi_out {
namespace events {

void SerializerEHR_Bus_LinkSlopes::Serialize(serialization::Writer
&writer, ::LinkSlopes::LinkSlopes const &data) {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/LinkSlopes)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfVectorLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>, serialization::ArraySizeInactive,
      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinkSlope)
      // Config of struct length field (/CppImplementationDataTypes/LinkSlope)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LinkSlope)

      >(writer, data);
}

}  // namespace events
}  // namespace ehrsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

