#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define LED_PIN 7
#define DELAY 500

void setup() {
  if (wiringPiSetup() == -1) {
    printf("Failed to start");  
    exit(1);
  }

  pinMode(LED_PIN, OUTPUT);
}

int main(void) {
  printf("start");

  setup();

  while(1) {
    digitalWrite(LED_PIN, 1);
    delay(DELAY);
    digitalWrite(LED_PIN, 0);
    delay(DELAY);
  }
};