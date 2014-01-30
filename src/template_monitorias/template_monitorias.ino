#include <IO.h>

#define LED 9

IO io(9600);

//setup inicial...
void setup() {
  pinMode(LED, OUTPUT); //inicia el led
  io.init();
}


void loop() {
  //code here
  
}
