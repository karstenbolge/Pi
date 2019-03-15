#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "../hdr/menu.h"
#include "../hdr/config.h"
#include "../hdr/log.h"
#include "../hdr/sound.h"
#include "../hdr/switchEdgeTest.h"
#include "../hdr/highScore.h"
#include "../hdr/setTime.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/displayTest.h"
#include "../hdr/avarageBallTime.h"

typedef struct itemFunctions
{
  void (*open)(void);
  void (*up)(void);
  void (*down)(void);
  void (*enter)(void);
  void (*exit)(void);
} itemFunctions_t;

typedef struct menuItem
{
  char name[32];
  uint8_t id;
  struct menuItem *parrent;
  struct menuItem *child;
  struct itemFunctions *event;
  struct menuItem *previous;
  struct menuItem *next;
} menuItem_t;

menuItem_t *menu = NULL;
menuItem_t *currentItem = NULL;

uint8_t inItem;
uint8_t menuOpen;

void initMenu()
{
  // 0
  menu = malloc(sizeof(menuItem_t));
  memset(menu, 0, sizeof(menuItem_t));
  strcpy(menu->name, "Bookkeepings");
  menu->id = MENU_BOOKKEEPINGS;
  menu->parrent = NULL;
  menu->child = malloc(sizeof(menuItem_t));
  menu->previous = NULL;
  menu->next = malloc(sizeof(menuItem_t));
  // 1
  memset(menu->child, 0, sizeof(menuItem_t));
  strcpy(menu->child->name, "Main audits");
  menu->child->id = MENU_MAIN_AUDITS;
  menu->child->parrent = menu;
  menu->child->child = malloc(sizeof(menuItem_t));
  menu->child->previous = NULL;
  menu->child->next = malloc(sizeof(menuItem_t));
  // 2
  memset(menu->child->child, 0, sizeof(menuItem_t));
  strcpy(menu->child->child->name, "Avarage ball time");
  menu->child->child->id = MENU_AWAREGE_BALL_TIME;
  menu->child->child->parrent = menu->child;
  menu->child->child->child = NULL;
  menu->child->child->event = malloc(sizeof(itemFunctions_t));
  menu->child->child->event->open = &avarageBallTimeOpen;
  menu->child->child->event->up = NULL;
  menu->child->child->event->down = NULL;
  menu->child->child->event->enter = NULL;
  menu->child->child->event->exit = &avarageBallTimeExit;
  menu->child->child->previous = NULL;
  menu->child->child->next = malloc(sizeof(menuItem_t));

  memset(menu->child->child->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->child->next->name, "Total plays");
  menu->child->child->next->id = MENU_TOTAL_PLAYS;
  menu->child->child->next->parrent = menu->child;
  menu->child->child->next->child = NULL;
  menu->child->child->next->previous = menu->child->child;
  menu->child->child->next->next = malloc(sizeof(menuItem_t));

  memset(menu->child->child->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->child->next->next->name, "Replay awards");
  menu->child->child->next->next->id = MENU_REPLAY_AWARDS;
  menu->child->child->next->next->parrent = menu->child;
  menu->child->child->next->next->child = NULL;
  menu->child->child->next->next->previous = menu->child->child->next;
  menu->child->child->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->child->child->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->child->next->next->next->name, "Extra balls");
  menu->child->child->next->next->next->id = MENU_EXTRA_BALLS;
  menu->child->child->next->next->next->parrent = menu->child;
  menu->child->child->next->next->next->child = NULL;
  menu->child->child->next->next->next->previous = menu->child->child->next->next;
  menu->child->child->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->child->child->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->child->next->next->next->next->name, "Precent extra balls");
  menu->child->child->next->next->next->next->id = MENU_PRECENT_EXTRA_BALLS;
  menu->child->child->next->next->next->next->parrent = menu->child;
  menu->child->child->next->next->next->next->child = NULL;
  menu->child->child->next->next->next->next->previous = menu->child->child->next->next->next;
  menu->child->child->next->next->next->next->next = menu->child->child;
  // loop
  menu->child->child->previous = menu->child->child->next->next->next->next;
  // 1
  memset(menu->child->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->next->name, "Standard audits");
  menu->child->next->id = MENU_STANDARD_AUDITS;
  menu->child->next->parrent = menu;
  menu->child->next->child = NULL;
  menu->child->next->previous = menu->child;
  menu->child->next->next = malloc(sizeof(menuItem_t));

  memset(menu->child->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->next->next->name, "Feature audits");
  menu->child->next->next->id = MENU_FEATURE_AUDITS;
  menu->child->next->next->parrent = menu;
  menu->child->next->next->child = NULL;
  menu->child->next->next->previous = menu->child->next;
  menu->child->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->child->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->next->next->next->name, "Histograms");
  menu->child->next->next->next->id = MENU_HISTOGRAMS;
  menu->child->next->next->next->parrent = menu;
  menu->child->next->next->next->child = NULL;
  menu->child->next->next->next->previous = menu->child->next->next;
  menu->child->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->child->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->child->next->next->next->next->name, "Time-stampt");
  menu->child->next->next->next->next->id = MENU_TIME_STAMP;
  menu->child->next->next->next->next->parrent = menu;
  menu->child->next->next->next->next->child = NULL;
  menu->child->next->next->next->next->previous = menu->child->next->next->next;
  menu->child->next->next->next->next->next = menu->child;
  // loop
  menu->child->previous = menu->child->next->next->next->next;
  // 0
  memset(menu->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->name, "Test menu");
  menu->next->id = MENU_TEST_MENU;
  menu->next->parrent = NULL;
  menu->next->child = malloc(sizeof(menuItem_t));
  menu->next->previous = menu;
  menu->next->next = malloc(sizeof(menuItem_t));
  // 1
  memset(menu->next->child, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->name, "Switch edge");
  menu->next->child->id = MENU_SWITCH_EDGE;
  menu->next->child->parrent = menu->next;
  menu->next->child->child = NULL;
  menu->next->child->event = malloc(sizeof(itemFunctions_t));
  menu->next->child->event->open = &switchEdgeTestOpen;
  menu->next->child->event->up = &switchEdgeTestUp;
  menu->next->child->event->down = &switchEdgeTestDown;
  menu->next->child->event->enter = &switchEdgeTestEnter;
  menu->next->child->event->exit = &switchEdgeTestExit;
  menu->next->child->previous = NULL;
  menu->next->child->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->name, "Switch levels");
  menu->next->child->next->id = MENU_SWITCH_LEVELS;
  menu->next->child->next->parrent = menu->next;
  menu->next->child->next->child = NULL;
  menu->next->child->next->previous = menu->next->child;
  menu->next->child->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->name, "Singles switch test");
  menu->next->child->next->next->id = MENU_SINGLE_SWITCH_TEST;
  menu->next->child->next->next->parrent = menu->next;
  menu->next->child->next->next->child = NULL;
  menu->next->child->next->next->event = malloc(sizeof(itemFunctions_t));
  menu->next->child->next->next->event->open = &switchEdgeTestOpenSingle;
  menu->next->child->next->next->event->up = &switchEdgeTestUp;
  menu->next->child->next->next->event->down = &switchEdgeTestDown;
  menu->next->child->next->next->event->enter = &switchEdgeTestEnter;
  menu->next->child->next->next->event->exit = &switchEdgeTestExit;
  menu->next->child->next->next->previous = menu->next->child->next;
  menu->next->child->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->name, "Solenoid test");
  menu->next->child->next->next->next->id = MENU_SOLENOID_TEST;
  menu->next->child->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->child = NULL;
  menu->next->child->next->next->next->previous = menu->next->child->next->next;
  menu->next->child->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->next->name, "Flasher test");
  menu->next->child->next->next->next->next->id = MENU_FLASHER_TEST;
  menu->next->child->next->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->next->child = NULL;
  menu->next->child->next->next->next->next->previous = menu->next->child->next->next->next;
  menu->next->child->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->next->next->name, "G.I. Test");
  menu->next->child->next->next->next->next->next->id = MENU_G_I_TEST;
  menu->next->child->next->next->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->next->next->child = NULL;
  menu->next->child->next->next->next->next->next->previous = menu->next->child->next->next->next->next;
  menu->next->child->next->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->next->next->next->name, "Sound and music test");
  menu->next->child->next->next->next->next->next->next->id = MENU_SOUND_AND_MUSIC_TEST;
  menu->next->child->next->next->next->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->next->next->next->child = NULL;
  menu->next->child->next->next->next->next->next->next->previous = menu->next->child->next->next->next->next->next;
  menu->next->child->next->next->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->next->next->next->next->name, "Single lamp test");
  menu->next->child->next->next->next->next->next->next->next->id = MENU_SINGLE_LAMP_TEST;
  menu->next->child->next->next->next->next->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->next->next->next->next->child = NULL;
  menu->next->child->next->next->next->next->next->next->next->previous = menu->next->child->next->next->next->next->next->next;
  menu->next->child->next->next->next->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->next->next->next->next->next->name, "All lamps test");
  menu->next->child->next->next->next->next->next->next->next->next->id = MENU_ALL_LAMPS_TEST;
  menu->next->child->next->next->next->next->next->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->next->next->next->next->next->child = NULL;
  menu->next->child->next->next->next->next->next->next->next->next->previous = menu->next->child->next->next->next->next->next->next->next;
  menu->next->child->next->next->next->next->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next->next->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->next->next->next->next->next->next->name, "Display test");
  menu->next->child->next->next->next->next->next->next->next->next->next->id = MENU_DISPLAY_TEST;
  menu->next->child->next->next->next->next->next->next->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->next->next->next->next->next->next->child = NULL;
  menu->next->child->next->next->next->next->next->next->next->next->next->event = malloc(sizeof(itemFunctions_t));
  menu->next->child->next->next->next->next->next->next->next->next->next->event->open = &displayTestOpen;
  menu->next->child->next->next->next->next->next->next->next->next->next->event->up = NULL;
  menu->next->child->next->next->next->next->next->next->next->next->next->event->down = NULL;
  menu->next->child->next->next->next->next->next->next->next->next->next->event->enter = &displayTestEnter;
  menu->next->child->next->next->next->next->next->next->next->next->next->event->exit = &displayTestExit;
  menu->next->child->next->next->next->next->next->next->next->next->next->previous = menu->next->child->next->next->next->next->next->next->next->next;
  menu->next->child->next->next->next->next->next->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->child->next->next->next->next->next->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->child->next->next->next->next->next->next->next->next->next->next->name, "Flipper coil test");
  menu->next->child->next->next->next->next->next->next->next->next->next->next->id = MENU_FLIPPER_COIL_TEST;
  menu->next->child->next->next->next->next->next->next->next->next->next->next->parrent = menu->next;
  menu->next->child->next->next->next->next->next->next->next->next->next->next->child = NULL;
  menu->next->child->next->next->next->next->next->next->next->next->next->next->previous = menu->next->child->next->next->next->next->next->next->next->next->next;
  menu->next->child->next->next->next->next->next->next->next->next->next->next->next = menu->next->child;
  // loop
  menu->next->child->previous = menu->next->child->next->next->next->next->next->next->next->next->next->next;
  // 0
  memset(menu->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->name, "Utilities");
  menu->next->next->id = MENU_UTILITIES;
  menu->next->next->parrent = NULL;
  menu->next->next->child = malloc(sizeof(menuItem_t));
  menu->next->next->previous = menu->next;
  menu->next->next->next = malloc(sizeof(menuItem_t));
  // 1
  memset(menu->next->next->child, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->child->name, "Clear audits");
  menu->next->next->child->id = MENU_CLEAR_AUTIDS;
  menu->next->next->child->parrent = menu->next->next;
  menu->next->next->child->child = NULL;
  menu->next->next->child->previous = NULL;
  menu->next->next->child->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->child->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->child->next->name, "Reset H.S.T.D.");
  menu->next->next->child->next->id = MENU_RESET_H_S_T_D;
  menu->next->next->child->next->parrent = menu->next->next;
  menu->next->next->child->next->child = NULL;
  menu->next->next->child->next->event = malloc(sizeof(itemFunctions_t));
  menu->next->next->child->next->event->open = &resetHighScoreOpen;
  menu->next->next->child->next->event->up = &resetHighScoreUp;
  menu->next->next->child->next->event->down = &resetHighScoreDown;
  menu->next->next->child->next->event->enter = &resetHighScoreEnter;
  menu->next->next->child->next->event->exit = NULL;
  menu->next->next->child->next->previous = menu->next->next->child;
  menu->next->next->child->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->child->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->child->next->next->name, "Set time and date");
  menu->next->next->child->next->next->id = MENU_SET_TIME_AND_DATE;
  menu->next->next->child->next->next->parrent = menu->next->next;
  menu->next->next->child->next->next->child = NULL;
  menu->next->next->child->next->next->event = malloc(sizeof(itemFunctions_t));
  menu->next->next->child->next->next->event->open = &setTimeOpen;
  menu->next->next->child->next->next->event->up = &setTimeUp;
  menu->next->next->child->next->next->event->down = &setTimeDown;
  menu->next->next->child->next->next->event->enter = &setTimeEnter;
  menu->next->next->child->next->next->event->exit = NULL;
  menu->next->next->child->next->next->previous = menu->next->next->child->next;
  menu->next->next->child->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->child->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->child->next->next->next->name, "Set Custom message");
  menu->next->next->child->next->next->next->id = MENU_SET_CUSTOM_MESSAGE;
  menu->next->next->child->next->next->next->parrent = menu->next->next;
  menu->next->next->child->next->next->next->child = NULL;
  menu->next->next->child->next->next->next->previous = menu->next->next->child->next->next;
  menu->next->next->child->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->child->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->child->next->next->next->next->name, "Set game id");
  menu->next->next->child->next->next->next->next->id = MENU_SET_GAME_ID;
  menu->next->next->child->next->next->next->next->parrent = menu->next->next;
  menu->next->next->child->next->next->next->next->child = NULL;
  menu->next->next->child->next->next->next->next->previous = menu->next->next->child->next->next->next;
  menu->next->next->child->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->child->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->child->next->next->next->next->next->name, "Factory adjustments");
  menu->next->next->child->next->next->next->next->next->id = MENU_FACTORY_ADJUSTMENTS;
  menu->next->next->child->next->next->next->next->next->parrent = menu->next->next;
  menu->next->next->child->next->next->next->next->next->child = NULL;
  menu->next->next->child->next->next->next->next->next->previous = menu->next->next->child->next->next->next->next;
  menu->next->next->child->next->next->next->next->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->child->next->next->next->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->child->next->next->next->next->next->next->name, "Factory reset");
  menu->next->next->child->next->next->next->next->next->next->id = MENU_FACTORY_RESET;
  menu->next->next->child->next->next->next->next->next->next->parrent = menu->next->next;
  menu->next->next->child->next->next->next->next->next->next->child = NULL;
  menu->next->next->child->next->next->next->next->next->next->previous = menu->next->next->child->next->next->next->next->next;
  menu->next->next->child->next->next->next->next->next->next->next = menu->next->next->child;
  // loop
  menu->next->next->child->previous = menu->next->next->child->next->next->next->next->next->next;
  // 0
  memset(menu->next->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->next->name, "Adjustments");
  menu->next->next->next->id = MENU_ADJUSTMENTS;
  menu->next->next->next->parrent = NULL;
  menu->next->next->next->child = malloc(sizeof(menuItem_t));
  menu->next->next->next->previous = menu->next->next;
  menu->next->next->next->next = NULL;
  // loop
  menu->previous = menu->next->next->next;
  // 1
  memset(menu->next->next->next->child, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->next->child->name, "Standard adjustements");
  menu->next->next->next->child->id = MENU_STANDARD_ADJUSTMENTS;
  menu->next->next->next->child->parrent = menu->next->next->next;
  menu->next->next->next->child->child = NULL;
  menu->next->next->next->child->previous = NULL;
  menu->next->next->next->child->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->next->child->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->next->child->next->name, "Feature adjustments");
  menu->next->next->next->child->next->id = MENU_FEATURE_ADJUSTMENTS;
  menu->next->next->next->child->next->parrent = menu->next->next->next;
  menu->next->next->next->child->next->child = NULL;
  menu->next->next->next->child->next->previous = menu->next->next->next->child;
  menu->next->next->next->child->next->next = malloc(sizeof(menuItem_t));

  memset(menu->next->next->next->child->next->next, 0, sizeof(menuItem_t));
  strcpy(menu->next->next->next->child->next->next->name, "H.S.T.D. adjustments");
  menu->next->next->next->child->next->next->id = MENU_H_S_T_D_ADJUSTMENTS;
  menu->next->next->next->child->next->next->parrent = menu->next->next->next;
  menu->next->next->next->child->next->next->child = NULL;
  menu->next->next->next->child->next->next->previous = menu->next->next->next->child->next;
  menu->next->next->next->child->next->next->next = menu->next->next->next->child;
  // loop
  menu->next->next->next->child->previous = menu->next->next->next->child->next->next;
  menu->next->next->next->next = menu;
}
/*Bookkeepings
		Main audits
			Avarage ball time
			Total plays
			Replay awards
			Extra balls
			Precent extra balls
		Standard audits
		Feature audits
		Histograms
		Time-stampt
Test menu
		Switch edge
		Switch levels
		Singles switch test
		Solenoid test
		Flasher test
		G.I. Test
		Sound and music test
		Single lamp test
		All lamps test
		Lamp and flasher test
		Display test
		Flipper coil test
Utitlities
		Clear audits
		Reset H.S.T.D.
		Set time and date
		Set Custom message
		Set game id
		Factory adjustments
		Factory reset
Adjustments
		Standard adjustements
		Feature adjustments
		H.S.T.D. adjustments*/

menuItem_t *moveToItem(menuItem_t *menu, uint8_t number)
{
  menuItem_t *newItem = menu;
  uint8_t current = 0;
  while (current < number && newItem->next)
  {
    current++;
    newItem = newItem->next;
  }

  return newItem;
}

void showMenu()
{
  clearScreen();
  clearDmd();
  rgb_t color, bgColor;
  setColorType(&color, COLOR_RED);
  setColor(&bgColor, 0, 255, 255);
  setColorType(&bgColor, COLOR_BLACK);

  menuItem_t *firstItem;
  if (currentItem->parrent)
  {
    firstItem = currentItem->parrent->child;
  }
  else
  {
    firstItem = menu;
  }
  menuItem_t *item = firstItem;

  uint8_t countItems = 0;
  uint8_t selectedItem = 0;
  do
  {
    if (item == currentItem)
    {
      selectedItem = countItems;
    }
    countItems++;
    item = item->next;
  } while (item != firstItem);

  uint8_t currentItemNumber = 0;
  item = firstItem;
  // if selected item is far from start then move star item
  if (selectedItem >= MENU_LINES_COUNT)
  {
    item = moveToItem(firstItem, selectedItem + 1 - MENU_LINES_COUNT);
  }

  do
  {
    if (item == currentItem)
    {
      printf("->");
      // printAtLineAndPosition("x ", currentItemNumber, 0, color, bgColor);
      // test inverted
      uint16_t length = printAtLineAndPosition(item->name, currentItemNumber, 0, &bgColor, &color);
      frameLine(currentItemNumber, length, &color);
    }
    else
    {
      printf("  ");
      printAtLineAndPosition(item->name, currentItemNumber, 0, &color, &bgColor);
    }
    printf("%s\n", item->name);

    item = item->next;
    currentItemNumber++;
  } while ((item != firstItem || countItems > MENU_LINES_COUNT) && currentItemNumber < MENU_LINES_COUNT && currentItemNumber < countItems);

  refreshDmd();
}

void menuUp()
{
  if (menuOpen)
  {
    if (inItem)
    {
      if (currentItem->event->up)
      {
        playSoundOk();
        currentItem->event->up();
        return;
      }

      playSoundWrong();
      return;
    }

    currentItem = currentItem->previous;
    playSoundOk();
    showMenu();
    return;
  }

  volumnUp();
}

void menuDown()
{
  if (menuOpen)
  {
    if (inItem)
    {
      if (currentItem->event->down)
      {
        playSoundOk();
        currentItem->event->down();
        return;
      }

      playSoundWrong();
      return;
    }

    currentItem = currentItem->next;
    playSoundOk();
    showMenu();
    return;
  }

  volumnDown();
}

void menuExit()
{
  if (menuOpen)
  {
    if (inItem != 0)
    {
      if (currentItem->event->exit)
      {
        currentItem->event->exit();
      }
      inItem = 0;
      playSoundBack();
      showMenu();
      return;
    }

    if (currentItem->parrent)
    {
      currentItem = currentItem->parrent;
      playSoundBack();
      showMenu();
      return;
    }

    menuOpen = 0;
    printf("Safe config\n");
    saveConfig();
    playSoundBack();
    clearScreen();
  }
}

void menuEnter()
{
  if (!menuOpen)
  {
    menuOpen = 1;
    if (!menu)
    {
      initMenu();
    }
    currentItem = menu;
    inItem = 0;
    playSoundEnter();
    showMenu();
    return;
  }

  if (inItem == 0)
  {
    if (currentItem->child)
    {
      currentItem = currentItem->child;
      playSoundOk();
      showMenu();
      return;
    }

    if (currentItem->event->open)
    {
      playSoundOk();
      currentItem->event->open();
      inItem = 1;
      return;
    }

    writeLog(SHOULD_NEVER_HAPPENS);
  }

  if (inItem)
  {
    if (currentItem->event->enter)
    {
      playSoundEnter();
      currentItem->event->enter();
    }
    else
    {
      playSoundWrong();
    }

    return;
  }

  writeLog(SHOULD_NEVER_HAPPENS);
}