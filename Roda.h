#ifndef RODA_H
#define RODA_H

#include <Arduino.h>

class Roda {
    int pin1, pin2;
    int velocidade;
    float constante;
    void acao();
  public:
    Roda();
    Roda(int pin1, int pin2, float constante);
    int get_velocidade();
    float get_constante();
    void set_velocidade(int velocidade);
    void set_constante(float constante);
};

#endif
