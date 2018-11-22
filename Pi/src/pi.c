#include <wiringPi.h>
#include <wiringShift.h>
#include <stdlib.h>
#include <time.h>
#include "../hdr/pi.h"

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

void init() {
  readConfig();
  leds = 1;
  inputRegister = 0;
}

void updateColumn(uint8_t column) {
  digitalWrite(COLUMN_LATCH_PIN, LOW);
  shiftOut(COLUMN_DATA_PIN, COLUMN_CLOCK_PIN, MSBFIRST, column);
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

int main(void) {
  setup();
  init();

  while(1) {
    updateColumn(leds);

    if (leds == 1) {
      system("@cls||clear");
      printf("\n   0 1 2 3 4 5 6 7 8 9 a b c d e f\n");
    }
    printf("%3d ", leds);
    //inputRegister = digitalRead(INPUT_SWITCH_PIN);
    updateShiftIn();
    //printf("inputRegister %d\n", inputRegister);
    //printf("LOW %d HIGH %d\n", LOW, HIGH);

    leds = leds << 1;
    if (leds == 0) leds = 1;
  }
};