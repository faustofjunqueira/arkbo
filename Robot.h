#ifndef ROBOT_H
#define ROBOT_H

#include "Cabeca.h"
#include "Motor.h"

class Robot{
  Cabeca *cabeca;
  Motor *motor;
  long distanciaLimite;
  void alteraCaminho();
public:
  Robot();
  Robot(Cabeca *cabeca, Motor *motor, long distanciaLimite);
  void setup();
  void loop();
};

#endif
