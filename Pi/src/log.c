#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "../hdr/log.h"

void initLog() {
  pLog = fopen("log.txt", "a");
  if (pLog == NULL) {
	exit(1);
  }
}

void closeLog() {
  fclose(pLog);
}

void writeLog(uint8_t id) {
  fprintf(pLog, "%s\n", id);
}

void writeLogString(char *pString) {
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

  fprintf(pLog, "[%d-%02d-%02d %02d:%02d:%02d] %s\n", timeinfo->tm_year + 1900, timeinfo->tm_mon + 1, timeinfo->tm_mday, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec, pString);
}
