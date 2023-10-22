#ifndef _OFM_DATARECEIVER_H_
#define _OFM_DATARECEIVER_H_
#include <mutex>

#include "Converters_types.h"
#include "JkObjFusn_EgoMotionType.h"

class DataReceiver {
 public:
  DataReceiver();
  ~DataReceiver();

  FrntRdrObjList_4D get_FrntRdrObjList_4D();
  void set_FrntRdrObjList_4D(FrntRdrObjList_4D);
  JkObjFusn_EgoMotionType get_JkObjFusn_EgoMotionType();
  void set_JkObjFusn_EgoMotionType(JkObjFusn_EgoMotionType);
  FrntCamObjList get_FrntCamObjList();
  void set_FrntCamObjList(FrntCamObjList);

  AroundCamObjList get_AroundCamObjListFL();
  void set_AroundCamObjListFL(AroundCamObjList);
  AroundCamObjList get_AroundCamObjListFR();
  void set_AroundCamObjListFR(AroundCamObjList);
  AroundCamObjList get_AroundCamObjListRL();
  void set_AroundCamObjListRL(AroundCamObjList);
  AroundCamObjList get_AroundCamObjListRR();
  void set_AroundCamObjListRR(AroundCamObjList);

 private:

  /* OFM input data */
  FrntRdrObjList_4D mFrntRdrObjList_4D;
  JkObjFusn_EgoMotionType mEgoMotionType;
  FrntCamObjList mFrntCamObjList;
  AroundCamObjList aroundCamObjListFL_;
  AroundCamObjList aroundCamObjListFR_;
  AroundCamObjList aroundCamObjListRL_;
  AroundCamObjList aroundCamObjListRR_;
};

#endif  // _OFM_DATARECEIVER_H_
