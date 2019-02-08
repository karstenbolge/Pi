#include "../hdr/platform.h"
#include <stdio.h>
#include <wiringPi.h>
#include <wiringShift.h>

void setupWiring()
{
  if (wiringPiSetup() == -1)
  {
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

void updateColumn(uint8_t column)
{
  int i = 1 << (column);
  digitalWrite(COLUMN_LATCH_PIN, LOW);
  shiftOut(COLUMN_DATA_PIN, COLUMN_CLOCK_PIN, MSBFIRST, i);
  digitalWrite(COLUMN_LATCH_PIN, HIGH);
}

void updateShiftIn()
{
  long bitVal;
  digitalWrite(INPUT_SWITCH_ENABLE_PIN, HIGH);
  digitalWrite(INPUT_SWITCH_LATCH_PIN, LOW);
  sleep();
  digitalWrite(INPUT_SWITCH_LATCH_PIN, HIGH);
  digitalWrite(INPUT_SWITCH_ENABLE_PIN, LOW);
  sleep();

  for (int i = 0; i < 16; i++)
  {
    bitVal = digitalRead(INPUT_SWITCH_DATA_PIN);
    newInputRegister = newInputRegister << 1;
    newInputRegister += bitVal;
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, HIGH);
    sleep();
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, LOW);
  }
}

void platform()
{
  printf("Running Raspberry\n");
}