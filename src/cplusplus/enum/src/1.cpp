/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-13 18:06:00
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git git config user.email & please set dead value or install git &
 * please set dead value or install git git config user.email & please set dead value or install git
 * & please set dead value or install git git config user.email & please set dead value or install
 * git & please set dead value or install git git config user.email & please set dead value or
 * install git & please set dead value or install git git config user.email & please set dead value
 * or install git & please set dead value or install git git config user.email & please set dead
 * value or install git & please set dead value or install git git config user.email & please set
 * dead value or install git & please set dead value or install git git config user.email & please
 * set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-13 18:23:34
 * @FilePath: /cplusplus/src/cplusplus/enum/src/1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <bitset>
#include <iostream>
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN (0x0000u)
/* motion type is moving traffic in the direction of ego driving. Target going forward */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING (0x0111u)
/* motion type is moving traffic in the direction of ego driving. Target not moving at the moment*/
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED (0x0112u)
/* motion type is moving traffic in the direction of ego driving. Target reversing */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING (0x0113u)
/* motion type is moving traffic in the opposite direction of ego driving */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING (0x0120u)
/* motion type is crossing traffic with respect to the ego driving direction */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING (0x0130u)
/* motion type is not moving and it will most likely stay like this */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY (0x0200u)

/************/
/* u16Class */
/************/
/* the object class could be determined */
#define JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN (0x0000u)
/* the object is no traffic participant but cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_UNKNOWN (0x0100u)
/* the object is an obstacle that may neither be overrun nor be underrun  (like trees, ...)*/
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_PATHBLOCKING (0x0110u)
/* the object is an obstacle that may be overrun (like cans, drain covers, ...*/
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_OVERRUNNABLE (0x0120u)
/* the object is an obstacle that may be underrun (like bridges, highway traffic signs, ...)*/
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_UNDERRUNNABLE (0x0130u)
/* the object is a vehicle that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN (0x0200u)
/* the object is a car */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR (0x0210u)
/* the object is a truck */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK (0x0220u)
/* the object is a trailer (the car or the truck pulling the trailer is a separate object) */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRAILER (0x0230u)
/* the object is a 3 wheeler that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_3WHEELER_UNKNOWN (0x0240u)
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_BUS (0x0250u)
/* the object is a 2 wheeler that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_UNKNOWN (0x0400u)
/* the object is a bicycle 目前类别当做Tricycle使用 */
#define JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE (0x0410u)
/* the object is a motor cycle */
#define JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE (0x0420u)
/* the object is a pedestrian that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN (0x1000u)
/* the object is a child */
#define JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_CHILD (0x1010u)
/* the object is an adult */
#define JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_ADULT (0x1020u)
/* the object is a animal that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_UNKNOWN (0x2000u)
/* the object is a large animal that poses a significant threat to traffic safety (e.g. Alces alces)
 */
#define JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_LARGE (0x2010u)
/* the object is a small animal that may be overrun in otherwise critical situations */
#define JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_SMALL (0x2020u)

#define JKOBJFUSN_TRACKABLE_U16CLASS_VRU \
  (JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN | JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_UNKNOWN)

int main(int argc, char const *argv[]) {
  std::cout << std::bitset<16>(JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN) << "\n";
  std::cout << std::bitset<16>(JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR) << "\n";
  std::cout << std::bitset<16>(JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK) << "\n";

  std::cout << std::bitset<16>(JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN) << "\n";
  std::cout << std::bitset<16>(JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE) << "\n";
  std::cout << std::bitset<16>(JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE) << "\n";
  return 0;
}
