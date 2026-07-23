int redLED = 8;
int yellowLED = 4;
int greenLED = 2;
int button = 7;

void setup() {
  pinMode(button, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  int buttonStatus = digitalRead(button);

  if (buttonStatus == HIGH) {
    digitalWrite(greenLED, LOW);
    
    digitalWrite(yellowLED, HIGH);
    delay(2000);
    digitalWrite(yellowLED, LOW);
    
    digitalWrite(redLED, HIGH);
    delay(10000);
    digitalWrite(redLED, LOW);

  } else {
  
    digitalWrite(redLED, HIGH);
    delay(5000);
    digitalWrite(redLED, LOW);

    digitalWrite(yellowLED, HIGH);
    delay(5000);
    digitalWrite(yellowLED, LOW);

    // --- VERDE INTELIGENTE (20 segundos = 200 iteraciones de 100ms) ---
    digitalWrite(greenLED, HIGH);
    
    for (int i = 0; i < 200; i++) {
      delay(100); 
      
      
      if (digitalRead(button) == HIGH) {
        break; 
      }
    }
    
    digitalWrite(greenLED, LOW);  
  }
}
