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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_camstsout/events/deserializer_FLCam_Bus_CamSts.h
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_CamStsOut/FLCam_Bus_CamSts
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_PERCEPTIONSI_CAMSTSOUT_EVENTS_deserializer_FLCam_Bus_CamSts_h_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_PERCEPTIONSI_CAMSTSOUT_EVENTS_deserializer_FLCam_Bus_CamSts_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CamSts1Vcc/impl_type_camsts1vcc.h"
#include "someip-protocol/internal/deserialization/common.h"
#include "someip-protocol/internal/deserialization/reader.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_camstsout {
namespace events {

/*!
 * \brief Deserializer for service event /JICA/Service/Interface/PerceptionSI_CamStsOut/FLCam_Bus_CamSts
 *        of service interface /JICA/Service/Interface/PerceptionSI_CamStsOut.
 * \details Top-Level data type: /CppImplementationDataTypes/CamSts1Vcc
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       0
 *          - sizeOfVectorLengthField:      4
 *          - sizeOfMapLengthField:         4
 *          - sizeOfStringLengthField:      4
 *          - sizeOfStructLengthField:      0
 *          - sizeOfUnionLengthField:       4
 *          - sizeOfUnionTypeSelectorField: 4
 *          - isBomActive:                  true
 *          - isNullTerminationActive:      true
 *          - isDynamicLengthFieldSize:     false
 */
class DeserializerFLCam_Bus_CamSts {
 public:
  /*!
   * \brief Deserialize the data prototype service event /JICA/Service/Interface/PerceptionSI_CamStsOut/FLCam_Bus_CamSts.
   *
   * \param[in,out] reader Reference to the byte stream reader.
   * \param[out]    data Reference to data object of top-level data type
   *                /CppImplementationDataTypes/CamSts1Vcc
   *                in which the deserialized value will be written.
   *
   * \pre           -
   * \context       Reactor|App
   * \threadsafe    FALSE
   * \reentrant     TRUE for different reader objects.
   * \return        True if the deserialization is successful, false otherwise.
   * \synchronous   TRUE
   */
  static deserialization::Result Deserialize(deserialization::Reader &reader, ::CamSts1Vcc::CamSts1Vcc &data);
};

}  // namespace events
}  // namespace perceptionsi_camstsout
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_PERCEPTIONSI_CAMSTSOUT_EVENTS_deserializer_FLCam_Bus_CamSts_h_

