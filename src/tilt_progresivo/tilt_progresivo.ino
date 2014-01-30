#define LED 8

int a; boolean goingUp;

void setup() {
  pinMode(LED, OUTPUT); //inicia el led
  Serial.begin(9600);
  
  a = 0;
  goingUp = true;
}

void loop() {

  if(a>=255){
    goingUp = false;
  }

  if (a<=0){
    goingUp = true;
  }

  if(goingUp){
    a= a + 5;
  } else {
    a= a - 5;
  }

  analogWrite(LED, a);
  
  delay (100);
}
