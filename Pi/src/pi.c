#include <stdlib.h>
#include <time.h>
#include "../hdr/pi.h"
#include "../hdr/switchEdgeTest.h"
#include "../hdr/displayTest.h"
#include "../hdr/display.h"
#include "../hdr/loopsPerSecond.h"
#include "../hdr/sound.h"
#include "../hdr/platform.h"
#include "../hdr/window.h"
#include "../hdr/image.h"
#include "../hdr/data70.h"
#include "../hdr/attrackMode.h"
#include "../hdr/game.h"

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
  inGame = NO_GAME;

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

  srand(time(NULL));

  platform();

  rgb_t color, bgColor, greenColor;
  setColorType(&color, COLOR_RED);
  setColor(&bgColor, 0, 255, 255);
  setColorType(&bgColor, COLOR_BLACK);
  setColorType(&greenColor, COLOR_GREEN);

  printAtLine("FunkenStein", 1, &color, &bgColor);
  //printAtLine("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 1, color, bgColor);
  //printAtLine("abcdefghijklmnopqrstuvwxyz", 2, color, bgColor);
  //printAtLine("!\"#¤%&/()=?", 3, color, bgColor);
  //printAtLine("@€£${[]}|~\\", 4, color, bgColor);
  //printAtLine("A.,-+±*'^", 5, color, bgColor);
  //printAtLine("0123456789", 6, color, bgColor);
  //printAtLine("0123456789", 7, color, bgColor);
  //printAtLine("!\"", 8, color, bgColor);

  printAtLineAndPosition("Version", 3, 20, &color, &bgColor);
  printAtLineAndPosition("1.0.2", 3, DMD_WIDTH - 83 - 1, &color, &bgColor);

  printAtLineAndPosition("Videos", 4, 20, &color, &bgColor);
  drawProgress(0, 4, DMD_WIDTH - 83 - 1, &color);
  printAtLineAndPosition("Sounds", 5, 20, &color, &bgColor);
  drawProgress(0, 5, DMD_WIDTH - 83 - 1, &color);
  printAtLineAndPosition("Testing", 6, 20, &color, &bgColor);
  drawProgress(0, 6, DMD_WIDTH - 83 - 1, &color);

  /*u_int8_t pos = 0;
  pos += printLarge0At(dmd, pos, 48, color, bgColor);
  pos += printLarge1At(dmd, pos, 48, color, bgColor);
  pos += printLarge2At(dmd, pos, 48, color, bgColor);
  pos += printLarge3At(dmd, pos, 48, color, bgColor);
  pos += printLarge4At(dmd, pos, 48, color, bgColor);
  pos += printLarge5At(dmd, pos, 48, color, bgColor);
  pos += printLarge6At(dmd, pos, 48, color, bgColor);
  pos += printLarge7At(dmd, pos, 48, color, bgColor);
  pos += printLarge8At(dmd, pos, 48, color, bgColor);
  pos += printLarge9At(dmd, pos, 48, color, bgColor);*/
  refreshDmd();
  loadAllImages();
  drawProgress(20, 4, DMD_WIDTH - 83 - 1, &greenColor);

  initSounds();
  drawProgress(20, 5, DMD_WIDTH - 83 - 1, &greenColor);
  refreshDmd();

  drawProgress(20, 6, DMD_WIDTH - 83 - 1, &greenColor);
  refreshDmd();

  playSoundOk();

  struct timespec lastTime;
  struct timespec currentTime;
  uint32_t lastLoopsPrSecond = 0;
  uint32_t currentLoopsPrSecond = 0;
  uint16_t beat = 0;

  attrackModeOpen();

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
            //attrackModeOpen();
          }
        }
        if ((oldInputRegister[column] & 1 << 3) != (newInputRegister & 1 << 3))
        {
          if (newInputRegister & 1 << 3)
            ;
          else
          {
            attrackModeExit();
            menuEnter();
          }
        }

        // left flipper
        if ((oldInputRegister[column] & 1 << 5) != (newInputRegister & 1 << 5))
        {
          if (newInputRegister & 1 << 5)
          {
            config.totalLeftFlip++;
          }
        }

        // right flipper
        if ((oldInputRegister[column] & 1 << 6) != (newInputRegister & 1 << 6))
        {
          if (newInputRegister & 1 << 6)
          {
            config.totalRightFlip++;
          }
        }

        // both flippers down
        if ((newInputRegister & 1 << 5) && (newInputRegister & 1 << 6))
        {
          fastBonus();
        }
        if ((oldInputRegister[column] & 1 << 10) != (newInputRegister & 1 << 10))
        {
          if (newInputRegister & 1 << 10)
            ;
          else
          {
            attrackModeExit();
            startButton();
          }
        }
        if ((oldInputRegister[column] & 1 << 11) != (newInputRegister & 1 << 11))
        {
          if (newInputRegister & 1 << 11)
            ;
          else
          {
            buyExtraBall();
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
        if ((oldInputRegister[column] & 1 << 14) != (newInputRegister & 1 << 14))
        {
          if (newInputRegister & 1 << 14)
            ;
          else
          {
            ballEnded();
          }
        }
        if ((oldInputRegister[column] & 1 << 13) != (newInputRegister & 1 << 13))
        {
          if (newInputRegister & 1 << 13)
            ;
          else
          {
            ballLaunched();
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

    // test code to have action on score screen
    if (inGame == RUNNING_GAME)
    {
      int r = rand() % 600000;
      if (r == 2)
      {
        onBumberA();
      }
    }

    currentLoopsPrSecond++;
    timespec_get(&currentTime, TIME_UTC);
    if (lastTime.tv_sec != currentTime.tv_sec)
    {
      lastLoopsPrSecond = currentLoopsPrSecond;
      currentLoopsPrSecond = 0;
      loopsPerSecondCount(lastLoopsPrSecond);
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
      attrackModeTick(beat % 2);
      gameBeat(beat);
      lastTime = currentTime;
    }

    column++;
    if (column == 8)
    {
      column = 0;
    }
  }
};
