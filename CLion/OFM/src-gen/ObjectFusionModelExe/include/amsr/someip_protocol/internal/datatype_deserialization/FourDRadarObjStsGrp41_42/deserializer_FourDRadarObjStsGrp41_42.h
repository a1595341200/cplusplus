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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjStsGrp41_42/deserializer_FourDRadarObjStsGrp41_42.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FourDRadarObjStsGrp41_42'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarObjStsGrp41_42
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP41_42_DESERIALIZER_FOURDRADAROBJSTSGRP41_42_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP41_42_DESERIALIZER_FOURDRADAROBJSTSGRP41_42_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp41_42/impl_type_fourdradarobjstsgrp41_42.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjSt/deserializer_FourDRadarObjSt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TFourDRadarDataValid/deserializer_TFourDRadarDataValid.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FourDRadarObjStsGrp41_42 {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp41_42.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjStsGrp41_42
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42 &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'TFourDRadarDataValid41_42_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid41_42
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid41_42)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
        // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

          >(reader, data.TFourDRadarDataValid41_42_ref);


  // Deserialize struct member 'FourDRadarObjSts41_42_ref' of type /CppImplementationDataTypes/FourDRadarObjSts41_42
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts41_42)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

        >(reader, data.FourDRadarObjSts41_42_ref);
  }

  // Deserialize struct member 'ErrorStatuse41_42_ref' of type /CppImplementationDataTypes/ErrorStatuse41_42
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/ErrorStatuse41_42)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder
        
        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

        >(reader, data.ErrorStatuse41_42_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp41_42.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'TFourDRadarDataValid41_42_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid41_42
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid41_42)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                                // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                               >(deserialization::SizeToken<::TFourDRadarDataValid41_42::TFourDRadarDataValid41_42>{})  + 
  
  // Accumulate the static size of struct member 'FourDRadarObjSts41_42_ref' of type /CppImplementationDataTypes/FourDRadarObjSts41_42
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts41_42)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                                // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                               >(deserialization::SizeToken<::FourDRadarObjSts41_42::FourDRadarObjSts41_42>{})  + 
  
  // Accumulate the static size of struct member 'ErrorStatuse41_42_ref' of type /CppImplementationDataTypes/ErrorStatuse41_42
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/ErrorStatuse41_42)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder
                                
                                // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                               >(deserialization::SizeToken<::ErrorStatuse41_42::ErrorStatuse41_42>{}) 
  };
  return static_size;
}

}  // namespace FourDRadarObjStsGrp41_42

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP41_42_DESERIALIZER_FOURDRADAROBJSTSGRP41_42_H_

