#define LED 8

int a; boolean goingUp;

void setup() {
  pinMode(LED, OUTPUT); //inicia el led
  Serial.begin(9600);
  
  a = 0;
  goingUp = true;
}

void loop() {
//  if (Serial.available() > 0) { //si recive info.
//    int r = (int)Serial.read(); //guarda el valor ASCII de la consola
//    
//    if (r == 49) { //Si el caracter dado es '1'
//      digitalWrite(LED, HIGH); //Encender LED
//      Serial.println("ON"); //Escribir que se encendio
//    } else {
//     analogWrite(LED, 0); //Apagar LED
//    Serial.println("OFF"); //Escribir que se apago
//    }
//  }

//  digitalWrite(LED, HIGH);
//  delay(1000);
//  digitalWrite(LED, HIGH);
//  delay(1000);

  if(a>=255){
    goingUp = false;
  }

  if (a<=0){
    goingUp = true;
  }

  if(goingUp){
    a= a + 5;
    //serial.println
  } else {
    a= a - 5;
  }

  analogWrite(LED, a);
  
  delay (100);
}
