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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/datatype_serialization/FrntCamInfoIDT/serializer_FrntCamInfoIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FrntCamInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/FrntCamInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FRNTCAMINFOIDT_SERIALIZER_FRNTCAMINFOIDT_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FRNTCAMINFOIDT_SERIALIZER_FRNTCAMINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FrntCamInfoIDT/impl_type_frntcaminfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrntCamSts1VccIDT/serializer_FrntCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/StaticObjIDT/serializer_StaticObjIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FrntCamInfoIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FrntCamInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FrntCamInfoIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FrntCamInfoIDT::FrntCamInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'StaticObjs' of type /CppImplementationDataTypes/Array_StaticObjIDT_20
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_StaticObjIDT_20)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)
                        // Config of struct length field (/CppImplementationDataTypes/StaticObjIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)

                        >(writer, data.StaticObjs);
    // Serialize struct member 'FrntCamSts1Vcc' of type /CppImplementationDataTypes/FrntCamSts1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrntCamSts1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.FrntCamSts1Vcc);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FrntCamInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FrntCamInfoIDT.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::FrntCamInfoIDT::FrntCamInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'StaticObjs' of type /CppImplementationDataTypes/Array_StaticObjIDT_20
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_StaticObjIDT_20)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)
                        // Config of struct length field (/CppImplementationDataTypes/StaticObjIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)

                        >(data.StaticObjs);
  // Accumulate the static size of struct member 'FrntCamSts1Vcc' of type /CppImplementationDataTypes/FrntCamSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrntCamSts1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.FrntCamSts1Vcc);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FrntCamInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false

 * \tparam The desired type.
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return Returns the maximum buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::FrntCamInfoIDT::FrntCamInfoIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'StaticObjs' of type /CppImplementationDataTypes/Array_StaticObjIDT_20
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.StaticObjs),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_StaticObjIDT_20)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)
                        // Config of struct length field (/CppImplementationDataTypes/StaticObjIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)

                        >();
  // Accumulate the static size of struct member 'FrntCamSts1Vcc' of type /CppImplementationDataTypes/FrntCamSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.FrntCamSts1Vcc),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrntCamSts1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FrntCamInfoIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FrntCamInfoIDT.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::FrntCamInfoIDT::FrntCamInfoIDT const&) noexcept {
  return GetMaximumBufferSize<::FrntCamInfoIDT::FrntCamInfoIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FrntCamInfoIDT is of static size.
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
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FrntCamInfoIDT::FrntCamInfoIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'StaticObjs' of type /CppImplementationDataTypes/Array_StaticObjIDT_20
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_StaticObjIDT_20)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)
                      // Config of struct length field (/CppImplementationDataTypes/StaticObjIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)

                      >(serialization::SizeToken<::Array_StaticObjIDT_20::Array_StaticObjIDT_20>{})  && 
  
  // Check static size status of struct member 'FrntCamSts1Vcc' of type /CppImplementationDataTypes/FrntCamSts1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/FrntCamSts1VccIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::FrntCamSts1VccIDT::FrntCamSts1VccIDT>{}) 
  };
    return is_static_size;
}

}  // namespace FrntCamInfoIDT

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FRNTCAMINFOIDT_SERIALIZER_FRNTCAMINFOIDT_H_

