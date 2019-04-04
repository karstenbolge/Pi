#include "../hdr/platform.h"
#include "../hdr/window.h"
#include "../hdr/sound.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>

#define BUTTONS_COUNT 11

typedef struct pointItem
{
  int x;
  int y;
} pointItem_t;

typedef struct buttonItem
{
  char name[32];
  pointItem_t from;
  pointItem_t to;
  unsigned long color;
  unsigned long frameColor;
  unsigned long textColor;
  uint16_t registry;
  uint8_t column;
  uint8_t down;
} buttonItem_t;

XFontStruct *fontinfo;

buttonItem_t buttons[BUTTONS_COUNT];

const int buttonBeatX = 10;
const int buttonBeatY = 535;

const int gridViewX = 320;
const int gridViewY = 535;

const int buttonWidth = 40;
const int buttonHeight = 40;
int onButton = 0;

//int oldCursorX, oldCursorY;

void makeButton(int i, char *pName, int fromX, int fromY, int toX, int toY, unsigned long color, unsigned long frameColor, unsigned long textColor, uint16_t registry, uint8_t column, uint8_t down)
{
  strcpy(buttons[i].name, pName);
  buttons[i].from.x = fromX;
  buttons[i].from.y = fromY;
  buttons[i].to.x = toX;
  buttons[i].to.y = toY;
  buttons[i].color = color;
  buttons[i].frameColor = frameColor;
  buttons[i].textColor = textColor;
  buttons[i].registry = registry;
  buttons[i].column = column;
  buttons[i].down = down;
}

void drawButton(int i)
{
  int direction;
  int ascent;
  int descent;
  XCharStruct overall;

  XSetForeground(display, gc, buttons[i].frameColor);
  XFillRectangle(display, win, gc, buttons[i].from.x, buttons[i].from.y, buttons[i].to.x - buttons[i].from.x, buttons[i].to.y - buttons[i].from.y);
  XSetForeground(display, gc, buttons[i].color);
  int border = 2;
  if (buttons[i].down == 1)
  {
    border = 8;
  }
  XFillRectangle(display, win, gc, buttons[i].from.x + border, buttons[i].from.y + border, buttons[i].to.x - buttons[i].from.x - 2 * border, buttons[i].to.y - buttons[i].from.y - 2 * border);

  //https://www.lemoda.net/c/xlib-text-box/
  XTextExtents(fontinfo, buttons[i].name, strlen(buttons[i].name), &direction, &ascent, &descent, &overall);
  XSetForeground(display, gc, buttons[i].textColor);
  XDrawString(display, win, gc, (buttons[i].to.x + buttons[i].from.x - overall.width) / 2, (buttons[i].to.y + buttons[i].from.y + ascent - descent) / 2, buttons[i].name, strlen(buttons[i].name));
}

void drawButtons()
{
  for (int i = 0; i < BUTTONS_COUNT; i++)
  {
    drawButton(i);
  }
}

#define MAX_FONTS 30000
void showFonts()
{
  int nFonts;
  char **szaFontNames;
  szaFontNames = XListFonts(display, "*", MAX_FONTS, &nFonts);
  if (nFonts == MAX_FONTS)
  {
    printf("Many fonts on your system.  Not displaying all.");
  }

  for (int i = 0; i < nFonts; i++)
  {
    printf("%s\n", szaFontNames[i]);
  }

  XFreeFontNames(szaFontNames);
}

void setupWiring()
{
  onBeat = &onBeatFunction;
  //showFonts();

  fontinfo = XLoadQueryFont(display, "7x13bold"); // 6x10 ubuntu font size
  int rc = XSetFont(display, gc, fontinfo->fid);

  // draw debug area
  XSetForeground(display, gc, colorRed.pixel);
  XFillRectangle(display, win, gc, 0, 480, 799, 529);

  makeButton(0, "Esc", 10, 485, 49, 524, colorBlack.pixel, colorGreen.pixel, colorWhite.pixel, 1 << 2, 2, 0);
  makeButton(1, "Up", 60, 485, 99, 524, colorGreen.pixel, colorBlack.pixel, colorBlack.pixel, 1 << 12, 2, 0);
  makeButton(2, "Down", 110, 485, 149, 524, colorWhite.pixel, colorBlack.pixel, colorBlack.pixel, 1 << 15, 2, 0);
  makeButton(3, "Enter", 160, 485, 199, 524, colorBlue.pixel, colorGreen.pixel, colorWhite.pixel, 1 << 3, 2, 0);

  makeButton(4, "Start", 250, 485, 289, 524, colorGreen.pixel, colorBlack.pixel, colorBlack.pixel, 1 << 10, 2, 0);
  makeButton(5, "Plung", 300, 485, 339, 524, colorBlack.pixel, colorGreen.pixel, colorWhite.pixel, 1 << 13, 2, 0);
  makeButton(6, "Both", 350, 485, 389, 524, colorWhite.pixel, colorBlack.pixel, colorBlack.pixel, (1 << 5) + (1 << 6), 2, 0);
  makeButton(7, "Left", 400, 485, 439, 524, colorGreen.pixel, colorBlack.pixel, colorBlack.pixel, 1 << 5, 2, 0);
  makeButton(8, "Rigth", 450, 485, 489, 524, colorRed.pixel, colorBlack.pixel, colorBlack.pixel, 1 << 6, 2, 0);
  makeButton(9, "End", 500, 485, 539, 524, colorBlack.pixel, colorGreen.pixel, colorWhite.pixel, 1 << 14, 2, 0);
  makeButton(10, "PEZ", 550, 485, 589, 524, colorWhite.pixel, colorBlack.pixel, colorRed.pixel, 1 << 11, 2, 0);

  drawButtons();

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

  //if (oldCursorX != cursorX || oldCursorY != cursorY)
  {
    for (int i = 0; i < BUTTONS_COUNT; i++)
    {
      if (buttons[i].column == column)
      {
        if (cursorX >= x + buttons[i].from.x && cursorX <= x + buttons[i].to.x &&
            cursorY >= y + buttons[i].from.y && cursorY <= y + buttons[i].to.y)
        {
          if (cursorY >= y + buttons[i].from.y && cursorY <= y + (buttons[i].from.y + buttons[i].to.y) / 2)
          {
            buttons[i].down = 1;
            drawButton(i);
          }
          else
          {
            buttons[i].down = 0;
            drawButton(i);
          }

          newInputRegister += buttons[i].registry;
        }
        else
        {
          if (buttons[i].down == 1)
          {
            newInputRegister += buttons[i].registry;
          }
        }
      }
    }
    //oldCursorX = cursorX;
    //oldCursorY = cursorY;
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
  return 580;
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