#ifndef _GAME_H_
#define _GAME_H_

#include <stdint.h>

typedef struct gameItem
{
  uint8_t ballNumber;
  uint8_t extraBalls;
  uint8_t bonusSpeed;
  uint32_t score;
  uint8_t multiplier;
  uint8_t instumentsCollected;
  uint8_t totalInstumentsCollected;
  uint8_t movesCollected;
  uint8_t totalMovesCollected;
  uint32_t bonuesBeat;
} gameItem_t;

#define NO_GAME 0
#define IN_GAME 1

gameItem_t games[4];
uint8_t numberOfPlayers;
uint8_t shooter;
uint8_t inGame;

void newGame(gameItem_t *pItem);
void newBall(gameItem_t *pItem);
void bonusBeat(gameItem_t *pItem, uint8_t tick, uint8_t cancel, void (*onNextBall)(void));

void startButton();
void showScore();
void loadBall();

#endif