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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsi_out/events/serializer_FrntCam_Bus_TrfcLi.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_TrfcLi
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONSI_OUT_EVENTS_serializer_FrntCam_Bus_TrfcLi_h_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONSI_OUT_EVENTS_serializer_FrntCam_Bus_TrfcLi_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TrfcLi1Vccs/impl_type_trfcli1vccs.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TrfcLi1Vcc/serializer_TrfcLi1Vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace perceptionsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_TrfcLi
 *        of service interface /JICA/Service/Interface/PerceptionSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/TrfcLi1Vccs
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       4
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
class SerializerFrntCam_Bus_TrfcLi {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_TrfcLi.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/TrfcLi1Vccs.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  constexpr static std::size_t GetRequiredBufferSize(::TrfcLi1Vccs::TrfcLi1Vccs const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of array length field (/CppImplementationDataTypes/TrfcLi1Vccs)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfArrayLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcLi1Vcc)
      // Config of struct length field (/CppImplementationDataTypes/TrfcLi1Vcc)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcLi1Vcc)

      >(data);
  }

  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_TrfcLi.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/TrfcLi1Vccs
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  static void Serialize(serialization::Writer &writer, ::TrfcLi1Vccs::TrfcLi1Vccs const &data);

 private:
  /*!
   * \brief Transformation properties of the data prototype.
   */
  using TpPackDataPrototype = serialization::TpPack<
      BigEndian,
      serialization::SizeOfArrayLengthField<4>,
      serialization::SizeOfVectorLengthField<4>,
      serialization::SizeOfMapLengthField<4>,
      serialization::SizeOfStringLengthField<4>,
      serialization::SizeOfStructLengthField<0>,
      serialization::SizeOfUnionLengthField<4>,
      serialization::SizeOfUnionTypeSelectorField<4>,
      serialization::StringBomActive,
      serialization::StringNullTerminationActive,
      serialization::DynamicLengthFieldSizeInactive>;

};

}  // namespace events
}  // namespace perceptionsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONSI_OUT_EVENTS_serializer_FrntCam_Bus_TrfcLi_h_
