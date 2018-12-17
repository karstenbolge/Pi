#include <stdlib.h>
#include "../hdr/pi.h"
#include "../hdr/color.h"
#include "../hdr/display.h"
#include "../hdr/wifi.h"

uint16_t oldInputRegister[8];
uint16_t newInputRegister;

void displayRow(uint16_t row)
{
  uint16_t count = 32768;

  while (count)
  {
    if (count & row)
    {
      printf("X");
    }
    else
    {
      printf(".");
    }
    count = count >> 1;
  }
  printf("\n");
}

void displayColumn(uint8_t column)
{
  uint8_t count = 1;
  int n = 0;

  while (count)
  {
    if (count & column)
    {
      printf("%d", n);
      return;
    }
    n++;
    count = count << 1;
  }
}

int main(void)
{
  readConfig();

  printf("start\n");

  long bitVal;
  for (int i = 0; i < 16; i++)
  {
    if (i == 1 || i == 4 || i == 7 || i == 10 || i == 11)
    {
      bitVal = 1;
    }
    else
    {
      bitVal = 0;
    }

    newInputRegister = newInputRegister << 1;
    newInputRegister += bitVal;
    //    printf("%ld ", bitVal);
  }
  //  printf("\n%d \n", newInputRegister);
  //  displayRow(newInputRegister);
  oldInputRegister[0] = newInputRegister;

  for (int i = 0; i < 16; i++)
  {
    if (i == 1 || i == 4 || i == 7 || i == 10 || i == 11 || i == 15)
    {
      bitVal = 1;
    }
    else
    {
      bitVal = 0;
    }

    newInputRegister = newInputRegister << 1;
    newInputRegister += bitVal;
    //    printf("%ld ", bitVal);
  }

  //  printf("\n%d \n", newInputRegister);
  //  printf("\n%d \n", oldInputRegister[0]);
  //  printf("\nequal %d\n", oldInputRegister[0] == newInputRegister);
  //  displayRow(newInputRegister);

  int leds = 1;
  for (int i = 0; i < 8; i++)
  {
    //    displayColumn(leds);
    //    printf("\n");
    leds = leds << 1;
  }

  //scanForWifi();
  wifiItem_t *wifiList = getWifiList();
  while (wifiList)
  {
    printf("Wifi : %s\n", wifiList->name);
    wifiList = wifiList->next;
  }

  //printf("System %d\n", getSystem());

  //testDisplay();

  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColor(&bgColor, 0, 255, 255);
  setColorType(&bgColor, COLOR_BLACK);

  printAtLine("0123456789", 0, color, bgColor);
  printAtLine("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 1, color, bgColor);
  printAtLine("abcdefghijklmnopqrstuvwxyz", 2, color, bgColor);
  printAtLine("!\"#\%&/()=?@£$€{[]}|", 3, color, bgColor);
  printAtLine("<>\\,.-;:_'*", 4, color, bgColor);
  showDmdTest();
  //showDmd();

  while (1)
  {
    //testDisplay();
    switch (getchar())
    {
    case 'a':
      menuExit();
      break;
    case 's':
      menuDown();
      break;
    case 'd':
      menuUp();
      break;
    case 'f':
      menuEnter();
      break;
    case 'x':
      saveConfig();
      exit(0);
      break;
    }
  }
};