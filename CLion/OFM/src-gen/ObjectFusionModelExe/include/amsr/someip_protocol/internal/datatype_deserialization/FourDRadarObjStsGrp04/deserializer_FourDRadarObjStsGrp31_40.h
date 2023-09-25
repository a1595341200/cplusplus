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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjStsGrp04/deserializer_FourDRadarObjStsGrp31_40.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FourDRadarObjStsGrp31_40'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarObjStsGrp31_40
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP04_DESERIALIZER_FOURDRADAROBJSTSGRP31_40_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP04_DESERIALIZER_FOURDRADAROBJSTSGRP31_40_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp04/impl_type_fourdradarobjstsgrp31_40.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjSt/deserializer_FourDRadarObjSt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TFourDRadarDataValid/deserializer_TFourDRadarDataValid.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FourDRadarObjStsGrp04 {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp31_40.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjStsGrp31_40
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40 &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'TFourDRadarDataValid31_40_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid31_40
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid31_40)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
        // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

          >(reader, data.TFourDRadarDataValid31_40_ref);


  // Deserialize struct member 'FourDRadarObjSts31_40_ref' of type /CppImplementationDataTypes/FourDRadarObjSts31_40
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts31_40)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

        >(reader, data.FourDRadarObjSts31_40_ref);
  }

  // Deserialize struct member 'ErrorStatuse31_40_ref' of type /CppImplementationDataTypes/ErrorStatuse31_40
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/ErrorStatuse31_40)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder
        
        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

        >(reader, data.ErrorStatuse31_40_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp31_40.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'TFourDRadarDataValid31_40_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid31_40
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid31_40)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                                // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                               >(deserialization::SizeToken<::TFourDRadarDataValid31_40::TFourDRadarDataValid31_40>{})  + 
  
  // Accumulate the static size of struct member 'FourDRadarObjSts31_40_ref' of type /CppImplementationDataTypes/FourDRadarObjSts31_40
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts31_40)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                                // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                               >(deserialization::SizeToken<::FourDRadarObjSts31_40::FourDRadarObjSts31_40>{})  + 
  
  // Accumulate the static size of struct member 'ErrorStatuse31_40_ref' of type /CppImplementationDataTypes/ErrorStatuse31_40
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/ErrorStatuse31_40)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder
                                
                                // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                               >(deserialization::SizeToken<::ErrorStatuse31_40::ErrorStatuse31_40>{}) 
  };
  return static_size;
}

}  // namespace FourDRadarObjStsGrp04

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP04_DESERIALIZER_FOURDRADAROBJSTSGRP31_40_H_

