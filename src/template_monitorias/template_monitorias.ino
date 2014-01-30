#define LED 9

//setup inicial...
void setup() {
  pinMode(LED, OUTPUT); //inicia el led
  Serial.begin(9600);
}




void loop() {
  //code here
  
}




//funciones para leer y escribir por consola. NO BORRAR
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
