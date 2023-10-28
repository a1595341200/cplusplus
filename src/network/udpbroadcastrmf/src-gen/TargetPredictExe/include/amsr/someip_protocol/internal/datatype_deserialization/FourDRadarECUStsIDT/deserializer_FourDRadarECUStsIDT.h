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
/**        \file  TargetPredictExe/include/amsr/someip_protocol/internal/datatype_deserialization/FourDRadarECUStsIDT/deserializer_FourDRadarECUStsIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FourDRadarECUStsIDT'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarECUStsIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTSIDT_DESERIALIZER_FOURDRADARECUSTSIDT_H_
#define TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTSIDT_DESERIALIZER_FOURDRADARECUSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarECUStsIDT/impl_type_fourdradarecustsidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FourDRadarECUStsIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FourDRadarECUStsIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUStsIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FourDRadarECUStsIDT::FourDRadarECUStsIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'FourDChks' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.FourDChks);


  // Deserialize struct member 'ECUFailureVoltage' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureVoltage);
  }

  // Deserialize struct member 'FourDCntr' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FourDCntr);
  }

  // Deserialize struct member 'CalibrationSts' of type /CppImplementationDataTypes/CalibSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CalibrationSts);
  }

  // Deserialize struct member 'OperationMode' of type /CppImplementationDataTypes/OperationMode1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.OperationMode);
  }

  // Deserialize struct member 'ECUFailurePlausibility' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailurePlausibility);
  }

  // Deserialize struct member 'ECUFailureTemperature' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureTemperature);
  }

  // Deserialize struct member 'ECUFailureVDY' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureVDY);
  }

  // Deserialize struct member 'ECUFailureNVM' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureNVM);
  }

  // Deserialize struct member 'ECUFailureE2E' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureE2E);
  }

  // Deserialize struct member 'ECUFailureUB' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureUB);
  }

  // Deserialize struct member 'ECUFailureQF' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureQF);
  }

  // Deserialize struct member 'ECUFailureVCS' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureVCS);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FourDRadarECUStsIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 * \return Returns the static size of the struct in bytes.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FourDRadarECUStsIDT::FourDRadarECUStsIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'FourDChks' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureVoltage' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FourDCntr' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'CalibrationSts' of type /CppImplementationDataTypes/CalibSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CalibSts1VccIDT::CalibSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'OperationMode' of type /CppImplementationDataTypes/OperationMode1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OperationMode1IDT::OperationMode1IDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailurePlausibility' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureTemperature' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureVDY' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureNVM' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureE2E' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureUB' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureQF' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureVCS' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace FourDRadarECUStsIDT

#endif  // TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTSIDT_DESERIALIZER_FOURDRADARECUSTSIDT_H_

