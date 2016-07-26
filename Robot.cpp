#include "Robot.h"

Robot::Robot(){}
Robot::Robot(Cabeca *cabeca, Motor *motor, long distanciaLimite): cabeca(cabeca), motor(motor), distanciaLimite(distanciaLimite){}

void Robot::setup(){
  cabeca->setAngulo(90);
  motor->set_velocidade(VELOCIDADE_INICIAL_DEFAULT, VELOCIDADE_CURVA_INICIAL_DEFAULT);
  motor->anda(FRENTE);
}

void Robot::alteraCaminho(){
  long distanciaDireita = cabeca->getDistancia(DIREITA);
  long distanciaEsquerda = cabeca->getDistancia(ESQUERDA);
  
  if(distanciaDireita > distanciaEsquerda){
    motor->vira(DIREITA);
  }else if(distanciaDireita < distanciaEsquerda){
    motor->vira(ESQUERDA);
  }else if(distanciaDireita == distanciaEsquerda){
    long rand = random(1,3); // random entre 1 e 2
    if(rand == 1){
      motor->vira(DIREITA);
    }else{
      motor->vira(ESQUERDA);  
    }
  }
  
  long distanciaFrontal = cabeca->getDistancia();
  if(distanciaFrontal <= distanciaLimite){
    alteraCaminho();
  }
}

void Robot::loop(){
  long distancia = cabeca->getDistancia();
  if(distancia <= distanciaLimite){
    motor->anda(PONTO_MORTO);
    delay(200);
    
    motor->anda(RE);
    delay(1000);
    motor->anda(PONTO_MORTO);
    delay(200);
    alteraCaminho();
    delay(200);
    motor->anda(FRENTE);
  }
}
