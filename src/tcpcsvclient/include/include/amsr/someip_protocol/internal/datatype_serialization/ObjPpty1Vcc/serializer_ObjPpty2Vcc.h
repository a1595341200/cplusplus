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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_serialization/ObjPpty1Vcc/serializer_ObjPpty2Vcc.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ObjPpty2Vcc'
 *
 *      \details  /CppImplementationDataTypes/ObjPpty2Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJPPTY1VCC_SERIALIZER_OBJPPTY2VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJPPTY1VCC_SERIALIZER_OBJPPTY2VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjPpty1Vcc/impl_type_objppty2vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ObjPpty1Vcc {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ObjPpty2Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjPpty2Vcc to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ObjPpty1Vcc::ObjPpty2Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Idn_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Idn_ref);
    // Serialize struct member 'VisnId_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VisnId_ref);
    // Serialize struct member 'Sts_ref' of type /CppImplementationDataTypes/Sts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Sts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Sts_ref);
    // Serialize struct member 'MdlOfMtn_ref' of type /CppImplementationDataTypes/MdlOfMtn
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MdlOfMtn)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.MdlOfMtn_ref);
    // Serialize struct member 'TrfcSceno_ref' of type /CppImplementationDataTypes/TrfcSceno
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSceno)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcSceno_ref);
    // Serialize struct member 'CllsnMtgtnByBrkgPrimQly_ref' of type /CppImplementationDataTypes/CllsnMtgtnByBrkgPrimQly
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnByBrkgPrimQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CllsnMtgtnByBrkgPrimQly_ref);
    // Serialize struct member 'CllsnMtgtnByBrkgSecQly_ref' of type /CppImplementationDataTypes/CllsnMtgtnByBrkgSecQly
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnByBrkgSecQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CllsnMtgtnByBrkgSecQly_ref);
    // Serialize struct member 'CllsnWarnFwdQly_ref' of type /CppImplementationDataTypes/CllsnWarnFwdQly
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnWarnFwdQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CllsnWarnFwdQly_ref);
    // Serialize struct member 'ObjTrfcJamAssiQly_ref' of type /CppImplementationDataTypes/ObjTrfcJamAssiQly
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjTrfcJamAssiQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjTrfcJamAssiQly_ref);
    // Serialize struct member 'DstLatFromMidOfLaneSelfQly_ref' of type /CppImplementationDataTypes/DstLatFromMidOfLaneSelfQly
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DstLatFromMidOfLaneSelfQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DstLatFromMidOfLaneSelfQly_ref);
    // Serialize struct member 'EmgyLaneKeepAidPosnQly_ref' of type /CppImplementationDataTypes/EmgyLaneKeepAidPosnQly
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EmgyLaneKeepAidPosnQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EmgyLaneKeepAidPosnQly_ref);
    // Serialize struct member 'PosnLgtStdDe_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PosnLgtStdDe_ref);
    // Serialize struct member 'PosnLatStdDe_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.PosnLatStdDe_ref);
    // Serialize struct member 'AgDirStdDe_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.AgDirStdDe_ref);
    // Serialize struct member 'SpdStdDe_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdStdDe_ref);
    // Serialize struct member 'AStdDe_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.AStdDe_ref);
    // Serialize struct member 'FusnSrc_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FusnSrc_ref);
    // Serialize struct member 'TimeStamp_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TimeStamp_ref);
    // Serialize struct member 'Age2_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Age2_ref);
    // Serialize struct member 'ExistConf_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ExistConf_ref);
    // Serialize struct member 'ClassConf_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ClassConf_ref);
    // Serialize struct member 'ObjPptyChks_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjPptyChks_ref);
    // Serialize struct member 'ObjPptyCntr_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjPptyCntr_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ObjPpty2Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ObjPpty2Vcc.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::ObjPpty1Vcc::ObjPpty2Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Idn_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Idn_ref);
  // Accumulate the static size of struct member 'VisnId_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VisnId_ref);
  // Accumulate the static size of struct member 'Sts_ref' of type /CppImplementationDataTypes/Sts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Sts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Sts_ref);
  // Accumulate the static size of struct member 'MdlOfMtn_ref' of type /CppImplementationDataTypes/MdlOfMtn
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/MdlOfMtn)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.MdlOfMtn_ref);
  // Accumulate the static size of struct member 'TrfcSceno_ref' of type /CppImplementationDataTypes/TrfcSceno
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSceno)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcSceno_ref);
  // Accumulate the static size of struct member 'CllsnMtgtnByBrkgPrimQly_ref' of type /CppImplementationDataTypes/CllsnMtgtnByBrkgPrimQly
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnByBrkgPrimQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CllsnMtgtnByBrkgPrimQly_ref);
  // Accumulate the static size of struct member 'CllsnMtgtnByBrkgSecQly_ref' of type /CppImplementationDataTypes/CllsnMtgtnByBrkgSecQly
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnByBrkgSecQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CllsnMtgtnByBrkgSecQly_ref);
  // Accumulate the static size of struct member 'CllsnWarnFwdQly_ref' of type /CppImplementationDataTypes/CllsnWarnFwdQly
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnWarnFwdQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CllsnWarnFwdQly_ref);
  // Accumulate the static size of struct member 'ObjTrfcJamAssiQly_ref' of type /CppImplementationDataTypes/ObjTrfcJamAssiQly
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjTrfcJamAssiQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjTrfcJamAssiQly_ref);
  // Accumulate the static size of struct member 'DstLatFromMidOfLaneSelfQly_ref' of type /CppImplementationDataTypes/DstLatFromMidOfLaneSelfQly
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DstLatFromMidOfLaneSelfQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DstLatFromMidOfLaneSelfQly_ref);
  // Accumulate the static size of struct member 'EmgyLaneKeepAidPosnQly_ref' of type /CppImplementationDataTypes/EmgyLaneKeepAidPosnQly
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/EmgyLaneKeepAidPosnQly)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EmgyLaneKeepAidPosnQly_ref);
  // Accumulate the static size of struct member 'PosnLgtStdDe_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PosnLgtStdDe_ref);
  // Accumulate the static size of struct member 'PosnLatStdDe_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.PosnLatStdDe_ref);
  // Accumulate the static size of struct member 'AgDirStdDe_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.AgDirStdDe_ref);
  // Accumulate the static size of struct member 'SpdStdDe_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdStdDe_ref);
  // Accumulate the static size of struct member 'AStdDe_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.AStdDe_ref);
  // Accumulate the static size of struct member 'FusnSrc_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FusnSrc_ref);
  // Accumulate the static size of struct member 'TimeStamp_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TimeStamp_ref);
  // Accumulate the static size of struct member 'Age2_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Age2_ref);
  // Accumulate the static size of struct member 'ExistConf_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ExistConf_ref);
  // Accumulate the static size of struct member 'ClassConf_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ClassConf_ref);
  // Accumulate the static size of struct member 'ObjPptyChks_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjPptyChks_ref);
  // Accumulate the static size of struct member 'ObjPptyCntr_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjPptyCntr_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ObjPpty2Vcc is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ObjPpty1Vcc::ObjPpty2Vcc>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Idn_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Idn::Idn>{})  && 
  
  // Check static size status of struct member 'VisnId_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VisnId::VisnId>{})  && 
  
  // Check static size status of struct member 'Sts_ref' of type /CppImplementationDataTypes/Sts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Sts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Sts::Sts>{})  && 
  
  // Check static size status of struct member 'MdlOfMtn_ref' of type /CppImplementationDataTypes/MdlOfMtn
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/MdlOfMtn)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::MdlOfMtn::MdlOfMtn>{})  && 
  
  // Check static size status of struct member 'TrfcSceno_ref' of type /CppImplementationDataTypes/TrfcSceno
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSceno)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcSceno::TrfcSceno>{})  && 
  
  // Check static size status of struct member 'CllsnMtgtnByBrkgPrimQly_ref' of type /CppImplementationDataTypes/CllsnMtgtnByBrkgPrimQly
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnByBrkgPrimQly)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly>{})  && 
  
  // Check static size status of struct member 'CllsnMtgtnByBrkgSecQly_ref' of type /CppImplementationDataTypes/CllsnMtgtnByBrkgSecQly
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnByBrkgSecQly)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly>{})  && 
  
  // Check static size status of struct member 'CllsnWarnFwdQly_ref' of type /CppImplementationDataTypes/CllsnWarnFwdQly
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnWarnFwdQly)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CllsnWarnFwdQly::CllsnWarnFwdQly>{})  && 
  
  // Check static size status of struct member 'ObjTrfcJamAssiQly_ref' of type /CppImplementationDataTypes/ObjTrfcJamAssiQly
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjTrfcJamAssiQly)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjTrfcJamAssiQly::ObjTrfcJamAssiQly>{})  && 
  
  // Check static size status of struct member 'DstLatFromMidOfLaneSelfQly_ref' of type /CppImplementationDataTypes/DstLatFromMidOfLaneSelfQly
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/DstLatFromMidOfLaneSelfQly)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DstLatFromMidOfLaneSelfQly::DstLatFromMidOfLaneSelfQly>{})  && 
  
  // Check static size status of struct member 'EmgyLaneKeepAidPosnQly_ref' of type /CppImplementationDataTypes/EmgyLaneKeepAidPosnQly
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/EmgyLaneKeepAidPosnQly)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EmgyLaneKeepAidPosnQly::EmgyLaneKeepAidPosnQly>{})  && 
  
  // Check static size status of struct member 'PosnLgtStdDe_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::PosnLgtStdDe::PosnLgtStdDe>{})  && 
  
  // Check static size status of struct member 'PosnLatStdDe_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::PosnLatStdDe::PosnLatStdDe>{})  && 
  
  // Check static size status of struct member 'AgDirStdDe_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::AgDirStdDe::AgDirStdDe>{})  && 
  
  // Check static size status of struct member 'SpdStdDe_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdStdDe::SpdStdDe>{})  && 
  
  // Check static size status of struct member 'AStdDe_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::AStdDe::AStdDe>{})  && 
  
  // Check static size status of struct member 'FusnSrc_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FusnSrc::FusnSrc>{})  && 
  
  // Check static size status of struct member 'TimeStamp_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TimeStamp::TimeStamp>{})  && 
  
  // Check static size status of struct member 'Age2_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Age2::Age2>{})  && 
  
  // Check static size status of struct member 'ExistConf_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ExistConf::ExistConf>{})  && 
  
  // Check static size status of struct member 'ClassConf_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ClassConf::ClassConf>{})  && 
  
  // Check static size status of struct member 'ObjPptyChks_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjPptyChks::ObjPptyChks>{})  && 
  
  // Check static size status of struct member 'ObjPptyCntr_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjPptyCntr::ObjPptyCntr>{}) 
  };
    return is_static_size;
}

}  // namespace ObjPpty1Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_OBJPPTY1VCC_SERIALIZER_OBJPPTY2VCC_H_

