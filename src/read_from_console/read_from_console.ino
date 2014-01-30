#include <IO.h>

#define LED 9

IO io(9600);

void setup() {
  pinMode(LED, OUTPUT); //inicia el led
  io.init();
}

void loop() {
  io.wrt(io.recv());
  
  delay(500);
}


