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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/RMFInfoIDT/serializer_RMFInfoIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'RMFInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/RMFInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_RMFINFOIDT_SERIALIZER_RMFINFOIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_RMFINFOIDT_SERIALIZER_RMFINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "RMFInfoIDT/impl_type_rmfinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/BusRefLinePointIDT/serializer_BusRefLinePointIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ExtractedLaneIDT/serializer_ExtractedLaneIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ExtractedMapInfIDT/serializer_ExtractedMapInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RefLineSpeedInfIDT/serializer_RefLineSpeedInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RefPathGlobalIDT/serializer_RefPathGlobalIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace RMFInfoIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/RMFInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/RMFInfoIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::RMFInfoIDT::RMFInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'ExtractedMapInf' of type /CppImplementationDataTypes/ExtractedMapInfIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ExtractedMapInfIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.ExtractedMapInf);
    // Serialize struct member 'RefPathGlobals' of type /CppImplementationDataTypes/Array_RefPathGlobalIDT_6
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_RefPathGlobalIDT_6)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)
                        // Config of struct length field (/CppImplementationDataTypes/RefPathGlobalIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)

                        >(writer, data.RefPathGlobals);
    // Serialize struct member 'ExtractedLanes' of type /CppImplementationDataTypes/Array_ExtractedLaneIDT_3
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_ExtractedLaneIDT_3)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)
                        // Config of struct length field (/CppImplementationDataTypes/ExtractedLaneIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)

                        >(writer, data.ExtractedLanes);
    // Serialize struct member 'RefLineSpeedInf' of type /CppImplementationDataTypes/RefLineSpeedInfIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RefLineSpeedInfIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.RefLineSpeedInf);
    // Serialize struct member 'BusRefLinePoints' of type /CppImplementationDataTypes/Array_BusRefLinePointIDT_71
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_BusRefLinePointIDT_71)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)
                        // Config of struct length field (/CppImplementationDataTypes/BusRefLinePointIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)

                        >(writer, data.BusRefLinePoints);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/RMFInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/RMFInfoIDT.
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
constexpr std::size_t GetRequiredBufferSize(::RMFInfoIDT::RMFInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'ExtractedMapInf' of type /CppImplementationDataTypes/ExtractedMapInfIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ExtractedMapInfIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.ExtractedMapInf);
  // Accumulate the static size of struct member 'RefPathGlobals' of type /CppImplementationDataTypes/Array_RefPathGlobalIDT_6
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_RefPathGlobalIDT_6)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)
                        // Config of struct length field (/CppImplementationDataTypes/RefPathGlobalIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)

                        >(data.RefPathGlobals);
  // Accumulate the static size of struct member 'ExtractedLanes' of type /CppImplementationDataTypes/Array_ExtractedLaneIDT_3
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_ExtractedLaneIDT_3)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)
                        // Config of struct length field (/CppImplementationDataTypes/ExtractedLaneIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)

                        >(data.ExtractedLanes);
  // Accumulate the static size of struct member 'RefLineSpeedInf' of type /CppImplementationDataTypes/RefLineSpeedInfIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RefLineSpeedInfIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.RefLineSpeedInf);
  // Accumulate the static size of struct member 'BusRefLinePoints' of type /CppImplementationDataTypes/Array_BusRefLinePointIDT_71
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_BusRefLinePointIDT_71)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)
                        // Config of struct length field (/CppImplementationDataTypes/BusRefLinePointIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)

                        >(data.BusRefLinePoints);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/RMFInfoIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::RMFInfoIDT::RMFInfoIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'ExtractedMapInf' of type /CppImplementationDataTypes/ExtractedMapInfIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ExtractedMapInf),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ExtractedMapInfIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'RefPathGlobals' of type /CppImplementationDataTypes/Array_RefPathGlobalIDT_6
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.RefPathGlobals),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_RefPathGlobalIDT_6)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)
                        // Config of struct length field (/CppImplementationDataTypes/RefPathGlobalIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)

                        >();
  // Accumulate the static size of struct member 'ExtractedLanes' of type /CppImplementationDataTypes/Array_ExtractedLaneIDT_3
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ExtractedLanes),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_ExtractedLaneIDT_3)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)
                        // Config of struct length field (/CppImplementationDataTypes/ExtractedLaneIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)

                        >();
  // Accumulate the static size of struct member 'RefLineSpeedInf' of type /CppImplementationDataTypes/RefLineSpeedInfIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.RefLineSpeedInf),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RefLineSpeedInfIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'BusRefLinePoints' of type /CppImplementationDataTypes/Array_BusRefLinePointIDT_71
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.BusRefLinePoints),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_BusRefLinePointIDT_71)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)
                        // Config of struct length field (/CppImplementationDataTypes/BusRefLinePointIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/RMFInfoIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/RMFInfoIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::RMFInfoIDT::RMFInfoIDT const&) noexcept {
  return GetMaximumBufferSize<::RMFInfoIDT::RMFInfoIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/RMFInfoIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::RMFInfoIDT::RMFInfoIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'ExtractedMapInf' of type /CppImplementationDataTypes/ExtractedMapInfIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/ExtractedMapInfIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::ExtractedMapInfIDT::ExtractedMapInfIDT>{})  && 
  
  // Check static size status of struct member 'RefPathGlobals' of type /CppImplementationDataTypes/Array_RefPathGlobalIDT_6
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_RefPathGlobalIDT_6)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)
                      // Config of struct length field (/CppImplementationDataTypes/RefPathGlobalIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)

                      >(serialization::SizeToken<::Array_RefPathGlobalIDT_6::Array_RefPathGlobalIDT_6>{})  && 
  
  // Check static size status of struct member 'ExtractedLanes' of type /CppImplementationDataTypes/Array_ExtractedLaneIDT_3
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_ExtractedLaneIDT_3)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)
                      // Config of struct length field (/CppImplementationDataTypes/ExtractedLaneIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)

                      >(serialization::SizeToken<::Array_ExtractedLaneIDT_3::Array_ExtractedLaneIDT_3>{})  && 
  
  // Check static size status of struct member 'RefLineSpeedInf' of type /CppImplementationDataTypes/RefLineSpeedInfIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/RefLineSpeedInfIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::RefLineSpeedInfIDT::RefLineSpeedInfIDT>{})  && 
  
  // Check static size status of struct member 'BusRefLinePoints' of type /CppImplementationDataTypes/Array_BusRefLinePointIDT_71
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_BusRefLinePointIDT_71)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)
                      // Config of struct length field (/CppImplementationDataTypes/BusRefLinePointIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)

                      >(serialization::SizeToken<::Array_BusRefLinePointIDT_71::Array_BusRefLinePointIDT_71>{}) 
  };
    return is_static_size;
}

}  // namespace RMFInfoIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_RMFINFOIDT_SERIALIZER_RMFINFOIDT_H_

