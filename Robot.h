#ifndef ROBOT_H
#define ROBOT_H

#include "Cabeca.h"
#include "Motor.h"

class Robot{
  Cabeca *cabeca;
  Motor *motor;
public:
  Robot();
  Robot(Cabeca *cabeca, Motor *motor);
  void loop();
};

#endif
