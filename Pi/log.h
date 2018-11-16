#include <stdio.h>

#define SHOULD_NEVER_HAPPENS 1

FILE *pLog;

void initLog();
void closeLog();
void writeLog(uint8_t id);
void writeLogString(char *pString);