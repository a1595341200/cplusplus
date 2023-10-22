#include "DataReceiver.h"
extern uint32 count;
DataReceiver::DataReceiver(){}

DataReceiver::~DataReceiver() {}

FrntRdrObjList_4D DataReceiver::get_FrntRdrObjList_4D() {
  return mFrntRdrObjList_4D;
}
void DataReceiver::set_FrntRdrObjList_4D(FrntRdrObjList_4D frntRdrObjList_4D) {
  mFrntRdrObjList_4D = frntRdrObjList_4D;
  // for (int index = 0; index < 6; index++) {
  //     log_.LogInfo() << "SetFrntRdrObjList4D data:index" << index
  //                 << "ID : " << mFrntRdrObjList_4D.Objects[index].ID
  //                 << "ObstacleProbability : " <<
  //                 mFrntRdrObjList_4D.Objects[index].ObstacleProbability
  //                 << "VabsX : " << mFrntRdrObjList_4D.Objects[index].VabsX
  //                 << "VabsY : " << mFrntRdrObjList_4D.Objects[index].VabsY
  //                 << "ValidFlag : " <<
  //                 mFrntRdrObjList_4D.Objects[index].ValidFlag
  //                 << "Classification : " <<
  //                 mFrntRdrObjList_4D.Objects[index].Classification
  //                 << "DynamicProperty : " <<
  //                 mFrntRdrObjList_4D.Objects[index].DynamicProperty
  //                 << "DistY : " << mFrntRdrObjList_4D.Objects[index].DistY
  //                 << "DistX : " << mFrntRdrObjList_4D.Objects[index].DistX
  //                 << "LifeCycles : " <<
  //                 mFrntRdrObjList_4D.Objects[index].LifeCycles
  //                 << "ProbabilityOfExistence : " <<
  //                 mFrntRdrObjList_4D.Objects[index].ProbabilityOfExistence
  //                 << "HeadingAngle : " <<
  //                 mFrntRdrObjList_4D.Objects[index].HeadingAngle
  //                 << "TargetClassificationConfidence : " <<
  //                 mFrntRdrObjList_4D.Objects[index].TargetClassificationConfidence
  //                 << "UpdateFlag : " <<
  //                 mFrntRdrObjList_4D.Objects[index].UpdateFlag
  //                 << "Cntr : " << mFrntRdrObjList_4D.Objects[index].Cntr;

  // }
}
JkObjFusn_EgoMotionType DataReceiver::get_JkObjFusn_EgoMotionType() {
  return mEgoMotionType;
}
void DataReceiver::set_JkObjFusn_EgoMotionType(
    JkObjFusn_EgoMotionType egoMotionTyp) {
  mEgoMotionType = egoMotionTyp;
  // log_.LogInfo() << "set_JkObjFusn_EgoMotionType :"
  //                << " bIsValid:" << mEgoMotionType.bIsValid
  //                << " f32Acc:" << mEgoMotionType.f32Acc
  //                << " f32Age:" << mEgoMotionType.f32Age
  //                << " f32Speed:" << mEgoMotionType.f32Speed
  //                << " f32YawRate:" << mEgoMotionType.f32YawRate;
}
FrntCamObjList DataReceiver::get_FrntCamObjList() { return mFrntCamObjList; }
void DataReceiver::set_FrntCamObjList(FrntCamObjList frntCamObjList) {
  // for (int index = 0; index < 3;index++) {
  // if (index < 3) {
  //      log_.LogInfo() << " set_FrntCamObjList frntCamObjList:"
  //                     << " count : "                                       <<
  //                     count
  //                     << " index : "                                       <<
  //                     index
  //                     << " Angle : "                                       <<
  //                     _frntCamObjList.Objects[index].Angle
  //                     << " AngleStdDev :  "                                <<
  //                     _frntCamObjList.Objects[index].AngleStdDev
  //                     << " HeadingAngle : "                                <<
  //                     _frntCamObjList.Objects[index].HeadingAngle
  //                     << " HeadingAngleStdDev : "                          <<
  //                     _frntCamObjList.Objects[index].HeadingAngleStdDev
  //                     << " Height : "                                      <<
  //                     _frntCamObjList.Objects[index].Height
  //                     << " HeightStdDev : "                                <<
  //                     _frntCamObjList.Objects[index].HeightStdDev
  //                     << " Width : "                                       <<
  //                     _frntCamObjList.Objects[index].Width
  //                     << " WidthStdDev : "                                 <<
  //                     _frntCamObjList.Objects[index].WidthStdDev
  //                     << " Length : "                                      <<
  //                     _frntCamObjList.Objects[index].Length
  //                     << " LengthStdDev : "                                <<
  //                     _frntCamObjList.Objects[index].LengthStdDev
  //                     << " LgtPos : "                                      <<
  //                     _frntCamObjList.Objects[index].LgtPos
  //                     << " LgtPosStdDev : "                                <<
  //                     _frntCamObjList.Objects[index].LgtPosStdDev
  //                     << " LatPos : "                                      <<
  //                     _frntCamObjList.Objects[index].LatPos
  //                     << " LatPosStdDev : "                                <<
  //                     _frntCamObjList.Objects[index].LatPosStdDev
  //                     << " LgtVel : "                                      <<
  //                     _frntCamObjList.Objects[index].LgtVel
  //                     << " LgtVelStdDev : "                                <<
  //                     _frntCamObjList.Objects[index].LgtVelStdDev
  //                     << " LatVel : "                                      <<
  //                     _frntCamObjList.Objects[index].LatVel
  //                     << " LatVelStdDev : "                                <<
  //                     _frntCamObjList.Objects[index].LatVelStdDev
  //                     << " LaneOffsetLeft : "                              <<
  //                     _frntCamObjList.Objects[index].LaneOffsetLeft
  //                     << " LaneOffsetLeftStdDev : "                        <<
  //                     _frntCamObjList.Objects[index].LaneOffsetLeftStdDev
  //                     << " LaneOffsetRight : "                             <<
  //                     _frntCamObjList.Objects[index].LaneOffsetRight
  //                     << " LaneOffsetRightStdDev : "                       <<
  //                     _frntCamObjList.Objects[index].LaneOffsetRightStdDev
  //                     << " Id : "                                          <<
  //                     _frntCamObjList.Objects[index].Id
  //                     << " Type : "                                        <<
  //                     _frntCamObjList.Objects[index].Type
  //                     << " ClassConfidence : "                             <<
  //                     _frntCamObjList.Objects[index].ClassConfidence
  //                     << " ExsistConfidence : "                            <<
  //                     _frntCamObjList.Objects[index].ExsistConfidence
  //                     << " Pose : "                                        <<
  //                     _frntCamObjList.Objects[index].Pose
  //                     << " DetectionHistory : "                            <<
  //                     _frntCamObjList.Objects[index].DetectionHistory
  //                     << " LaneAssignment : "                              <<
  //                     _frntCamObjList.Objects[index].LaneAssignment
  //                     << " NearestSide : "                                 <<
  //                     _frntCamObjList.Objects[index].NearestSide
  //                     << " TrackSts : "                                    <<
  //                     _frntCamObjList.Objects[index].TrackSts
  //                     << " TurnIndicator : "                               <<
  //                     _frntCamObjList.Objects[index].TurnIndicator
  //                     << " Chks : "                                        <<
  //                     _frntCamObjList.Objects[index].Chks
  //                     << " Cntr : "                                        <<
  //                     _frntCamObjList.Objects[index].Cntr
  //                     << " CmsConfidence : "                               <<
  //                     _frntCamObjList.Objects[index].CmsConfidence
  //                     << " ImgFrameCtr : "                                 <<
  //                     _frntCamObjList.Objects[index].ImgFrameCtr
  //                     << " TimeStamp : "                                   <<
  //                     _frntCamObjList.Objects[index].TimeStamp;

  //     }
  // }
  //    FrntCamObjList frntCamObjList = _frntCamObjList;

  for (size_t index = 0; index < 25; ++index) {
    mFrntCamObjList.Objects[index].Angle = frntCamObjList.Objects[index].Angle;
    mFrntCamObjList.Objects[index].AngleStdDev =
        frntCamObjList.Objects[index].AngleStdDev;
    mFrntCamObjList.Objects[index].HeadingAngle =
        frntCamObjList.Objects[index].HeadingAngle;
    mFrntCamObjList.Objects[index].HeadingAngleStdDev =
        frntCamObjList.Objects[index].HeadingAngleStdDev;
    mFrntCamObjList.Objects[index].Height =
        frntCamObjList.Objects[index].Height;
    mFrntCamObjList.Objects[index].HeightStdDev =
        frntCamObjList.Objects[index].HeightStdDev;
    mFrntCamObjList.Objects[index].Width = frntCamObjList.Objects[index].Width;
    mFrntCamObjList.Objects[index].WidthStdDev =
        frntCamObjList.Objects[index].WidthStdDev;
    mFrntCamObjList.Objects[index].Length =
        frntCamObjList.Objects[index].Length;
    mFrntCamObjList.Objects[index].LengthStdDev =
        frntCamObjList.Objects[index].LengthStdDev;
    mFrntCamObjList.Objects[index].LgtPos =
        frntCamObjList.Objects[index].LgtPos;
    mFrntCamObjList.Objects[index].LgtPosStdDev =
        frntCamObjList.Objects[index].LgtPosStdDev;
    mFrntCamObjList.Objects[index].LatPos =
        frntCamObjList.Objects[index].LatPos;
    mFrntCamObjList.Objects[index].LatPosStdDev =
        frntCamObjList.Objects[index].LatPosStdDev;
    mFrntCamObjList.Objects[index].LgtVel =
        frntCamObjList.Objects[index].LgtVel;
    mFrntCamObjList.Objects[index].LgtVelStdDev =
        frntCamObjList.Objects[index].LgtVelStdDev;
    mFrntCamObjList.Objects[index].LatVel =
        frntCamObjList.Objects[index].LatVel;
    mFrntCamObjList.Objects[index].LatVelStdDev =
        frntCamObjList.Objects[index].LatVelStdDev;
    mFrntCamObjList.Objects[index].LgtAcc =
        frntCamObjList.Objects[index].LgtAcc;
    mFrntCamObjList.Objects[index].LgtAccStdDev =
        frntCamObjList.Objects[index].LgtAccStdDev;
    mFrntCamObjList.Objects[index].LatAcc =
        frntCamObjList.Objects[index].LatAcc;
    mFrntCamObjList.Objects[index].LatAccStdDev =
        frntCamObjList.Objects[index].LatAccStdDev;
    mFrntCamObjList.Objects[index].LaneOffsetLeft =
        frntCamObjList.Objects[index].LaneOffsetLeft;
    mFrntCamObjList.Objects[index].LaneOffsetLeftStdDev =
        frntCamObjList.Objects[index].LaneOffsetLeftStdDev;
    mFrntCamObjList.Objects[index].LaneOffsetRight =
        frntCamObjList.Objects[index].LaneOffsetRight;
    mFrntCamObjList.Objects[index].LaneOffsetRightStdDev =
        frntCamObjList.Objects[index].LaneOffsetRightStdDev;
    mFrntCamObjList.Objects[index].Id = frntCamObjList.Objects[index].Id;
    mFrntCamObjList.Objects[index].Type = frntCamObjList.Objects[index].Type;
    mFrntCamObjList.Objects[index].ClassConfidence =
        frntCamObjList.Objects[index].ClassConfidence;
    mFrntCamObjList.Objects[index].ExsistConfidence =
        frntCamObjList.Objects[index].ExsistConfidence;
    mFrntCamObjList.Objects[index].Pose = frntCamObjList.Objects[index].Pose;
    mFrntCamObjList.Objects[index].DetectionHistory =
        frntCamObjList.Objects[index].DetectionHistory;
    mFrntCamObjList.Objects[index].LaneAssignment =
        frntCamObjList.Objects[index].LaneAssignment;
    mFrntCamObjList.Objects[index].NearestSide =
        frntCamObjList.Objects[index].NearestSide;
    mFrntCamObjList.Objects[index].TrackSts =
        frntCamObjList.Objects[index].TrackSts;
    mFrntCamObjList.Objects[index].TurnIndicator =
        frntCamObjList.Objects[index].TurnIndicator;
    mFrntCamObjList.Objects[index].Chks = frntCamObjList.Objects[index].Chks;
    mFrntCamObjList.Objects[index].Cntr = frntCamObjList.Objects[index].Cntr;
    mFrntCamObjList.Objects[index].CmsConfidence =
        frntCamObjList.Objects[index].CmsConfidence;
    mFrntCamObjList.Objects[index].ImgFrameCtr =
        frntCamObjList.Objects[index].ImgFrameCtr;
    mFrntCamObjList.Objects[index].TimeStamp =
        frntCamObjList.Objects[index].TimeStamp;
    //@TODO lzc
    // frntCamObjList_.Objects[index].Age =
    // /*(float32)*/((*samples[0])[index].Age_ref);
    // frntCamObjList_.Objects[index].Valid =
    // /*(float32)*/((*samples[0])[index].Valid_ref);

    // if (index < 3) {
    //  log_.LogInfo() << " set_FrntCamObjList frntCamObjList:"
    //                 << " count : "                                       <<
    //                 count
    //                 << " index : "                                       <<
    //                 index
    //                 << " Angle : "                                       <<
    //                 frntCamObjList.Objects[index].Angle
    //                 << " AngleStdDev :  "                                <<
    //                 frntCamObjList.Objects[index].AngleStdDev
    //                 << " HeadingAngle : "                                <<
    //                 frntCamObjList.Objects[index].HeadingAngle
    //                 << " HeadingAngleStdDev : "                          <<
    //                 frntCamObjList.Objects[index].HeadingAngleStdDev
    //                 << " Height : "                                      <<
    //                 frntCamObjList.Objects[index].Height
    //                 << " HeightStdDev : "                                <<
    //                 frntCamObjList.Objects[index].HeightStdDev
    //                 << " Width : "                                       <<
    //                 frntCamObjList.Objects[index].Width
    //                 << " WidthStdDev : "                                 <<
    //                 frntCamObjList.Objects[index].WidthStdDev
    //                 << " Length : "                                      <<
    //                 frntCamObjList.Objects[index].Length
    //                 << " LengthStdDev : "                                <<
    //                 frntCamObjList.Objects[index].LengthStdDev
    //                 << " LgtPos : "                                      <<
    //                 frntCamObjList.Objects[index].LgtPos
    //                 << " LgtPosStdDev : "                                <<
    //                 frntCamObjList.Objects[index].LgtPosStdDev
    //                 << " LatPos : "                                      <<
    //                 frntCamObjList.Objects[index].LatPos
    //                 << " LatPosStdDev : "                                <<
    //                 frntCamObjList.Objects[index].LatPosStdDev
    //                 << " LgtVel : "                                      <<
    //                 frntCamObjList.Objects[index].LgtVel
    //                 << " LgtVelStdDev : "                                <<
    //                 frntCamObjList.Objects[index].LgtVelStdDev
    //                 << " LatVel : "                                      <<
    //                 frntCamObjList.Objects[index].LatVel
    //                 << " LatVelStdDev : "                                <<
    //                 frntCamObjList.Objects[index].LatVelStdDev
    //                 << " LaneOffsetLeft : "                              <<
    //                 frntCamObjList.Objects[index].LaneOffsetLeft
    //                 << " LaneOffsetLeftStdDev : "                        <<
    //                 frntCamObjList.Objects[index].LaneOffsetLeftStdDev
    //                 << " LaneOffsetRight : "                             <<
    //                 frntCamObjList.Objects[index].LaneOffsetRight
    //                 << " LaneOffsetRightStdDev : "                       <<
    //                 frntCamObjList.Objects[index].LaneOffsetRightStdDev
    //                 << " Id : "                                          <<
    //                 frntCamObjList.Objects[index].Id
    //                 << " Type : "                                        <<
    //                 frntCamObjList.Objects[index].Type
    //                 << " ClassConfidence : "                             <<
    //                 frntCamObjList.Objects[index].ClassConfidence
    //                 << " ExsistConfidence : "                            <<
    //                 frntCamObjList.Objects[index].ExsistConfidence
    //                 << " Pose : "                                        <<
    //                 frntCamObjList.Objects[index].Pose
    //                 << " DetectionHistory : "                            <<
    //                 frntCamObjList.Objects[index].DetectionHistory
    //                 << " LaneAssignment : "                              <<
    //                 frntCamObjList.Objects[index].LaneAssignment
    //                 << " NearestSide : "                                 <<
    //                 frntCamObjList.Objects[index].NearestSide
    //                 << " TrackSts : "                                    <<
    //                 frntCamObjList.Objects[index].TrackSts
    //                 << " TurnIndicator : "                               <<
    //                 frntCamObjList.Objects[index].TurnIndicator
    //                 << " Chks : "                                        <<
    //                 frntCamObjList.Objects[index].Chks
    //                 << " Cntr : "                                        <<
    //                 frntCamObjList.Objects[index].Cntr
    //                 << " CmsConfidence : "                               <<
    //                 frntCamObjList.Objects[index].CmsConfidence
    //                 << " ImgFrameCtr : "                                 <<
    //                 frntCamObjList.Objects[index].ImgFrameCtr
    //                 << " TimeStamp : "                                   <<
    //                 frntCamObjList.Objects[index].TimeStamp;

    // }

    // if (index < 3) {
    //  log_.LogInfo() << "set_FrntCamObjList mFrntCamObjList :"
    //                 << " count : "                                       <<
    //                 count
    //                 << " index : "                                       <<
    //                 index
    //                 << " Angle : "                                       <<
    //                 mFrntCamObjList.Objects[index].Angle
    //                 << " AngleStdDev :  "                                <<
    //                 mFrntCamObjList.Objects[index].AngleStdDev
    //                 << " HeadingAngle : "                                <<
    //                 mFrntCamObjList.Objects[index].HeadingAngle
    //                 << " HeadingAngleStdDev : "                          <<
    //                 mFrntCamObjList.Objects[index].HeadingAngleStdDev
    //                 << " Height : "                                      <<
    //                 mFrntCamObjList.Objects[index].Height
    //                 << " HeightStdDev : "                                <<
    //                 mFrntCamObjList.Objects[index].HeightStdDev
    //                 << " Width : "                                       <<
    //                 mFrntCamObjList.Objects[index].Width
    //                 << " WidthStdDev : "                                 <<
    //                 mFrntCamObjList.Objects[index].WidthStdDev
    //                 << " Length : "                                      <<
    //                 mFrntCamObjList.Objects[index].Length
    //                 << " LengthStdDev : "                                <<
    //                 mFrntCamObjList.Objects[index].LengthStdDev
    //                 << " LgtPos : "                                      <<
    //                 mFrntCamObjList.Objects[index].LgtPos
    //                 << " LgtPosStdDev : "                                <<
    //                 mFrntCamObjList.Objects[index].LgtPosStdDev
    //                 << " LatPos : "                                      <<
    //                 mFrntCamObjList.Objects[index].LatPos
    //                 << " LatPosStdDev : "                                <<
    //                 mFrntCamObjList.Objects[index].LatPosStdDev
    //                 << " LgtVel : "                                      <<
    //                 mFrntCamObjList.Objects[index].LgtVel
    //                 << " LgtVelStdDev : "                                <<
    //                 mFrntCamObjList.Objects[index].LgtVelStdDev
    //                 << " LatVel : "                                      <<
    //                 mFrntCamObjList.Objects[index].LatVel
    //                 << " LatVelStdDev : "                                <<
    //                 mFrntCamObjList.Objects[index].LatVelStdDev
    //                 << " LaneOffsetLeft : "                              <<
    //                 mFrntCamObjList.Objects[index].LaneOffsetLeft
    //                 << " LaneOffsetLeftStdDev : "                        <<
    //                 mFrntCamObjList.Objects[index].LaneOffsetLeftStdDev
    //                 << " LaneOffsetRight : "                             <<
    //                 mFrntCamObjList.Objects[index].LaneOffsetRight
    //                 << " LaneOffsetRightStdDev : "                       <<
    //                 mFrntCamObjList.Objects[index].LaneOffsetRightStdDev
    //                 << " Id : "                                          <<
    //                 mFrntCamObjList.Objects[index].Id
    //                 << " Type : "                                        <<
    //                 mFrntCamObjList.Objects[index].Type
    //                 << " ClassConfidence : "                             <<
    //                 mFrntCamObjList.Objects[index].ClassConfidence
    //                 << " ExsistConfidence : "                            <<
    //                 mFrntCamObjList.Objects[index].ExsistConfidence
    //                 << " Pose : "                                        <<
    //                 mFrntCamObjList.Objects[index].Pose
    //                 << " DetectionHistory : "                            <<
    //                 mFrntCamObjList.Objects[index].DetectionHistory
    //                 << " LaneAssignment : "                              <<
    //                 mFrntCamObjList.Objects[index].LaneAssignment
    //                 << " NearestSide : "                                 <<
    //                 mFrntCamObjList.Objects[index].NearestSide
    //                 << " TrackSts : "                                    <<
    //                 mFrntCamObjList.Objects[index].TrackSts
    //                 << " TurnIndicator : "                               <<
    //                 mFrntCamObjList.Objects[index].TurnIndicator
    //                 << " Chks : "                                        <<
    //                 mFrntCamObjList.Objects[index].Chks
    //                 << " Cntr : "                                        <<
    //                 mFrntCamObjList.Objects[index].Cntr
    //                 << " CmsConfidence : "                               <<
    //                 mFrntCamObjList.Objects[index].CmsConfidence
    //                 << " ImgFrameCtr : "                                 <<
    //                 mFrntCamObjList.Objects[index].ImgFrameCtr
    //                 << " TimeStamp : "                                   <<
    //                 mFrntCamObjList.Objects[index].TimeStamp;
    // }
  }
}

void DataReceiver::set_AroundCamObjListFL(AroundCamObjList aroundCamObjListFL) {
  aroundCamObjListFL_ = aroundCamObjListFL;
}
void DataReceiver::set_AroundCamObjListFR(AroundCamObjList aroundCamObjListFR) {
  aroundCamObjListFR_ = aroundCamObjListFR;
}
void DataReceiver::set_AroundCamObjListRL(AroundCamObjList aroundCamObjListRL) {
  aroundCamObjListRL_ = aroundCamObjListRL;
}
void DataReceiver::set_AroundCamObjListRR(AroundCamObjList aroundCamObjListRR) {
  aroundCamObjListRR_ = aroundCamObjListRR;
}
AroundCamObjList DataReceiver::get_AroundCamObjListFL() {
  return aroundCamObjListFL_;
}
AroundCamObjList DataReceiver::get_AroundCamObjListFR() {
  return aroundCamObjListFR_;
}
AroundCamObjList DataReceiver::get_AroundCamObjListRL() {
  return aroundCamObjListRL_;
}
AroundCamObjList DataReceiver::get_AroundCamObjListRR() {
  return aroundCamObjListRR_;
}
