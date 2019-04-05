#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "../hdr/setGameId.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/sound.h"
#include "../hdr/inputField.h"

uint8_t inMessageNumber;
#define MESSAGE_NUMBER_1 1
#define MESSAGE_NUMBER_2 2

char newMessage1[32];

void setCustomMessageOpen()
{
  inMessageNumber = MESSAGE_NUMBER_1;
  openInputField(config.customMessage1, 3, 31, INPUT_TYPE_UPPERCASE);
  setStaticStr(NULL, "Set custom message:", NULL, NULL, config.customMessage2, NULL, NULL, NULL);
}

void setCustomMessageExit()
{
  closeInputField();
}

void setCustomMessageEnter()
{
  if (!inputFieldDone())
  {
    return;
  }
  closeInputField();

  if (inMessageNumber == MESSAGE_NUMBER_1)
  {
    printf("inMessageNumber %d\n", inMessageNumber);
    inMessageNumber = MESSAGE_NUMBER_2;

    strcpy(newMessage1, getInputFieldValue());
    printf("newMessage1 %s\n", newMessage1);

    openInputField(config.customMessage2, 4, 31, INPUT_TYPE_UPPERCASE);
    setStaticStr(NULL, "Set custom message:", NULL, newMessage1, NULL, NULL, NULL, NULL);
    return;
  }

  if ((strcmp(newMessage1, config.customMessage1) == 0) &&
      (strcmp(getInputFieldValue(), config.customMessage2) == 0))
  {
    menuExit();
    return;
  }

  rgb_t color;
  setColorType(&color, COLOR_RED);

  clearDmd();
  char str[32];
  printCenterAtLine("New custom message ", 1, &color, NULL);
  sprintf(str, "%s", newMessage1);
  printCenterAtLine(str, 3, &color, NULL);
  sprintf(str, "%s", getInputFieldValue());
  printCenterAtLine(str, 4, &color, NULL);
  refreshDmd();

  strcpy(config.customMessage1, newMessage1);
  strcpy(config.customMessage2, getInputFieldValue());
  saveConfig();
}
