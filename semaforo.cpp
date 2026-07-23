int redLED = 13;
int yellowLED = 12;
int greenLED = 8;


void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
}

void loop() {
  digitalWrite(redLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,HIGH);
}
