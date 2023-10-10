/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:10:26
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-03-31 21:50:46
 */
// FrntCamObjList mFrntCamObjList;
//           for (size_t index = 0; index < 25; ++index) {
//             mFrntCamObjList.Objects[index].Angle                = 1.0 ;
//             mFrntCamObjList.Objects[index].AngleStdDev          = 2.0 ;
//             mFrntCamObjList.Objects[index].HeadingAngle         = 3.0 ;
//             mFrntCamObjList.Objects[index].HeadingAngleStdDev   = 4.0   ;
//             mFrntCamObjList.Objects[index].Height               = 5.0 ;
//             mFrntCamObjList.Objects[index].HeightStdDev         = 6.0 ;
//             mFrntCamObjList.Objects[index].Width                = 7.0 ;
//             mFrntCamObjList.Objects[index].WidthStdDev          = 8.0 ;
//             mFrntCamObjList.Objects[index].Length               = 9.0 ;
//             mFrntCamObjList.Objects[index].LengthStdDev         = 10.0 ;
//             mFrntCamObjList.Objects[index].LgtPos               = 11.0 ;
//             mFrntCamObjList.Objects[index].LgtPosStdDev         = 12.0 ;
//             mFrntCamObjList.Objects[index].LatPos               = 13.0 ;
//             mFrntCamObjList.Objects[index].LatPosStdDev         = 14.0 ;
//             mFrntCamObjList.Objects[index].LgtVel               = 15.0 ;
//             mFrntCamObjList.Objects[index].LgtVelStdDev         = 16.0 ;
//             mFrntCamObjList.Objects[index].LatVel               = 17.0 ;
//             mFrntCamObjList.Objects[index].LatVelStdDev         = 18.0 ;
//             mFrntCamObjList.Objects[index].LgtAcc               = 19.0 ;
//             mFrntCamObjList.Objects[index].LgtAccStdDev         = 20.0 ;
//             mFrntCamObjList.Objects[index].LatAcc               = 21.0 ;
//             mFrntCamObjList.Objects[index].LatAccStdDev         = 22.0 ;
//             mFrntCamObjList.Objects[index].LaneOffsetLeft       = 23.0 ;
//             mFrntCamObjList.Objects[index].LaneOffsetLeftStdDev = 24.0;
//             mFrntCamObjList.Objects[index].LaneOffsetRight      = 25.0 ;
//             mFrntCamObjList.Objects[index].LaneOffsetRightStdDev= 26.0;
//             mFrntCamObjList.Objects[index].Id                   = 27 ;
//             mFrntCamObjList.Objects[index].Type                 = 28 ;
//             mFrntCamObjList.Objects[index].ClassConfidence      = 29.0 ;
//             mFrntCamObjList.Objects[index].ExsistConfidence     = 30.0 ;
//             mFrntCamObjList.Objects[index].Pose                 = 31 ;
//             mFrntCamObjList.Objects[index].DetectionHistory     = 32    ;
//             mFrntCamObjList.Objects[index].LaneAssignment       = 33 ;
//             mFrntCamObjList.Objects[index].NearestSide          = 34 ;
//             mFrntCamObjList.Objects[index].TrackSts             = 35 ;
//             mFrntCamObjList.Objects[index].TurnIndicator        = 36 ;
//             mFrntCamObjList.Objects[index].Chks                 = 37 ;
//             mFrntCamObjList.Objects[index].Cntr                 = 38 ;
//             mFrntCamObjList.Objects[index].CmsConfidence        = 39 ;
//             mFrntCamObjList.Objects[index].ImgFrameCtr          = 40 ;
//             mFrntCamObjList.Objects[index].TimeStamp            = 41 ;
//         }

#ifndef COMMON_H
#define COMMON_H
#include <arpa/inet.h>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

static constexpr int PORT = 23333;
static constexpr char IP[] = "198.18.36.1";
static constexpr int BUFSIZE = 10240;

static void initAddr(struct sockaddr_in *addrIn, uint8_t family, in_addr_t addr,
                     uint16_t port)
{
  memset(addrIn, 0, sizeof(sockaddr_in));
  addrIn->sin_family = family;
  addrIn->sin_addr.s_addr = addr;
  addrIn->sin_port = htons(port);
}

namespace TCP
{
  enum
  {
    UPDATE_MESSGAE = 0,
  };
  struct MessageHead
  {
    int cmd;
    int size;
  };
};     // namespace TCP
#endif /* COMMON_H */
