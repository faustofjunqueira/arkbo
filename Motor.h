#ifndef MOTOR_H
#define MOTOR_H

#include "EnumConstants.h"
#include "Roda.h"

#ifndef VELOCIDADE_INICIAL_DEFAULT
#define VELOCIDADE_INICIAL_DEFAULT 100
#endif

#ifndef TEMPO_CURVA_INICIA_DEFAULT
#define TEMPO_CURVA_INICIA_DEFAULT 300
#endif

class Motor {
  Roda *resq;
  Roda *rdir;
  int velocidade;
  int tempoDeCurva;
public:
  Motor();
  Motor(Roda *resq, Roda *rdir);
  void vira(Direcao direcao);
  void anda(Marcha marcha);
  void set_velocidade(int velocidade, int tempoDeCurva);
  Roda *get_roda(Direcao direcao);
};


#endif
