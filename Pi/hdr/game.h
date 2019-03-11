#ifndef _GAME_H_
#define _GAME_H_

#include <stdint.h>

typedef struct gameItem
{
  uint8_t ballNumber;
  uint8_t extraBalls;
  uint32_t score;
} gameItem_t;

void newGame(gameItem_t *pItem);

#endif