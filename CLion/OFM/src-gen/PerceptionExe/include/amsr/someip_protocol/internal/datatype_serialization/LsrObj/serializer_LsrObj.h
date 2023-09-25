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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/datatype_serialization/LsrObj/serializer_LsrObj.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'LsrObj'
 *
 *      \details  /CppImplementationDataTypes/LsrObj
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LSROBJ_SERIALIZER_LSROBJ_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LSROBJ_SERIALIZER_LSROBJ_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LsrObj/impl_type_lsrobj.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace LsrObj {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/LsrObj.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LsrObj to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::LsrObj::LsrObj const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'TypeLsrObj_ref' of type /CppImplementationDataTypes/TypeLsrObj
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TypeLsrObj)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TypeLsrObj_ref);
    // Serialize struct member 'Dir_ref' of type /CppImplementationDataTypes/Dir
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Dir)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Dir_ref);
    // Serialize struct member 'LgtDist_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LgtDist_ref);
    // Serialize struct member 'Confidence_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Confidence_ref);
    // Serialize struct member 'ValidTrueFalse_ref' of type /CppImplementationDataTypes/ValidTrueFalse
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ValidTrueFalse)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ValidTrueFalse_ref);
    // Serialize struct member 'LitArea_ref' of type /CppImplementationDataTypes/LitArea
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LitArea)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LitArea_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/LsrObj.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LsrObj.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::LsrObj::LsrObj const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'TypeLsrObj_ref' of type /CppImplementationDataTypes/TypeLsrObj
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TypeLsrObj)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TypeLsrObj_ref);
  // Accumulate the static size of struct member 'Dir_ref' of type /CppImplementationDataTypes/Dir
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Dir)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Dir_ref);
  // Accumulate the static size of struct member 'LgtDist_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LgtDist_ref);
  // Accumulate the static size of struct member 'Confidence_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Confidence_ref);
  // Accumulate the static size of struct member 'ValidTrueFalse_ref' of type /CppImplementationDataTypes/ValidTrueFalse
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ValidTrueFalse)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ValidTrueFalse_ref);
  // Accumulate the static size of struct member 'LitArea_ref' of type /CppImplementationDataTypes/LitArea
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LitArea)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LitArea_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/LsrObj is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::LsrObj::LsrObj>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'TypeLsrObj_ref' of type /CppImplementationDataTypes/TypeLsrObj
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TypeLsrObj)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TypeLsrObj::TypeLsrObj>{})  && 
  
  // Check static size status of struct member 'Dir_ref' of type /CppImplementationDataTypes/Dir
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Dir)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Dir::Dir>{})  && 
  
  // Check static size status of struct member 'LgtDist_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LgtDist::LgtDist>{})  && 
  
  // Check static size status of struct member 'Confidence_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Confidence::Confidence>{})  && 
  
  // Check static size status of struct member 'ValidTrueFalse_ref' of type /CppImplementationDataTypes/ValidTrueFalse
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ValidTrueFalse)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ValidTrueFalse::ValidTrueFalse>{})  && 
  
  // Check static size status of struct member 'LitArea_ref' of type /CppImplementationDataTypes/LitArea
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LitArea)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LitArea::LitArea>{}) 
  };
    return is_static_size;
}

}  // namespace LsrObj

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LSROBJ_SERIALIZER_LSROBJ_H_

