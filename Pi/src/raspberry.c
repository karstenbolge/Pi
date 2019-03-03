#include "../hdr/platform.h"
#include "../hdr/pi.h"
#include "../hdr/window.h"
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <wiringShift.h>

void onBeatFunction(int beat)
{
}

void setupWiring()
{
  onBeat = &onBeatFunction;
  if (wiringPiSetup() == -1)
  {
    printf("Failed to start");
    exit(1);
  }

  XSetForeground(display, gc, colorRed.pixel);
  XDrawLine(display, win, gc, 10, 10, 780, 10);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, 20, 20, 30, 40);

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
  piSleep();
  digitalWrite(INPUT_SWITCH_LATCH_PIN, HIGH);
  digitalWrite(INPUT_SWITCH_ENABLE_PIN, LOW);
  piSleep();

  for (int i = 0; i < 16; i++)
  {
    bitVal = digitalRead(INPUT_SWITCH_DATA_PIN);
    newInputRegister = newInputRegister << 1;
    newInputRegister += bitVal;
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, HIGH);
    piSleep();
    digitalWrite(INPUT_SWITCH_CLOCK_PIN, LOW);
  }
}

void platform()
{
  printf("Running Raspberry\n");
}

char *getDefaultFont()
{
  return "6x13";
}

int getWindowWitdh()
{
  return 800;
}

int getWindowHeight()
{
  return 480;
}