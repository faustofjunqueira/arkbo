#include "Robot.h"

Robot::Robot(){}
Robot::Robot(Cabeca *cabeca, Motor *motor, long distanciaLimite): cabeca(cabeca), motor(motor), distanciaLimite(distanciaLimite){}

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
}

void Robot::loop(){
  long distancia = cabeca->getDistancia();
  if(distancia <= distanciaLimite){
    alteraCaminho();
  }
}
