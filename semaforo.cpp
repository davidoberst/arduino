int redLED = 8;
int yellowLED = 4;
int greenLED = 2;


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
