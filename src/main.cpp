#include <Arduino.h>

const int GREEN = 5;
const int YELLOW = 4;
const int RED = 3;
const int buzzer = 12;

int DELAY_GREEN = 5000;
int DELAY_YELLOW = 1000;
int DELAY_RED = 1300;

void yellow_light() {
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
}

void setup() {
 pinMode(RED, OUTPUT);
 pinMode(YELLOW, OUTPUT);
 pinMode(GREEN, OUTPUT);
 pinMode(buzzer, OUTPUT);
}


void red_light() {
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
}



void green_light() {
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}


void loop() {
 yellow_light();
 delay(DELAY_YELLOW);
 red_light();
 delay(DELAY_RED);
 green_light();
 delay(DELAY_GREEN);
}

void alarm() {
 tone(buzzer, 1000);                        
 digitalWrite(buzzer, HIGH);
 delay(500);
 noTone(5);
 digitalWrite(buzzer, LOW);
 delay(500);
}