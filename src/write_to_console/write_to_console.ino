#include <IO.h>

IO io(9600);

void setup() {
  io.init();
}

void loop() {
  io.wrt("hola mundo");
  
  io.wrt(1);
  
  delay(500);
}
