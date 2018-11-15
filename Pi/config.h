#include <stdio.h>
#include <string.h>

#define CONFIG_BUFFER_SIZE 120

typedef struct scoreItem {
  char name[4];
  uint32_t score;
} scoreItem_t;

typedef struct highScoreItem {
  scoreItem_t current;
  scoreItem_t initial;
} highScoreItem_t;

typedef struct config {
  uint8_t version;
  highScoreItem_t highScore[5];
} config_t;

config_t config; 

void readConfig();
void saveConfig();
void resetHighScore();
