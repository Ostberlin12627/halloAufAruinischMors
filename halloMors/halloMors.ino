int ledPin = 13;
int timeOnShort = 500;
int timeOnLong = 1500;
int pause = 3000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //Buchstabe H
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort);
  digitalWrite(ledPin, LOW);
  delay(timeOnShort);
  digitalWrite(ledPin, HIGH);
  delay(timeOnShort);
  digitalWrite(ledPin,LOW);
  delay(timeOnShort);
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort);
  digitalWrite(ledPin, LOW);
  delay(timeOnShort);
  digitalWrite(ledPin, HIGH);
  delay(timeOnShort);
  digitalWrite(ledPin,LOW);
  delay(pause);
  
  //Buchstabe a
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort);
  digitalWrite(ledPin,LOW);
  delay(timeOnShort);
  digitalWrite(ledPin,HIGH);
  delay(timeOnLong);
  digitalWrite(ledPin,LOW);
  delay(pause);

  //Buchstabe l
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort); //kurz
  digitalWrite(ledPin,LOW);
  delay(timeOnShort); 
  digitalWrite(ledPin,HIGH);
  delay(timeOnLong); //Lang
  digitalWrite(ledPin,LOW);
  delay(timeOnLong);
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort); //kurz
  digitalWrite(ledPin,LOW);
  delay(timeOnShort);
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort); //kurz
  digitalWrite(ledPin,LOW);
  delay(pause);

  //Buchstabe l
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort); //kurz
  digitalWrite(ledPin,LOW);
  delay(timeOnShort); 
  digitalWrite(ledPin,HIGH);
  delay(timeOnLong); //Lang
  digitalWrite(ledPin,LOW);
  delay(timeOnLong);
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort); //kurz
  digitalWrite(ledPin,LOW);
  delay(timeOnShort);
  digitalWrite(ledPin,HIGH);
  delay(timeOnShort); //kurz
  digitalWrite(ledPin,LOW);
  delay(pause);

  // Buchstabe o
  digitalWrite(ledPin,HIGH);
  delay(timeOnLong); //Lang
  digitalWrite(ledPin,LOW);
  delay(timeOnLong);
  digitalWrite(ledPin,HIGH);
  delay(timeOnLong); //Lang
  digitalWrite(ledPin,LOW);
  delay(timeOnLong);
  digitalWrite(ledPin,HIGH);
  delay(timeOnLong); //Lang
  digitalWrite(ledPin,LOW);
  delay(pause);  

  
}
