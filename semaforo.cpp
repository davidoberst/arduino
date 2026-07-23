int redLED = 8;
int yellowLED = 4;
int greenLED = 2;


void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
}

void loop() {
 //ciclo de semaforo
  
  //encender rojo
  
  digitalWrite(redLED,HIGH);
  delay(8000);
  digitalWrite(redLED,LOW); //esperar 3 segundos y luego pasar a amarillo
   

  
  digitalWrite(yellowLED,HIGH);
  delay(4000);
  digitalWrite(yellowLED,LOW);


    
  digitalWrite(greenLED,HIGH);
  delay(8000);
  digitalWrite(greenLED,LOW);
  







  
}
