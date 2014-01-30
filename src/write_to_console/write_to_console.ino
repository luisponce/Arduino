
void setup() {
  Serial.begin(9600);
}

void loop() {
  wrt("hola mundo");
  
  wrt(1);
  
  delay(500);
}




int recv() {
  if (Serial.available()) {
    return (int)(Serial.read()) - 48;
  }
  
  return -1;
}

void wrt(String a){
  Serial.println(a);
}

void wrt(int a){
  Serial.println(a);
}
