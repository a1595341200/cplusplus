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
/**        \file  LocalizationFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_FunctionInfo1VCC/deserializer_ToSOCA_FunctionInfo1VCC.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ToSOCA_FunctionInfo1VCC'
 *
 *      \details  /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCC
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_FUNCTIONINFO1VCC_DESERIALIZER_TOSOCA_FUNCTIONINFO1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_FUNCTIONINFO1VCC_DESERIALIZER_TOSOCA_FUNCTIONINFO1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ToSOCA_FunctionInfo1VCC/impl_type_tosoca_functioninfo1vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgSts/deserializer_LppLaneChgSts.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ToSOCA_FunctionInfo1VCC {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCC.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCC
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ToSOCA_FunctionInfo1VCC::ToSOCA_FunctionInfo1VCC &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LppLaneChgSts_ref' of type /CppImplementationDataTypes/LppLaneChgSts
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/LppLaneChgSts)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.LppLaneChgSts_ref);


  // Deserialize struct member 'TrfcLiAttentionEna_ref' of type /CppImplementationDataTypes/TrfcLiAttentionEna
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiAttentionEna)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrfcLiAttentionEna_ref);
  }

  // Deserialize struct member 'TrfcSignInfoEna_ref' of type /CppImplementationDataTypes/TrfcSignInfoEna
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSignInfoEna)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrfcSignInfoEna_ref);
  }

  // Deserialize struct member 'VehInLaneChg_ref' of type /CppImplementationDataTypes/VehInLaneChg
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehInLaneChg)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehInLaneChg_ref);
  }

  // Deserialize struct member 'DynCalPrmForAxleDstReToVehFrnt_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForAxleDstReToVehFrnt_ref);
  }

  // Deserialize struct member 'DynCalPrmForCamLatDistToVehFrnt_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForCamLatDistToVehFrnt_ref);
  }

  // Deserialize struct member 'DynCalPrmForCamLongDistToVehFrnt_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForCamLongDistToVehFrnt_ref);
  }

  // Deserialize struct member 'DynCalPrmForVehTyp_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForVehTyp_ref);
  }

  // Deserialize struct member 'TjaSts_ref' of type /CppImplementationDataTypes/TjaSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TjaSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TjaSts_ref);
  }

  // Deserialize struct member 'NgpSts1_ref' of type /CppImplementationDataTypes/NgpSts1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NgpSts1)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.NgpSts1_ref);
  }

  // Deserialize struct member 'TlaFaultSts_ref' of type /CppImplementationDataTypes/TlaFaultSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TlaFaultSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TlaFaultSts_ref);
  }

  // Deserialize struct member 'TsiFaultSts_ref' of type /CppImplementationDataTypes/TsiFaultSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TsiFaultSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TsiFaultSts_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCC.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ToSOCA_FunctionInfo1VCC::ToSOCA_FunctionInfo1VCC>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LppLaneChgSts_ref' of type /CppImplementationDataTypes/LppLaneChgSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LppLaneChgSts)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LppLaneChgSts::LppLaneChgSts>{})  + 
  
  // Accumulate the static size of struct member 'TrfcLiAttentionEna_ref' of type /CppImplementationDataTypes/TrfcLiAttentionEna
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiAttentionEna)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TrfcLiAttentionEna::TrfcLiAttentionEna>{})  + 
  
  // Accumulate the static size of struct member 'TrfcSignInfoEna_ref' of type /CppImplementationDataTypes/TrfcSignInfoEna
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSignInfoEna)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TrfcSignInfoEna::TrfcSignInfoEna>{})  + 
  
  // Accumulate the static size of struct member 'VehInLaneChg_ref' of type /CppImplementationDataTypes/VehInLaneChg
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehInLaneChg)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehInLaneChg::VehInLaneChg>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForAxleDstReToVehFrnt_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DynCalPrmForAxleDstReToVehFrnt::DynCalPrmForAxleDstReToVehFrnt>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForCamLatDistToVehFrnt_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DynCalPrmForCamLatDistToVehFrnt::DynCalPrmForCamLatDistToVehFrnt>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForCamLongDistToVehFrnt_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DynCalPrmForCamLongDistToVehFrnt::DynCalPrmForCamLongDistToVehFrnt>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForVehTyp_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DynCalPrmForVehTyp::DynCalPrmForVehTyp>{})  + 
  
  // Accumulate the static size of struct member 'TjaSts_ref' of type /CppImplementationDataTypes/TjaSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TjaSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TjaSts::TjaSts>{})  + 
  
  // Accumulate the static size of struct member 'NgpSts1_ref' of type /CppImplementationDataTypes/NgpSts1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NgpSts1)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NgpSts1::NgpSts1>{})  + 
  
  // Accumulate the static size of struct member 'TlaFaultSts_ref' of type /CppImplementationDataTypes/TlaFaultSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TlaFaultSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TlaFaultSts::TlaFaultSts>{})  + 
  
  // Accumulate the static size of struct member 'TsiFaultSts_ref' of type /CppImplementationDataTypes/TsiFaultSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TsiFaultSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TsiFaultSts::TsiFaultSts>{}) 
  };
  return static_size;
}

}  // namespace ToSOCA_FunctionInfo1VCC

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_FUNCTIONINFO1VCC_DESERIALIZER_TOSOCA_FUNCTIONINFO1VCC_H_

