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

long distanciaLimite = 1000;

void setup() {

  arkbo = new Robot(new Cabeca(servoPin,trigPin,echoPin), 
                    new Motor(new Roda(pinRodaDireita1,pinRodaDireita2,constanteRodaDireita), new Roda(pinRodaEsquerda1,pinRodaEsquerda2,constanteRodaEsquerda)), 
                    distanciaLimite);  

  arkbo->setup();

}

void loop() {
  arkbo->loop();
}

