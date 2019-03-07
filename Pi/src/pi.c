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
#include "../hdr/image.h"
#include "../hdr/data70.h"

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

  initSounds();
  loadAllImages();

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
  playSoundBack();

  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColor(&bgColor, 0, 255, 255);
  setColorType(&bgColor, COLOR_BLACK);

  printAtLine("¤€£0123456789", 0, color, bgColor);
  printAtLine("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 1, color, bgColor);
  printAtLine("abcdefghijklmnopqrstuvwxyz", 2, color, bgColor);
  printAtLine("!\"#¤%&/()=?", 3, color, bgColor);
  //printAtLine("@€£${[]}|~\\", 4, color, bgColor);
  //printAtLine("A.,-+±*'^", 5, color, bgColor);
  //printAtLine("0123456789", 6, color, bgColor);
  //printAtLine("0123456789", 7, color, bgColor);
  //printAtLine("!\"", 8, color, bgColor);

  u_int8_t pos = 0;
  pos += printLarge0At(dmd, pos, 48, color, bgColor);
  pos += printLarge1At(dmd, pos, 48, color, bgColor);
  pos += printLarge2At(dmd, pos, 48, color, bgColor);
  pos += printLarge3At(dmd, pos, 48, color, bgColor);
  pos += printLarge4At(dmd, pos, 48, color, bgColor);
  pos += printLarge5At(dmd, pos, 48, color, bgColor);
  pos += printLarge6At(dmd, pos, 48, color, bgColor);
  pos += printLarge7At(dmd, pos, 48, color, bgColor);
  pos += printLarge8At(dmd, pos, 48, color, bgColor);
  pos += printLarge9At(dmd, pos, 48, color, bgColor);
  refreshDmd();

  //loadImage();

  struct timespec lastTime;
  struct timespec currentTime;
  uint32_t lastLoopsPrSecond = 0;
  uint32_t currentLoopsPrSecond = 0;
  uint16_t beat = 0;

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
      lastLoopsPrSecond = currentLoopsPrSecond;
      currentLoopsPrSecond = 0;
      awarageBallTimeCount(lastLoopsPrSecond);
    }

    // new frame every 1/15 of a second, equal 10 frame per beat as 90 beat per minute
    // 90 beat with 1/4 = 360 per minute = 6 per second
    if (lastTime.tv_sec != currentTime.tv_sec)
    {
      lastTime.tv_nsec = lastTime.tv_nsec - 1000000000;
      lastTime.tv_sec = currentTime.tv_sec;
    }

    if (lastTime.tv_nsec + 33330000 < currentTime.tv_nsec)
    {
      beat++;
      if (beat == 320)
      {
        beat = 0;
      }
      onBeat(beat / 5);
      displayTestTick(beat % 2);
      lastTime = currentTime;
    }

    column++;
    if (column == 8)
    {
      column = 0;
    }
  }
};
