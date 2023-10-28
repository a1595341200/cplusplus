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
/**        \file  PerceptionExe/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LineSignGroup.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_LineSignGroup
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_LineSignGroup.h"
#include "amsr/someip_protocol/internal/datatype_serialization/CrosswalkIDT/serializer_CrosswalkIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LineSignGroupIDT/serializer_LineSignGroupIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadSignIDT/serializer_RoadSignIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/StopLineIDT/serializer_StopLineIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace perceptionsi_out {
namespace events {

void SerializerFrntCam_Bus_LineSignGroup::Serialize(serialization::Writer
&writer, ::LineSignGroupIDT::LineSignGroupIDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/LineSignGroupIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace perceptionsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

