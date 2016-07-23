#include "Roda.h"

Roda roda(10,20);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.print(roda.get_velocidade());
  Serial.print(" ");
  Serial.println(roda.get_constante());
}

