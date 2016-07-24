#include "Motor.h"

Motor::Motor(){}

Motor::Motor(Roda *resq, Roda *rdir): resq(resq), rdir(rdir), velocidade(VELOCIDADE_INICIAL_DEFAULT){}

void Motor::vira(Direcao direcao){
  anda(PONTO_MORTO);
  if(direcao == DIREITA) {
    resq->set_velocidade(0);
    rdir->set_velocidade(0);
  }else if(direcao == ESQUERDA) {
    resq->set_velocidade(0);
    rdir->set_velocidade(0);
  }
  anda(PONTO_MORTO);
}

void Motor::anda(Marcha marcha){
  if(marcha == FRENTE){
    resq->set_velocidade(velocidade);
    rdir->set_velocidade(velocidade);
  }else if(marcha == PONTO_MORTO){
    resq->set_velocidade(0);
    rdir->set_velocidade(0);
  }else if(marcha == RE){
    resq->set_velocidade(velocidade * -1);
    rdir->set_velocidade(velocidade * -1);
  }
}

void Motor::set_velocidade(int velocidade, int tempoDeCurva){
  this->velocidade = velocidade;
  this->tempoDeCurva = tempoDeCurva;
}