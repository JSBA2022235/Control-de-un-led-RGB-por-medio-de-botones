/*
Fundacion Kinal
Centro Educativo Tecnico Laboral
Electronica
Grado: Quinto
Seccion: A
Cuerso: Taller de Electronica Digital y Reparacion de
Computadoras I
Nombre: Jose Sebastian Bocaletti Aguilar
Carnet: 2022235
*/
#define R 9
#define G 10
#define B 11

#define push1 2
#define push2 3

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  pinMode(push1, INPUT_PULLUP);
  pinMode(push2, INPUT_PULLUP);
}

void loop() {
  bool estado_de_boton1 = digitalRead(push1);
  bool estado_de_boton2 = digitalRead(push2);

  if (!estado_de_boton1 && estado_de_boton2) {
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  }
  
  else if (estado_de_boton1 && !estado_de_boton2) {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
  }

  else if (!estado_de_boton1 && !estado_de_boton2) {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }

  else {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(500);

    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(500);

    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(500);
  }
}
