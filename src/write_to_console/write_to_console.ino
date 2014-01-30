#define LED 8

int a; boolean goingUp;

void setup() {
  pinMode(LED, OUTPUT); //inicia el led
  Serial.begin(9600);
  
  a = 0;
  goingUp = true;
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
