#include <stdlib.h>
#include <time.h>
#include "../hdr/pi.h"
#include "../hdr/switchEdgeTest.h"
#include "../hdr/displayTest.h"
#include "../hdr/display.h"
#include "../hdr/awarageBallTime.h"
#include "../hdr/sound.h"
#include "../hdr/platform.h"
#include "../hdr/window.h"

#define UP_DOWN_HELD_OFF 0
#define UP_DOWN_HELD_UP 1
#define UP_DOWN_HELD_DOWN 2

#define UP_DOWN_HELD_LOOPS 1000

uint8_t upDownHeld;
uint8_t upDownHasTicked;
uint16_t upDownLoops;

struct timespec sleepValue = {0};

void piSleep()
{
  nanosleep(&sleepValue, NULL);
}

void setup()
{
  setupWiring();
  sleepValue.tv_nsec = 10000;
}

void init()
{
  createWindow();
  readConfig();

  leds = 1;
  column = 0;
  upDownHeld = UP_DOWN_HELD_OFF;
  upDownHasTicked = 0;
  upDownLoops = 0;

  for (int i = 0; i < 8; i++)
  {
    updateColumn(i);
    updateShiftIn();
    oldInputRegister[i] = newInputRegister;
  }
}

void onUpDownHeld(uint8_t upDown)
{
  if (upDownHeld == UP_DOWN_HELD_OFF)
  {
    upDownHeld = upDown;
  }

  if (upDownHeld == upDown)
  {
    upDownLoops++;
    if (upDownLoops > UP_DOWN_HELD_LOOPS)
    {
      upDownLoops = 0;
      upDownHasTicked = 1;
      if (upDown == UP_DOWN_HELD_UP)
      {
        menuUp();
      }
      else
      {
        menuDown();
      }
    }
  }
}

int main(void)
{
  init();
  setup();

  platform();
  //playSoundEnter();

  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColor(&bgColor, 0, 255, 255);
  setColorType(&bgColor, COLOR_BLACK);

  printAtLine("0123456789", 0, color, bgColor);
  //refreshDmd();

  struct timespec lastTime;
  struct timespec currentTime;
  uint32_t lastLoopsPrSecond = 0;
  uint32_t currentLoopsPrSecond = 0;
  uint8_t tick = 0;

  while (1)
  {
    updateColumn(column);

    updateShiftIn();
    if (oldInputRegister[column] != newInputRegister)
    {
      switch (column)
      {
      case 2:
        if ((oldInputRegister[column] & 1 << 2) != (newInputRegister & 1 << 2))
        {
          if (newInputRegister & 1 << 2)
            ;
          else
          {
            menuExit();
          }
        }
        if ((oldInputRegister[column] & 1 << 3) != (newInputRegister & 1 << 3))
        {
          if (newInputRegister & 1 << 3)
            ;
          else
          {
            menuEnter();
          }
        }
        if ((oldInputRegister[column] & 1 << 12) != (newInputRegister & 1 << 12))
        {
          if (newInputRegister & 1 << 12)
          {
            onUpDownHeld(UP_DOWN_HELD_UP);
          }
          else
          {
            if (upDownHasTicked == 0)
            {
              menuUp();
            }
            upDownHeld = UP_DOWN_HELD_OFF;
            upDownLoops = 0;
            upDownHasTicked = 0;
          }
        }
        if ((oldInputRegister[column] & 1 << 15) != (newInputRegister & 1 << 15))
        {
          if (newInputRegister & 1 << 15)
          {
            onUpDownHeld(UP_DOWN_HELD_DOWN);
          }
          else
          {
            if (upDownHasTicked == 0)
            {
              menuDown();
            }
            upDownHeld = UP_DOWN_HELD_OFF;
            upDownLoops = 0;
            upDownHasTicked = 0;
          }
        }
        break;
      }
      oldInputRegister[column] = newInputRegister;
      showMatrix(oldInputRegister);
    }

    currentLoopsPrSecond++;
    timespec_get(&currentTime, TIME_UTC);
    if (lastTime.tv_sec != currentTime.tv_sec)
    {
      tick = 0;
      lastLoopsPrSecond = currentLoopsPrSecond;
      currentLoopsPrSecond = 0;
      awarageBallTimeCount(lastLoopsPrSecond);
    }
    // new frame every 1/16 of a second
    if (tick == 0 || lastTime.tv_nsec + 62500000 < currentTime.tv_nsec)
    {
      tick++;
      lastTime = currentTime;
      displayTestTick(tick);
    }

    column++;
    if (column == 8)
      column = 0;
  }
};
