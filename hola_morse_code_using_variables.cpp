
int redLED = 13;      
int tiempoPunto = 200; 
int tiempoRaya = 900; 
int tiempoLetra = 900; 

void setup() {

  pinMode(redLED, OUTPUT);
}

void loop() {
  // Letra H (....)
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW);
  delay(tiempoLetra); 

  // Letra O (---)
  digitalWrite(redLED, HIGH); delay(tiempoRaya); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoRaya); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoRaya); digitalWrite(redLED, LOW);
  delay(tiempoLetra); 

  // Letra L (.-..)
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoRaya);  digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW);
  delay(tiempoLetra);

  // Letra A (.-)
  digitalWrite(redLED, HIGH); delay(tiempoPunto); digitalWrite(redLED, LOW); delay(tiempoPunto);
  digitalWrite(redLED, HIGH); delay(tiempoRaya);  digitalWrite(redLED, LOW);
  
  delay(3000); // Pausa larga antes de repetir "HOLA"
}
