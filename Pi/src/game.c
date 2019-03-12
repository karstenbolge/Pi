#include "../hdr/game.h"
#include "../hdr/window.h"
#include "../hdr/color.h"
#include "../hdr/config.h"
#include "../hdr/display.h"
#include "../hdr/data70.h"

void newGame(gameItem_t *pItem)
{
  pItem->ballNumber = 0;
  pItem->extraBalls = 0;
  pItem->score = 0;
  pItem->instumentsCollected = 0;
  pItem->totalInstumentsCollected = 0;

  newBall(pItem);
}

void newBall(gameItem_t *pItem)
{
  pItem->multiplier = 1;
  pItem->bonuesBeat = 0;
  pItem->bonusSpeed = 1;
}

void bonusBeat(gameItem_t *pItem, uint8_t tick, uint8_t cancel, void (*onNextBall)(void))
{
  if (pItem->bonuesBeat == 0)
  {
    return;
  }

  if (cancel == 1)
  {
    pItem->bonusSpeed = 4;
  }
  pItem->bonuesBeat += pItem->bonusSpeed;

  pItem->totalInstumentsCollected += pItem->instumentsCollected;
}

void ballEnded()
{
  printf("ballEnded\n");
  if (shooter < numberOfPlayers)
  {
    shooter++;
  }
  else
  {
    shooter = 0;
  }

  if (games[shooter].ballNumber < config.numberOfBalls)
  {
    games[shooter].ballNumber++;
    loadBall();
  }
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
    showScore();
    loadBall();
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
    showScore();
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