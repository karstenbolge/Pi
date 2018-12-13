#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/highScore.h"
#include "../hdr/display.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"

#define IN_MODE_YEAR 0
#define IN_MODE_MONTH 1
#define IN_MODE_DATE 3
#define IN_MODE_HOUR 4
#define IN_MODE_MINUTE 5
#define IN_MODE_DONE 6
#define ACTION_UP 0
#define ACTION_DOWN 1
uint8_t inSetTimeMode;

uint16_t year;
uint8_t month;
uint8_t date;
uint8_t hour;
uint8_t minute;
uint8_t lastAction;

void showTime()
{
  clearScreen();
  printf("Set date and time :\n");
  if (inSetTimeMode == IN_MODE_YEAR)
  {
    printf(" >%04d-%02d-%02d %02d:%02d\n", year, month, date, hour, minute);
  }
  if (inSetTimeMode == IN_MODE_MONTH)
  {
    printf("  %04d>%02d-%02d %02d:%02d\n", year, month, date, hour, minute);
  }
  if (inSetTimeMode == IN_MODE_DATE)
  {
    printf("  %04d-%02d>%02d %02d:%02d\n", year, month, date, hour, minute);
  }
  if (inSetTimeMode == IN_MODE_HOUR)
  {
    printf("  %04d-%02d-%02d>%02d:%02d\n", year, month, date, hour, minute);
  }
  if (inSetTimeMode == IN_MODE_MINUTE)
  {
    printf("  %04d-%02d-%02d %02d>%02d\n", year, month, date, hour, minute);
  }
}

void validateTime()
{
  if (minute == 255)
  {
    minute = 59;
    hour--;
  }

  if (minute > 59)
  {
    minute = 0;
    hour++;
  }

  if (hour == 255)
  {
    hour = 0;
  }

  if (hour > 23)
  {
    hour = 0;
  }

  if (month < 1)
  {
    month = 12;
  }

  if (month > 12)
  {
    month = 1;
  }

  if (year < 2000)
  {
    year = 2000;
  }

  if (year > 3000)
  {
    year = 3000;
  }

  if (date < 1)
  {
    date = 31;
  }

  //check date validity
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
  {
    if (date > 31)
    {
      date = lastAction == ACTION_UP ? 1 : 31;
    }
  }
  else if (month == 2)
  {
    if (year % 4 == 0)
    {
      if (date > 29)
      {
        date = lastAction == ACTION_UP ? 1 : 29;
      }
    }
    else
    {
      if (date > 28)
      {
        date = lastAction == ACTION_UP ? 1 : 28;
      }
    }
  }
  else
  {
    if (date > 30)
    {
      date = lastAction == ACTION_UP ? 1 : 30;
    }
  }
}

void setTimeOpen()
{
  time_t rawtime;
  struct tm *timeinfo;

  time(&rawtime);
  timeinfo = localtime(&rawtime);

  year = timeinfo->tm_year + 1900;
  month = timeinfo->tm_mon + 1;
  date = timeinfo->tm_mday;
  hour = timeinfo->tm_hour;
  minute = timeinfo->tm_min;
  inSetTimeMode = IN_MODE_YEAR;
  showTime();
}

void setTimeUp()
{
  if (inSetTimeMode == IN_MODE_DONE)
  {
    return menuExit();
  }

  lastAction = ACTION_UP;

  if (inSetTimeMode == IN_MODE_YEAR)
  {
    year++;
  }

  if (inSetTimeMode == IN_MODE_MONTH)
  {
    month++;
  }

  if (inSetTimeMode == IN_MODE_DATE)
  {
    date++;
  }

  if (inSetTimeMode == IN_MODE_HOUR)
  {
    hour++;
  }

  if (inSetTimeMode == IN_MODE_MINUTE)
  {
    minute++;
  }

  validateTime();
  showTime();
}

void setTimeDown()
{
  if (inSetTimeMode == IN_MODE_DONE)
  {
    return menuExit();
  }

  lastAction = ACTION_DOWN;

  if (inSetTimeMode == IN_MODE_YEAR)
  {
    year--;
  }

  if (inSetTimeMode == IN_MODE_MONTH)
  {
    month--;
  }

  if (inSetTimeMode == IN_MODE_DATE)
  {
    date--;
  }

  if (inSetTimeMode == IN_MODE_HOUR)
  {
    hour--;
  }

  if (inSetTimeMode == IN_MODE_MINUTE)
  {
    minute--;
  }

  validateTime();
  showTime();
}

void setTime()
{
  clearScreen();
  printf("Time set to :\n");
  printf("  %04d-%02d-%02d %02d:%02d\n", year, month, date, hour, minute);

  struct tm tmVar;
  time_t epochSec;

  tmVar.tm_year = year - 1900;
  tmVar.tm_mon = month - 1;
  tmVar.tm_mday = date;
  tmVar.tm_hour = hour;
  tmVar.tm_min = minute;
  tmVar.tm_sec = 0;

  epochSec = mktime(&tmVar);

  printf("epoch %ld\n", epochSec);

  FILE *fp;
  char cmd[120];

  // set the time
  sprintf(cmd, "sudo date --set=%ld", epochSec);
  fp = popen(cmd, "r");
  if (fp == NULL)
  {
    printf("Failed to set time\n");
    return;
  }

  // apply the set time to bios
  fp = popen("sudo hwclock --systohc", "r");
  if (fp == NULL)
  {
    printf("Failed to set time to bios\n");
    return;
  }
}

void setTimeEnter()
{
  if (inSetTimeMode == IN_MODE_DONE)
  {
    menuExit();
    return;
  }

  if (inSetTimeMode == IN_MODE_YEAR)
  {
    inSetTimeMode = IN_MODE_MONTH;
    showTime();
    return;
  }

  if (inSetTimeMode == IN_MODE_MONTH)
  {
    inSetTimeMode = IN_MODE_DATE;
    showTime();
    return;
  }

  if (inSetTimeMode == IN_MODE_DATE)
  {
    inSetTimeMode = IN_MODE_HOUR;
    showTime();
    return;
  }

  if (inSetTimeMode == IN_MODE_HOUR)
  {
    inSetTimeMode = IN_MODE_MINUTE;
    showTime();
    return;
  }

  inSetTimeMode = IN_MODE_DONE;

  setTime();
}