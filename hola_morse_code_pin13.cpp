void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  // Letra H (....)
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW);
  delay(900); 

  // Letra O (---)
  digitalWrite(13, HIGH); delay(900); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(900); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(900); digitalWrite(13, LOW);
  delay(900); 

  // Letra L (.-..)
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(900); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW);
  delay(900);

  // Letra A (.-)
  digitalWrite(13, HIGH); delay(200); digitalWrite(13, LOW); delay(200);
  digitalWrite(13, HIGH); delay(900); digitalWrite(13, LOW);
  
  delay(3000); 
}
