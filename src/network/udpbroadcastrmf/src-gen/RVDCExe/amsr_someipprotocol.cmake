#[=======================================================================[
Copyright (c) by Vector Informatik GmbH. All rights reserved.

This software is copyright protected and proprietary to Vector Informatik GmbH.
Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
All other rights remain with Vector Informatik GmbH.

Attention:
----------
The ${target} property settings in this file only take effect if this file is
set as an expected OUTPUT of dvacgf_file_gen().

File description:
-----------------
This is a generated CMake build-configuration file, modifications get lost.
#]=======================================================================]


# Add generated source file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_out/events/deserializer_EDR_Bus_EDRInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Ids.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_AgnssData_receive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_GgaData_receive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_VIN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.cpp"
)

# Mark source file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_out/events/deserializer_EDR_Bus_EDRInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Ids.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_AgnssData_receive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_GgaData_receive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_VIN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.cpp"
  PROPERTIES
  GENERATED 1
)

# Add generated header file(s)
target_sources(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_out/events/deserializer_EDR_Bus_EDRInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Ids.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info2.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info3.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info4.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_AgnssData_receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_GgaData_receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_VIN.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ADModCtrlInhbn1VccIDT/deserializer_ADModCtrlInhbn1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ALgtStdFromWhlSpdSafe1ChkdIDT/deserializer_ALgtStdFromWhlSpdSafe1ChkdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccFusnTrfcReqIDT/deserializer_AccFusnTrfcReqIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccTarSeln1RecIDT/deserializer_AccTarSeln1RecIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccrPedlPsd0IDT/deserializer_AccrPedlPsd0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AgDataRaw2Safe1VccIDT/deserializer_AgDataRaw2Safe1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AmbTRawIDT/deserializer_AmbTRawIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AsyDataWithCmpSafe1ChkdIDT/deserializer_AsyDataWithCmpSafe1ChkdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BltLockStFrntIDT/deserializer_BltLockStFrntIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BrkPedlPsdRecIDT/deserializer_BrkPedlPsdRecIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BrkPedlrRatIDT/deserializer_BrkPedlrRatIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/CamSts1IDT/deserializer_CamSts1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/CrossInfo1VccIDT/deserializer_CrossInfo1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DoorStsWithFacQlyIDT/deserializer_DoorStsWithFacQlyIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DrvrACCrsSetSpdReq1VccIDT/deserializer_DrvrACCrsSetSpdReq1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DrvrSteerActv1VccIDT/deserializer_DrvrSteerActv1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DrvrSteerWhlHldGroup0IDT/deserializer_DrvrSteerWhlHldGroup0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EgoMotionIDT/deserializer_EgoMotionIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EscWarnIndcnReqRec1VccIDT/deserializer_EscWarnIndcnReqRec1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EyeGaze3VccIDT/deserializer_EyeGaze3VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/IndcrTurnReqIDT/deserializer_IndcrTurnReqIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgStsIDT/deserializer_LppLaneChgStsIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/PinionSteerAgGroupIDT/deserializer_PinionSteerAgGroupIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/PtDrvrSetg1VccIDT/deserializer_PtDrvrSetg1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/RampInfo1VccIDT/deserializer_RampInfo1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/RoadSgnInfoActv0IDT/deserializer_RoadSgnInfoActv0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SideRdrSts2VccIDT/deserializer_SideRdrSts2VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SpdAlrmActvForRoadSgnInfo0IDT/deserializer_SpdAlrmActvForRoadSgnInfo0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SteerWhlSnsrSafe1IDT/deserializer_SteerWhlSnsrSafe1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SwtIndcr1VccIDT/deserializer_SwtIndcr1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TiGapPen1IDT/deserializer_TiGapPen1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TjaTrailBusIDT/deserializer_TjaTrailBusIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCCIDT/deserializer_ToSOCA_COMInfo1VCCIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_FunctionInfo1VCCIDT/deserializer_ToSOCA_FunctionInfo1VCCIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrfcLiActvStsIDT/deserializer_TrfcLiActvStsIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrfcLiWarnTyp1VccIDT/deserializer_TrfcLiWarnTyp1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrsmParkLockdIDT/deserializer_TrsmParkLockdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TurnIndcrMonostable1VccIDT/deserializer_TurnIndcrMonostable1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehBattU1VccIDT/deserializer_VehBattU1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehDynCtrlStsForALgtCmftRec1IDT/deserializer_VehDynCtrlStsForALgtCmftRec1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1IDT/deserializer_VehMNomRecsts_1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehModMngtGlbSafe1IDT/deserializer_VehModMngtGlbSafe1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMtnStSafeGroup1IDT/deserializer_VehMtnStSafeGroup1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdIndcd1IDT/deserializer_VehSpdIndcd1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdLgtSafe1ChkdIDT/deserializer_VehSpdLgtSafe1ChkdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/Vin1VccIDT/deserializer_Vin1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WhlInfoGroupIDT/deserializer_WhlInfoGroupIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WipgInfoGroupIDT/deserializer_WipgInfoGroupIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/s_EDRInfo_tIDT/deserializer_s_EDRInfo_tIDT.h"
)

# Mark header file(s) as generated
set_source_files_properties(
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_out/events/deserializer_EDR_Bus_EDRInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Ids.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info1.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info2.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info3.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/mcu_data_info/events/deserializer_Mcu_Reset_Info4.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_AgnssData_receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_GgaData_receive.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/rtk_r/events/deserializer_VIN.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ADModCtrlInhbn1VccIDT/deserializer_ADModCtrlInhbn1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ALgtStdFromWhlSpdSafe1ChkdIDT/deserializer_ALgtStdFromWhlSpdSafe1ChkdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccFusnTrfcReqIDT/deserializer_AccFusnTrfcReqIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccTarSeln1RecIDT/deserializer_AccTarSeln1RecIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AccrPedlPsd0IDT/deserializer_AccrPedlPsd0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AgDataRaw2Safe1VccIDT/deserializer_AgDataRaw2Safe1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AmbTRawIDT/deserializer_AmbTRawIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/AsyDataWithCmpSafe1ChkdIDT/deserializer_AsyDataWithCmpSafe1ChkdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BltLockStFrntIDT/deserializer_BltLockStFrntIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BrkPedlPsdRecIDT/deserializer_BrkPedlPsdRecIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/BrkPedlrRatIDT/deserializer_BrkPedlrRatIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/CamSts1IDT/deserializer_CamSts1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/CrossInfo1VccIDT/deserializer_CrossInfo1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DoorStsWithFacQlyIDT/deserializer_DoorStsWithFacQlyIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DrvrACCrsSetSpdReq1VccIDT/deserializer_DrvrACCrsSetSpdReq1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DrvrSteerActv1VccIDT/deserializer_DrvrSteerActv1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/DrvrSteerWhlHldGroup0IDT/deserializer_DrvrSteerWhlHldGroup0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EgoMotionIDT/deserializer_EgoMotionIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EscWarnIndcnReqRec1VccIDT/deserializer_EscWarnIndcnReqRec1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/EyeGaze3VccIDT/deserializer_EyeGaze3VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/IndcrTurnReqIDT/deserializer_IndcrTurnReqIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgStsIDT/deserializer_LppLaneChgStsIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/PinionSteerAgGroupIDT/deserializer_PinionSteerAgGroupIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/PtDrvrSetg1VccIDT/deserializer_PtDrvrSetg1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/RampInfo1VccIDT/deserializer_RampInfo1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/RoadSgnInfoActv0IDT/deserializer_RoadSgnInfoActv0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SideRdrSts2VccIDT/deserializer_SideRdrSts2VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SpdAlrmActvForRoadSgnInfo0IDT/deserializer_SpdAlrmActvForRoadSgnInfo0IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SteerWhlSnsrSafe1IDT/deserializer_SteerWhlSnsrSafe1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/SwtIndcr1VccIDT/deserializer_SwtIndcr1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TiGapPen1IDT/deserializer_TiGapPen1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TjaTrailBusIDT/deserializer_TjaTrailBusIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCCIDT/deserializer_ToSOCA_COMInfo1VCCIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_FunctionInfo1VCCIDT/deserializer_ToSOCA_FunctionInfo1VCCIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrfcLiActvStsIDT/deserializer_TrfcLiActvStsIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrfcLiWarnTyp1VccIDT/deserializer_TrfcLiWarnTyp1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TrsmParkLockdIDT/deserializer_TrsmParkLockdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/TurnIndcrMonostable1VccIDT/deserializer_TurnIndcrMonostable1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehBattU1VccIDT/deserializer_VehBattU1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehDynCtrlStsForALgtCmftRec1IDT/deserializer_VehDynCtrlStsForALgtCmftRec1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1IDT/deserializer_VehMNomRecsts_1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehModMngtGlbSafe1IDT/deserializer_VehModMngtGlbSafe1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehMtnStSafeGroup1IDT/deserializer_VehMtnStSafeGroup1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdIndcd1IDT/deserializer_VehSpdIndcd1IDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/VehSpdLgtSafe1ChkdIDT/deserializer_VehSpdLgtSafe1ChkdIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/Vin1VccIDT/deserializer_Vin1VccIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WhlInfoGroupIDT/deserializer_WhlInfoGroupIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/WipgInfoGroupIDT/deserializer_WipgInfoGroupIDT.h"
  "${CMAKE_CURRENT_LIST_DIR}/include/amsr/someip_protocol/internal/datatype_deserialization/s_EDRInfo_tIDT/deserializer_s_EDRInfo_tIDT.h"
  PROPERTIES
  GENERATED 1
)

# Add include directory of generated header file(s)
target_include_directories(${target} PRIVATE
  "${CMAKE_CURRENT_LIST_DIR}/include"
)


