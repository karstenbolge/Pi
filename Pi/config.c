#include <stdlib.h>
#include "log.h"
#include "config.h"

void init() {
  config.version = 1;
  config.highScore[0].current.score = 50000;
  strcpy(config.highScore[0].current.name, "KUB");
  config.highScore[0].initial.score = 50000;
  strcpy(config.highScore[0].initial.name, "KUB");
  config.highScore[1].current.score = 40000;
  strcpy(config.highScore[1].current.name, "AAA");
  config.highScore[1].initial.score = 40000;
  strcpy(config.highScore[1].initial.name, "AAA");
  config.highScore[2].current.score = 35000;
  strcpy(config.highScore[2].current.name, "BBB");
  config.highScore[2].initial.score = 35000;
  strcpy(config.highScore[2].initial.name, "BBB");
  config.highScore[3].current.score = 30000;
  strcpy(config.highScore[3].current.name, "CCC");
  config.highScore[3].initial.score = 30000;
  strcpy(config.highScore[3].initial.name, "CCC");
  config.highScore[4].current.score = 25000;
  strcpy(config.highScore[4].current.name, "DDD");
  config.highScore[4].initial.score = 25000;
  strcpy(config.highScore[4].initial.name, "DDD");
  config.highScore[5].current.score = 20000;
  strcpy(config.highScore[5].current.name, "EEE");
  config.highScore[5].initial.score = 20000;
  strcpy(config.highScore[5].initial.name, "EEE");
}
FILE *pConfig;

void readConfig() {
  init();
  
  char readBuffer[CONFIG_BUFFER_SIZE];
  pConfig = fopen("config.yaml" , "r");
  if (pConfig != NULL) {
    while (fgets(readBuffer, CONFIG_BUFFER_SIZE, pConfig) != NULL)
    {
      printf("%s", readBuffer);
    }
    fclose(pConfig);
  }
}

void resetHighScore() {
}

void saveConfig() {
  pConfig = fopen("config.yaml" , "w");
  
  if (pConfig == NULL)
  {
    writeLog(SHOULD_NEVER_HAPPENS);
    exit(1);
  }
  
  fprintf(pConfig, "version: %d\n", config.version);
  fprintf(pConfig, "highscore:\n", config.version);
  fprintf(pConfig, "  grandchamp:\n", config.version);
  fprintf(pConfig, "    current:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[0].current.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[0].current.name);
  fprintf(pConfig, "    initial:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[0].initial.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[0].initial.name);
  fprintf(pConfig, "  first:\n", config.version);
  fprintf(pConfig, "    current:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[1].current.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[1].current.name);
  fprintf(pConfig, "    initial:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[1].initial.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[1].initial.name);
  fprintf(pConfig, "  second:\n", config.version);
  fprintf(pConfig, "    current:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[2].current.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[2].current.name);
  fprintf(pConfig, "    initial:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[2].initial.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[2].initial.name);
  fprintf(pConfig, "  thrid:\n", config.version);
  fprintf(pConfig, "    current:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[3].current.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[3].current.name);
  fprintf(pConfig, "    initial:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[3].initial.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[3].initial.name);
  fprintf(pConfig, "  forth:\n", config.version);
  fprintf(pConfig, "    current:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[4].current.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[4].current.name);
  fprintf(pConfig, "    initial:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[4].initial.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[4].initial.name);
  fprintf(pConfig, "  fifth:\n", config.version);
  fprintf(pConfig, "    current:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[5].current.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[5].current.name);
  fprintf(pConfig, "    initial:\n", config.version);
  fprintf(pConfig, "      score: %d\n", config.highScore[5].initial.score);
  fprintf(pConfig, "      name: %s\n", config.highScore[5].initial.name);
  fclose(pConfig);
}