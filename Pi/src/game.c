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

  newBall(pItem);
}

void newBall(gameItem_t *pItem)
{
  pItem->multiplier = 2;
  pItem->bonuesBeat = 0;
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
  printf("ballEnded\n");

  bonusSpeed = 1;
  addEvent(181, EVENT_SHOW_BONUS, 0);
}

void startButton()
{
  printf("her %d\n", inGame);
  if (inGame == NO_GAME)
  {
    inGame = BEFORE_LAUNCH;
    numberOfPlayers = 1;
    shooter = 0;
    newGame(&games[0]);
    loadBall();
    showScore();
    // TODO remove test stat
    inGame = RUNNING_GAME;
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
    addEvent(1, EVENT_SHOW_SCORE, 0);
    return;
  }

  // Allow restart game
  if (config.allowRestart)
  {
    inGame = NO_GAME;
    startButton();
  }
}

void loadBall()
{
  games[shooter].ballNumber++;
}

void showScore()
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
      pos += printBallAt(dmd, pos, 13 + 24 * i, color, bgColor);
    }
    pos = 0;
    for (int j = 1; j < games[i].extraBalls; j++)
    {
      pos += printBallAt(dmd, pos, 4 + 24 * i, colorBlue, bgColor);
    }
    if (i == shooter)
    {
      printScore(games[i].score, i, 2);
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
  bonusSpeed = 5;
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

  if (events[event].beats == 180 || events[event].beats == 165 || events[event].beats == 150)
  {
    if (games[shooter].totalInstumentsCollected > 0)
    {
      clearDmd();
      sprintf(str, "Instuments collected %d", games[shooter].totalInstumentsCollected);
      printAtLine(str, 1, color, bgColor);
      if (events[event].beats == 165 || events[event].beats == 150)
      {
        sprintf(str, "Multiplier %d", games[shooter].multiplier);
        printAtLine(str, 2, color, bgColor);
        sprintf(str, "500 * %d * %d", games[shooter].totalInstumentsCollected, games[shooter].multiplier);
        printAtLine(str, 3, color, bgColor);
      }
      if (events[event].beats == 150)
      {
        printAtLine("Total", 5, color, bgColor);
        makeScoreString(500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier, str);
        printAtLine(str, 6, color, bgColor);
      }
      refreshDmd();
      return;
    }
    events[event].beats == 145;
  }

  if (events[event].beats == 145 || events[event].beats == 130 || events[event].beats == 115)
  {
    if (games[shooter].totalMovesCollected > 0)
    {
      clearDmd();
      sprintf(str, "Moves collected %d", games[shooter].totalMovesCollected);
      printAtLine(str, 1, color, bgColor);
      if (events[event].beats == 130 || events[event].beats == 115)
      {
        sprintf(str, "Multiplier %d", games[shooter].multiplier);
        printAtLine(str, 2, color, bgColor);
        sprintf(str, "250 * %d * %d", games[shooter].totalMovesCollected, games[shooter].multiplier);
        printAtLine(str, 3, color, bgColor);
      }
      if (events[event].beats == 115)
      {
        printAtLine("Total", 5, color, bgColor);
        makeScoreString(250 * games[shooter].totalMovesCollected * games[shooter].multiplier, str);
        printAtLine(str, 6, color, bgColor);
      }
      refreshDmd();
      return;
    }
    events[event].beats == 100;
  }

  if (events[event].beats == 100 || events[event].beats == 75)
  {
    if (games[shooter].totalInstumentsCollected > 0 || games[shooter].totalMovesCollected > 0)
    {
      clearDmd();
      makeScoreString(500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier, str);
      sprintf(str2, "Instruments %s", str);
      printAtLine(str2, 1, color, bgColor);
      makeScoreString(250 * games[shooter].totalMovesCollected * games[shooter].multiplier, str);
      sprintf(str2, "Moves %s", str);
      printAtLine(str2, 2, color, bgColor);
      if (events[event].beats == 75)
      {
        printAtLine("Total", 4, color, bgColor);
        makeScoreString(500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier +
                            250 * games[shooter].totalMovesCollected * games[shooter].multiplier,
                        str);
        printAtLine(str, 5, color, bgColor);
      }
      refreshDmd();
      return;
    }
    events[event].beats == 0;
  }

  if (events[event].beats != 0)
  {
    return;
  }

  games[shooter].score += 500 * games[shooter].totalInstumentsCollected * games[shooter].multiplier;
  games[shooter].score += 250 * games[shooter].totalMovesCollected * games[shooter].multiplier;

  // check if buy in
  /*if (games[shooter].ballNumber == config.numberOfBalls)
  {
    if (config.buyInExtraBall == 1)
    {
      addEvent(451, EVENT_BUY_IN_EXTRA, 0);
      return;
    }
  }*/

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
    showScore();
  }
  else
  {
    // when no shooter, no score highlighted
    shooter = -1;
    showScore();
    addEvent(50, EVENT_GAME_ENDED, 0);
  }
}

void gameBeat(uint8_t tick)
{
  if (tick % 2 != 0)
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
    case EVENT_SHOW_SCORE:
      showScore();
      break;
    case EVENT_LOAD_BALL:
      loadBall();
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
}