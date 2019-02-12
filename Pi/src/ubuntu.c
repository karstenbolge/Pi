#include "../hdr/platform.h"
#include "../hdr/window.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>

const int button1x = 10;
const int button1y = 420;
const int button2x = 70;
const int button2y = 420;
const int button3x = 130;
const int button3y = 420;
const int button4x = 190;
const int button4y = 420;

const int buttonBeatX = 250;
const int buttonBeatY = 420;

const int buttonWidth = 50;
const int buttonHeight = 50;
int onButton = 0;

int oldCursorX, oldCursorY;

void setupWiring()
{
  onBeat = &onBeatFunction;
  XSetForeground(display, gc, color_white.pixel);
  XFillRectangle(display, win, gc, button1x, button1y, buttonWidth, buttonHeight);

  XSetForeground(display, gc, color_red.pixel);
  XFillRectangle(display, win, gc, button2x, button2y, buttonWidth, buttonHeight);

  XSetForeground(display, gc, color_green.pixel);
  XFillRectangle(display, win, gc, button3x, button3y, buttonWidth, buttonHeight);

  XSetForeground(display, gc, color_blue.pixel);
  XFillRectangle(display, win, gc, button4x, button4y, buttonWidth, buttonHeight);
}

void updateColumn(uint8_t column)
{
}

void updateShiftIn()
{
  newInputRegister = 0;

  if (column != 2)
  {
    return;
  }

  int cursorX, cursorY, rootWindowX, rootWindowY = 0;
  unsigned int mask = 0;
  Window childWindow, rootWindow;
  XQueryPointer(display, XRootWindow(display, screen),
                &childWindow, &rootWindow,
                &rootWindowX, &rootWindowX, &cursorX, &cursorY, &mask);

  XWindowAttributes xwa;
  Window child;
  int x, y;
  XTranslateCoordinates(display, win, DefaultRootWindow(display), 0, 0, &x, &y, &child);
  XGetWindowAttributes(display, win, &xwa);

  if (oldCursorX != cursorX || oldCursorY != cursorY)
  {
    // check button 1
    if (cursorX >= x + button1x && cursorX <= x + button1x + buttonWidth &&
        cursorY >= y + button1y && cursorY <= y + button1y + buttonHeight)
    {
      onButton = 1;
    }
    else if (cursorX >= x + button2x && cursorX <= x + button2x + buttonWidth &&
             cursorY >= y + button2y && cursorY <= y + button2y + buttonHeight)
    {
      onButton = 2;
    }
    else if (cursorX >= x + button3x && cursorX <= x + button3x + buttonWidth &&
             cursorY >= y + button3y && cursorY <= y + button3y + buttonHeight)
    {
      onButton = 3;
    }
    else if (cursorX >= x + button4x && cursorX <= x + button4x + buttonWidth &&
             cursorY >= y + button4y && cursorY <= y + button4y + buttonHeight)
    {
      onButton = 4;
    }
    else
    {
      onButton = 0;
    }

    oldCursorX = cursorX;
    oldCursorY = cursorY;
  }

  switch (onButton)
  {
  case 1:
    // set escape pressed
    newInputRegister = 1 << 2;
    break;
  case 2:
    // set up pressed
    newInputRegister = 1 << 12;
    break;
  case 3:
    // set down pressed
    newInputRegister = 1 << 15;
    break;
  case 4:
    // set enter pressed
    newInputRegister = 1 << 3;
    break;
  default:
    newInputRegister = 0;

    break;
  }
}

void platform()
{
  printf("Running on Ubuntu\n");
}

char *getDefaultFont()
{
  return "6x10";
}

int getWindowWitdh()
{
  return 800;
}

int getWindowHeight()
{
  return 480;
}

void onBeatFunction(int beat)
{
  // printf("On beat %d %d %d\n", beat, beat % 4, beat / 4);

  XSetForeground(display, gc, color_black.pixel);
  XFillRectangle(display, win, gc, buttonBeatX, buttonBeatY, buttonWidth, buttonHeight);

  XSetForeground(display, gc, color_blue.pixel);
  for (int i = 0; i <= beat % 4; i++)
  {
    XFillRectangle(display, win, gc, buttonBeatX + 3 * i, buttonBeatY, 2, 2);
  }

  XFillRectangle(display, win, gc, buttonBeatX + 3 * (beat / 4), buttonBeatY + 3, 2, 2);
}