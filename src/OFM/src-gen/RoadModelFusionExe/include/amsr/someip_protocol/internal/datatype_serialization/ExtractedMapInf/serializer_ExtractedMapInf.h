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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/ExtractedMapInf/serializer_ExtractedMapInf.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ExtractedMapInf'
 *
 *      \details  /CppImplementationDataTypes/ExtractedMapInf
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDMAPINF_SERIALIZER_EXTRACTEDMAPINF_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDMAPINF_SERIALIZER_EXTRACTEDMAPINF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ExtractedMapInf/impl_type_extractedmapinf.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Left_line_delimiter/serializer_Left_line_delimiter.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Ramp/serializer_Ramp.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Right_line_delimiter/serializer_Right_line_delimiter.h"
#include "amsr/someip_protocol/internal/datatype_serialization/SpecialSituation/serializer_SpecialSituation.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ExtractedMapInf {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ExtractedMapInf.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ExtractedMapInf to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ExtractedMapInf::ExtractedMapInf const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Is_active_ref' of type /CppImplementationDataTypes/Is_active
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Is_active)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Is_active_ref);
    // Serialize struct member 'Sequence_id_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Sequence_id_ref);
    // Serialize struct member 'TimestampRMF_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TimestampRMF_ref);
    // Serialize struct member 'Left_line_delimiter_ref' of type /CppImplementationDataTypes/Left_line_delimiter
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Left_line_delimiter)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Left_line_delimiter_ref);
    // Serialize struct member 'Right_line_delimiter_ref' of type /CppImplementationDataTypes/Right_line_delimiter
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Right_line_delimiter)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Right_line_delimiter_ref);
    // Serialize struct member 'SpecialSituation_ref' of type /CppImplementationDataTypes/SpecialSituation
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/SpecialSituation)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.SpecialSituation_ref);
    // Serialize struct member 'Ramp_ref' of type /CppImplementationDataTypes/Ramp
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Ramp)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Ramp_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ExtractedMapInf.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ExtractedMapInf.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::ExtractedMapInf::ExtractedMapInf const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Is_active_ref' of type /CppImplementationDataTypes/Is_active
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Is_active)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Is_active_ref);
  // Accumulate the static size of struct member 'Sequence_id_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Sequence_id_ref);
  // Accumulate the static size of struct member 'TimestampRMF_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TimestampRMF_ref);
  // Accumulate the static size of struct member 'Left_line_delimiter_ref' of type /CppImplementationDataTypes/Left_line_delimiter
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Left_line_delimiter)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Left_line_delimiter_ref);
  // Accumulate the static size of struct member 'Right_line_delimiter_ref' of type /CppImplementationDataTypes/Right_line_delimiter
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Right_line_delimiter)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Right_line_delimiter_ref);
  // Accumulate the static size of struct member 'SpecialSituation_ref' of type /CppImplementationDataTypes/SpecialSituation
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/SpecialSituation)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.SpecialSituation_ref);
  // Accumulate the static size of struct member 'Ramp_ref' of type /CppImplementationDataTypes/Ramp
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Ramp)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Ramp_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ExtractedMapInf is of static size.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return True if datatype has static size, false otherwise.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ExtractedMapInf::ExtractedMapInf>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Is_active_ref' of type /CppImplementationDataTypes/Is_active
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Is_active)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Is_active::Is_active>{})  && 
  
  // Check static size status of struct member 'Sequence_id_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Sequence_id::Sequence_id>{})  && 
  
  // Check static size status of struct member 'TimestampRMF_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TimestampRMF::TimestampRMF>{})  && 
  
  // Check static size status of struct member 'Left_line_delimiter_ref' of type /CppImplementationDataTypes/Left_line_delimiter
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Left_line_delimiter)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Left_line_delimiter::Left_line_delimiter>{})  && 
  
  // Check static size status of struct member 'Right_line_delimiter_ref' of type /CppImplementationDataTypes/Right_line_delimiter
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Right_line_delimiter)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Right_line_delimiter::Right_line_delimiter>{})  && 
  
  // Check static size status of struct member 'SpecialSituation_ref' of type /CppImplementationDataTypes/SpecialSituation
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/SpecialSituation)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::SpecialSituation::SpecialSituation>{})  && 
  
  // Check static size status of struct member 'Ramp_ref' of type /CppImplementationDataTypes/Ramp
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Ramp)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Ramp::Ramp>{}) 
  };
    return is_static_size;
}

}  // namespace ExtractedMapInf

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDMAPINF_SERIALIZER_EXTRACTEDMAPINF_H_

