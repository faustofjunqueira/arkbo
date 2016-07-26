#include "Cabeca.h"

Cabeca::Cabeca(){}

Cabeca::Cabeca(int servoPin, int triggerPin, int echoPin){
  servo.attach(servoPin);
  anguloRest = RANGE_ANGULO_REST_DEFAULT;
  ultrasom = new Ultrasonic(triggerPin, echoPin);
}

long Cabeca::getDistancia(Direcao direcao){
  if(direcao == ESQUERDA){
    setAngulo(RANGE_ANGULO_ESQUERDA_DEFAULT);
  }else{
    setAngulo(RANGE_ANGULO_DIREITA_DEFAULT);
  }
  delay(200);
  long distancia = ultrasom->timing();
  delay(300);
  setAngulo(anguloRest);
  delay(200);
  return distancia;
}

long Cabeca::getDistancia(){
  setAngulo(anguloRest);
  delay(200);
  long distancia = ultrasom->timing();
  delay(300);
  return distancia;
}

void Cabeca::setAnguloRest(int angulo){
  anguloRest = angulo;
}

void Cabeca::setAngulo(int angulo){
  servo.write(angulo);
}
