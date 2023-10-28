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
/**        \file  LocalizationFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/IMUInf1VccIDT/deserializer_IMUInf1VccIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'IMUInf1VccIDT'
 *
 *      \details  /CppImplementationDataTypes/IMUInf1VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_IMUINF1VCCIDT_DESERIALIZER_IMUINF1VCCIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_IMUINF1VCCIDT_DESERIALIZER_IMUINF1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "IMUInf1VccIDT/impl_type_imuinf1vccidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace IMUInf1VccIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/IMUInf1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/IMUInf1VccIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::IMUInf1VccIDT::IMUInf1VccIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'IMUinfChks' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.IMUinfChks);


  // Deserialize struct member 'IMUinfCntr' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUinfCntr);
  }

  // Deserialize struct member 'IMUAccX' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUAccX);
  }

  // Deserialize struct member 'IMUAccY' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUAccY);
  }

  // Deserialize struct member 'IMUAccZ' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUAccZ);
  }

  // Deserialize struct member 'IMUCalStatus' of type /CppImplementationDataTypes/ImuCalSts1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ImuCalSts1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUCalStatus);
  }

  // Deserialize struct member 'IMUGyroX' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUGyroX);
  }

  // Deserialize struct member 'IMUGyroY' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUGyroY);
  }

  // Deserialize struct member 'IMUGyroZ' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUGyroZ);
  }

  // Deserialize struct member 'IMULbtcX' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMULbtcX);
  }

  // Deserialize struct member 'IMULbtcY' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMULbtcY);
  }

  // Deserialize struct member 'IMULbtcZ' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMULbtcZ);
  }

  // Deserialize struct member 'IMULtgX' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMULtgX);
  }

  // Deserialize struct member 'IMULtgY' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMULtgY);
  }

  // Deserialize struct member 'IMULtgZ' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMULtgZ);
  }

  // Deserialize struct member 'IMUTemp' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUTemp);
  }

  // Deserialize struct member 'IMUTimestampHi' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUTimestampHi);
  }

  // Deserialize struct member 'IMUTimestampLo' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUTimestampLo);
  }

  // Deserialize struct member 'IMUatttbPitch' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUatttbPitch);
  }

  // Deserialize struct member 'IMUatttbRoll' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUatttbRoll);
  }

  // Deserialize struct member 'IMUatttbYaw' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUatttbYaw);
  }

  // Deserialize struct member 'INSAx' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.INSAx);
  }

  // Deserialize struct member 'INSAy' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.INSAy);
  }

  // Deserialize struct member 'INSAz' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.INSAz);
  }

  // Deserialize struct member 'INSGx' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.INSGx);
  }

  // Deserialize struct member 'INSGy' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.INSGy);
  }

  // Deserialize struct member 'INSGz' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.INSGz);
  }

  // Deserialize struct member 'ImuStatus' of type /CppImplementationDataTypes/ImuCalSts1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ImuCalSts1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ImuStatus);
  }

  // Deserialize struct member 'IMUinfReserve' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUinfReserve);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/IMUInf1VccIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::IMUInf1VccIDT::IMUInf1VccIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'IMUinfChks' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUinfCntr' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUAccX' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUAccY' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUAccZ' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUCalStatus' of type /CppImplementationDataTypes/ImuCalSts1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ImuCalSts1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ImuCalSts1IDT::ImuCalSts1IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUGyroX' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUGyroY' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUGyroZ' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMULbtcX' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMULbtcY' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMULbtcZ' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMULtgX' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMULtgY' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMULtgZ' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUTemp' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUTimestampHi' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUTimestampLo' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUatttbPitch' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUatttbRoll' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUatttbYaw' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'INSAx' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'INSAy' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'INSAz' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'INSGx' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'INSGy' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'INSGz' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'ImuStatus' of type /CppImplementationDataTypes/ImuCalSts1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ImuCalSts1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ImuCalSts1IDT::ImuCalSts1IDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUinfReserve' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
  return static_size;
}

}  // namespace IMUInf1VccIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_IMUINF1VCCIDT_DESERIALIZER_IMUINF1VCCIDT_H_

