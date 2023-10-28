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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_serialization/ObjInfo2VccGroup_1IDT/serializer_ObjInfo2VccGroup_1IDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ObjInfo2VccGroup_1IDT'
 *
 *      \details  /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJINFO2VCCGROUP_1IDT_SERIALIZER_OBJINFO2VCCGROUP_1IDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJINFO2VCCGROUP_1IDT_SERIALIZER_OBJINFO2VCCGROUP_1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjInfo2VccGroup_1IDT/impl_type_objinfo2vccgroup_1idt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ObjInfo2VccGroup_1IDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Typ' of type /CppImplementationDataTypes/ObjClassn3VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjClassn3VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Typ);
    // Serialize struct member 'Width' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Width);
    // Serialize struct member 'Length' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Length);
    // Serialize struct member 'Hei' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Hei);
    // Serialize struct member 'IndcrTurn' of type /CppImplementationDataTypes/IndcrTurn1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IndcrTurn);
    // Serialize struct member 'IndcrBrkLi' of type /CppImplementationDataTypes/LiSts1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IndcrBrkLi);
    // Serialize struct member 'IndcrHzrdLi' of type /CppImplementationDataTypes/LiSts1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IndcrHzrdLi);
    // Serialize struct member 'MtnPat' of type /CppImplementationDataTypes/ObjMtnPat1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPat1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MtnPat);
    // Serialize struct member 'MtnPatHist' of type /CppImplementationDataTypes/ObjMtnPatHist1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPatHist1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MtnPatHist);
    // Serialize struct member 'DstLatFromMidOfLaneSelf' of type /CppImplementationDataTypes/float
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DstLatFromMidOfLaneSelf);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT.
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
constexpr std::size_t GetRequiredBufferSize(::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Typ' of type /CppImplementationDataTypes/ObjClassn3VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjClassn3VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Typ);
  // Accumulate the static size of struct member 'Width' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Width);
  // Accumulate the static size of struct member 'Length' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Length);
  // Accumulate the static size of struct member 'Hei' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Hei);
  // Accumulate the static size of struct member 'IndcrTurn' of type /CppImplementationDataTypes/IndcrTurn1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IndcrTurn);
  // Accumulate the static size of struct member 'IndcrBrkLi' of type /CppImplementationDataTypes/LiSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IndcrBrkLi);
  // Accumulate the static size of struct member 'IndcrHzrdLi' of type /CppImplementationDataTypes/LiSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IndcrHzrdLi);
  // Accumulate the static size of struct member 'MtnPat' of type /CppImplementationDataTypes/ObjMtnPat1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPat1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MtnPat);
  // Accumulate the static size of struct member 'MtnPatHist' of type /CppImplementationDataTypes/ObjMtnPatHist1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPatHist1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MtnPatHist);
  // Accumulate the static size of struct member 'DstLatFromMidOfLaneSelf' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DstLatFromMidOfLaneSelf);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'Typ' of type /CppImplementationDataTypes/ObjClassn3VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Typ),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjClassn3VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'Width' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Width),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'Length' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Length),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'Hei' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Hei),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'IndcrTurn' of type /CppImplementationDataTypes/IndcrTurn1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.IndcrTurn),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'IndcrBrkLi' of type /CppImplementationDataTypes/LiSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.IndcrBrkLi),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'IndcrHzrdLi' of type /CppImplementationDataTypes/LiSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.IndcrHzrdLi),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'MtnPat' of type /CppImplementationDataTypes/ObjMtnPat1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MtnPat),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPat1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'MtnPatHist' of type /CppImplementationDataTypes/ObjMtnPatHist1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.MtnPatHist),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPatHist1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'DstLatFromMidOfLaneSelf' of type /CppImplementationDataTypes/float
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.DstLatFromMidOfLaneSelf),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT const&) noexcept {
  return GetMaximumBufferSize<::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Typ' of type /CppImplementationDataTypes/ObjClassn3VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjClassn3VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjClassn3VccIDT::ObjClassn3VccIDT>{})  && 
  
  // Check static size status of struct member 'Width' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::singleIDT::singleIDT>{})  && 
  
  // Check static size status of struct member 'Length' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::singleIDT::singleIDT>{})  && 
  
  // Check static size status of struct member 'Hei' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::singleIDT::singleIDT>{})  && 
  
  // Check static size status of struct member 'IndcrTurn' of type /CppImplementationDataTypes/IndcrTurn1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::IndcrTurn1VccIDT::IndcrTurn1VccIDT>{})  && 
  
  // Check static size status of struct member 'IndcrBrkLi' of type /CppImplementationDataTypes/LiSts1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LiSts1VccIDT::LiSts1VccIDT>{})  && 
  
  // Check static size status of struct member 'IndcrHzrdLi' of type /CppImplementationDataTypes/LiSts1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LiSts1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LiSts1VccIDT::LiSts1VccIDT>{})  && 
  
  // Check static size status of struct member 'MtnPat' of type /CppImplementationDataTypes/ObjMtnPat1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPat1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjMtnPat1VccIDT::ObjMtnPat1VccIDT>{})  && 
  
  // Check static size status of struct member 'MtnPatHist' of type /CppImplementationDataTypes/ObjMtnPatHist1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjMtnPatHist1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjMtnPatHist1VccIDT::ObjMtnPatHist1VccIDT>{})  && 
  
  // Check static size status of struct member 'DstLatFromMidOfLaneSelf' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::singleIDT::singleIDT>{}) 
  };
    return is_static_size;
}

}  // namespace ObjInfo2VccGroup_1IDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJINFO2VCCGROUP_1IDT_SERIALIZER_OBJINFO2VCCGROUP_1IDT_H_

