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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_visnobjout/events/deserializer_FRCam_Bus_VisnObj.h
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_VisnObjOut/FRCam_Bus_VisnObj
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_PERCEPTIONSI_VISNOBJOUT_EVENTS_deserializer_FRCam_Bus_VisnObj_h_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_PERCEPTIONSI_VISNOBJOUT_EVENTS_deserializer_FRCam_Bus_VisnObj_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "VisObjs/impl_type_visobjs.h"
#include "someip-protocol/internal/deserialization/common.h"
#include "someip-protocol/internal/deserialization/reader.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_visnobjout {
namespace events {

/*!
 * \brief Deserializer for service event /JICA/Service/Interface/PerceptionSI_VisnObjOut/FRCam_Bus_VisnObj
 *        of service interface /JICA/Service/Interface/PerceptionSI_VisnObjOut.
 * \details Top-Level data type: /CppImplementationDataTypes/VisObjs
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
class DeserializerFRCam_Bus_VisnObj {
 public:
  /*!
   * \brief Deserialize the data prototype service event /JICA/Service/Interface/PerceptionSI_VisnObjOut/FRCam_Bus_VisnObj.
   *
   * \param[in,out] reader Reference to the byte stream reader.
   * \param[out]    data Reference to data object of top-level data type
   *                /CppImplementationDataTypes/VisObjs
   *                in which the deserialized value will be written.
   *
   * \pre           -
   * \context       Reactor|App
   * \threadsafe    FALSE
   * \reentrant     TRUE for different reader objects.
   * \return        True if the deserialization is successful, false otherwise.
   * \synchronous   TRUE
   */
  static deserialization::Result Deserialize(deserialization::Reader &reader, ::VisObjs::VisObjs &data);
};

}  // namespace events
}  // namespace perceptionsi_visnobjout
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_PERCEPTIONSI_VISNOBJOUT_EVENTS_deserializer_FRCam_Bus_VisnObj_h_

