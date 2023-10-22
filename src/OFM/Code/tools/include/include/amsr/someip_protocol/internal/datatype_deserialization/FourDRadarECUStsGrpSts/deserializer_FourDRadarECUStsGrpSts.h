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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/FourDRadarECUStsGrpSts/deserializer_FourDRadarECUStsGrpSts.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FourDRadarECUStsGrpSts'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarECUStsGrpSts
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTSGRPSTS_DESERIALIZER_FOURDRADARECUSTSGRPSTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTSGRPSTS_DESERIALIZER_FOURDRADARECUSTSGRPSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarECUStsGrpSts/impl_type_fourdradarecustsgrpsts.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarECUSts/deserializer_FourDRadarECUSts.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FrontFourDRadarSts1Vcc/deserializer_FrontFourDRadarSts1Vcc.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FourDRadarECUStsGrpSts {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FourDRadarECUStsGrpSts.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUStsGrpSts
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'FourDRadarECUSts_ref' of type /CppImplementationDataTypes/FourDRadarECUSts
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUSts)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.FourDRadarECUSts_ref);


  // Deserialize struct member 'FrontFourDRadarSts1Vcc_ref' of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts1Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FrontFourDRadarSts1Vcc_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FourDRadarECUStsGrpSts.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'FourDRadarECUSts_ref' of type /CppImplementationDataTypes/FourDRadarECUSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUSts)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FourDRadarECUSts::FourDRadarECUSts>{})  + 
  
  // Accumulate the static size of struct member 'FrontFourDRadarSts1Vcc_ref' of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts1Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>{}) 
  };
  return static_size;
}

}  // namespace FourDRadarECUStsGrpSts

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARECUSTSGRPSTS_DESERIALIZER_FOURDRADARECUSTSGRPSTS_H_

