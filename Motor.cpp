#include "Motor.h"

Motor::Motor(){}

Motor::Motor(Roda *resq, Roda *rdir): resq(resq), rdir(rdir), velocidade(VELOCIDADE_INICIAL_DEFAULT), velocidadeDeCurva(VELOCIDADE_CURVA_INICIAL_DEFAULT){}

void Motor::vira(Direcao direcao){
  anda(PONTO_MORTO);
  delay(200);
  if(direcao == DIREITA) {
    resq->set_velocidade(velocidadeDeCurva);
    rdir->set_velocidade(velocidadeDeCurva * -1);
  }else if(direcao == ESQUERDA) {
    resq->set_velocidade(velocidadeDeCurva * -1);
    rdir->set_velocidade(velocidadeDeCurva);
  }
  delay(580);
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

void Motor::set_velocidade(int velocidade, int velocidadeDeCurva){
  this->velocidade = velocidade;
  this->velocidadeDeCurva = velocidadeDeCurva;
}

Roda *Motor::get_roda(Direcao direcao){
  if(direcao == DIREITA){
    return rdir;
  }else{
    return resq;
  }
}
