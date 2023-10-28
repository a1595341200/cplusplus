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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/datatype_serialization/TrafficInfoIDT/serializer_TrafficInfoIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'TrafficInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/TrafficInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TRAFFICINFOIDT_SERIALIZER_TRAFFICINFOIDT_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TRAFFICINFOIDT_SERIALIZER_TRAFFICINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TrafficInfoIDT/impl_type_trafficinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LsrObjIDT/serializer_LsrObjIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TrfcSignIDT/serializer_TrfcSignIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace TrafficInfoIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/TrafficInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TrafficInfoIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::TrafficInfoIDT::TrafficInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'LsrObjs' of type /CppImplementationDataTypes/Array_LsrObjIDT_8
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LsrObjIDT_8)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LsrObjIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)

                        >(writer, data.LsrObjs);
    // Serialize struct member 'TrfcSigns' of type /CppImplementationDataTypes/Array_TrfcSignIDT_8
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_TrfcSignIDT_8)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)
                        // Config of struct length field (/CppImplementationDataTypes/TrfcSignIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)

                        >(writer, data.TrfcSigns);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/TrafficInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TrafficInfoIDT.
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
constexpr std::size_t GetRequiredBufferSize(::TrafficInfoIDT::TrafficInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'LsrObjs' of type /CppImplementationDataTypes/Array_LsrObjIDT_8
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LsrObjIDT_8)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LsrObjIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)

                        >(data.LsrObjs);
  // Accumulate the static size of struct member 'TrfcSigns' of type /CppImplementationDataTypes/Array_TrfcSignIDT_8
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_TrfcSignIDT_8)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)
                        // Config of struct length field (/CppImplementationDataTypes/TrfcSignIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)

                        >(data.TrfcSigns);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/TrafficInfoIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::TrafficInfoIDT::TrafficInfoIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'LsrObjs' of type /CppImplementationDataTypes/Array_LsrObjIDT_8
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LsrObjs),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LsrObjIDT_8)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LsrObjIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)

                        >();
  // Accumulate the static size of struct member 'TrfcSigns' of type /CppImplementationDataTypes/Array_TrfcSignIDT_8
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcSigns),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_TrfcSignIDT_8)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)
                        // Config of struct length field (/CppImplementationDataTypes/TrfcSignIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/TrafficInfoIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TrafficInfoIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::TrafficInfoIDT::TrafficInfoIDT const&) noexcept {
  return GetMaximumBufferSize<::TrafficInfoIDT::TrafficInfoIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/TrafficInfoIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::TrafficInfoIDT::TrafficInfoIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'LsrObjs' of type /CppImplementationDataTypes/Array_LsrObjIDT_8
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_LsrObjIDT_8)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)
                      // Config of struct length field (/CppImplementationDataTypes/LsrObjIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)

                      >(serialization::SizeToken<::Array_LsrObjIDT_8::Array_LsrObjIDT_8>{})  && 
  
  // Check static size status of struct member 'TrfcSigns' of type /CppImplementationDataTypes/Array_TrfcSignIDT_8
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_TrfcSignIDT_8)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)
                      // Config of struct length field (/CppImplementationDataTypes/TrfcSignIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)

                      >(serialization::SizeToken<::Array_TrfcSignIDT_8::Array_TrfcSignIDT_8>{}) 
  };
    return is_static_size;
}

}  // namespace TrafficInfoIDT

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TRAFFICINFOIDT_SERIALIZER_TRAFFICINFOIDT_H_

