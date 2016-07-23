#ifndef RODA_H
#define RODA_H

class Roda {
    int velocidade;
    int constante;
  public:
    Roda();
    Roda(int velocidade, int constante);
    int get_velocidade();
    int get_constante();
    void set_velocidade(int velocidade);
    void set_constante(int constante);
};

#endif
