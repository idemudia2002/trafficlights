#include <Arduino.h>

const int GREEN1 = 1;
const int GREEN2 = 2;
const int RED1 = 3;
const int RED2 = 4;
const int RED3 = 5;
const int buzzer = 8;
int blinkRate = 300;


void greenOn() {
  digitalWrite(GREEN1, HIGH);
  digitalWrite(GREEN2, HIGH);
  
}

void greenOff() {
 digitalWrite(GREEN1, LOW);
  digitalWrite(GREEN2, LOW);
}

void redOn() {
  digitalWrite(RED1, HIGH);
  digitalWrite(RED2, HIGH);
  digitalWrite(RED3, HIGH);
}

void redOff() {
  digitalWrite(RED1, LOW);
  digitalWrite(RED2, LOW);
  digitalWrite(RED3, LOW);
}



void setup() {
  pinMode(GREEN1, OUTPUT);
  pinMode(GREEN2, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(RED3, OUTPUT);
  pinMode(buzzer, OUTPUT);  
}


void loop() {
noTone(buzzer);
greenOff();
redOff();

delay(5000);
blinkRate = 300;




for(int i = 0; i <15; i++) {
  tone(buzzer, 80);
  redOff();
  digitalWrite(RED1, HIGH);
  delay(blinkRate);
  noTone(buzzer);
  digitalWrite(RED2, HIGH);
  delay(blinkRate);
  redOff();
  digitalWrite(RED3, HIGH);
  delay(blinkRate);
}

for(int i = 0; i <15; i++) {
  redOff();
  delay(50);
  redOn();
  delay(50);
}

tone(buzzer,80);
redOff();
greenOn();
delay(3000);
}
