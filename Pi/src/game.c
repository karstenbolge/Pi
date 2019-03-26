#include "../hdr/game.h"
#include "../hdr/window.h"
#include "../hdr/color.h"
#include "../hdr/config.h"
#include "../hdr/display.h"
#include "../hdr/data70.h"
#include "../hdr/attrackMode.h"

void newGame(gameItem_t *pItem)
{
  pItem->ballNumber = 0;
  pItem->extraBalls = 0;
  pItem->score = 0;
  pItem->instumentsCollected = 3;
  pItem->totalInstumentsCollected = 3;
  pItem->movesCollected = 6;
  pItem->totalMovesCollected = 6;
  config.totalGames++;
  config.lastGameStart = time(NULL);
  saveConfig();

  newBall(pItem);
}

void newBall(gameItem_t *pItem)
{
  pItem->multiplier = 2;
  pItem->bonuesBeat = 0;

  config.totalBalls++;
  saveConfig();
}

void bonusBeat(gameItem_t *pItem, uint8_t tick, uint8_t cancel, void (*onNextBall)(void))
{
  if (pItem->bonuesBeat == 0)
  {
    return;
  }

  if (cancel == 1)
  {
  }

  pItem->totalInstumentsCollected += pItem->instumentsCollected;
}

void ballEnded()
{
  if (inGame == BEFORE_LAUNCH)
  {
    printf("Cannot end ball before launch\n");
    return;
  }

  bonusSpeed = 1;
  printf("Lasted %ld %ld %ld \n", launchSecond, time(NULL), time(NULL) - launchSecond);
  config.totalBallSeconds += time(NULL) - launchSecond;
  saveConfig();

  addEvent(231, EVENT_SHOW_BONUS, 0);
}

void startButton()
{
  if (inGame == NO_GAME)
  {
    numberOfPlayers = 1;
    shooter = 0;
    newGame(&games[0]);
    loadBall();
    showScore(0);
    return;
  }

  if (numberOfPlayers == 4)
  {
    return;
  }

  if (games[shooter].ballNumber < 2)
  {
    numberOfPlayers++;
    newGame(&games[numberOfPlayers - 1]);
    //addEvent(1, EVENT_SHOW_SCORE, 0);
    return;
  }

  // Allow restart game
  if (config.allowRestart)
  {
    inGame = NO_GAME;
    startButton();
  }
}

void onBumberA()
{
  launchBlink = 0;
  games[shooter].score += 1;
}

void loadBall()
{
  inGame = BEFORE_LAUNCH;
  launchBlink = 0;
  games[shooter].ballNumber++;
}

void showScore(uint8_t type)
{
  clearDmd();
  rgb_t color, bgColor, colorBlue;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);
  setColorType(&colorBlue, COLOR_BLUE);

  for (int i = 0; i < numberOfPlayers; i++)
  {
    int pos = 0;
    for (int j = games[i].ballNumber; j < config.numberOfBalls; j++)
    {
      pos += printBallAt(dmd, pos, 13 + 24 * i, &color, &bgColor);
    }
    pos = 0;
    for (int j = 1; j < games[i].extraBalls; j++)
    {
      pos += printBallAt(dmd, pos, 4 + 24 * i, &colorBlue, &bgColor);
    }
    if (i == shooter)
    {
      // make score blinking before launch
      if (type == 1 && launchBlink >= 5)
        ;
      else
      {
        if (type == 0 && launchBlink >= 48)
        {
          printf("Roling score %d\n", launchBlink);
          if (launchBlink >= 64)
          {
            launchBlink = 47;
          }
        }
        else
        {
          printScore(games[i].score, i, 2);
        }
      }
    }
    else
    {
      printScore(games[i].score, i, 1);
    }
  }
  refreshDmd();
}

void removeEvent(int number)
{
  if (number >= MAX_EVENTS)
  {
    return;
  }

  // move up
  int i = number + 1;
  while (events[i].beats > 0 && i < MAX_EVENTS)
  {
    events[i - 1].beats = events[i].beats;
    events[i - 1].type = events[i].type;
    events[i - 1].arg = events[i].arg;
    i++;
  }

  // clear last in que
  events[i - 1].beats = 0;
  events[i - 1].type = 0;
  events[i - 1].arg = 0;
}

void addEvent(uint16_t beats, uint8_t type, uint32_t arg)
{
  if (beats == 0)
  {
    return;
  }

  int i = 0;
  while (i < MAX_EVENTS && events[i].beats > 0)
  {
    i++;
  }

  if (i == MAX_EVENTS)
  {
    printf("Error to many events");
    return;
  }

  events[i].beats = beats;
  events[i].type = type;
  events[i].arg = arg;
}

void clearEvents()
{
  for (int i = 0; i < MAX_EVENTS; i++)
  {
    events[i].beats = 0;
    events[i].type = 0;
    events[i].arg = 0;
  }
}

void showGameEnded(int event)
{
  inGame = EVENT_GAME_ENDED;

  if (events[event].beats > 0)
  {
    return;
  }

  attrackModeOpen();
}

void fastBonus()
{
  if (inGame != IN_BONUS && inGame != IN_BUY_IN)
  {
    return;
  }
  printf("Fast bonus set\n");
  bonusSpeed = 5;
}

void ballLaunched()
{
  if (inGame != BEFORE_LAUNCH)
  {
    printf("Cannot launch ball now\n");
  }

  inGame = RUNNING_GAME;
  launchBlink = 0;
  launchSecond = time(NULL);
  printf("ballLaunched %ld\n", launchSecond);
  showScore(0);
}

void buyExtraBall()
{
  if (inGame != IN_BUY_IN)
  {
    return;
  }

  // remove bonus event
  // add buy in event, in buy in show ball ready, and load ball for player
}

void showBonus(int event)
{
  if (bonusSpeed == 5 && events[event].beats % 5 == 4)
  {
    events[event].beats -= 4;
  }

  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);
  char str[32];
  char str2[32];

  if (events[event].beats == 230 || events[event].beats == 215 || events[event].beats == 200)
  {
    if (games[shooter].totalInstumentsCollected > 0)
    {
      clearDmd();
      sprintf(str, "Instuments collected %d", games[shooter].totalInstumentsCollected);
      printCenterAtLine(str, 1, &color, &bgColor);
      if (events[event].beats == 215 || events[event].beats == 200)
      {
        sprintf(str, "Multiplier %d", games[shooter].multiplier);
        printCenterAtLine(str, 2, &color, &bgColor);
        sprintf(str, "500 * %d * %d", games[shooter].totalInstumentsCollected, games[shooter].multiplier);
        printCenterAtLine(str, 3, &color, &bgColor);
      }
      if (events[event].beats == 200)
      {
        printCenterAtLine("Total", 5, &color, &bgColor);
        makeScoreString(500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier, str);
        printCenterAtLine(str, 6, &color, &bgColor);
      }
      refreshDmd();
      return;
    }
    events[event].beats == 185;
  }

  if (events[event].beats == 185 || events[event].beats == 170 || events[event].beats == 155)
  {
    if (games[shooter].totalMovesCollected > 0)
    {
      clearDmd();
      sprintf(str, "Moves collected %d", games[shooter].totalMovesCollected);
      printAtLine(str, 1, &color, &bgColor);
      if (events[event].beats == 170 || events[event].beats == 155)
      {
        sprintf(str, "Multiplier %d", games[shooter].multiplier);
        printAtLine(str, 2, &color, &bgColor);
        sprintf(str, "250 * %d * %d", games[shooter].totalMovesCollected, games[shooter].multiplier);
        printAtLine(str, 3, &color, &bgColor);
      }
      if (events[event].beats == 155)
      {
        printAtLine("Total", 5, &color, &bgColor);
        makeScoreString(250 * games[shooter].totalMovesCollected * games[shooter].multiplier, str);
        printAtLine(str, 6, &color, &bgColor);
      }
      refreshDmd();
      return;
    }
    events[event].beats == 140;
  }

  if (events[event].beats == 140 || events[event].beats == 125)
  {
    if (games[shooter].totalInstumentsCollected > 0 || games[shooter].totalMovesCollected > 0)
    {
      clearDmd();
      makeScoreString(500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier, str);
      sprintf(str2, "Instruments %s", str);
      printAtLine(str2, 1, &color, &bgColor);
      makeScoreString(250 * games[shooter].totalMovesCollected * games[shooter].multiplier, str);
      sprintf(str2, "Moves %s", str);
      printAtLine(str2, 2, &color, &bgColor);
      if (events[event].beats == 125)
      {
        printAtLine("Total", 4, &color, &bgColor);
        makeScoreString(500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier +
                            250 * games[shooter].totalMovesCollected * games[shooter].multiplier,
                        str);
        printAtLine(str, 5, &color, &bgColor);
      }
      refreshDmd();
      return;
    }
    events[event].beats == 90;
  }

  // cancel fast speed from bonus, when going to buy in extra
  if (events[event].beats == 90)
  {
    bonusSpeed = 1;
  }

  if (games[shooter].ballNumber == config.numberOfBalls && config.buyInExtraBall == 1)
  {
    if (events[event].beats == 90 ||
        events[event].beats == 80 ||
        events[event].beats == 70 ||
        events[event].beats == 60 ||
        events[event].beats == 50 ||
        events[event].beats == 40 ||
        events[event].beats == 30 ||
        events[event].beats == 20 ||
        events[event].beats == 10)
    {
      if (bonusSpeed == 5)
      {
        clearDmd();
        printAtLine("Buy in cancelled", 1, &color, &bgColor);
        refreshDmd();
        return;
      }

      inGame = IN_BUY_IN;
      clearDmd();
      printAtLine("May buy an extra ball", 1, &color, &bgColor);
      sprintf(str, "%d", events[event].beats / 10);
      printAtLine(str, 3, &color, &bgColor);
      refreshDmd();
      return;
    }
  }
  else
  {
    if (events[event].beats == 90)
    {
      // skip buy in beats
      events[event].beats = 0;
    }
  }
  inGame = IN_BONUS;

  if (events[event].beats != 0)
  {
    return;
  }

  games[shooter].score += 500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier;
  games[shooter].score += 250 * games[shooter].totalMovesCollected * games[shooter].multiplier;

  if (shooter < numberOfPlayers - 1)
  {
    shooter++;
  }
  else
  {
    shooter = 0;
  }

  printf("ballNumber %d numberOfBalls %d\n", games[shooter].ballNumber, config.numberOfBalls);
  if (games[shooter].ballNumber < config.numberOfBalls)
  {
    loadBall();
    //showScore(0);
  }
  else
  {
    // when no shooter, no score highlighted
    shooter = -1;
    showScore(0);
    addEvent(50, EVENT_GAME_ENDED, 0);
  }
}

void gameBeat(uint8_t tick)
{
  if (tick % 2 != 0 || inGame == NO_GAME)
  {
    return;
  }

  int i = 0;
  while (events[i].beats > 0 && i < MAX_EVENTS)
  {
    events[i].beats--;

    switch (events[i].type)
    {
    case EVENT_SHOW_BONUS:
      showBonus(i);
      break;
    case EVENT_GAME_ENDED:
      showGameEnded(i);
      break;
    default:
      printf("Shoudl nevet happends22 %d\n", events[i].type);
      break;
    }

    if (events[i].beats == 0)
    {
      // if event has been removed, next item will be in position i
      removeEvent(i);
    }
    else
    {
      // only increment if event has not been removed
      i++;
    }
  }

  // if there is any screen event, then dont show scores
  if (i > 0)
  {
    return;
  }

  if (inGame == GAME_ENDED)
  {
    return;
  }

  launchBlink++;
  if (inGame == BEFORE_LAUNCH)
  {
    if (launchBlink < 5)
    {
      showScore(0);
    }
    else
    {
      showScore(1);
    }

    if (launchBlink > 10)
    {
      launchBlink = 0;
    }
    return;
  }

  showScore(0);
}