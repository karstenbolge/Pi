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
  uint8_t movesCollected;
  uint8_t totalMovesCollected;
  uint32_t bonuesBeat;
} gameItem_t;

typedef struct eventItem
{
  uint16_t beats;
  uint8_t type;
  uint32_t arg;
} eventItem_t;

#define NO_GAME 0
#define BEFORE_LAUNCH 1
#define RUNNING_GAME 2
#define IN_BONUS 3
#define IN_BUY_IN 4
#define GAME_ENDED 5

#define MAX_EVENTS 50
#define EVENT_SHOW_SCORE 1
#define EVENT_SHOW_BONUS 3
#define EVENT_GAME_ENDED 5
eventItem_t events[MAX_EVENTS];

gameItem_t games[4];
uint8_t numberOfPlayers;
uint8_t shooter;
uint8_t inGame;
uint8_t launchBlink;
uint64_t launchSecond;

uint8_t bonusSpeed;

void newGame(gameItem_t *pItem);
void newBall(gameItem_t *pItem);
void bonusBeat(gameItem_t *pItem, uint8_t tick, uint8_t cancel, void (*onNextBall)(void));

void onBumberA();
void fastBonus();
void startButton();
void showScore(uint8_t type);
void showBonus();
void showGameEnded();
void loadBall();
void ballEnded();
void ballLaunched();
void clearEvents();
void removeEvent(int number);
void addEvent(uint16_t beats, uint8_t type, uint32_t arg);
void gameBeat(uint8_t tick);
void buyExtraBall();

#endif