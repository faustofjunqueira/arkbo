#include <Ultrasonic.h>
#include <Servo.h>
#include "Motor.h"
#include "Cabeca.h"

char trigPin = 2;
char echoPin = 7;
char servoPin = 9;
char pinRodaDireita1 = 5;
char pinRodaDireita2 = 6;
char pinRodaEsquerda1 = 11;
char pinRodaEsquerda2 = 3;
float constanteRodaEsquerda = 0.85;
float constanteRodaDireita = 1.0;

// Pinagem:
//       1 - Trig Ultrasom
//       0 - Echo Ultrasom
//       9 - Sinal Servo Motor
//     5,6 - Sinal Roda Direita
//   3,11 - Sinal Roda Esquerda

Motor *motor;
Cabeca *cabeca;
Servo servo;
void setup() {
  cabeca = new Cabeca(servoPin,trigPin,echoPin);
  motor = new Motor(new Roda(pinRodaDireita1,pinRodaDireita2,constanteRodaDireita), new Roda(pinRodaEsquerda1,pinRodaEsquerda2,constanteRodaEsquerda));
  cabeca->setAngulo(120);  
  motor->anda(RE);
}

void loop() {

}

