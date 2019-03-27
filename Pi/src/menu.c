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
#include "../hdr/clearAudit.h"
#include "../hdr/setTime.h"
#include "../hdr/display.h"
#include "../hdr/window.h"
#include "../hdr/displayTest.h"
#include "../hdr/averageBallTime.h"
#include "../hdr/attrackMode.h"
#include "../hdr/totalPlays.h"
#include "../hdr/histogramScores.h"
#include "../hdr/histogramGameTimes.h"
#include "../hdr/numberOfBalls.h"
#include "../hdr/tiltWarnings.h"
#include "../hdr/numberOfExtraBalls.h"

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

itemFunctions_t *makeEvent(void (*open)(void), void (*up)(void), void (*down)(void), void (*enter)(void), void (*exitFunc)(void))
{
  itemFunctions_t *event = malloc(sizeof(itemFunctions_t));
  event->open = open;
  event->up = up;
  event->down = down;
  event->enter = enter;
  event->exit = exitFunc;

  return event;
}

menuItem_t *makeMenuItem(char *pName, menuItem_t *parrent)
{
  menuItem_t *item = malloc(sizeof(menuItem_t));

  memset(item, 0, sizeof(menuItem_t));
  strcpy(item->name, pName);
  item->parrent = parrent;
  item->child = NULL;

  return item;
}

void initMenu()
{
  // 1-level
  menuItem_t *bookKeepings = menu = makeMenuItem("Bookkeepings", NULL);

  // 2-level
  menuItem_t *mainAudits = bookKeepings->child = makeMenuItem("Main audits", bookKeepings);

  // 3-level
  menuItem_t *averageBallTime = mainAudits->child = makeMenuItem("Average ball time", mainAudits);
  averageBallTime->event = makeEvent(&averageBallTimeOpen, NULL, NULL, NULL, NULL);

  menuItem_t *totalPlays = averageBallTime->next = makeMenuItem("Total games", mainAudits);
  totalPlays->event = makeEvent(&totalPlaysOpen, NULL, NULL, NULL, NULL);
  totalPlays->previous = averageBallTime;

  menuItem_t *extraBalls = totalPlays->next = makeMenuItem("Extra balls", mainAudits);
  extraBalls->event = makeEvent(&extraBallsOpen, NULL, NULL, NULL, NULL);
  extraBalls->previous = totalPlays;

  menuItem_t *percentExtraBalls = extraBalls->next = makeMenuItem("Percent extra balls", mainAudits);
  percentExtraBalls->event = makeEvent(&percentExtraBalsOpen, NULL, NULL, NULL, NULL);
  percentExtraBalls->previous = extraBalls;
  // loop
  percentExtraBalls->next = averageBallTime;
  averageBallTime->previous = percentExtraBalls;

  // 2-level
  menuItem_t *standardAudits = mainAudits->next = makeMenuItem("Standard audits", bookKeepings);
  standardAudits->previous = mainAudits;

  // 3-level
  menuItem_t *leftDrains = standardAudits->child = makeMenuItem("Left drains", standardAudits);
  leftDrains->event = makeEvent(&leftDrainsOpen, NULL, NULL, NULL, NULL);

  menuItem_t *rightDrains = leftDrains->next = makeMenuItem("Right drains", standardAudits);
  rightDrains->event = makeEvent(&rightDrainsOpen, NULL, NULL, NULL, NULL);
  rightDrains->previous = leftDrains;

  menuItem_t *timePerGame = rightDrains->next = makeMenuItem("Time per game", standardAudits);
  timePerGame->event = makeEvent(&timePerGameOpen, NULL, NULL, NULL, NULL);
  timePerGame->previous = rightDrains;

  menuItem_t *playTime = timePerGame->next = makeMenuItem("Total play time", standardAudits);
  playTime->event = makeEvent(&PlayTimeOpen, NULL, NULL, NULL, NULL);
  playTime->previous = timePerGame;

  menuItem_t *ballsPlayed = playTime->next = makeMenuItem("Total balls played", standardAudits);
  ballsPlayed->event = makeEvent(&BallsPlayedOpen, NULL, NULL, NULL, NULL);
  ballsPlayed->previous = playTime;

  menuItem_t *tilts = ballsPlayed->next = makeMenuItem("Total tilts", standardAudits);
  tilts->event = makeEvent(&TiltsOpen, NULL, NULL, NULL, NULL);
  tilts->previous = ballsPlayed;

  menuItem_t *leftFlipper = tilts->next = makeMenuItem("Total left flipper", standardAudits);
  leftFlipper->event = makeEvent(&leftFlippersOpen, NULL, NULL, NULL, NULL);
  leftFlipper->previous = tilts;

  menuItem_t *rightFlipper = leftFlipper->next = makeMenuItem("Total right flipper", standardAudits);
  rightFlipper->event = makeEvent(&rigthFlippersOpen, NULL, NULL, NULL, NULL);
  rightFlipper->previous = leftFlipper;
  rightFlipper->next = leftDrains;
  leftDrains->previous = rightFlipper;

  // 2-level
  menuItem_t *featureAudits = standardAudits->next = makeMenuItem("Feature audits", bookKeepings);
  featureAudits->previous = standardAudits;

  menuItem_t *histograms = featureAudits->next = makeMenuItem("Histograms", bookKeepings);
  histograms->previous = featureAudits;

  // 3-level
  menuItem_t *histogramScore = histograms->child = makeMenuItem("Scores", histograms);
  histogramScore->event = makeEvent(&histogramScoreOpen, &histogramScoreUp, &histogramScoreDown, NULL, NULL);

  menuItem_t *histogramGameTime = histogramScore->next = makeMenuItem("game time", histograms);
  histogramGameTime->event = makeEvent(&histogramGameTimeOpen, &histogramGameTimeUp, &histogramGameTimeDown, NULL, NULL);
  histogramScore->previous = histogramGameTime;
  histogramGameTime->next = histogramScore;

  // 2-level
  menuItem_t *timestamp = histograms->next = makeMenuItem("Time-stamp", bookKeepings);
  timestamp->previous = histograms;

  // 3-level
  menuItem_t *currentTime = timestamp->child = makeMenuItem("Current time", timestamp);
  currentTime->event = makeEvent(&currentTimeOpen, NULL, NULL, NULL, NULL);

  menuItem_t *lastGameStart = currentTime->next = makeMenuItem("Last game start", timestamp);
  lastGameStart->event = makeEvent(&lastGameStartOpen, NULL, NULL, NULL, NULL);
  lastGameStart->previous = currentTime;

  menuItem_t *lastFactoryReset = lastGameStart->next = makeMenuItem("Last factory reset", timestamp);
  lastFactoryReset->event = makeEvent(&lastFactoryResetOpen, NULL, NULL, NULL, NULL);
  lastFactoryReset->previous = lastGameStart;

  menuItem_t *lastHighscorerReset = lastFactoryReset->next = makeMenuItem("Last highscore reset", timestamp);
  lastHighscorerReset->event = makeEvent(&lastHighscorerResetOpen, NULL, NULL, NULL, NULL);
  lastHighscorerReset->previous = lastFactoryReset;

  // loop
  currentTime->previous = lastHighscorerReset;
  lastHighscorerReset->next = currentTime;
  timestamp->next = mainAudits;
  mainAudits->previous = timestamp;

  // 1-level
  menuItem_t *testMenu = bookKeepings->next = makeMenuItem("Test menu", NULL);
  testMenu->previous = bookKeepings;

  // 2-level
  menuItem_t *switchEdge = testMenu->child = makeMenuItem("Switch edge", testMenu);
  switchEdge->event = makeEvent(&switchEdgeTestOpen, &switchEdgeTestUp, &switchEdgeTestDown, &switchEdgeTestEnter, &switchEdgeTestExit);

  menuItem_t *switchLevels = switchEdge->next = makeMenuItem("Switch levels", testMenu);
  switchLevels->previous = switchEdge;

  menuItem_t *singleSwitchTest = switchLevels->next = makeMenuItem("Single switch edge", testMenu);
  singleSwitchTest->event = makeEvent(&switchEdgeTestOpenSingle, &switchEdgeTestUp, &switchEdgeTestDown, &switchEdgeTestEnter, &switchEdgeTestExit);
  singleSwitchTest->previous = switchLevels;

  menuItem_t *solenoid = singleSwitchTest->next = makeMenuItem("Solenoid test", testMenu);
  solenoid->previous = singleSwitchTest;

  menuItem_t *flasherTest = solenoid->next = makeMenuItem("Flasher test", testMenu);
  flasherTest->previous = solenoid;

  menuItem_t *giTest = flasherTest->next = makeMenuItem("General illumination test", testMenu);
  giTest->previous = flasherTest;

  menuItem_t *soundAndMusic = giTest->next = makeMenuItem("Sound and music test", testMenu);
  soundAndMusic->previous = giTest;

  menuItem_t *singleLamp = soundAndMusic->next = makeMenuItem("Single lamp test", testMenu);
  singleLamp->previous = soundAndMusic;

  menuItem_t *allLamps = singleLamp->next = makeMenuItem("All lamps test", testMenu);
  allLamps->previous = singleLamp;

  menuItem_t *displayTest = allLamps->next = makeMenuItem("Display test", testMenu);
  displayTest->event = makeEvent(&displayTestOpen, NULL, NULL, &displayTestEnter, &displayTestExit);
  displayTest->previous = allLamps;

  menuItem_t *flipperCoilTest = displayTest->next = makeMenuItem("Flipper coil test", testMenu);
  flipperCoilTest->previous = allLamps;
  // loop
  flipperCoilTest->next = switchEdge;
  switchEdge->previous = flipperCoilTest;

  // 1-level
  menuItem_t *utilities = testMenu->next = makeMenuItem("Utilities", NULL);
  utilities->previous = testMenu;

  // 2-level
  menuItem_t *clearAudits = utilities->child = makeMenuItem("Clear audits", utilities);
  clearAudits->event = makeEvent(&clearAuditsOpen, &clearAuditsUp, &clearAuditsDown, &clearAuditsEnter, NULL);

  menuItem_t *resetHSTD = clearAudits->next = makeMenuItem("Reset highscores", utilities);
  resetHSTD->event = makeEvent(&resetHighScoreOpen, &resetHighScoreUp, &resetHighScoreDown, &resetHighScoreEnter, NULL);
  resetHSTD->previous = clearAudits;

  menuItem_t *setTimeAndDate = resetHSTD->next = makeMenuItem("Set time and date", utilities);
  setTimeAndDate->event = makeEvent(&setTimeOpen, &setTimeUp, &setTimeDown, &setTimeEnter, NULL);
  setTimeAndDate->previous = resetHSTD;

  menuItem_t *customMessage = setTimeAndDate->next = makeMenuItem("Set custom message", utilities);
  customMessage->previous = setTimeAndDate;

  menuItem_t *setGameId = customMessage->next = makeMenuItem("Set game id", utilities);
  setGameId->previous = customMessage;

  menuItem_t *factoryAdjustment = setGameId->next = makeMenuItem("Factory adjustments", utilities);
  factoryAdjustment->previous = setGameId;

  menuItem_t *factoryReset = factoryAdjustment->next = makeMenuItem("Factory reset", utilities);
  factoryReset->previous = factoryAdjustment;

  // loop
  factoryReset->next = clearAudits;
  clearAudits->previous = factoryReset;

  // 1-level
  menuItem_t *adjustments = utilities->next = makeMenuItem("Adjustments", NULL);
  adjustments->previous = utilities;

  // loop
  adjustments->next = bookKeepings;
  bookKeepings->previous = adjustments;

  // 2-level
  menuItem_t *standardAdjustments = adjustments->child = makeMenuItem("Standard adjustements", adjustments);

  // 3-level
  menuItem_t *ballsPerGame = standardAdjustments->child = makeMenuItem("Balls per game", standardAdjustments);
  ballsPerGame->event = makeEvent(&numberOfBallsOpen, &numberOfBallsUp, &numberOfBallsDown, &numberOfBallsEnter, NULL);

  menuItem_t *tiltWarnings = ballsPerGame->next = makeMenuItem("Tilt warnings", standardAudits);
  tiltWarnings->event = makeEvent(&tiltWarningsOpen, &tiltWarningsUp, &tiltWarningsDown, &tiltWarningsEnter, NULL);
  tiltWarnings->previous = ballsPerGame;

  menuItem_t *maximumExtraBalls = tiltWarnings->next = makeMenuItem("Maximum extra balls", standardAudits);
  maximumExtraBalls->event = makeEvent(&numberOfExtraBallsOpen, &numberOfExtraBallsUp, &numberOfExtraBallsDown, &numberOfExtraBallsEnter, NULL);
  maximumExtraBalls->previous = tiltWarnings;

  menuItem_t *maximumExtraBallsOffered = maximumExtraBalls->next = makeMenuItem("Maximum extra ball per ball in play", standardAudits);
  //maximumExtraBallsOffered->event = makeEvent(&rightDrainsOpen, NULL, NULL, NULL, NULL);
  maximumExtraBallsOffered->previous = maximumExtraBalls;

  menuItem_t *tournamentMode = maximumExtraBallsOffered->next = makeMenuItem("Tournament mode", standardAudits);
  //tournamentMode->event = makeEvent(&rightDrainsOpen, NULL, NULL, NULL, NULL);
  tournamentMode->previous = maximumExtraBallsOffered;

  menuItem_t *decimalSeperator = tournamentMode->next = makeMenuItem("Decimal separator", standardAudits);
  //decimalSeperator->event = makeEvent(&rightDrainsOpen, NULL, NULL, NULL, NULL);
  decimalSeperator->previous = tournamentMode;

  menuItem_t *gameRestart = tournamentMode->next = makeMenuItem("Game restart", standardAudits);
  //gameRestart->event = makeEvent(&rightDrainsOpen, NULL, NULL, NULL, NULL);
  gameRestart->previous = decimalSeperator;
  gameRestart->next = ballsPerGame;
  ballsPerGame->previous = gameRestart;

  // 2-level
  menuItem_t *featureAdjustments = standardAdjustments->next = makeMenuItem("Feature adjustments", adjustments);
  featureAdjustments->previous = standardAdjustments;

  // 2-level
  menuItem_t *highscoreAdjustments = featureAdjustments->next = makeMenuItem("Highscore adjustments", adjustments);
  highscoreAdjustments->previous = featureAdjustments;

  // loop
  highscoreAdjustments->next = standardAdjustments;
  standardAdjustments->previous = highscoreAdjustments;
}
/*Bookkeepings
		Main audits
			Average ball time
			Total plays
			Replay awards
			Extra balls
			Percent extra balls
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
  printf("Karsten 1 %s\n", currentItem->name);
  printf("Karsten 2 %s\n", currentItem->parrent ? currentItem->parrent->name : "N/A");
  printf("Karsten 3 %s\n", currentItem->parrent ? currentItem->parrent->child->name : "N/A");
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
    printf("Karsten %s\n", item->name);
    if (item == currentItem)
    {
      selectedItem = countItems;
    }
    countItems++;
    item = item->next;
  } while (item != firstItem);
  printf("Karsten 3\n");

  uint8_t currentItemNumber = 0;
  item = firstItem;
  // if selected item is far from start then move star item
  if (selectedItem >= MENU_LINES_COUNT)
  {
    item = moveToItem(firstItem, selectedItem + 1 - MENU_LINES_COUNT);
  }
  printf("Karsten 4\n");

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
    attrackModeOpen();
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
    printf("Karsten 0\n");

    playSoundEnter();
    showMenu();
    return;
  }

  if (inItem == 0)
  {
    if (currentItem->child)
    {
      printf("Current item %s child %s\n", currentItem->name, currentItem->child->name);
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