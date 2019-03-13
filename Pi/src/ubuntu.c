#include "../hdr/platform.h"
#include "../hdr/window.h"
#include "../hdr/sound.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>

const int button1x = 10;
const int button1y = 485;
const int button2x = 60;
const int button2y = 485;
const int button3x = 110;
const int button3y = 485;
const int button4x = 160;
const int button4y = 485;

const int buttonStartX = 600;
const int buttonStartY = 485;
const int buttonExtraX = 650;
const int buttonExtraY = 485;

const int buttonCancelX = 700;
const int buttonCancelY = 485;

const int buttonBallEndedX = 750;
const int buttonBallEndedY = 485;

const int buttonBeatX = 250;
const int buttonBeatY = 485;

const int gridViewX = 320;
const int gridViewY = 485;

const int buttonWidth = 40;
const int buttonHeight = 40;
int onButton = 0;

int oldCursorX, oldCursorY;

void setupWiring()
{
  onBeat = &onBeatFunction;

  // draw debug area
  XSetForeground(display, gc, colorRed.pixel);
  XFillRectangle(display, win, gc, 0, 480, 799, 529);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, button1x, button1y, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorBlack.pixel);
  XFillRectangle(display, win, gc, button1x + 2, button1y + 2, buttonWidth - 4, buttonHeight - 4);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, button2x, button2y, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, button2x + 2, button2y + 2, buttonWidth - 4, buttonHeight - 4);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, button3x, button3y, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorWhite.pixel);
  XFillRectangle(display, win, gc, button3x + 2, button3y + 2, buttonWidth - 4, buttonHeight - 4);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, button4x, button4y, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorBlue.pixel);
  XFillRectangle(display, win, gc, button4x + 2, button4y + 2, buttonWidth - 4, buttonHeight - 4);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, buttonStartX, buttonStartY, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorBlue.pixel);
  XFillRectangle(display, win, gc, buttonStartX + 2, buttonStartY + 2, buttonWidth - 4, buttonHeight - 4);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, buttonExtraX, buttonExtraY, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorBlack.pixel);
  XFillRectangle(display, win, gc, buttonExtraX + 2, buttonExtraY + 2, buttonWidth - 4, buttonHeight - 4);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, buttonCancelX, buttonCancelY, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorBlue.pixel);
  XFillRectangle(display, win, gc, buttonCancelX + 2, buttonCancelY + 2, buttonWidth / 2 - 3, buttonHeight - 4);
  XFillRectangle(display, win, gc, buttonCancelX + 1 + buttonWidth / 2, buttonCancelY + 2, buttonWidth / 2 - 3, buttonHeight - 4);

  XSetForeground(display, gc, colorGreen.pixel);
  XFillRectangle(display, win, gc, buttonBallEndedX, buttonBallEndedY, buttonWidth, buttonHeight);
  XSetForeground(display, gc, colorBlack.pixel);
  XFillRectangle(display, win, gc, buttonBallEndedX + 2, buttonBallEndedY + 2, buttonWidth - 4, buttonHeight - 4);

  XSetForeground(display, gc, colorBlack.pixel);
  // horizontal
  for (int i = 0; i < 9; i++)
  {
    XDrawLine(display, win, gc, gridViewX, gridViewY + i * 5, gridViewX + 48 * 5, gridViewY + i * 5);
  }

  // vertical
  for (int i = 0; i < 49; i++)
  {
    XDrawLine(display, win, gc, gridViewX + i * 5, gridViewY, gridViewX + i * 5, gridViewY + 41);
  }
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
    else if (cursorX >= x + buttonStartX && cursorX <= x + buttonStartX + buttonWidth &&
             cursorY >= y + buttonStartY && cursorY <= y + buttonStartY + buttonHeight)
    {
      onButton = 5;
    }
    else if (cursorX >= x + buttonExtraX && cursorX <= x + buttonExtraX + buttonWidth &&
             cursorY >= y + buttonExtraY && cursorY <= y + buttonExtraY + buttonHeight)
    {
      onButton = 6;
    }
    else if (cursorX >= x + buttonCancelX && cursorX <= x + buttonCancelX + buttonWidth &&
             cursorY >= y + buttonCancelY && cursorY <= y + buttonCancelY + buttonHeight)
    {
      onButton = 7;
    }
    else if (cursorX >= x + buttonBallEndedX && cursorX <= x + buttonBallEndedX + buttonWidth &&
             cursorY >= y + buttonBallEndedY && cursorY <= y + buttonBallEndedY + buttonHeight)
    {
      onButton = 8;
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
  case 5:
    // set start pressed
    newInputRegister = 1 << 10;
    break;
  case 6:
    // set extraball pressed
    newInputRegister = 1 << 11;
    break;
  case 7:
    // set left, rigth flipper pressed
    newInputRegister = (1 << 5) + (1 << 6);
    break;
  case 8:
    // set ball ended
    newInputRegister = 1 << 14;
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

int getWindowWitdh()
{
  return 800;
}

int getWindowHeight()
{
  return 530;
}

void onBeatFunction(int beat)
{
  musicBeat(beat);

  int fullBeat = beat / 4;
  XSetForeground(display, gc, colorRed.pixel);
  XFillRectangle(display, win, gc, buttonBeatX, buttonBeatY, buttonWidth + 5, buttonHeight);

  XSetForeground(display, gc, colorYellow.pixel);
  for (int i = 0; i <= fullBeat % 4; i++)
  {
    XFillRectangle(display, win, gc, buttonBeatX + 12 * i, buttonBeatY, 3, 3);
    XFillRectangle(display, win, gc, buttonBeatX + 4 + 12 * i, buttonBeatY, 3, 3);
    XFillRectangle(display, win, gc, buttonBeatX + 12 * i, buttonBeatY + 4, 3, 3);
    XFillRectangle(display, win, gc, buttonBeatX + 4 + 12 * i, buttonBeatY + 4, 3, 3);
  }
}

void fillSwitch(int i, int j)
{
  XSetForeground(display, gc, colorYellow.pixel);
  XFillRectangle(display, win, gc, gridViewX + 1 + i * 5, gridViewY + 1 + j * 5, 4, 4);
}