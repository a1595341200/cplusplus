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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_serialization/ObjInfo2VccGroup/serializer_ObjInfo2VccGroup.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ObjInfo2VccGroup'
 *
 *      \details  /CppImplementationDataTypes/ObjInfo2VccGroup
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJINFO2VCCGROUP_SERIALIZER_OBJINFO2VCCGROUP_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJINFO2VCCGROUP_SERIALIZER_OBJINFO2VCCGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjInfo2VccGroup/impl_type_objinfo2vccgroup.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ObjInfo2VccGroup {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ObjInfo2VccGroup.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjInfo2VccGroup to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ObjInfo2VccGroup::ObjInfo2VccGroup const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'FuseObjTyp_ref' of type /CppImplementationDataTypes/FuseObjTyp
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FuseObjTyp)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FuseObjTyp_ref);
    // Serialize struct member 'FuseObjWidth_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FuseObjWidth_ref);
    // Serialize struct member 'FuseObjLength_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FuseObjLength_ref);
    // Serialize struct member 'FuseObjHei_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FuseObjHei_ref);
    // Serialize struct member 'IndcrTurn_ref' of type /CppImplementationDataTypes/IndcrTurn
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IndcrTurn_ref);
    // Serialize struct member 'IndcrBrkLi_ref' of type /CppImplementationDataTypes/IndcrBrkLi
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrBrkLi)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IndcrBrkLi_ref);
    // Serialize struct member 'IndcrHzrdLi_ref' of type /CppImplementationDataTypes/IndcrHzrdLi
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrHzrdLi)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.IndcrHzrdLi_ref);
    // Serialize struct member 'MtnPat_ref' of type /CppImplementationDataTypes/MtnPat
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPat)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MtnPat_ref);
    // Serialize struct member 'MtnPatHist_ref' of type /CppImplementationDataTypes/MtnPatHist
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPatHist)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MtnPatHist_ref);
    // Serialize struct member 'DstLatFromMidOfLaneSelf_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DstLatFromMidOfLaneSelf_ref);
    // Serialize struct member 'ObjInfoChks_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjInfoChks_ref);
    // Serialize struct member 'ObjInfoCntr_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjInfoCntr_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ObjInfo2VccGroup.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjInfo2VccGroup.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::ObjInfo2VccGroup::ObjInfo2VccGroup const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'FuseObjTyp_ref' of type /CppImplementationDataTypes/FuseObjTyp
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FuseObjTyp)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FuseObjTyp_ref);
  // Accumulate the static size of struct member 'FuseObjWidth_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FuseObjWidth_ref);
  // Accumulate the static size of struct member 'FuseObjLength_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FuseObjLength_ref);
  // Accumulate the static size of struct member 'FuseObjHei_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FuseObjHei_ref);
  // Accumulate the static size of struct member 'IndcrTurn_ref' of type /CppImplementationDataTypes/IndcrTurn
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IndcrTurn_ref);
  // Accumulate the static size of struct member 'IndcrBrkLi_ref' of type /CppImplementationDataTypes/IndcrBrkLi
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrBrkLi)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IndcrBrkLi_ref);
  // Accumulate the static size of struct member 'IndcrHzrdLi_ref' of type /CppImplementationDataTypes/IndcrHzrdLi
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrHzrdLi)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.IndcrHzrdLi_ref);
  // Accumulate the static size of struct member 'MtnPat_ref' of type /CppImplementationDataTypes/MtnPat
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPat)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MtnPat_ref);
  // Accumulate the static size of struct member 'MtnPatHist_ref' of type /CppImplementationDataTypes/MtnPatHist
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPatHist)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MtnPatHist_ref);
  // Accumulate the static size of struct member 'DstLatFromMidOfLaneSelf_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DstLatFromMidOfLaneSelf_ref);
  // Accumulate the static size of struct member 'ObjInfoChks_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjInfoChks_ref);
  // Accumulate the static size of struct member 'ObjInfoCntr_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjInfoCntr_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ObjInfo2VccGroup is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ObjInfo2VccGroup::ObjInfo2VccGroup>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'FuseObjTyp_ref' of type /CppImplementationDataTypes/FuseObjTyp
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FuseObjTyp)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FuseObjTyp::FuseObjTyp>{})  && 
  
  // Check static size status of struct member 'FuseObjWidth_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FuseObjWidth::FuseObjWidth>{})  && 
  
  // Check static size status of struct member 'FuseObjLength_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FuseObjLength::FuseObjLength>{})  && 
  
  // Check static size status of struct member 'FuseObjHei_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FuseObjHei::FuseObjHei>{})  && 
  
  // Check static size status of struct member 'IndcrTurn_ref' of type /CppImplementationDataTypes/IndcrTurn
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrTurn)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::IndcrTurn::IndcrTurn>{})  && 
  
  // Check static size status of struct member 'IndcrBrkLi_ref' of type /CppImplementationDataTypes/IndcrBrkLi
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrBrkLi)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::IndcrBrkLi::IndcrBrkLi>{})  && 
  
  // Check static size status of struct member 'IndcrHzrdLi_ref' of type /CppImplementationDataTypes/IndcrHzrdLi
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/IndcrHzrdLi)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::IndcrHzrdLi::IndcrHzrdLi>{})  && 
  
  // Check static size status of struct member 'MtnPat_ref' of type /CppImplementationDataTypes/MtnPat
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPat)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::MtnPat::MtnPat>{})  && 
  
  // Check static size status of struct member 'MtnPatHist_ref' of type /CppImplementationDataTypes/MtnPatHist
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/MtnPatHist)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::MtnPatHist::MtnPatHist>{})  && 
  
  // Check static size status of struct member 'DstLatFromMidOfLaneSelf_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DstLatFromMidOfLaneSelf::DstLatFromMidOfLaneSelf>{})  && 
  
  // Check static size status of struct member 'ObjInfoChks_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjInfoChks::ObjInfoChks>{})  && 
  
  // Check static size status of struct member 'ObjInfoCntr_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjInfoCntr::ObjInfoCntr>{}) 
  };
    return is_static_size;
}

}  // namespace ObjInfo2VccGroup

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJINFO2VCCGROUP_SERIALIZER_OBJINFO2VCCGROUP_H_

