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
/**        \file  EHRExe/include/amsr/someip_protocol/internal/dataprototype_serialization/ehrsi_out/events/serializer_EHR_Bus_LaneSpeedLimits.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/EHRSI_Out/EHR_Bus_LaneSpeedLimits
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

#ifndef EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_EHRSI_OUT_EVENTS_serializer_EHR_Bus_LaneSpeedLimits_h_
#define EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_EHRSI_OUT_EVENTS_serializer_EHR_Bus_LaneSpeedLimits_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LaneSpeedLimits/impl_type_lanespeedlimits.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneSpeedLimit/serializer_LaneSpeedLimit.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace ehrsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/EHRSI_Out/EHR_Bus_LaneSpeedLimits
 *        of service interface /JICA/Service/Interface/EHRSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/LaneSpeedLimits
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
class SerializerEHR_Bus_LaneSpeedLimits {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/EHRSI_Out/EHR_Bus_LaneSpeedLimits.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/LaneSpeedLimits.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  constexpr static std::size_t GetRequiredBufferSize(::LaneSpeedLimits::LaneSpeedLimits const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/LaneSpeedLimits)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfVectorLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>, serialization::ArraySizeInactive,
      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LaneSpeedLimit)
      // Config of struct length field (/CppImplementationDataTypes/LaneSpeedLimit)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LaneSpeedLimit)

      >(data);
  }

  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/EHRSI_Out/EHR_Bus_LaneSpeedLimits.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/LaneSpeedLimits
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  static void Serialize(serialization::Writer &writer, ::LaneSpeedLimits::LaneSpeedLimits const &data);

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
}  // namespace ehrsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_EHRSI_OUT_EVENTS_serializer_EHR_Bus_LaneSpeedLimits_h_
