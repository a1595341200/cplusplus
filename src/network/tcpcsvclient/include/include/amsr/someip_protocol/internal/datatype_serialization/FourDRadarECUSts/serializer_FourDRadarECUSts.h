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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUSts/serializer_FourDRadarECUSts.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FourDRadarECUSts'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarECUSts
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTS_SERIALIZER_FOURDRADARECUSTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTS_SERIALIZER_FOURDRADARECUSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarECUSts/impl_type_fourdradarecusts.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FourDRadarECUSts {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FourDRadarECUSts.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUSts to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FourDRadarECUSts::FourDRadarECUSts const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'FourDChks_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDChks_ref);
    // Serialize struct member 'ECUFailureVoltage_ref' of type /CppImplementationDataTypes/ECUFailureVoltage
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVoltage)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureVoltage_ref);
    // Serialize struct member 'FourDCntr_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDCntr_ref);
    // Serialize struct member 'CalibrationSts_ref' of type /CppImplementationDataTypes/CalibrationSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibrationSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CalibrationSts_ref);
    // Serialize struct member 'OperationMode_ref' of type /CppImplementationDataTypes/OperationMode
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OperationMode_ref);
    // Serialize struct member 'ECUFailurePlausibility_ref' of type /CppImplementationDataTypes/ECUFailurePlausibility
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailurePlausibility)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailurePlausibility_ref);
    // Serialize struct member 'ECUFailureTemperature_ref' of type /CppImplementationDataTypes/ECUFailureTemperature
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureTemperature)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureTemperature_ref);
    // Serialize struct member 'ECUFailureVDY_ref' of type /CppImplementationDataTypes/ECUFailureVDY
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVDY)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureVDY_ref);
    // Serialize struct member 'ECUFailureNVM_ref' of type /CppImplementationDataTypes/ECUFailureNVM
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureNVM)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureNVM_ref);
    // Serialize struct member 'ECUFailureE2E_ref' of type /CppImplementationDataTypes/ECUFailureE2E
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureE2E)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureE2E_ref);
    // Serialize struct member 'ECUFailureUB_ref' of type /CppImplementationDataTypes/ECUFailureUB
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureUB)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureUB_ref);
    // Serialize struct member 'ECUFailureQF_ref' of type /CppImplementationDataTypes/ECUFailureQF
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureQF)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureQF_ref);
    // Serialize struct member 'ECUFailureVCS_ref' of type /CppImplementationDataTypes/ECUFailureVCS
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVCS)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureVCS_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FourDRadarECUSts.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUSts.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::FourDRadarECUSts::FourDRadarECUSts const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'FourDChks_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDChks_ref);
  // Accumulate the static size of struct member 'ECUFailureVoltage_ref' of type /CppImplementationDataTypes/ECUFailureVoltage
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVoltage)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureVoltage_ref);
  // Accumulate the static size of struct member 'FourDCntr_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDCntr_ref);
  // Accumulate the static size of struct member 'CalibrationSts_ref' of type /CppImplementationDataTypes/CalibrationSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibrationSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CalibrationSts_ref);
  // Accumulate the static size of struct member 'OperationMode_ref' of type /CppImplementationDataTypes/OperationMode
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OperationMode_ref);
  // Accumulate the static size of struct member 'ECUFailurePlausibility_ref' of type /CppImplementationDataTypes/ECUFailurePlausibility
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailurePlausibility)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailurePlausibility_ref);
  // Accumulate the static size of struct member 'ECUFailureTemperature_ref' of type /CppImplementationDataTypes/ECUFailureTemperature
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureTemperature)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureTemperature_ref);
  // Accumulate the static size of struct member 'ECUFailureVDY_ref' of type /CppImplementationDataTypes/ECUFailureVDY
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVDY)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureVDY_ref);
  // Accumulate the static size of struct member 'ECUFailureNVM_ref' of type /CppImplementationDataTypes/ECUFailureNVM
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureNVM)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureNVM_ref);
  // Accumulate the static size of struct member 'ECUFailureE2E_ref' of type /CppImplementationDataTypes/ECUFailureE2E
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureE2E)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureE2E_ref);
  // Accumulate the static size of struct member 'ECUFailureUB_ref' of type /CppImplementationDataTypes/ECUFailureUB
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureUB)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureUB_ref);
  // Accumulate the static size of struct member 'ECUFailureQF_ref' of type /CppImplementationDataTypes/ECUFailureQF
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureQF)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureQF_ref);
  // Accumulate the static size of struct member 'ECUFailureVCS_ref' of type /CppImplementationDataTypes/ECUFailureVCS
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVCS)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureVCS_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FourDRadarECUSts is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FourDRadarECUSts::FourDRadarECUSts>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'FourDChks_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FourDChks::FourDChks>{})  && 
  
  // Check static size status of struct member 'ECUFailureVoltage_ref' of type /CppImplementationDataTypes/ECUFailureVoltage
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVoltage)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureVoltage::ECUFailureVoltage>{})  && 
  
  // Check static size status of struct member 'FourDCntr_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FourDCntr::FourDCntr>{})  && 
  
  // Check static size status of struct member 'CalibrationSts_ref' of type /CppImplementationDataTypes/CalibrationSts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibrationSts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CalibrationSts::CalibrationSts>{})  && 
  
  // Check static size status of struct member 'OperationMode_ref' of type /CppImplementationDataTypes/OperationMode
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::OperationMode::OperationMode>{})  && 
  
  // Check static size status of struct member 'ECUFailurePlausibility_ref' of type /CppImplementationDataTypes/ECUFailurePlausibility
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailurePlausibility)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailurePlausibility::ECUFailurePlausibility>{})  && 
  
  // Check static size status of struct member 'ECUFailureTemperature_ref' of type /CppImplementationDataTypes/ECUFailureTemperature
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureTemperature)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureTemperature::ECUFailureTemperature>{})  && 
  
  // Check static size status of struct member 'ECUFailureVDY_ref' of type /CppImplementationDataTypes/ECUFailureVDY
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVDY)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureVDY::ECUFailureVDY>{})  && 
  
  // Check static size status of struct member 'ECUFailureNVM_ref' of type /CppImplementationDataTypes/ECUFailureNVM
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureNVM)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureNVM::ECUFailureNVM>{})  && 
  
  // Check static size status of struct member 'ECUFailureE2E_ref' of type /CppImplementationDataTypes/ECUFailureE2E
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureE2E)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureE2E::ECUFailureE2E>{})  && 
  
  // Check static size status of struct member 'ECUFailureUB_ref' of type /CppImplementationDataTypes/ECUFailureUB
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureUB)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureUB::ECUFailureUB>{})  && 
  
  // Check static size status of struct member 'ECUFailureQF_ref' of type /CppImplementationDataTypes/ECUFailureQF
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureQF)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureQF::ECUFailureQF>{})  && 
  
  // Check static size status of struct member 'ECUFailureVCS_ref' of type /CppImplementationDataTypes/ECUFailureVCS
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVCS)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ECUFailureVCS::ECUFailureVCS>{}) 
  };
    return is_static_size;
}

}  // namespace FourDRadarECUSts

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTS_SERIALIZER_FOURDRADARECUSTS_H_

