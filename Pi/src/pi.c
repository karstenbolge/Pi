#include <wiringPi.h>
#include <wiringShift.h>
#include <stdlib.h>
#include <time.h>
#include "../hdr/pi.h"
#include "../hdr/switchEdgeTest.h"

#define COLUMN_DATA_PIN		7
#define COLUMN_CLOCK_PIN 	8
#define COLUMN_LATCH_PIN 	9

#define INPUT_SWITCH_DATA_PIN 	1 //green
#define INPUT_SWITCH_CLOCK_PIN 	15 //yellow
#define INPUT_SWITCH_LATCH_PIN 	16 //White 
#define INPUT_SWITCH_ENABLE_PIN 4 //White 
 
uint8_t leds;
uint8_t column;

uint16_t oldInputRegister[8];
uint16_t newInputRegister;

struct timespec sleepValue = {0};

void setup() {
  if (wiringPiSetup() == -1) {
    printf("Failed to start");  
    exit(1);
  }

  pinMode(COLUMN_DATA_PIN, OUTPUT);
  pinMode(COLUMN_CLOCK_PIN, OUTPUT);
  pinMode(COLUMN_LATCH_PIN, OUTPUT);

  pinMode(INPUT_SWITCH_DATA_PIN, INPUT);
  pinMode(INPUT_SWITCH_CLOCK_PIN, OUTPUT);
  pinMode(INPUT_SWITCH_LATCH_PIN, OUTPUT);
  pinMode(INPUT_SWITCH_ENABLE_PIN, OUTPUT);

  sleepValue.tv_nsec = 10000;
}

void updateColumn(uint8_t column) {
  int i = 1 << (column);
  digitalWrite(COLUMN_LATCH_PIN, LOW);
  shiftOut(COLUMN_DATA_PIN, COLUMN_CLOCK_PIN, MSBFIRST, i);
  digitalWrite(COLUMN_LATCH_PIN, HIGH);
}

void sleep() {
  nanosleep(&sleepValue, NULL);
}

void updateShiftIn() {
  long bitVal;
  digitalWrite(INPUT_SWITCH_ENABLE_PIN, HIGH);
  digitalWrite(INPUT_SWITCH_LATCH_PIN, LOW);
  sleep();
  digitalWrite(INPUT_SWITCH_LATCH_PIN, HIGH);
  digitalWrite(INPUT_SWITCH_ENABLE_PIN, LOW);
  sleep();

  for(int i = 0; i < 16; i++) {
    bitVal = digitalRead(INPUT_SWITCH_DATA_PIN);
    newInputRegister = newInputRegister << 1;
    newInputRegister += bitVal;
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, HIGH);
    sleep();
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, LOW);
  } 
}

void init() {
  readConfig();
  leds = 1;
  column = 0;

  for(int i = 0; i < 8; i++) {
    updateColumn(i);
    updateShiftIn();
    oldInputRegister[i] = newInputRegister;
  }
}

int main(void) {
  setup();
  init();

  while(1) {
    updateColumn(column);

    updateShiftIn();
    if (oldInputRegister[column] != newInputRegister) {
      showMatrix(oldInputRegister);
      switch(column) {
        case 2: 
          if ((oldInputRegister[column] & 1 << 2) != (newInputRegister & 1 << 2)) {
            if (newInputRegister & 1 << 2);
            else {
              menuExit();
            }
          }
          if ((oldInputRegister[column] & 1 << 3) != (newInputRegister & 1 << 3)) {
            if (newInputRegister & 1 << 3);
            else {
              menuEnter();            
            }
          }
          if ((oldInputRegister[column] & 1 << 12) != (newInputRegister & 1 << 12)) {
            if (newInputRegister & 1 << 12);
            else {
              menuUp();
            }
          }
          if ((oldInputRegister[column] & 1 << 15) != (newInputRegister & 1 << 15)) {
            if (newInputRegister & 1 << 15);
            else {
              menuDown();
            }
          }
        break;
      }
      oldInputRegister[column] = newInputRegister;
    }

    column++;
    if (column == 8) column = 0;
  }
};