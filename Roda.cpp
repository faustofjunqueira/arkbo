#include "Roda.h"

Roda::Roda(){}

Roda::Roda(int velocidade, int constante){
  this->velocidade = velocidade;
  this->constante = constante;
}

void Roda::set_velocidade(int velocidade){
  this->velocidade = velocidade;
}

void Roda::set_constante(int constante){
  this->constante = constante;
}

int Roda::get_velocidade(){
  return this->velocidade;
}

int Roda::get_constante(){
  return this->constante;
}
