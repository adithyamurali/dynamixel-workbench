/*******************************************************************************
* Copyright 2018 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Authors: Taehun Lim (Darby) */

#ifndef DYNAMIXEL_WORKBENCH_H_
#define DYNAMIXEL_WORKBENCH_H_

#include "dynamixel_driver.h"

class DynamixelWorkbench : public DynamixelDriver
{
 public:
  DynamixelWorkbench();
  ~DynamixelWorkbench();

  bool torque(uint8_t id, bool onoff, const char **log = NULL);
  bool torqueOn(uint8_t id, const char **log = NULL);
  bool torqueOff(uint8_t id, const char **log = NULL);

  bool setID(uint8_t id, uint8_t new_id, const char **log = NULL);
  bool setBaud(uint8_t id, uint32_t new_baudrate, const char **log = NULL);

  bool led(uint8_t id, bool onoff, const char **log = NULL);
  bool ledOn(uint8_t id, const char **log = NULL);
  bool ledOff(uint8_t id, const char **log = NULL);

  // bool changeWheelDirection(void);
  // bool setTimeBasedControl(void);

  // bool setCurrentControlMode(uint8_t id);
  // bool setVelocityControlMode(uint8_t id);
  bool setPositionControlMode(uint8_t id, const char **log = NULL);  
  // bool setExtendedPositionControlMode();
  // bool setCurrentBasedPositionControlMode(uint8_t id);
  // bool pwmControlMode();

  bool jointMode(uint8_t id, uint32_t velocity = 0, uint32_t acceleration = 0, const char **log = NULL);
  // bool wheelMode(uint8_t id, uint16_t vel = 0, uint16_t acc = 0);
  // bool currentMode(uint8_t id, uint8_t cur = 50);
  // bool positionBasedPositionMode(uint8_t id, uint8_t cur = 50);

  // bool goalPosition(uint8_t id, int32_t goal);
  // bool goalSpeed(uint8_t id, int32_t goal);

  // int32_t convertRadian2Value(uint8_t id, float radian);
  // float convertValue2Radian(uint8_t id, int32_t value);

  // int32_t convertRadian2Value(float radian, int32_t max_position, int32_t min_position, float max_radian = 3.14, float min_radian = -3.14);
  // float convertValue2Radian(int32_t value, int32_t max_position, int32_t min_position, float max_radian = 3.14, float min_radian = -3.14);

  // int32_t convertVelocity2Value(uint8_t id, float velocity);
  // float convertValue2Velocity(uint8_t id, int32_t value);

  // int16_t convertTorque2Value(uint8_t id, float torque);
  // float convertValue2Torque(uint8_t id, int16_t value);
};

#endif /*DYNAMIXEL_WORKBENCH_H_*/
