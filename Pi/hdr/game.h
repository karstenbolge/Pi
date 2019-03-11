#ifndef _GAME_H_
#define _GAME_H_

#include <stdint.h>

typedef struct gameItem
{
  uint8_t ballNumber;
  uint8_t extraBalls;
  uint32_t score;
  uint8_t multiplier;
  uint8_t instumentsCollected;
  uint8_t totalInstumentsCollected;
} gameItem_t;

void newGame(gameItem_t *pItem);
void newBall(gameItem_t *pItem);
void runBonus(gameItem_t *pItem);

#endif