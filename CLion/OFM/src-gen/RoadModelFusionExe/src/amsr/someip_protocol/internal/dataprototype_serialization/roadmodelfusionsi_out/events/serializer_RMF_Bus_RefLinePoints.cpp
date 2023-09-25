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
/**        \file  RoadModelFusionExe/src/amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RefLinePoints.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RefLinePoints
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RefLinePoints.h"
#include "amsr/someip_protocol/internal/datatype_serialization/BusRefLinePoint/serializer_BusRefLinePoint.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace roadmodelfusionsi_out {
namespace events {

void SerializerRMF_Bus_RefLinePoints::Serialize(serialization::Writer
&writer, ::BusRefLinePoints::BusRefLinePoints const &data) {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of array length field (/CppImplementationDataTypes/BusRefLinePoints)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfArrayLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePoint)
      // Config of struct length field (/CppImplementationDataTypes/BusRefLinePoint)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePoint)

      >(writer, data);
}

}  // namespace events
}  // namespace roadmodelfusionsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

