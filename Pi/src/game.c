#include "../hdr/game.h"

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

  onNextBall();
}
