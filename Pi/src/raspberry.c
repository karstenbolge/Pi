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

  Atom wm_state = XInternAtom(display, "_NET_WM_STATE", False);
  Atom fullscreen = XInternAtom(display, "_NET_WM_STATE_FULLSCREEN", False);

  XEvent xev;
  memset(&xev, 0, sizeof(xev));
  xev.type = ClientMessage;
  xev.xclient.window = win;
  xev.xclient.message_type = wm_state;
  xev.xclient.format = 32;
  xev.xclient.data.l[0] = 1;
  xev.xclient.data.l[1] = fullscreen;
  xev.xclient.data.l[2] = 0;

  XMapWindow(display, win);

  XSendEvent(display, DefaultRootWindow(display), False, SubstructureRedirectMask | SubstructureNotifyMask, &xev);

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

int getWindowWitdh()
{
  return 800;
}

int getWindowHeight()
{
  return 480;
}