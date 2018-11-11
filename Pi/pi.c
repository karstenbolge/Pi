#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <wiringShift.h>

#define COLUMN_DATA_PIN		7
#define COLUMN_CLOCK_PIN 	8
#define COLUMN_LATCH_PIN 	9
#define DELAY 500

uint8_t leds;

void setup() {
  if (wiringPiSetup() == -1) {
    printf("Failed to start");  
    exit(1);
  }

  pinMode(COLUMN_DATA_PIN, OUTPUT);
  pinMode(COLUMN_CLOCK_PIN, OUTPUT);
  pinMode(COLUMN_LATCH_PIN, OUTPUT);
}

void init() {
  leds = 0;
}

void updateColumn(uint8_t column) {
  digitalWrite(COLUMN_LATCH_PIN, LOW);
  shiftOut(COLUMN_DATA_PIN, COLUMN_CLOCK_PIN, MSBFIRST, column);
  digitalWrite(COLUMN_LATCH_PIN, HIGH);
}

int main(void) {
  printf("start");

  setup();
  init();

  while(1) {
    updateColumn(leds);
    leds++;
    delay(DELAY);
  }
};