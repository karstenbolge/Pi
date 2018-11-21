#include "pi.h"
#include <wiringPi.h>
#include <wiringShift.h>

#define COLUMN_DATA_PIN		7
#define COLUMN_CLOCK_PIN 	8
#define COLUMN_LATCH_PIN 	9

#define INPUT_SWITCH_DATA_PIN 	1 //green
#define INPUT_SWITCH_CLOCK_PIN 	15 //yellow
#define INPUT_SWITCH_LATCH_PIN 	16 //White 
#define INPUT_SWITCH_ENABLE_PIN 4 //White 
 
#define DELAY 500

uint8_t leds;
uint8_t inputRegister;

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
}

void init() {
  readConfig();
  leds = 0;
  inputRegister = 0;
}

void updateColumn(uint8_t column) {
  digitalWrite(COLUMN_LATCH_PIN, LOW);
  shiftOut(COLUMN_DATA_PIN, COLUMN_CLOCK_PIN, MSBFIRST, column);
  digitalWrite(COLUMN_LATCH_PIN, HIGH);
}

void updateShiftIn() {
  long bitVal;
  digitalWrite(INPUT_SWITCH_ENABLE_PIN, HIGH);
  digitalWrite(INPUT_SWITCH_LATCH_PIN, LOW);
  delay(5);
  digitalWrite(INPUT_SWITCH_LATCH_PIN, HIGH);
  digitalWrite(INPUT_SWITCH_ENABLE_PIN, LOW);
  delay(5);

  printf("0 1 2 3 4 5 6 7 8 9 a b c d e f\n", bitVal);
  for(int i = 0; i < 16; i++) {
    bitVal = digitalRead(INPUT_SWITCH_DATA_PIN);
    printf("%d ", bitVal);
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, HIGH);
    delay(5);
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, LOW);
  } 
  printf("\n");
}


int main(void) {
  printf("start");

  setup();
  init();

  while(1) {
    updateColumn(leds);
    leds++;
    delay(DELAY);
    //inputRegister = digitalRead(INPUT_SWITCH_PIN);
    updateShiftIn();
    //printf("inputRegister %d\n", inputRegister);
    //printf("LOW %d HIGH %d\n", LOW, HIGH);

    if (leds == 16) leds = 0;
  }
};