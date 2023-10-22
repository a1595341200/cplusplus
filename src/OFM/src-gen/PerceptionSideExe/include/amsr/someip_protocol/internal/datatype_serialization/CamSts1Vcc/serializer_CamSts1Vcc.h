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
/**        \file  PerceptionSideExe/include/amsr/someip_protocol/internal/datatype_serialization/CamSts1Vcc/serializer_CamSts1Vcc.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'CamSts1Vcc'
 *
 *      \details  /CppImplementationDataTypes/CamSts1Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_CAMSTS1VCC_SERIALIZER_CAMSTS1VCC_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_CAMSTS1VCC_SERIALIZER_CAMSTS1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CamSts1Vcc/impl_type_camsts1vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace CamSts1Vcc {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/CamSts1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/CamSts1Vcc to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::CamSts1Vcc::CamSts1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Blockage_ref' of type /CppImplementationDataTypes/Blockage
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Blockage)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Blockage_ref);
    // Serialize struct member 'Condensation_ref' of type /CppImplementationDataTypes/Condensation
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Condensation)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Condensation_ref);
    // Serialize struct member 'StaticCalibration_ref' of type /CppImplementationDataTypes/StaticCalibration
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/StaticCalibration)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.StaticCalibration_ref);
    // Serialize struct member 'DynCalibration_ref' of type /CppImplementationDataTypes/DynCalibration
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DynCalibration)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DynCalibration_ref);
    // Serialize struct member 'Fault_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Fault_ref);
    // Serialize struct member 'CamStsChks_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CamStsChks_ref);
    // Serialize struct member 'CamStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CamStsCntr_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/CamSts1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/CamSts1Vcc.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::CamSts1Vcc::CamSts1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Blockage_ref' of type /CppImplementationDataTypes/Blockage
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Blockage)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Blockage_ref);
  // Accumulate the static size of struct member 'Condensation_ref' of type /CppImplementationDataTypes/Condensation
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Condensation)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Condensation_ref);
  // Accumulate the static size of struct member 'StaticCalibration_ref' of type /CppImplementationDataTypes/StaticCalibration
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/StaticCalibration)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.StaticCalibration_ref);
  // Accumulate the static size of struct member 'DynCalibration_ref' of type /CppImplementationDataTypes/DynCalibration
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DynCalibration)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DynCalibration_ref);
  // Accumulate the static size of struct member 'Fault_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Fault_ref);
  // Accumulate the static size of struct member 'CamStsChks_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CamStsChks_ref);
  // Accumulate the static size of struct member 'CamStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CamStsCntr_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/CamSts1Vcc is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::CamSts1Vcc::CamSts1Vcc>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Blockage_ref' of type /CppImplementationDataTypes/Blockage
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Blockage)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Blockage::Blockage>{})  && 
  
  // Check static size status of struct member 'Condensation_ref' of type /CppImplementationDataTypes/Condensation
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Condensation)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Condensation::Condensation>{})  && 
  
  // Check static size status of struct member 'StaticCalibration_ref' of type /CppImplementationDataTypes/StaticCalibration
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/StaticCalibration)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::StaticCalibration::StaticCalibration>{})  && 
  
  // Check static size status of struct member 'DynCalibration_ref' of type /CppImplementationDataTypes/DynCalibration
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/DynCalibration)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DynCalibration::DynCalibration>{})  && 
  
  // Check static size status of struct member 'Fault_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Fault::Fault>{})  && 
  
  // Check static size status of struct member 'CamStsChks_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CamStsChks::CamStsChks>{})  && 
  
  // Check static size status of struct member 'CamStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CamStsChks::CamStsCntr>{}) 
  };
    return is_static_size;
}

}  // namespace CamSts1Vcc

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_CAMSTS1VCC_SERIALIZER_CAMSTS1VCC_H_

