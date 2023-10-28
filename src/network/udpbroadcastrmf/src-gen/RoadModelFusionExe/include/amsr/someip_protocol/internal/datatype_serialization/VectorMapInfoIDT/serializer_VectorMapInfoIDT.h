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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/VectorMapInfoIDT/serializer_VectorMapInfoIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'VectorMapInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/VectorMapInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_VECTORMAPINFOIDT_SERIALIZER_VECTORMAPINFOIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_VECTORMAPINFOIDT_SERIALIZER_VECTORMAPINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "VectorMapInfoIDT/impl_type_vectormapinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/AreaIDT/serializer_AreaIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace VectorMapInfoIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/VectorMapInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/VectorMapInfoIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::VectorMapInfoIDT::VectorMapInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'MapInfo' of type /CppImplementationDataTypes/Array_AreaIDT_Vector
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_AreaIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)
                        // Config of struct length field (/CppImplementationDataTypes/AreaIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)

                        >(writer, data.MapInfo);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/VectorMapInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/VectorMapInfoIDT.
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
constexpr std::size_t GetRequiredBufferSize(::VectorMapInfoIDT::VectorMapInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'MapInfo' of type /CppImplementationDataTypes/Array_AreaIDT_Vector
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_AreaIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)
                        // Config of struct length field (/CppImplementationDataTypes/AreaIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)

                        >(data.MapInfo);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/VectorMapInfoIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::VectorMapInfoIDT::VectorMapInfoIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'MapInfo' of type /CppImplementationDataTypes/Array_AreaIDT_Vector
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MapInfo),
                        TpPack,
                        // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_AreaIDT_Vector)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)
                        // Config of struct length field (/CppImplementationDataTypes/AreaIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/VectorMapInfoIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/VectorMapInfoIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::VectorMapInfoIDT::VectorMapInfoIDT const&) noexcept {
  return GetMaximumBufferSize<::VectorMapInfoIDT::VectorMapInfoIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/VectorMapInfoIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::VectorMapInfoIDT::VectorMapInfoIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'MapInfo' of type /CppImplementationDataTypes/Array_AreaIDT_Vector
  serialization::IsStaticSize<
                      TpPack,
                      // Config of vector length field and max. container size based on 'arraySize=null' model configuration. (/CppImplementationDataTypes/Array_AreaIDT_Vector)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfVectorLengthField, typename serialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)
                      // Config of struct length field (/CppImplementationDataTypes/AreaIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/AreaIDT)

                      >(serialization::SizeToken<::Array_AreaIDT_Vector::Array_AreaIDT_Vector>{}) 
  };
    return is_static_size;
}

}  // namespace VectorMapInfoIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_VECTORMAPINFOIDT_SERIALIZER_VECTORMAPINFOIDT_H_

