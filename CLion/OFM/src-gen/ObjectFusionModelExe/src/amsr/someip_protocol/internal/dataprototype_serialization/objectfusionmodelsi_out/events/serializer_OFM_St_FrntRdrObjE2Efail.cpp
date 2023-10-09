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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_FrntRdrObjE2Efail.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_St_FrntRdrObjE2Efail
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_St_FrntRdrObjE2Efail.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace objectfusionmodelsi_out {
namespace events {

void SerializerOFM_St_FrntRdrObjE2Efail::Serialize(serialization::Writer
&writer, ::FrntRdrObjE2Efail::FrntRdrObjE2Efail const &data) {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Byte-order of primitive datatype (/CppImplementationDataTypes/FrntRdrObjE2Efail)
      typename serialization::Tp<TpPackDataPrototype>::ByteOrder

      >(writer, data);
}

}  // namespace events
}  // namespace objectfusionmodelsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr
