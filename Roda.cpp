#include "Roda.h"

Roda::Roda(){}

Roda::Roda(int pin1, int pin2, float constante): pin1(pin1), pin2(pin2), constante(constante), velocidade(0) {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
}

void Roda::set_velocidade(int velocidade){
  this->velocidade = velocidade;
  acao();
}

void Roda::set_constante(float constante){
  this->constante = constante;
  acao();
}

int Roda::get_velocidade(){
  return this->velocidade;
}

float Roda::get_constante(){
  return this->constante;
}

void Roda::acao(){
  if(velocidade > 0){
    analogWrite(pin1, (int) (constante * velocidade));
    analogWrite(pin2, 0);
  }else{
    analogWrite(pin2, (int) (constante * abs(velocidade)));
    analogWrite(pin1, 0); 
  }
}
