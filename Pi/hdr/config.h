#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <stdint.h>
#include <string.h>

#define CONFIG_BUFFER_SIZE 120

#define SYSTEM_NOT_DETECTED 0
#define SYSTEM_UBUNTU 1
#define SYSTEM_RASPBERRY 2

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
} config_t;

config_t config;

void readConfig();
void saveConfig();
void resetHighScore();

uint8_t thisSystem;
uint8_t getSystem();

#endif