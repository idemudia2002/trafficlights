#include <Arduino.h>

int GREEN = 5;
int YELLOW = 4;
int RED = 3;

int DELAY_GREEN = 5000;
int DELAY_YELLOW = 2000;
int DELAY_RED = 5000;

void setup() {
 pinMode(RED, OUTPUT);
 pinMode(YELLOW, OUTPUT);
 pinMode(GREEN, OUTPUT);
}


void green_light() {
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void red_light() {
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
}

void yellow_light() {
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
}

void loop() {
 green_light();
 delay(DELAY_GREEN);
 yellow_light();
 delay(DELAY_YELLOW);
 red_light();
 delay(DELAY_RED);
}