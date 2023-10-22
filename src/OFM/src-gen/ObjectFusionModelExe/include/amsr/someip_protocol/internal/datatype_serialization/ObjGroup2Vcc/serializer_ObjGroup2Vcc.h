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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_serialization/ObjGroup2Vcc/serializer_ObjGroup2Vcc.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ObjGroup2Vcc'
 *
 *      \details  /CppImplementationDataTypes/ObjGroup2Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJGROUP2VCC_SERIALIZER_OBJGROUP2VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJGROUP2VCC_SERIALIZER_OBJGROUP2VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjGroup2Vcc/impl_type_objgroup2vcc.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjEstimn2VccGroup/serializer_ObjEstimn2VccGroup.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjInfo2VccGroup/serializer_ObjInfo2VccGroup.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjPpty1Vcc/serializer_ObjPpty2Vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ObjGroup2Vcc {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ObjGroup2Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjGroup2Vcc to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ObjGroup2Vcc::ObjGroup2Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'ObjEstimn2VccGroup_ref' of type /CppImplementationDataTypes/ObjEstimn2VccGroup
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjEstimn2VccGroup)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.ObjEstimn2VccGroup_ref);
    // Serialize struct member 'ObjInfo2VccGroup_ref' of type /CppImplementationDataTypes/ObjInfo2VccGroup
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjInfo2VccGroup)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.ObjInfo2VccGroup_ref);
    // Serialize struct member 'ObjPpty2Vcc_ref' of type /CppImplementationDataTypes/ObjPpty2Vcc
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjPpty2Vcc)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.ObjPpty2Vcc_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ObjGroup2Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjGroup2Vcc.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::ObjGroup2Vcc::ObjGroup2Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'ObjEstimn2VccGroup_ref' of type /CppImplementationDataTypes/ObjEstimn2VccGroup
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjEstimn2VccGroup)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.ObjEstimn2VccGroup_ref);
  // Accumulate the static size of struct member 'ObjInfo2VccGroup_ref' of type /CppImplementationDataTypes/ObjInfo2VccGroup
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjInfo2VccGroup)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.ObjInfo2VccGroup_ref);
  // Accumulate the static size of struct member 'ObjPpty2Vcc_ref' of type /CppImplementationDataTypes/ObjPpty2Vcc
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ObjPpty2Vcc)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.ObjPpty2Vcc_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ObjGroup2Vcc is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ObjGroup2Vcc::ObjGroup2Vcc>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'ObjEstimn2VccGroup_ref' of type /CppImplementationDataTypes/ObjEstimn2VccGroup
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/ObjEstimn2VccGroup)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::ObjEstimn2VccGroup::ObjEstimn2VccGroup>{})  && 
  
  // Check static size status of struct member 'ObjInfo2VccGroup_ref' of type /CppImplementationDataTypes/ObjInfo2VccGroup
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/ObjInfo2VccGroup)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::ObjInfo2VccGroup::ObjInfo2VccGroup>{})  && 
  
  // Check static size status of struct member 'ObjPpty2Vcc_ref' of type /CppImplementationDataTypes/ObjPpty2Vcc
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/ObjPpty2Vcc)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::ObjPpty1Vcc::ObjPpty2Vcc>{}) 
  };
    return is_static_size;
}

}  // namespace ObjGroup2Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJGROUP2VCC_SERIALIZER_OBJGROUP2VCC_H_

