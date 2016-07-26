#ifndef CABECA_H
#define CABECA_H

//Download em https://github.com/filipeflop/Ultrasonic/archive/master.zip
//Tutorial em http://blog.filipeflop.com/sensores/sensor-ultrassonico-hc-sr04-ao-arduino.html
//Modelo: HC-SR04
// 1000 ms
#include <Ultrasonic.h>
#include <Servo.h>
#include "EnumConstants.h"

#ifndef RANGE_ANGULO_ESQUERDA_DEFAULT
#define RANGE_ANGULO_ESQUERDA_DEFAULT 180
#endif

#ifndef RANGE_ANGULO_REST_DEFAULT
#define RANGE_ANGULO_REST_DEFAULT 90
#endif

#ifndef RANGE_ANGULO_DIREITA_DEFAULT
#define RANGE_ANGULO_DIREITA_DEFAULT 0
#endif

class Cabeca {
private:
  Servo servo;
  Ultrasonic *ultrasom;
  int anguloRest;
public:
  Cabeca();
  Cabeca(int servoPin, int triggerPin, int echoPin);
  long getDistancia(Direcao direcao);
  long getDistancia();
  void setAnguloRest(int angulo);
  void setAngulo(int angulo);
};


#endif


