#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <stdint.h>
#include <string.h>

#define CONFIG_BUFFER_SIZE 120

#define ALLOW_RESTART_NEVER 0
#define ALLOW_RESTART_SLOW 1
#define ALLOW_RESTART_INSTANT 2

typedef struct scoreItem
{
  char name[4];
  uint32_t score;
} scoreItem_t;

typedef struct highScoreItem
{
  scoreItem_t current;
} highScoreItem_t;

typedef struct config
{
  uint8_t version;
  highScoreItem_t highScore[5];
  uint8_t volumn;
  uint8_t numberOfBalls;
  uint8_t tiltWarnings;
  uint8_t numberOfExtraBalls;
  uint8_t numberOfExtraBallsOffered;
  char decimalSeperator;
  uint8_t tournamentMode;
  uint8_t allowRestart;
  uint64_t totalGames;
  uint64_t totalBalls;
  uint64_t totalNumberOfExtraBalls;
  uint64_t totalBallSeconds;
  uint64_t lastGameStart;
  uint64_t lastFactoryReset;
  uint64_t lastHighscoreReset;
  uint64_t totalLeftFlip;
  uint64_t totalRightFlip;
  uint64_t totalTilts;
  uint64_t totalLeftDrains;
  uint64_t totalRightDrains;
  char gameId[32];
  char customMessage1[32];
  char customMessage2[32];
  uint64_t histogramScores[13];
  uint64_t histogramGameTimes[13];
} config_t;

config_t config;

void readConfig();
void saveConfig();
void initHighScores();

void addGameScore(uint64_t score);
void addGameGameTime(uint64_t gameSeconds);

#endif