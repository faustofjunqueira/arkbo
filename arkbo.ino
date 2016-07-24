#include <Ultrasonic.h>
#include <Servo.h>
#include "Motor.h"

// Pinagem:
//       2 - Trig Ultrasom
//       3 - Echo Ultrasom
//       9 - Sinal Servo Motor
//     5,6 - Sinal Roda Direita
//   10,11 - Sinal Roda Esquerda

Motor motor(new Roda(10,11,.85), new Roda(5,6,1.0));

void setup() {
}

void loop() {
  motor.anda(FRENTE);
}

