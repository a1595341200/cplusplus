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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/SpdAlrmActvForRoadSgnInfo0/deserializer_SpdAlrmActvForRoadSgnInfo0.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'SpdAlrmActvForRoadSgnInfo0'
 *
 *      \details  /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_SPDALRMACTVFORROADSGNINFO0_DESERIALIZER_SPDALRMACTVFORROADSGNINFO0_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_SPDALRMACTVFORROADSGNINFO0_DESERIALIZER_SPDALRMACTVFORROADSGNINFO0_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "SpdAlrmActvForRoadSgnInfo0/impl_type_spdalrmactvforroadsgninfo0.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace SpdAlrmActvForRoadSgnInfo0 {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0 &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'SpdAlrmActvForRoadSgnInfoSts_ref' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoSts
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoSts)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.SpdAlrmActvForRoadSgnInfoSts_ref);


  // Deserialize struct member 'SpdAlrmActvForRoadSgnInfoPen_ref' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoPen
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoPen)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SpdAlrmActvForRoadSgnInfoPen_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'SpdAlrmActvForRoadSgnInfoSts_ref' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SpdAlrmActvForRoadSgnInfoSts::SpdAlrmActvForRoadSgnInfoSts>{})  + 
  
  // Accumulate the static size of struct member 'SpdAlrmActvForRoadSgnInfoPen_ref' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoPen
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfoPen)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SpdAlrmActvForRoadSgnInfoPen::SpdAlrmActvForRoadSgnInfoPen>{}) 
  };
  return static_size;
}

}  // namespace SpdAlrmActvForRoadSgnInfo0

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_SPDALRMACTVFORROADSGNINFO0_DESERIALIZER_SPDALRMACTVFORROADSGNINFO0_H_

