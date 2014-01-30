#define LED 8

void setup() {
  pinMode(LED, OUTPUT); //inicia el led
  Serial.begin(9600);
}

void loop() {

  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);

  
}
