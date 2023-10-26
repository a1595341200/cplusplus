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
/**        \file  TrafficSignInformationExe/include/amsr/someip_protocol/internal/dataprototype_serialization/trafficsigninformationsi_out/events/serializer_TSI_Bus_HMIData.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/TrafficSignInformationSI_Out/TSI_Bus_HMIData
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_TRAFFICSIGNINFORMATIONSI_OUT_EVENTS_serializer_TSI_Bus_HMIData_h_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_TRAFFICSIGNINFORMATIONSI_OUT_EVENTS_serializer_TSI_Bus_HMIData_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TsiHmiData1VccIDT/impl_type_tsihmidata1vccidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TsiHmiData1VccIDT/serializer_TsiHmiData1VccIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace trafficsigninformationsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/TrafficSignInformationSI_Out/TSI_Bus_HMIData
 *        of service interface /JICA/Service/Interface/TrafficSignInformationSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/TsiHmiData1VccIDT
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       4
 *          - sizeOfVectorLengthField:      4
 *          - sizeOfMapLengthField:         4
 *          - sizeOfStringLengthField:      4
 *          - sizeOfStructLengthField:      0
 *          - sizeOfUnionLengthField:       4
 *          - sizeOfUnionTypeSelectorField: 4
 *          - isBomActive:                  true
 *          - isNullTerminationActive:      true
 *          - isDynamicLengthFieldSize:     false
 */
class SerializerTSI_Bus_HMIData {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/TrafficSignInformationSI_Out/TSI_Bus_HMIData.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/TsiHmiData1VccIDT.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static std::size_t GetRequiredBufferSize(::TsiHmiData1VccIDT::TsiHmiData1VccIDT const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/TsiHmiData1VccIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(data);
  }

  /*!
   * \brief Returns the maximum buffer size for the data prototype service event /JICA/Service/Interface/TrafficSignInformationSI_Out/TSI_Bus_HMIData.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
    return serialization::GetMaximumBufferSize<
      ::TsiHmiData1VccIDT::TsiHmiData1VccIDT,
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/TsiHmiData1VccIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >();
  }


  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/TrafficSignInformationSI_Out/TSI_Bus_HMIData.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/TsiHmiData1VccIDT
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  // VECTOR NC AutosarC++17_10-M3.2.4: MD_SOMEIPPROTOCOL_AutosarC++17_10-M3.2.4_false_positive
  static void Serialize(serialization::Writer &writer, ::TsiHmiData1VccIDT::TsiHmiData1VccIDT const &data) noexcept;

 private:
  /*!
   * \brief Transformation properties of the data prototype.
   */
  using TpPackDataPrototype = internal::TpPack<
      BigEndian,
      internal::SizeOfArrayLengthField<4>,
      internal::SizeOfVectorLengthField<4>,
      internal::SizeOfMapLengthField<4>,
      internal::SizeOfStringLengthField<4>,
      internal::SizeOfStructLengthField<0>,
      internal::SizeOfUnionLengthField<4>,
      internal::SizeOfUnionTypeSelectorField<4>,
      internal::StringBomActive,
      internal::StringNullTerminationActive,
      serialization::DynamicLengthFieldSizeInactive>;

};

}  // namespace events
}  // namespace trafficsigninformationsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_TRAFFICSIGNINFORMATIONSI_OUT_EVENTS_serializer_TSI_Bus_HMIData_h_

