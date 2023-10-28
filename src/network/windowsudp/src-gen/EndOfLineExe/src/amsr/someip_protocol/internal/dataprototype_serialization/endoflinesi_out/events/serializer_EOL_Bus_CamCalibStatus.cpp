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
/**        \file  EndOfLineExe/src/amsr/someip_protocol/internal/dataprototype_serialization/endoflinesi_out/events/serializer_EOL_Bus_CamCalibStatus.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/EndOfLineSI_Out/EOL_Bus_CamCalibStatus
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/endoflinesi_out/events/serializer_EOL_Bus_CamCalibStatus.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_AfterSalesIDT/serializer_Mode_AfterSalesIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_EOLIDT/serializer_Mode_EOLIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_OnLineIDT/serializer_Mode_OnLineIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TCameraCalibInfoIDT/serializer_TCameraCalibInfoIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace endoflinesi_out {
namespace events {

void SerializerEOL_Bus_CamCalibStatus::Serialize(serialization::Writer
&writer, ::TCameraCalibInfoIDT::TCameraCalibInfoIDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/TCameraCalibInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace endoflinesi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

