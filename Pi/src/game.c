#include "../hdr/game.h"
#include "../hdr/window.h"
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/data70.h"

void newGame(gameItem_t *pItem)
{
  pItem->ballNumber = 0;
  pItem->extraBalls = 0;
  pItem->score = 3023087;
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

  onNextBall();
}

void startButton()
{
  printf("her %d\n", inGame);
  if (inGame == NO_GAME)
  {
    inGame = IN_GAME;
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
  }
}

void loadBall()
{
  games[shooter].ballNumber++;
}

void showScore()
{
  clearDmd();
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColorType(&bgColor, COLOR_BLACK);

  for (int i = 0; i < numberOfPlayers; i++)
  {
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