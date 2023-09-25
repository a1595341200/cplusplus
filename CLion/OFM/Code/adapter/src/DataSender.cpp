#include "DataSender.h"
DataSender::DataSender()
{
}

DataSender::~DataSender()
{
}

FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc& DataSender::get_FrontFourDRadarSts() {
    return mFrontFourDRadarSts;
}
void DataSender::set_FrontFourDRadarSts(FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc& frontFourDRadarSts) {
    mFrontFourDRadarSts = frontFourDRadarSts;
}

FourDRadarECUSts::FourDRadarECUSts& DataSender::get_FourDRadarECUSts() {
    return mFourDRadarECUSts;
}
void DataSender::set_FourDRadarECUSts(FourDRadarECUSts::FourDRadarECUSts& fourDRadarECUSts) {
    mFourDRadarECUSts = fourDRadarECUSts;
}


SOCFusedSts::SOCFusedSts& DataSender::get_SOCFusedSts() {
    return mSOCFusedSts;
}
void DataSender::set_SOCFusedSts(SOCFusedSts::SOCFusedSts& sOCFusedSts) {
    mSOCFusedSts = 2;
}

ObjGroup2Vccs_11::ObjGroup2Vccs_11& DataSender::get_FusedTargets_1_11() {
    return mFusedTargets_1_11;

}
void DataSender::set_FusedTargets_1_11(ObjGroup2Vccs_11::ObjGroup2Vccs_11& fusedTargets_1_11) {
    mFusedTargets_1_11 = fusedTargets_1_11;
}
ObjGroup2Vccs_11::ObjGroup2Vccs_11& DataSender::get_FusedTargets_12_22() {
    return mFusedTargets_12_22;
}
void DataSender::set_FusedTargets_12_22(ObjGroup2Vccs_11::ObjGroup2Vccs_11& fusedTargets_12_22) {
    mFusedTargets_12_22 = fusedTargets_12_22;
}

ObjGroup2Vccs_10::ObjGroup2Vccs_10& DataSender::get_FusedTargets_23_32() {
    return mFusedTargets_23_32;
}
void DataSender::set_FusedTargets_23_32(ObjGroup2Vccs_10::ObjGroup2Vccs_10& fusedTargets_23_32) {
    mFusedTargets_23_32 = fusedTargets_23_32;
}


