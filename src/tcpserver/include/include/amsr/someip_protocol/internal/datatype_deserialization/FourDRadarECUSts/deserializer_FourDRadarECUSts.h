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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/FourDRadarECUSts/deserializer_FourDRadarECUSts.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FourDRadarECUSts'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTS_DESERIALIZER_FOURDRADARECUSTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTS_DESERIALIZER_FOURDRADARECUSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarECUSts/impl_type_fourdradarecusts.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FourDRadarECUSts {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FourDRadarECUSts.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUSts
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FourDRadarECUSts::FourDRadarECUSts &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'FourDChks_ref' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.FourDChks_ref);


  // Deserialize struct member 'ECUFailureVoltage_ref' of type /CppImplementationDataTypes/ECUFailureVoltage
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVoltage)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureVoltage_ref);
  }

  // Deserialize struct member 'FourDCntr_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FourDCntr_ref);
  }

  // Deserialize struct member 'CalibrationSts_ref' of type /CppImplementationDataTypes/CalibrationSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibrationSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CalibrationSts_ref);
  }

  // Deserialize struct member 'OperationMode_ref' of type /CppImplementationDataTypes/OperationMode
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.OperationMode_ref);
  }

  // Deserialize struct member 'ECUFailurePlausibility_ref' of type /CppImplementationDataTypes/ECUFailurePlausibility
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailurePlausibility)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailurePlausibility_ref);
  }

  // Deserialize struct member 'ECUFailureTemperature_ref' of type /CppImplementationDataTypes/ECUFailureTemperature
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureTemperature)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureTemperature_ref);
  }

  // Deserialize struct member 'ECUFailureVDY_ref' of type /CppImplementationDataTypes/ECUFailureVDY
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVDY)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureVDY_ref);
  }

  // Deserialize struct member 'ECUFailureNVM_ref' of type /CppImplementationDataTypes/ECUFailureNVM
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureNVM)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureNVM_ref);
  }

  // Deserialize struct member 'ECUFailureE2E_ref' of type /CppImplementationDataTypes/ECUFailureE2E
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureE2E)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureE2E_ref);
  }

  // Deserialize struct member 'ECUFailureUB_ref' of type /CppImplementationDataTypes/ECUFailureUB
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureUB)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureUB_ref);
  }

  // Deserialize struct member 'ECUFailureQF_ref' of type /CppImplementationDataTypes/ECUFailureQF
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureQF)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureQF_ref);
  }

  // Deserialize struct member 'ECUFailureVCS_ref' of type /CppImplementationDataTypes/ECUFailureVCS
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVCS)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ECUFailureVCS_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FourDRadarECUSts.
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
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FourDRadarECUSts::FourDRadarECUSts>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'FourDChks_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FourDChks::FourDChks>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureVoltage_ref' of type /CppImplementationDataTypes/ECUFailureVoltage
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVoltage)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureVoltage::ECUFailureVoltage>{})  + 
  
  // Accumulate the static size of struct member 'FourDCntr_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FourDCntr::FourDCntr>{})  + 
  
  // Accumulate the static size of struct member 'CalibrationSts_ref' of type /CppImplementationDataTypes/CalibrationSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibrationSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CalibrationSts::CalibrationSts>{})  + 
  
  // Accumulate the static size of struct member 'OperationMode_ref' of type /CppImplementationDataTypes/OperationMode
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OperationMode::OperationMode>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailurePlausibility_ref' of type /CppImplementationDataTypes/ECUFailurePlausibility
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailurePlausibility)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailurePlausibility::ECUFailurePlausibility>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureTemperature_ref' of type /CppImplementationDataTypes/ECUFailureTemperature
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureTemperature)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureTemperature::ECUFailureTemperature>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureVDY_ref' of type /CppImplementationDataTypes/ECUFailureVDY
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVDY)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureVDY::ECUFailureVDY>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureNVM_ref' of type /CppImplementationDataTypes/ECUFailureNVM
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureNVM)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureNVM::ECUFailureNVM>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureE2E_ref' of type /CppImplementationDataTypes/ECUFailureE2E
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureE2E)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureE2E::ECUFailureE2E>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureUB_ref' of type /CppImplementationDataTypes/ECUFailureUB
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureUB)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureUB::ECUFailureUB>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureQF_ref' of type /CppImplementationDataTypes/ECUFailureQF
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureQF)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureQF::ECUFailureQF>{})  + 
  
  // Accumulate the static size of struct member 'ECUFailureVCS_ref' of type /CppImplementationDataTypes/ECUFailureVCS
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ECUFailureVCS)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ECUFailureVCS::ECUFailureVCS>{}) 
  };
  return static_size;
}

}  // namespace FourDRadarECUSts

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTS_DESERIALIZER_FOURDRADARECUSTS_H_

