#include "../hdr/game.h"

void newGame(gameItem_t *pItem)
{
  pItem->ballNumber = 0;
  pItem->extraBalls = 0;
  pItem->score = 0;
  pItem->multiplier = 1;
  pItem->instumentsCollected = 0;
  pItem->totalInstumentsCollected = 0;
}

void newBall(gameItem_t *pItem)
{
  pItem->multiplier = 1;
}

void runBonus(gameItem_t *pItem)
{
  pItem->totalInstumentsCollected += pItem->instumentsCollected;
}
