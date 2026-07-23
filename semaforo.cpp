int redLED = 8;
int yellowLED = 4;
int greenLED = 2;
int button = 7;



void setup() {
  pinMode(button, INPUT);
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
}

void loop() {
  int buttonStatus = digitalRead(button);
  if(buttonStatus == HIGH){
      digitalWrite(greenLED,LOW);
      digitalWrite(yellowLED,HIGH);
      delay(2000);
      digitalWrite(yellowLED,LOW);
      digitalWrite(redLED,HIGH);
      delay(10000);
      digitalWrite(redLED, LOW);

  }else{
     digitalWrite(redLED,HIGH);
     delay(5000);
     digitalWrite(redLED,LOW); //esperar 3 segundos y luego pasar a amarillo
   

     digitalWrite(yellowLED,HIGH);
     delay(5000);
     digitalWrite(yellowLED,LOW);

   
     digitalWrite(greenLED,HIGH);
     delay(20000);
     digitalWrite(greenLED,LOW);  
    
  }
  //encender rojo

}


