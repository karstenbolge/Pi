#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <stdint.h>
#include <string.h>

#define CONFIG_BUFFER_SIZE 120

typedef struct scoreItem
{
  char name[4];
  uint32_t score;
} scoreItem_t;

typedef struct highScoreItem
{
  scoreItem_t current;
  scoreItem_t initial;
} highScoreItem_t;

typedef struct config
{
  uint8_t version;
  highScoreItem_t highScore[5];
  uint8_t volumn;
  uint8_t numberOfBalls;
  char decimalSeperator;
  uint8_t buyInExtraBall;
  uint8_t allowRestart;
} config_t;

config_t config;

void readConfig();
void saveConfig();
void resetHighScore();

#endif