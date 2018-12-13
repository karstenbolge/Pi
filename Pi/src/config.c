#include <stdlib.h>
#include "../hdr/log.h"
#include "../hdr/config.h"

void initConfig()
{
  thisSystem = SYSTEM_NOT_DETECTED;

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
}

FILE *pConfig;

int stringStart(char *str, char *in)
{
  return memcmp(str, in, strlen(in)) == 0;
}

#define IN_HIGH_SCORE 1
#define VERSION "version:"
#define HIGHSCORE "highscore:"
#define GRANDCHAMP "  grandchamp:"
#define CURRENT "    current:"
#define SCORE "      score:"
#define NAME "      name:"
#define INITIAL "    initial:"
#define FIRST "  first:"
#define SECOND "  second:"
#define THRID "  thrid:"
#define FOURTH "  forth:"

void readConfig()
{
  initLog();
  writeLogString("start");
  initConfig();

  char readBuffer[CONFIG_BUFFER_SIZE];
  pConfig = fopen("config.yaml", "r");
  if (pConfig != NULL)
  {
    int inGroup = 0;
    int elementNumber = 0;
    int subElementNumber = 0;
    while (fgets(readBuffer, CONFIG_BUFFER_SIZE, pConfig) != NULL)
    {
      char *value = strchr(readBuffer, ':') + 2;

      if (stringStart(readBuffer, VERSION))
        config.version = atoi(value);
      if (stringStart(readBuffer, HIGHSCORE))
        inGroup = IN_HIGH_SCORE;
      if (inGroup == IN_HIGH_SCORE)
      {
        if (stringStart(readBuffer, GRANDCHAMP))
          elementNumber = 0;
        if (stringStart(readBuffer, FIRST))
          elementNumber = 1;
        if (stringStart(readBuffer, SECOND))
          elementNumber = 2;
        if (stringStart(readBuffer, THRID))
          elementNumber = 3;
        if (stringStart(readBuffer, FOURTH))
          elementNumber = 4;

        if (stringStart(readBuffer, CURRENT))
          subElementNumber = 0;
        if (stringStart(readBuffer, INITIAL))
          subElementNumber = 1;

        if (stringStart(readBuffer, SCORE) && atoi(value) != 0)
        {
          if (subElementNumber == 0)
            config.highScore[elementNumber].current.score = atoi(value);
          if (subElementNumber == 1)
            config.highScore[elementNumber].initial.score = atoi(value);
        }
        if (stringStart(readBuffer, NAME))
        {
          if (subElementNumber == 0)
            memcpy(config.highScore[elementNumber].current.name, value, 3);
          if (subElementNumber == 1)
            memcpy(config.highScore[elementNumber].initial.name, value, 3);
        }
      }
    }
    fclose(pConfig);
  }
}

void resetHighScore()
{
}

void saveConfig()
{
  pConfig = fopen("config.yaml", "w");

  if (pConfig == NULL)
  {
    writeLog(SHOULD_NEVER_HAPPENS);
    exit(1);
  }

  fprintf(pConfig, "%s %d\n", VERSION, config.version);
  fprintf(pConfig, "%s\n", HIGHSCORE);
  fprintf(pConfig, "%s\n", GRANDCHAMP);
  fprintf(pConfig, "%s\n", CURRENT);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[0].current.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[0].current.name);
  fprintf(pConfig, "%s\n", INITIAL);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[0].initial.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[0].initial.name);
  fprintf(pConfig, "%s\n", FIRST);
  fprintf(pConfig, "%s\n", CURRENT);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[1].current.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[1].current.name);
  fprintf(pConfig, "%s\n", INITIAL);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[1].initial.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[1].initial.name);
  fprintf(pConfig, "%s\n", SECOND);
  fprintf(pConfig, "%s\n", CURRENT);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[2].current.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[2].current.name);
  fprintf(pConfig, "%s\n", INITIAL);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[2].initial.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[2].initial.name);
  fprintf(pConfig, "%s\n", THRID);
  fprintf(pConfig, "%s\n", CURRENT);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[3].current.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[3].current.name);
  fprintf(pConfig, "%s\n", INITIAL);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[3].initial.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[3].initial.name);
  fprintf(pConfig, "%s\n", FOURTH);
  fprintf(pConfig, "%s\n", CURRENT);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[4].current.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[4].current.name);
  fprintf(pConfig, "%s\n", INITIAL);
  fprintf(pConfig, "%s %d\n", SCORE, config.highScore[4].initial.score);
  fprintf(pConfig, "%s %s\n", NAME, config.highScore[4].initial.name);
}

uint8_t getSystem()
{
  if (thisSystem == SYSTEM_NOT_DETECTED)
  {
    FILE *fp;
    char path[1035];

    /* Open the command for reading. */
    fp = popen("lsb_release -a | grep Distributor", "r");
    if (fp == NULL)
    {
      writeLogString("Failed to run command, lsb_release -a\n");
      return SYSTEM_NOT_DETECTED;
    }

    while (fgets(path, sizeof(path) - 1, fp) != NULL)
    {
      char *name = strstr(path, "Distributor ID:");
      if (name)
      {
        // move past key:
        name += 16;
        if (strlen(name) > 6 && memcmp(name, "Ubuntu", 6) == 0)
        {
          thisSystem = SYSTEM_UBUNTU;
        }
        if (strcmp(name, "Ubuntu") != 0)
        {
          thisSystem = SYSTEM_RASPBERRY;
        }
      }
    }

    /* close */
    pclose(fp);
  }

  return thisSystem;
}